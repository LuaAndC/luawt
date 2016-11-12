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

BUILTIN_TYPES_CONVERTERS = {
    'int': ('lua_tointeger', 'lua_pushinteger'),
    'bool': ('lua_toboolean', 'lua_pushboolean'),
    'double': ('lua_tonumber', 'lua_pushnumber'),
    'const char*': ('lua_tostring', 'lua_pushstring'),
}

PROBLEMATIC_FROM_BUILTIN_CONVERSIONS = {
    'std::string' : ('std::string', 'const char*'),
    'Wt::WString' : ('Wt::WString', 'const char*'),
}

PROBLEMATIC_TO_BUILTIN_CONVERSIONS = {
    'std::string' : ('c_str', 'const char*'),
    'Wt::WString' : ('toUTF8', 'std::string'),
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

def loadAdditionalChunk(module_str):
    file_str = '/usr/include/Wt/%s' % module_str
    if os.path.isfile(file_str):
        return parse(file_str).namespace('Wt')
    else:
        raise Exception('Unable to load module called %s' % module_str)

def isTemplate(method_name, decl_str):
    # Luawt doesn't support C++ templates.
    if pygccxml.declarations.templates.is_instantiation(decl_str):
        logging.warning(
            'Its impossible to bind method %s because luawt doesn\'t support C++ templates'
            % method_name
        )
        return True
    return False

def isConstReference(checked_type):
    if pygccxml.declarations.is_reference(checked_type):
        unref = pygccxml.declarations.remove_reference(checked_type)
        if pygccxml.declarations.is_const(unref):
            return True
    return False

def isWObjectsDescendant(obj, Wt):
    # Class or other type
    obj_str = hasattr(obj, 'name') and obj.name or str(obj)
    try:
        obj_c = Wt.class_(name=obj_str.replace('Wt::', ''))
        for base in obj_c.bases:
            if base.related_class.name == 'WObject':
                return True
            elif isWObjectsDescendant(base.related_class, Wt):
                return True
    except:
        logging.warning('%s wasn\'t found so there is no guarantee that it is WObject\'s descendant.' % obj_str)
        return True
    return False

def checkArgumentType(method_name, arg_type, Wt):
    if isTemplate(method_name, str(arg_type)):
        return False
    # Is built-in or problematic
    if getBuiltinType(str(arg_type)):
        # Is problematic
        if findCorrespondingKeyInDict(
            PROBLEMATIC_TO_BUILTIN_CONVERSIONS,
            str(arg_type),
        ):
            if pygccxml.declarations.is_reference(arg_type):
                if isConstReference(arg_type):
                    return True
            elif not pygccxml.declarations.is_pointer(arg_type):
                return True
        # Is built-in
        else:
            if not pygccxml.declarations.is_pointer(arg_type):
                if not pygccxml.declarations.is_reference(arg_type):
                    return True
    elif isWObjectsDescendant(clearType(arg_type), Wt):
        if not pygccxml.declarations.is_pointer(arg_type):
            logging.info(
                'Argument of method %s has strange type %s'
                % (method_name, str(arg_type))
            )
        return True
    logging.warning(
        'Its impossible to bind method %s because its arg has type %s'
        % (method_name, str(arg_type))
    )
    return False

def checkReturnType(method_name, raw_return_type, Wt):
    # Special cases.
    if isTemplate(method_name, str(raw_return_type)):
        return False
    if str(raw_return_type) == 'void':
        return True
    # Built-in or problematic return type.
    if getBuiltinType(str(raw_return_type)):
        if isConstReference(raw_return_type):
            return True
        elif not pygccxml.declarations.is_pointer(raw_return_type):
            return True
    elif isWObjectsDescendant(clearType(raw_return_type), Wt):
        if pygccxml.declarations.is_pointer(raw_return_type):
            return True
        elif isConstReference(raw_return_type):
            return True
    logging.warning(
        'Its impossible to bind method %s because of its return type %s'
        % (method_name, str(raw_return_type))
    )
    return False

def addEnum(type_obj):
    if pygccxml.declarations.is_enum(type_obj):
        enum_str = str(clearType(type_obj))
        enum_converters = (
            'static_cast<%s>(lua_tointeger' % enum_str,
            'lua_pushinteger',
        )
        BUILTIN_TYPES_CONVERTERS[enum_str] = enum_converters

def checkWtFunction(is_constructor, func, Wt):
    if isTemplate(func.name, func.decl_string):
        return False
    for arg in func.arguments:
        # For compatibility with pygccxml v1.7.1
        arg_field = hasattr(arg, 'decl_type') and arg.decl_type or arg.type
        addEnum(arg_field)
        if not checkArgumentType(func.name, arg_field, Wt):
            return False
    if not is_constructor:
        addEnum(func.return_type)
        if not checkReturnType(func.name, func.return_type, Wt):
           return False
    # OK, all checks've passed.
    return True

def getMethodsAndBases(global_namespace, module_name):
    Wt = global_namespace.namespace('Wt')
    main_class = Wt.class_(name=module_name)
    access_matcher = pygccxml.declarations.access_type_matcher_t(
        'public',
    )
    custom_matcher = pygccxml.declarations.custom_matcher_t(
        lambda decl: checkWtFunction(False, decl, Wt),
    )
    methods = main_class.member_functions(
        function=access_matcher & custom_matcher,
        recursive=False,
    )
    bases = main_class.bases
    return methods, bases

def getConstructor(global_namespace, module_name):
    Wt = global_namespace.namespace('Wt')
    main_class = Wt.class_(name=module_name)
    # TODO (for zer0main).
    # We need to support multiple constructors so it's just a dummy.
    for constructor in main_class.constructors():
        if checkWtFunction(True, constructor, Wt):
            if not constructor.is_artificial:
                return constructor
    raise Exception('Unable to bind any constructors of %s' % module_name)

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

def findCorrespondingKeyInDict(dictionary, full_key):
    for key in dictionary:
        if key in full_key:
            return key
    return ''

def getNumberOfTransitionalTypes(problematic_type):
    count = 0
    while problematic_type in PROBLEMATIC_FROM_BUILTIN_CONVERSIONS:
        problematic_type = PROBLEMATIC_FROM_BUILTIN_CONVERSIONS[problematic_type]
        count += 1
    return count

def getProblematicFromBuiltin(problematic_type, arg_n, arg_name):
    builtin_to_problematic = r'''
    %(curr_type)s %(curr_var)s = %(func)s(%(prev_var)s);
    '''
    convert_str = []
    curr_type = problematic_type
    n_transitional = getNumberOfTransitionalTypes(problematic_type)
    curr_n = 1
    while not curr_type in BUILTIN_TYPES_CONVERTERS:
        if curr_n == 1:
            prev_var = 'raw' + str(arg_n)
        else:
            prev_var = 'next' + str(n_transitional - curr_n - 1)
        if curr_n == n_transitional:
            curr_var = arg_name
        else:
            curr_var = 'next' + str(n_transitional - curr_n)
        func, _ = PROBLEMATIC_FROM_BUILTIN_CONVERSIONS[curr_type]
        options = {
            'curr_type' : curr_type,
            'curr_var' : curr_var,
            'func' : func,
            'prev_var' : prev_var,
        }
        convert_str.append(builtin_to_problematic % options)
        _, curr_type = PROBLEMATIC_FROM_BUILTIN_CONVERSIONS[curr_type]
        curr_n += 1
    convert_str.reverse()
    return ''.join(convert_str)

def getBuiltinTypeArgument(options):
    get_problematic_arg_template = r'''
    %(raw_type)s raw%(index)s = %(func)s(L, %(index)s);
    '''
    get_builtin_arg_template = r'''
    %(argument_type)s %(argument_name)s = %(func)s(L, %(index)s);
    '''
    # Enum: need to close static_cast
    get_enum_arg_template = r'''
    %(argument_type)s %(argument_name)s = %(func)s(L, %(index)s));
    '''
    problematic_type = findCorrespondingKeyInDict(
        PROBLEMATIC_TO_BUILTIN_CONVERSIONS,
        str(options['argument_type']),
    )
    if problematic_type:
        options['raw_type'] = getBuiltinType(problematic_type)
        code = get_problematic_arg_template.lstrip() % options
        code += getProblematicFromBuiltin(
            problematic_type,
            options['index'],
            options['argument_name'],
        ).lstrip()
        return code
    else:
        # Enum
        if 'static_cast' in options['func']:
            return get_enum_arg_template.lstrip() % options
        else:
            return get_builtin_arg_template.lstrip() % options

def clearType(type_o):
    type_o = pygccxml.declarations.remove_reference(type_o)
    type_o = pygccxml.declarations.remove_pointer(type_o)
    type_o = pygccxml.declarations.remove_cv(type_o)
    return type_o

def getComplexArgument(options):
    options['argument_type'] = clearType(options['argument_type'])
    options['argument_type'] = str(options['argument_type'])
    frame = r'''
    %(argument_type)s* %(argument_name)s =
        luawt_checkFromLua<%(argument_type)s>(L, %(index)s);
    '''
    return frame.lstrip() % options

def getArgsStr(args):
    args_list = []
    for arg in args:
        if getBuiltinType(str(arg.decl_type)):
            args_list.append(arg.name)
        else:
            if pygccxml.declarations.is_pointer(arg.decl_type):
                args_list.append(arg.name)
            else:
                args_list.append('*' + arg.name)
    return ', '.join(arg_e for arg_e in args_list)


def callWtConstructor(return_type, args, module_name):
    call_s = 'new %s(' % module_name
    args_s = getArgsStr(args)
    constructor_s = call_s + args_s + ');'
    return '%s result = %s' % (return_type, constructor_s)

def callWtFunction(return_type, args, method_name):
    call_s = 'self->%s(' % method_name
    args_s = getArgsStr(args)
    func_s = call_s + args_s + ');'
    if return_type == 'void':
        return func_s
    else:
        return '%s result = %s' % (return_type, func_s)

RETURN_CALLS_TEMPLATE = r'''
    %s(L, %sresult%s);
    return 1;
'''

def getBuiltinTypeFromProblematic(problematic_type):
    next_type = problematic_type
    convert_f = ''
    while not next_type in BUILTIN_TYPES_CONVERTERS:
        method_str, next_type = PROBLEMATIC_TO_BUILTIN_CONVERSIONS[next_type]
        convert_f += '.' + method_str + '()'
    return convert_f

def returnValue(return_type):
    void_frame = r'''
    return 0;
    '''
    if return_type == 'void':
        return void_frame
    else:
        ref_str = ''
        builtin_type = getBuiltinType(return_type)
        # func - function for returning values to Lua
        if builtin_type:
            _, func_name = BUILTIN_TYPES_CONVERTERS[builtin_type]
        else:
            func_name = 'luawt_toLua'
            # Is reference
            if '&' in return_type:
                ref_str = '&'
        # Method to convert problematic type to built-in.
        # Empty by default.
        convert_f = ''
        problematic_type = findCorrespondingKeyInDict(
            PROBLEMATIC_FROM_BUILTIN_CONVERSIONS,
            return_type,
        )
        if problematic_type:
            convert_f = getBuiltinTypeFromProblematic(problematic_type)
        return RETURN_CALLS_TEMPLATE % (func_name, ref_str, convert_f)

def getBuiltinType(full_type):
    builtin_type = findCorrespondingKeyInDict(
        BUILTIN_TYPES_CONVERTERS,
        full_type,
    )
    problematic_type = findCorrespondingKeyInDict(
        PROBLEMATIC_TO_BUILTIN_CONVERSIONS,
        full_type,
    )
    if problematic_type:
        while not problematic_type in BUILTIN_TYPES_CONVERTERS:
            _, problematic_type = PROBLEMATIC_TO_BUILTIN_CONVERSIONS[problematic_type]
        return problematic_type
    else:
        return builtin_type

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
    # In Lua indices start with 1.
    arg_index_offset = 1
    if not is_constructor:
        # The first one is object itself, so we have to increse offset.
        arg_index_offset += 1
        body.append(getSelf(module_name))
    for i, arg in enumerate(args):
        # For compatibility with pygccxml v1.7.1
        arg_field = hasattr(arg, 'decl_type') and arg.decl_type or arg.type
        options = {
            'argument_name' : arg.name,
            'argument_type' : arg_field,
            'index' : i + arg_index_offset,
        }
        arg_type = getBuiltinType(str(arg_field))
        if arg_type:
            options['func'], _ = BUILTIN_TYPES_CONVERTERS[arg_type]
            body.append(getBuiltinTypeArgument(options))
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
    if len(bases) != 0:
        base = bases[0].related_class.name
    else:
        base = 'WObject'
    options = {
        'module_name' : module_name,
        'base' : base,
    }
    return MODULE_FUNC_TEMPLATE.lstrip() % options

def generateConstructor(module_name, constructor):
    constructor_name = 'make'
    constructor_return_type = module_name + ' *'
    return implementLuaCFunction(
        True,
        module_name,
        constructor_name,
        constructor.arguments,
        constructor_return_type,
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
        content = readFile(parameter['filename'])
        writeToFile(parameter['filename'], addItem(
            parameter['pattern'],
            parameter['module_str'],
            content,
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

def bind(input_filename, module_only):
    global_namespace = parse(input_filename)
    module_name = getModuleName(input_filename)
    methods, bases = getMethodsAndBases(global_namespace, module_name)
    constructor = getConstructor(global_namespace, module_name)
    if not module_only:
        addModuleToLists(module_name)
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
    parser.add_argument(
        '--module-only',
        help='Do not change globals.hpp, init.cpp and rockspec',
        action='store_true',
        required=False,
    )
    args = parser.parse_args()
    source = bind(args.bind, args.module_only)
    module_name = getModuleName(args.bind)
    writeSourceToFile(module_name, source)

if __name__ == '__main__':
    main()
