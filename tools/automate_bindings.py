#!/usr/bin/python

""" Generate bindings of Wt module(s).

Depends on pygccxml. Install it from PyPI (with pip), not from APT.
"""

import argparse
import glob
import logging
import os
import re
import shutil

import pygccxml
import yaml

BUILTIN_TYPES_CONVERTERS = {
    'int': ('lua_tointeger', 'lua_pushinteger'),
    'bool': ('lua_toboolean', 'lua_pushboolean'),
    'double': ('lua_tonumber', 'lua_pushnumber'),
    'char const *': ('lua_tostring', 'lua_pushstring'),
}

PROBLEMATIC_FROM_BUILTIN_CONVERSIONS = {
    'std::string' : ('std::string', 'char const *'),
    'Wt::WString' : ('Wt::WString', 'char const *'),
    'Wt::WLink' : ('Wt::WLink', 'char const *'),
    'Wt::WLength' : ('Wt::WLength', 'double'),
}

PROBLEMATIC_TO_BUILTIN_CONVERSIONS = {
    'std::string' : ('c_str', 'char const *'),
    'Wt::WString' : ('toUTF8', 'std::string'),
    'Wt::WLink' : ('url', 'std::string'),
    'Wt::WLength' : ('value', 'double'),
}

XML_CACHE = 'src/luawt/xml'
INCLUDE_WT = '/usr/include/Wt'

def parse(filename, include_paths=None):
    # Make sure Wt is installed to correct directory.
    wconfigh = '%s/WConfig.h' % INCLUDE_WT
    if not os.path.exists(wconfigh):
        logging.fatal('Can not find file %s', wconfigh)
        raise Exception('Can not find file %s' % wconfigh)
    # Find out the c++ parser.
    generator_path, generator_name = pygccxml.utils.find_xml_generator()
    # Configure the xml generator.
    xml_generator_config = pygccxml.parser.xml_generator_configuration_t(
        xml_generator_path = generator_path,
        xml_generator = generator_name,
        include_paths = include_paths,
        cflags = '-DWT_USE_BOOST_SIGNALS',
    )
    file_config = pygccxml.parser.create_cached_source_fc(
        filename,
        XML_CACHE + '/' + getModuleName(filename),
    )
    project_reader = pygccxml.parser.project_reader_t(xml_generator_config)
    # Parse the c++ file.
    decls = project_reader.read_files(
        files = [file_config],
    )
    # Get access to the global namespace.
    global_namespace = pygccxml.declarations.get_global_namespace(decls)
    return global_namespace

def loadAdditionalChunk(module_str):
    file_str = '%s/%s' % (INCLUDE_WT, module_str)
    if os.path.isfile(file_str):
        return parse(file_str).namespace('Wt')
    else:
        raise Exception('Unable to load module called %s' % module_str)

def isTemplate(method_name, decl_str):
    # Luawt doesn't support C++ templates.
    if pygccxml.declarations.templates.is_instantiation(decl_str):
        name = pygccxml.declarations.templates.name(decl_str)
        temp_args = pygccxml.declarations.templates.args(decl_str)
        if (len(temp_args) == 1) and (name == 'Wt::WFlags'):
            # WFlags<enum> is an exception. Treated as enum.
            addEnumByStr(decl_str, temp_args[0])
        else:
            logging.warning(
                "Its impossible to bind method %s because luawt " +
                "doesn't support C++ templates",
                method_name,
            )
            return True
    return False

def isConstReference(checked_type):
    if pygccxml.declarations.is_reference(checked_type):
        unref = pygccxml.declarations.remove_reference(checked_type)
        if pygccxml.declarations.is_const(unref):
            return True
    return False

def getClassStr(obj):
    # Class or other type
    class_str = hasattr(obj, 'name') and obj.name or str(obj)
    return class_str.replace('Wt::', '')

def getClass(obj, Wt):
    class_str = getClassStr(obj)
    try:
        return Wt.class_(name=class_str)
    except:
        namespace = loadAdditionalChunk(class_str)
        return namespace.class_(name=class_str)

def isDescendantLogic(child_class, base_class_name):
    for base in child_class.bases:
        if base.related_class.name == base_class_name:
            return True
        elif isDescendantLogic(base.related_class, base_class_name):
            return True
    return False

def isDescendantOf(child, base_name, Wt):
    try:
        child_class = getClass(child, Wt)
    except:
        warning_str = '''
        %(child)s wasn\'t found so there is no guarantee that %(child)s isn't descendant of %(base)s.
        '''
        warning_options = {
            'base': base_name,
            'child': getClassStr(child),
        }
        logging.warning(warning_str.strip() % warning_options)
        return False
    return isDescendantLogic(child_class, base_name)

