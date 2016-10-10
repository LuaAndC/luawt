#!/usr/bin/python3

""" Generate bindings of given Wt's class and all its dependencies.

Dependencies are all other classes from interface of methods
of given class (types of arguments and return values).
"""

import argparse
import os

from pygccxml import utils
from pygccxml import declarations
from pygccxml import parser

TYPE_FROM_LUA_FUNCS = {
    'int' : 'lua_tointeger',
    'bool' : 'lua_toboolean',
}

TYPE_TO_LUA_FUNCS = {
    'int' : 'lua_pushinteger',
    'bool' : 'lua_pushboolean',
}

def parse(filename):
    # Find out the c++ parser
    generator_path, generator_name = utils.find_xml_generator()

    # Configure the xml generator
    xml_generator_config = parser.xml_generator_configuration_t(
        xml_generator_path = generator_path,
        xml_generator = generator_name
    )

    # Parse the c++ file
    decls = parser.parse([filename], xml_generator_config)

    # Get access to the global namespace
    global_namespace = declarations.get_global_namespace(decls)
    return global_namespace

def getMethods(global_namespace):
    Wt = global_namespace.namespace("Wt")
    base = ''
    mathods = []
    for decl in Wt.declarations:
        if isintance(decl, declarations.class_declaration_t):
            base = str(decl.bases[0])
        if isintance(decl, declarations.free_function_t):
            methods.append(decl)
    return mathods, base

def writeSourceToFile(module_name, source):
    with open('src/luawt/%s.cpp' % module_name, 'wt') as f:
        f.write(source)

def getModuleName(filename):
    return os.path.basename(filename)

def generateIncludes(module_name):
    includes = r'''
    #include "boost-xtime.hpp"
    #include <Wt/%s>

    #include "globals.hpp"
    '''
    return includes % module_name

def getInbuiltTypeArgument(options):
    frame = r'''
    %(argument_type) %(argument_name) = %(func)(L, %(index));
    '''
    return frame % options

def getComplexArgument(options):
    frame = r'''
    %(argument_type)* %(argument_name) =
        luawt_checkFromLua<%(argument_type)>(L, %(index));
    '''
    return frame % options

def callWtFunction(return_type, args, method_name):
    call_s = 'self->%s(' % method_name
    args_s = ', '.join(arg.name for arg in args)
    func_s = call_s + args_s + ');'
    if return_type == 'void':
        return func_s
    else:
        return '%s result = %s' % return_type % func_s

def returnInbuiltTypeValue(return_type):
    if return_type == 'void':
        return 'return 0;'
    else:
        return_calls = r'''
        %s(L, result);
        return 1;
        '''
        return return_calls % TYPE_TO_LUA_FUNCS[return_type]

def returnComplexValue():
    frame = r'''
    luawt_toLua(L, result);
    return 1;
    '''
    return frame

def isInbuilt(type):
    for inbuilt_type in TYPE_FROM_LUA_FUNCS:
        if type.find(inbuilt_type):
            return True
    return False

def implementLuaCFunction(module_name, method_name, args, return_type):
    head = 'int luawt_%s_%s(lua_State* L) {' % module_name % method_name
    body = ''
    for arg in args:
        options = {
            'argument_name' : arg.name,
            'argument_type' : arg.type,
            'index' : arg.index,
        }
        if isInbuilt(arg.type):
            options['func'] = TYPE_FROM_LUA_FUNCS[arg.type]
            body += getInbuiltTypeArgument(options)
        else:
            body += getComplexArgument(options)
    body += callWtFunction(return_type, args, method_name)
    if (isInbuilt(return_type)):
        body += returnInbuiltTypeValue(return_type)
    else:
        body += returnComplexValue()
    close = '}\n\n'
    return head + body + close

def generateMethodsArray(module_name, methods):
    head = 'static const luaL_Reg luawt_%s_methods[] = {' % module_name;
    body = ''
    for mathod in methods:
        body += 'METHOD(%s, %s),\n' % module_name % method.name
    close = r'''
        {NULL, NULL},
    };
    '''
    return head + body + close

def generateModuleFunc(module_name, base):
    options = {
        'module_name' : module_name,
        'base' : base,
    }
    code = r'''
    void luawt_%(module_name)(lua_State* L) {
        const char* base = luawt_typeToStr<%(base)>();
        assert(base);
        DECLARE_CLASS(
            %(module_name),
            L,
            wrap<luawt_%(module_name)_make>::func,
            0,
            luawt_%(module_name)_methods,
            %(base)
        );
    }
    '''
    return code % options

def generateModule(module_name, methods, base):
    source = ''
    source += generateIncludes(module_name)
    for method in methods:
        source += implementLuaCFunction(
            module_name,
            method.name,
            method.args,
            method.return_type
        )
    source += generateMethodsArray(module_name, methods)
    source += generateModuleFunc(module_name, base)
    return source

def bind(input_filename):
    global_namespace = parse(input_filename)
    methods, base = getMethods(global_namespace)
    module_name = getModuleName(input_filename)
    source = generateModule(module_name, methods, base)
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
    writeSourceToFile(source)

if __name__ == '__main__':
    main()
