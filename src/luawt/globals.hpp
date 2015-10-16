/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#ifndef GLOBALS_HPP_
#define GLOBALS_HPP_

#include <cassert>
#include <exception>
#include <typeinfo>

#include <lua.hpp>

#if LUA_VERSION_NUM == 501
#define my_setfuncs(L, funcs) luaL_register(L, NULL, funcs)
#else
#define my_setfuncs(L, funcs) luaL_setfuncs(L, funcs, 0)
#endif

template<typename T>
const char* luawt_typeToStr() {
    const char* name = typeid(T).name();
    // TODO use wrapper for assert
    assert(name != NULL);
    assert(*name != '\0');
    // Example: _ZN2Wt7WServer
    // Remove _ from beginning of name
    return name + 1;
}

template<lua_CFunction F>
struct wrap {
    static int func(lua_State* L) {
        try {
            return F(L);
        } catch (std::exception& e) {
            lua_pushstring(L, e.what());
        } catch (...) {
            lua_pushliteral(L, "Unknown exception");
        }
        return lua_error(L);
    }
};

#define METHOD(Klass, method) \
    {#method, wrap<luawt_##Klass##_##method>::func}

#define MT_METHOD(Klass, method) \
    {"__"#method, wrap<luawt_##Klass##_##method>::func}

void luawtShared(lua_State* L);
void luawtWServer(lua_State* L);
void luawtWEnvironment(lua_State* L);

#endif