def isBaseOrItsDescendant(child, base_name, Wt):
    if isDescendantOf(child, base_name, Wt):
        return True
    elif getClassStr(child) == base_name:
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
    elif isBaseOrItsDescendant(clearType(arg_type), 'WWidget', Wt):
        if not pygccxml.declarations.is_pointer(arg_type):
            logging.info(
                'Argument of method %s has strange type %s',
                method_name,
                arg_type,
            )
        return True
    logging.warning(
        'Its impossible to bind method %s: its arg has type %s',
        method_name,
        arg_type,
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
    elif isBaseOrItsDescendant(clearType(raw_return_type), 'WWidget', Wt):
        if pygccxml.declarations.is_pointer(raw_return_type):
            return True
        elif isConstReference(raw_return_type):
            return True
    logging.warning(
        'Its impossible to bind method %s: of its return type %s',
        method_name,
        raw_return_type,
    )
    return False

def addEnumByStr(type_str, enum_str):
    enum_converters = (
        'static_cast<%s>(lua_tointeger' % enum_str,
        'lua_pushinteger',
    )
    BUILTIN_TYPES_CONVERTERS[type_str] = enum_converters

def addEnum(type_obj):
    if pygccxml.declarations.is_enum(type_obj):
        enum_str = str(clearType(type_obj))
        addEnumByStr(enum_str, enum_str)

def getArgType(arg):
    # For compatibility with pygccxml v1.7.1
    arg_field = hasattr(arg, 'decl_type') and arg.decl_type or arg.type
    return arg_field

def checkWtFunction(is_constructor, func, Wt):
    if func.access_type != 'public':
        return False
    #if isTemplate(func.name, func.decl_string):
    #    return False
    for arg in func.arguments:
        arg_field = getArgType(arg)
        addEnum(arg_field)
        if not checkArgumentType(func.name, arg_field, Wt):
            return False
    if not is_constructor:
        addEnum(func.return_type)
        if not checkReturnType(func.name, func.return_type, Wt):
           return False
    # OK, all checks've passed.
    return True

def isSignal(func):
    if len(func.arguments) != 0:
        return False
    if func.access_type != 'public':
        return False
    # Workaround!
    if not 'EventSignal<' in str(func.return_type):
        return False
    if func.virtuality == "pure virtual":
        return False
    if not pygccxml.declarations.is_reference(func.return_type):
        return False
    return True

def getSignals(main_class):
    signals = main_class.member_functions(
        function=isSignal,
        allow_empty=True,
    ).to_list()
    for base in main_class.bases:
        signals += getSignals(base.related_class)
    return signals

def makeSignature(member):
    # member.decl_string is a string in form
    # ' ( ::Wt::WText::* )( ::Wt::WString const &,::Wt::WContainerWidget * )'
    # Target format is in form 'WText(WString,WContainerWidget*)'
    args = member.decl_string.split(')(')[1].split(')')[0]
    args = args.replace(' const ', ' ')
    args = args.replace('::Wt::', ' ')
    args = args.replace('&', '')
    args = args.replace(' ', '')
    return '%s(%s)' % (member.name, args)

def inBlacklist(member, blacklisted):
    if blacklisted is None:
        # No record for this class in blacklist file.
        return False
    if 'whole class' in blacklisted:
        return True
    if member.name in blacklisted.get('methods', []):
        return True
    if makeSignature(member) in blacklisted.get('signatures', []):
        return True
    return False

# This function returns methods, signals and base of the given class.
def getMembers(global_namespace, module_name, blacklisted):
    Wt = global_namespace.namespace('Wt')
    main_class = Wt.class_(name=module_name)
    base_r = None
    for base in main_class.bases:
        if isBaseOrItsDescendant(base.related_class, 'WWidget', Wt):
            base_r = base.related_class
    if module_name == 'WWidget' or module_name == 'WApplication':
        base_r = '0'
    if not base_r:
        raise Exception('Unable to bind %s, because it isnt descendant of WWidget' % module_name)
    custom_matcher = pygccxml.declarations.custom_matcher_t(
        lambda decl: checkWtFunction(False, decl, Wt),
    )
    methods = main_class.member_functions(
        function=custom_matcher,
        recursive=False,
        allow_empty=True,
    ).to_list()
    methods = [
        method
        for method in methods
        if not inBlacklist(method, blacklisted)
    ]
    signals = [
        signal
        for signal in getSignals(main_class)
        if not inBlacklist(signal, blacklisted)
    ]
    return methods, signals, base_r

def noParent(args):
    for arg in args:
        if arg.name == 'parent':
            type_s = str(clearType(getArgType(arg)))
            if type_s == 'Wt::WContainerWidget':
                return False
    return True

# For widget tests generation.
# Function returns flag - constructors type:
# - 0 means error - no constructors supported by luawt.test are available;
# - 1 - only no-args constructors are available
# - 2 means that there're constructors with single WContainerWidget arg
def getConstructorsType(constructors):
    has_void_args = False
    has_sing_arg = False
    for constructor in constructors:
        args = constructor.arguments
        req_args = constructor.required_args
        if (len(args) == 1) and not noParent(args):
            has_sing_arg = True
        elif len(req_args) == 0:
            has_void_args = True
    if has_sing_arg:
        return 2
    if has_void_args:
        return 1
    return 0

def getConstructors(global_namespace, module_name, blacklisted):
    Wt = global_namespace.namespace('Wt')
    main_class = Wt.class_(name=module_name)
    if main_class.is_abstract or module_name == 'WApplication':
        return [], 0
    custom_matcher = pygccxml.declarations.custom_matcher_t(
        lambda decl: checkWtFunction(True, decl, Wt),
    )
    constructors = main_class.constructors(
        function=custom_matcher,
        recursive=False,
        allow_empty=True,
    )
    result = []
    for constructor in constructors:
        if not constructor.is_artificial:
            if not inBlacklist(constructor, blacklisted):
                result.append(constructor)
    if not result:
        logging.warning('Unable to bind any constructors of %s' % module_name)
    return result, getConstructorsType(result)

def isModule(module_str):
    path = '%s/%s' % (INCLUDE_WT, module_str)
    return os.path.isfile(path)

def addIncludeDir(type_o, list_o):
    type_o = clearType(type_o)
    type_o = getClassStr(type_o)
    if isModule(type_o):
        list_o.append(type_o)

def getModulesFromFuncSig(func):
    class_strs = []
    if hasattr(func, 'return_type'):
        addIncludeDir(func.return_type, class_strs)
    for arg in func.arguments:
        arg_type = getArgType(arg)
        addIncludeDir(arg_type, class_strs)
    return class_strs

def getIncludes(module_name, methods, constructors):
    if module_name == 'MyApplication':
        module_name = 'WApplication'
    includes = []
    includes.append(module_name)
    for method in methods:
        includes += getModulesFromFuncSig(method)
    for constructor in constructors:
        includes += getModulesFromFuncSig(constructor)
    # Erase repeats
    return set(includes)

def getModuleName(filename):
    return os.path.basename(filename)

INCLUDES_TEMPLATE = r'''
#include "boost-xtime.hpp"

%s

#include "globals.hpp"

'''

def generateIncludes(includes):
    wt_includes = []
    for include in includes:
        include_str = '#include <Wt/%s>' % include
        wt_includes.append(include_str)
    return INCLUDES_TEMPLATE.lstrip() % '\n'.join(wt_includes)

def storeArgsIndex(module_name, func_name):
    frame = r'''
    int index = luawt_getSuitableArgsGroup(L, %s);
    '''
    arr_str = 'luawt_%s_%s_args' % (module_name, func_name)
    return frame.lstrip() % arr_str

def ifIndex(index):
    frame = r'''if (index == %d) {
    '''
    return frame % index

def elseIndex():
    return r'''
    } else '''

def elseFail(module_name, method_name):
    return r'''{
        return luaL_error(L, "Wrong arguments for %s.%s");
    }''' % (module_name, method_name)

def getSelf(module_name):
    frame = r'''%s* self = luawt_checkFromLua<%s>(L, 1);
    '''
    return frame % (module_name, module_name)

def findCorrespondingKeyInDict(dictionary, full_key):
    if full_key in dictionary:
        return full_key
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
        t = getArgType(arg)
        if getBuiltinType(str(t)):
            args_list.append(arg.name)
        else:
            if pygccxml.declarations.is_pointer(t):
                args_list.append(arg.name)
            else:
                args_list.append('*' + arg.name)
    return ', '.join(arg_e for arg_e in args_list)


def addWidgetToContainer(module_name):
    frame = r'''
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating %s");
    }
    app->root()->addWidget(result);
    '''
    return frame % module_name

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

ARGS_ARRAY_TEMPLATE = r'''
static const char* const* const luawt_%(module)s_%(func)s_args[] = {%(body)s};
'''

def handleEnum(type_o):
    _, detector = BUILTIN_TYPES_CONVERTERS[type_o]
    if detector == 'lua_pushinteger':
        return 'int'
    return type_o

def generateArgsArray(args_groups, module_name, func_name, is_constructor):
    complex_type_frame = 'luawt_typeToStr<%s>()'
    args_arrs = ''
    body = ''
    for i, args in enumerate(args_groups):
        name = '%s_%s_args%d' % (module_name, func_name, i)
        body += name + ', '
        args_arrs += 'static const char* %s[] = {' % name
        if not is_constructor:
            args_arrs += complex_type_frame % module_name
            args_arrs += ', '
        for arg in args:
            arg_type = getArgType(arg)
            builtin_type = getBuiltinType(str(arg_type))
            if builtin_type:
                args_arrs += '"' + handleEnum(builtin_type) + '"'
            else:
                complex_type = str(clearType(arg_type))
                args_arrs += complex_type_frame % complex_type
            args_arrs += ', '
        args_arrs += 'NULL};\n'
    body += 'NULL'
    options = {
        'module': module_name,
        'func': func_name,
        'body' : body,
    }
    return args_arrs + ARGS_ARRAY_TEMPLATE.strip() % options

LUACFUNCTION_TEMPLATE = r'''
%(args_arr)s

int luawt_%(module)s_%(method)s(lua_State* L) {
    %(body)s
}

'''

# Add optional arguments.
def makeArgsOverloads(functions):
    args_overloads = []
    for f in functions:
        args_overloads.append(f.required_args)
        for opt_arg in f.optional_args:
            prev = args_overloads[len(args_overloads) - 1]
            args_overloads.append(prev + [opt_arg])
    return args_overloads

def implementLuaCFunction(
    is_constructor,
    module_name,
    method_name,
    args_overloads,
    return_type,
):
    body = []
    body.append(storeArgsIndex(module_name, method_name))
    # In Lua indices start with 1.
    arg_index_offset = 1
    if not is_constructor:
        # The first one is object itself, so we have to increse offset.
        arg_index_offset += 1
        body.append(getSelf(module_name))
    for index, args in enumerate(args_overloads):
        body.append(ifIndex(index))
        for i, arg in enumerate(args):
            arg_field = getArgType(arg)
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
            if noParent(args):
                body.append(addWidgetToContainer(module_name))
        else:
            body.append(callWtFunction(str(return_type), args, method_name))
        body.append(returnValue(str(return_type)))
        body.append(elseIndex())
    body.append(elseFail(module_name, method_name))
    args_arr = generateArgsArray(
        args_overloads,
        module_name,
        method_name,
        is_constructor,
    )
    return LUACFUNCTION_TEMPLATE.lstrip() % {
        'args_arr': args_arr,
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
    return METHODS_ARRAY_TEMPLATE % {
        'module_name' : module_name,
        'body' : ''.join(body).strip(),
    }

MODULE_FUNC_TEMPLATE = r'''
void luawt_%(module_name)s(lua_State* L) {
    %(get_base_str)s
    DECLARE_CLASS(
        %(module_name)s,
        L,
        %(make)s,
        0,
        luawt_%(module_name)s_methods,
        %(base)s
    );
}
'''

def generateModuleFunc(module_name, base, is_not_abstract):
    base_frame = '''
    const char* base = luawt_typeToStr<%s>();
    assert(base);
    '''
    if base == '0':
        # WApplication or WWidget
        get_base = ''
    else:
        get_base = base_frame.strip() % base.name
        base = 'base'
    if is_not_abstract:
        make = 'wrap<luawt_%s_make>::func' % module_name
    else:
        make = '0'
    options = {
        'module_name' : module_name,
        'make' : make,
        'base' : base,
        'get_base_str' : get_base,
    }
    return MODULE_FUNC_TEMPLATE.lstrip() % options

def generateConstructor(module_name, constructors):
    if not constructors:
        return ''
    constructor_name = 'make'
    constructor_return_type = module_name + ' *'
    return implementLuaCFunction(
        True,
        module_name,
        constructor_name,
        makeArgsOverloads(constructors),
        constructor_return_type,
    )

def generateSignals(signals, module_name):
    SIG_TEMPLATE = 'ADD_SIGNAL(%(name)s, %(module)s, %(event)s)\n'
    sig_code = []
    for signal in signals:
        events = pygccxml.declarations.templates.args(str(signal))
        if len(events) != 1:
            continue
        options = {
            'name' : signal.name,
            'module' : module_name,
            'event' : events[0],
        }
        sig_code.append(SIG_TEMPLATE % options)
    return ''.join(sig_code)

def generateModule(module_name, methods, base, constructors, signals):
    source = []
    includes = getIncludes(module_name, methods, constructors)
    source.append(generateIncludes(includes))
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
            makeArgsOverloads(group),
            return_type,
        ))
    source.append(generateSignals(signals, module_name))
    source.append(generateMethodsArray(module_name, methods + signals))
    source.append(generateModuleFunc(
        module_name,
        base,
        is_not_abstract=bool(constructors),
    ))
    return ''.join(source)

