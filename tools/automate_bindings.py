#!/usr/bin/python

""" Generate bindings of given Wt's class and all its dependencies.

Dependencies are all other classes from interface of methods
of given class (types of arguments and return values).
"""

import argparse
import logging
import os
import re

import pygccxml

TYPE_FROM_LUA_FUNCS = {
    'int' : 'lua_tointeger',
    'bool' : 'lua_toboolean',
}

TYPE_TO_LUA_FUNCS = {
    'int' : 'lua_pushinteger',
    'bool' : 'lua_pushboolean',
}

def parse(filename):
    # Find out the c++ parser.
    generator_path, generator_name = pygccxml.utils.find_xml_generator()
    # Configure the xml generator.
    xml_generator_config = pygccxml.parser.xml_generator_configuration_t(
        xml_generator_path = generator_path,
        xml_generator = generator_name,
    )
    # Parse the c++ file.
    decls = pygccxml.parser.parse([filename], xml_generator_config)
    # Get access to the global namespace.
    global_namespace = pygccxml.declarations.get_global_namespace(decls)
    return global_namespace

def getMembers(class_name, global_namespace):
    Wt = global_namespace.namespace('Wt')
    klass = [c for c in Wt.classes() if c.name == class_name][0]
    methods = [
        m for m in klass.member_functions() if m.access_type == 'public'
    ]
    bases = [base.related_class.name for base in klass.bases]
    constructors = [
        c for c in klass.constructors() if c.access_type == 'public'
    ]
    return methods, bases, constructors

def getModuleName(filename):
    return os.path.basename(filename)

INCLUDES_TEMPLATE = r'''
#include "boost-xtime.hpp"
#include <Wt/%s>

#include "globals.hpp"

'''

def generateIncludes(module_name):
    return INCLUDES_TEMPLATE.lstrip() % module_name

def storeArgc(is_constructor):
    if is_constructor:
        return "int argc = lua_gettop(L);\n"
    else:
        # Do not count self as an argument for argc.
        return "int argc = lua_gettop(L) - 1;\n"

def ifArgc(argc):
    # otstup poehal
    frame = r'''    if (argc == %d) {
    '''
    return frame % argc

def elseArgc():
    return r'''
    } else '''

def elseFail(module_name, method_name):
    return r'''{
        return luaL_error(L, "Wrong arguments number for %s.%s: %%d", argc);
    }''' % (module_name, method_name)

def getSelf(module_name):
    frame = r'''
    %s* self = luawt_checkFromLua<%s>(L, 1);
    '''
    return frame % (module_name, module_name)

def getBuiltinTypeArgument(options):
    frame = r'''
    %(argument_type)s %(argument_name)s = %(func)s(L, %(index)s);
    '''
    return frame.lstrip() % options

def getComplexArgument(options):
    frame = r'''
    %(argument_type)s* %(argument_name)s =
        luawt_checkFromLua<%(argument_type)s>(L, %(index)s);
    '''
    return frame.lstrip() % options

def callWtConstructor(return_type, args, module_name):
    call_s = 'new %s(' % module_name
    args_s = ', '.join(arg.name for arg in args)
    constructor_s = call_s + args_s + ');'
    return '%s result = %s' % (return_type, constructor_s)

def callWtFunction(return_type, args, method_name):
    call_s = 'self->%s(' % method_name
    args_s = ', '.join(arg.name for arg in args)
    func_s = call_s + args_s + ');'
    if return_type == 'void':
        return func_s
    else:
        return '%s result = %s' % (return_type, func_s)

RETURN_CALLS_TEMPLATE = r'''
    %s(L, result);
    return 1;
'''

def returnValue(return_type):
    void_frame = r'''
    return 0;
    '''
    if return_type == 'void':
        return void_frame
    else:
        builtin_type = getBuiltinType(return_type)
        if builtin_type:
            func_name = TYPE_TO_LUA_FUNCS[builtin_type]
        else:
            func_name = 'luawt_toLua'
        return RETURN_CALLS_TEMPLATE % func_name

def getBuiltinType(full_type):
    for builtin_type in TYPE_FROM_LUA_FUNCS:
        if full_type.find(builtin_type) is not -1:
            return builtin_type
    return ''

LUACFUNCTION_TEMPLATE = r'''
int luawt_%(module)s_%(method)s(lua_State* L) {
    %(body)s
}

'''

def implementLuaCFunction(
    is_constructor,
    module_name,
    method_name,
    args_overloads,
    return_type,
):
    argc2args = {len(args): args for args in args_overloads}
    if len(argc2args) != len(args_overloads):
        logging.warn(
            "TODO some overloads of %s.%s have the same number of " +
            "arguments and can't be distinguished.",
            module_name,
            method_name,
        )
    body = []
    body.append(storeArgc(is_constructor))
    # In Lua indices start with 1.
    arg_index_offset = 1
    if not is_constructor:
        # The first one is object itself, so we have to increse offset.
        arg_index_offset += 1
        body.append(getSelf(module_name))
    for argc, args in argc2args.items():
        body.append(ifArgc(argc))
        for i, arg in enumerate(args):
            # For compatibility with pygccxml v1.7.1
            arg_field = hasattr(arg, 'decl_type') and arg.decl_type or arg.type
            options = {
                'argument_name' : arg.name,
                'argument_type' : str(arg_field),
                'index' : i + arg_index_offset,
            }
            arg_type = getBuiltinType(str(arg_field))
            if arg_type:
                options['func'] = TYPE_FROM_LUA_FUNCS[arg_type]
                body.append(getBuiltinTypeArgument(options))
            else:
                body.append(getComplexArgument(options))
        if is_constructor:
            body.append(callWtConstructor(str(return_type), args, module_name))
        else:
            body.append(callWtFunction(str(return_type), args, method_name))
        body.append(elseArgc())
    body.append(elseFail(module_name, method_name))
    body.append(returnValue(str(return_type)))
    return LUACFUNCTION_TEMPLATE.lstrip() % {
        'module': module_name,
        'method': method_name,
        'body': ''.join(body).strip(),
    }

