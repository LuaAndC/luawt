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

def get_func_name(module_name):
    return "void luawt_%s(lua_State* L)" % module_name

def generate_skeleton(module_name):
    with open('src/luawt/%s.cpp' % module_name, 'wt') as f:
        f.write(MAIN_FUNC_IMPL % get_func_name(module_name))
    with open('src/luawt/globals2.hpp', 'w') as f:
        f.write(MAIN_FUNC_DEF % get_func_name(module_name))

def get_module_name(filename):
    return os.path.basename(filename)

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
    module_name = get_module_name(args.bind)
    generate_skeleton(module_name)
    bind(args.bind)

if __name__ == '__main__':
    main()
