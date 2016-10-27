#!/usr/bin/python

""" Generate bindings of given Wt's class and all its dependencies.

Dependencies are all other classes from interface of methods
of given class (types of arguments and return values).
"""

import argparse
import os

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

def getMethodsAndBases(global_namespace):
    Wt = global_namespace.namespace('Wt')
    methods = Wt.member_functions()
    main_class = Wt.classes()[0]
    bases = main_class.bases
    return methods, bases

def getConstructor(global_namespace):
    Wt = global_namespace.namespace('Wt')
    main_class = Wt.classes()[0]
    # TODO (for zer0main).
    # We need to support multiple constructors so it's just a dummy.
    return pygccxml.declarations.find_trivial_constructor(main_class)

def writeSourceToFile(module_name, source):
    with open('src/luawt/%s.cpp' % module_name, 'wt') as f:
        f.write(source)

def getModuleName(filename):
    return os.path.basename(filename)

INCLUDES_TEMPLATE = r'''
#include "boost-xtime.hpp"
#include <Wt/%s>

#include "globals.hpp"

'''

def generateIncludes(module_name):
    return INCLUDES_TEMPLATE.lstrip() % module_name

def getSelf(module_name):
    frame = r'''
    %s* self = luawt_checkFromLua<%s>(L, 1);
    '''
    return frame % (module_name, module_name)

def getInbuiltTypeArgument(options):
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
        inbuilt_type = getInbuiltType(return_type)
        if inbuilt_type:
            func_name = TYPE_TO_LUA_FUNCS[inbuilt_type]
        else:
            func_name = 'luawt_toLua'
        return RETURN_CALLS_TEMPLATE % func_name

def getInbuiltType(full_type):
    for inbuilt_type in TYPE_FROM_LUA_FUNCS:
        if full_type.find(inbuilt_type) is not -1:
            return inbuilt_type
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
    args,
    return_type,
):
    body = []
    if not is_constructor:
        body.append(getSelf(module_name))
    for i, arg in enumerate(args):
        options = {
            'argument_name' : arg.name,
            'argument_type' : str(arg.decl_type),
            # In Lua indices start with 1; the first one is
            # object itself, so we have to add 2 to i.
            'index' : i + 2,
        }
        arg_type = getInbuiltType(str(arg.decl_type))
        if arg_type:
            options['func'] = TYPE_FROM_LUA_FUNCS[arg_type]
            body.append(getInbuiltTypeArgument(options))
        else:
            body.append(getComplexArgument(options))
    if is_constructor:
        body.append(callWtConstructor(str(return_type), args, module_name))
    else:
        body.append(callWtFunction(str(return_type), args, method_name))
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

def generateConstructor(module_name, constructor):
    constructor_name = 'make'
    constructor_type = module_name + '*'
    return implementLuaCFunction(
        True,
        module_name,
        constructor_name,
        constructor.arguments,
        constructor_type,
    )

def generateModule(module_name, methods, bases, constructor):
    source = []
    source.append(generateIncludes(module_name))
    source.append(generateConstructor(module_name, constructor))
    for method in methods:
        source.append(implementLuaCFunction(
            False,
            module_name,
            method.name,
            method.arguments,
            method.return_type,
        ))
    source.append(generateMethodsArray(module_name, methods))
    source.append(generateModuleFunc(module_name, bases))
    return ''.join(source)

def bind(input_filename):
    global_namespace = parse(input_filename)
    methods, bases = getMethodsAndBases(global_namespace)
    constructor = getConstructor(global_namespace)
    module_name = getModuleName(input_filename)
    source = generateModule(module_name, methods, bases, constructor)
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