def getMatchRange(pattern, content):
    first, last = 0, 0
    for i, line in enumerate(content):
        if re.search(pattern, line):
            if first == 0:
                first = i
            else:
                last = i
    if last < first:
        last = first
    return (first, last)

def getClassNameFromModuleStr(module_str):
    class_name = module_str.replace('MODULE(', '')
    class_name = class_name.replace('),', '')
    class_name = class_name.strip()
    return class_name

def addItem(pattern, added_str, content, module_name, Wt = None):
    first, last = getMatchRange(pattern, content)
    # init.cpp, special condition: base must be before descendant.
    if pattern == r'MODULE\([a-zA-Z]+\),':
        curr_index = last
        curr_class = getClassNameFromModuleStr(content[curr_index])
        while not isDescendantOf(module_name, curr_class, Wt):
            curr_index -= 1
            curr_class = getClassNameFromModuleStr(content[curr_index])
            if curr_index < first:
                break
        curr_index += 1
    # Lexicographical order.
    else:
        curr_index = first
        while added_str > content[curr_index]:
            curr_index += 1
            if curr_index > last:
                break
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

def addItemToFiles(parameters, module_name, Wt = None):
    for parameter in parameters:
        content = readFile(parameter['filename'])
        writeToFile(parameter['filename'], addItem(
            parameter['pattern'],
            parameter['module_str'],
            content,
            module_name,
            Wt,
        ))