METHODS_ARRAY_TEMPLATE = r'''
static const luaL_Reg luawt_%(module_name)s_methods[] = {
    %(body)s
};

'''

def generateMethodsArray(module_name, methods):
    base_element = r'''
    METHOD(%s, %s),
    '''
    close_element = r'''
    {NULL, NULL},
    '''
    body = []
    for method in methods:
        body.append(base_element.rstrip() % (module_name, method.name))
    body.append(close_element.rstrip())
    return METHODS_ARRAY_TEMPLATE.lstrip() % {
        'module_name' : module_name,
        'body' : ''.join(body).strip(),
    }

MODULE_FUNC_TEMPLATE = r'''
void luawt_%(module_name)s(lua_State* L) {
    const char* base = luawt_typeToStr<%(base)s>();
    assert(base);
    DECLARE_CLASS(
        %(module_name)s,
        L,
        wrap<luawt_%(module_name)s_make>::func,
        0,
        luawt_%(module_name)s_methods,
        base
    );
}
'''

def generateModuleFunc(module_name, bases):
    if len(bases) is not 0:
        base = bases[0]
    else:
        base = 'WObject'
    options = {
        'module_name' : module_name,
        'base' : base,
    }
    return MODULE_FUNC_TEMPLATE.lstrip() % options

def generateConstructor(module_name, constructors):
    constructor_name = 'make'
    constructor_type = module_name + '*'
    return implementLuaCFunction(
        True,
        module_name,
        constructor_name,
        [c.arguments for c in constructors],
        constructor_type,
    )

def generateModule(module_name, methods, bases, constructors):
    source = []
    source.append(generateIncludes(module_name))
    source.append(generateConstructor(module_name, constructors))
    # Group by method name to find overloaded groups.
    name2methods = {}
    for method in methods:
        if method.name not in name2methods:
            name2methods[method.name] = []
        name2methods[method.name].append(method)
    for method_name, group in name2methods.items():
        return_type = group[0].return_type
        for method in group:
            assert method.return_type == return_type
        source.append(implementLuaCFunction(
            False,
            module_name,
            method_name,
            [method.arguments for method in group],
            return_type,
        ))
    source.append(generateMethodsArray(module_name, methods))
    source.append(generateModuleFunc(module_name, bases))
    return ''.join(source)

def getIndexOfFirstMatch(pattern, content):
    for i, line in enumerate(content):
        if re.search(pattern, line):
            return i

def addItem(pattern, added_str, content):
    curr_index = getIndexOfFirstMatch(pattern, content)
    # TODO (for zer0main).
    # We need to take into account that base must be before
    # child in init.cpp
    while added_str > content[curr_index]:
        curr_index += 1
    content.insert(curr_index, added_str)
    return ''.join(content)

def writeToFile(filename, what):
    with open(filename, 'wt') as f:
        f.write(what)

def readFile(filename):
    with open(filename, 'rt') as f:
        return f.readlines()

def writeSourceToFile(module_name, source):
    writeToFile('src/luawt/%s.cpp' % module_name, source)

def addItemToFiles(parameters):
    for parameter in parameters:
        content = readFile(parameter["filename"])
        writeToFile(parameter["filename"], addItem(
            parameter["pattern"],
            parameter["module_str"],
            content
        ))

def addModuleToLists(module_name):
    parameters = [
        {
            'filename' : 'src/luawt/globals.hpp',
            'pattern' : r'void luawt_[a-zA-Z]+\(lua_State\* L\);',
            'module_str' : 'void luawt_%s(lua_State* L);\n' % module_name,
        },
        {
            'filename' : 'src/luawt/init.cpp',
            'pattern' : r'MODULE\([a-zA-Z]+\),',
            'module_str' : '    MODULE(%s),\n' % module_name,
        },
        {
            'filename' : 'luawt-dev-1.rockspec',
            'pattern' : r'"src/luawt/[a-zA-Z]+\.cpp",',
            'module_str' : '                "src/luawt/%s.cpp",\n' % module_name,
        },
    ]
    addItemToFiles(parameters)

def bind(input_filename):
    class_name = module_name = getModuleName(input_filename)
    global_namespace = parse(input_filename)
    methods, bases, constructors = getMembers(class_name, global_namespace)
    addModuleToLists(module_name)
    source = generateModule(module_name, methods, bases, constructors)
    return source

def main():
    parser = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.ArgumentDefaultsHelpFormatter,
    )
    parser.add_argument(
        '--bind',
        type=str,
        help='Header file (Wt) with class to bind',
        required=True,
    )
    args = parser.parse_args()
    source = bind(args.bind)
    module_name = getModuleName(args.bind)
    writeSourceToFile(module_name, source)

if __name__ == '__main__':
    main()
