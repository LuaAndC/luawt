#!/usr/bin/python3

""" Generate bindings of given Wt's class and all its dependencies.

Dependencies are all other classes from interface of methods
of given class (types of arguments and return values).
"""

import argparse
import os

MAIN_FUNC_DEF = r'''
%s;
'''

MAIN_FUNC_IMPL = r'''
%s {
}
'''

TYPE_FROM_LUA_FUNCS = {
    'int' : 'lua_tointeger',
    'bool' : 'lua_toboolean',
}

TYPE_TO_LUA_FUNCS = {
    'int' : 'lua_pushinteger',
    'bool' : 'lua_pushboolean',
}

def getFuncName(module_name):
    return "void luawt_%s(lua_State* L)" % module_name

def generateSkeleton(module_name):
    with open('src/luawt/%s.cpp' % module_name, 'wt') as f:
        f.write(MAIN_FUNC_IMPL % getFuncName(module_name))
    with open('src/luawt/globals2.hpp', 'w') as f:
        f.write(MAIN_FUNC_DEF % getFuncName(module_name))

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

def bind(to_bind):
    with open(to_bind, 'r') as f:
        code = f.read()

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
    module_name = getModuleName(args.bind)
    generateSkeleton(module_name)
    bind(args.bind)

if __name__ == '__main__':
    main()