def addModuleToLists(module_name, Wt):
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
            'filename' : 'luawt-0.0-1.rockspec',
            'pattern' : r'"src/luawt/[a-zA-Z]+\.cpp",',
            'module_str' : '        "src/luawt/%s.cpp",\n' % module_name,
        },
    ]
    addItemToFiles(parameters, module_name, Wt)

def getAllModules(path='%s/*'%INCLUDE_WT):
    content = glob.glob(path)
    modules = []
    for el in content:
        extension = os.path.splitext(el)[1]
        if os.path.isfile(el) and extension == '':
            modules.append(el)
    return modules

TEST_FRAME = r'''
    it("creates %(module_name)s", function()
        test.testWidget("%(module_name)s", %(has_args)s)
    end)
'''

def addTest(module_name, constructors_type):
    if constructors_type == 0:
        logging.warning("Unable to generate test for %s" % module_name)
    else:
        has_args = (constructors_type == 2)
        options = {
            'module_name' : module_name,
            'has_args' : str(has_args).lower(),
        }
        module_str = '    ' + TEST_FRAME.lstrip() % options
        parameters = [
            {
                'filename' : 'spec/widgets_spec.lua',
                'pattern' : r'-- List of widgets tests',
                'module_str' : module_str,
            },
        ]
        addItemToFiles(parameters, module_name)

def bind(modules, module_only, blacklist):
    for module in modules:
        try:
            global_namespace = parse(module)
            module_name = getModuleName(module)
            methods, signals, base = getMembers(
                global_namespace,
                module_name,
                blacklist.get(module_name),
            )
            constructors, constructors_type = getConstructors(
                global_namespace,
                module_name,
                blacklist.get(module_name),
            )
            if module_name == 'WApplication':
                module_name = 'MyApplication'
            source = generateModule(
                module_name,
                methods,
                base,
                constructors,
                signals,
            )
            if not module_only:
                addModuleToLists(module_name, global_namespace.namespace('Wt'))
            if constructors:
                # Is not abstract
                addTest(module_name, constructors_type)
            writeSourceToFile(module_name, source)
        except Exception as e:
            if len(modules) == 1:
                raise
            else:
                logging.warning('Unable to bind %s: %s', module, e)

def collectMembers(path):
    if os.path.exists(XML_CACHE):
        shutil.rmtree(XML_CACHE)
    modules = getAllModules(path + '/src/Wt/*')
    members = []
    blacklisted = None
    for module in modules:
        try:
            include_paths = [
                path + '/src/',
                path + '/src/Wt',
                path + '/src/http',
                path + '/src/web/', # DomElement.h
            ]
            global_namespace = parse(module, include_paths)
            module_name = getModuleName(module)
            methods, _, _ = getMembers(
                global_namespace,
                module_name,
                blacklisted,
            )
            constructors, _ = getConstructors(
                global_namespace,
                module_name,
                blacklisted,
            )
            for member in methods + constructors:
                t = (module_name, member.name, makeSignature(member))
                members.append(t)
        except Exception as e:
            logging.warning('Unable to bind %s: %s', module, e)
    if os.path.exists(XML_CACHE):
        shutil.rmtree(XML_CACHE)
    return set(members)

def generateBlacklist(mem1, mem2):
    with open(mem1) as m1:
        members1 = yaml.load(m1)
    with open(mem2) as m2:
        members2 = yaml.load(m2)
    # Find classes, completely missing in one of versions.
    classes1 = set(klass for (klass, method, sig) in members1)
    classes2 = set(klass for (klass, method, sig) in members2)
    whole_classes = classes1.symmetric_difference(classes2)
    # Find methods, completely missing in one of versions.
    methods1 = set((klass, method) for (klass, method, sig) in members1)
    methods2 = set((klass, method) for (klass, method, sig) in members2)
    whole_methods = methods1.symmetric_difference(methods2)
    # Signatures missing in one of versions.
    signatures = members1.symmetric_difference(members2)
    # Generate blacklist.
    blacklist = {}
    for klass in whole_classes:
        blacklist[klass] = {'whole class': True}
    for (klass, method) in whole_methods:
        if klass in whole_classes:
            continue
        if klass not in blacklist:
            blacklist[klass] = {}
        if 'methods' not in blacklist[klass]:
            blacklist[klass]['methods'] = []
        blacklist[klass]['methods'].append(method)
    for (klass, method, signature) in signatures:
        if klass in whole_classes or (klass, method) in whole_methods:
            continue
        if klass not in blacklist:
            blacklist[klass] = {}
        if 'signatures' not in blacklist[klass]:
            blacklist[klass]['signatures'] = []
        blacklist[klass]['signatures'].append(signature)
    for blacklisted in blacklist.values():
        if 'methods' in blacklisted:
            blacklisted['methods'].sort()
        if 'signatures' in blacklisted:
            blacklisted['signatures'].sort()
    return blacklist

def main():
    parser = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.ArgumentDefaultsHelpFormatter,
    )
    mode = parser.add_mutually_exclusive_group(required=True)
    mode.add_argument(
        '--bind-all',
        help='Bind all the library',
        action='store_true',
        required=False,
    )
    mode.add_argument(
        '--bind',
        type=str,
        help='Header file (Wt) with class to bind',
        required=False,
    )
    mode.add_argument(
        '--gen-members',
        type=str,
        help='Print full list of members for a Wt dir',
        metavar='WT_INCLUDE_DIR',
        required=False,
    )
    mode.add_argument(
        '--gen-blacklist',
        type=str,
        nargs=2,
        help='2 files generated by --gen-members',
        metavar='MEMBERS_YAML',
        required=False,
    )
    parser.add_argument(
        '--module-only',
        help='Do not change globals.hpp, init.cpp and rockspec',
        action='store_true',
        required=False,
    )
    # Example: tools/blacklist.yaml.
    parser.add_argument(
        '--blacklist',
        help='YAML file with blacklist of classes/methods (optional)',
        required=False,
    )
    args = parser.parse_args()
    if args.blacklist:
        with open(args.blacklist) as b:
            blacklist = yaml.load(b)
    else:
        blacklist = {}
    if args.bind:
        bind([args.bind], args.module_only, blacklist)
    elif args.bind_all:
        bind(getAllModules(), args.module_only, blacklist)
    elif args.gen_members:
        print(yaml.dump(
            collectMembers(args.gen_members),
            default_flow_style=False,
        ))
    elif args.gen_blacklist:
        (mem1, mem2) = args.gen_blacklist
        print(yaml.dump(
            generateBlacklist(mem1, mem2),
            default_flow_style=False,
        ))
    else:
        raise Exception('Mode of operation is unknown')

if __name__ == '__main__':
    main()
