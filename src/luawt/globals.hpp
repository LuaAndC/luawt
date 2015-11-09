/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#ifndef GLOBALS_HPP_
#define GLOBALS_HPP_

#include <cassert>
#include <cstring>
#include <exception>
#include <stdexcept>
#include <typeinfo>

#include <boost/cast.hpp>

#include "boost-xtime.hpp"
#include <Wt/WApplication>
#include <Wt/WContainerWidget>
#include <Wt/WServer>
#include <Wt/WText>

#include <lua.hpp>

#if LUA_VERSION_NUM == 501
#define my_setfuncs(L, funcs) luaL_register(L, NULL, funcs)
#define my_equal lua_equal
#define my_rawlen lua_objlen
#else
#define my_setfuncs(L, funcs) luaL_setfuncs(L, funcs, 0)
#define my_equal(L, i, j) lua_compare(L, i, j, LUA_OPEQ)
#define my_rawlen lua_rawlen
#endif

using namespace Wt;

class LuaWApplication : public WApplication {
public:
    LuaWApplication(lua_State* L,
                    const WEnvironment& env):
        WApplication(env), L_(L), owns_L_(false) {
        if (L == NULL) {
            owns_L_ = true;
            L_ = luaL_newstate();
        }
    }

    ~LuaWApplication() {
        if (owns_L_) {
            lua_close(L_);
        }
    }

    static LuaWApplication* instance() {
        WApplication* wapp = WApplication::instance();
        return wapp ? boost::polymorphic_downcast
            <LuaWApplication*>(wapp) : 0;
    }

    lua_State* L() const {
        return L_;
    }

private:
    lua_State* L_;
    bool owns_L_;
};

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

/* All Wt classes have metatables. Metatables have 2
   fields:
   - __base -- base class metatable
   - __name -- name of class
   - __make -- function for creating object
*/
template<typename T>
T* luawt_fromLua(lua_State* L, int index) {
    if (!lua_getmetatable(L, index)) {
        return 0;
    }
    const char* base_type = luawt_typeToStr<T>();
    while (true) {
        lua_getfield(L, -1, "__name");
        if (lua_type(L, -1) == LUA_TNIL) {
            lua_pop(L, 2); // metatable, field name
            return 0;
        }
        size_t name_len;
        const char* name = lua_tolstring(L, -1, &name_len);
        if (!name) {
            lua_pop(L, 2); // metatable, field name
            return 0;
        }
        if (memcmp(base_type, name, name_len) == 0) {
            luaL_getmetatable(L, base_type);
            if (!my_equal(L, -1, -3)) {
                lua_pop(L, 3); // metatable, field name, mt2
                return 0;
            }
            lua_pop(L, 3); // metatable, field name, mt2
            char* obj = lua_touserdata(L, index);
            size_t len = my_rawlen(L, -1);
            std::string id(obj, len);
            LuaWApplication* app =
                LuaWApplication::instance();
            return app ? app->root()->findById(id) : 0;
        } else {
            lua_pop(L, 1); // name
            lua_getfield(L, -1, "__base");
            lua_remove(L, -2);
            if (lua_type(L, -1) == LUA_TNIL) {
                lua_pop(L, 2); // metatable, field name
                return 0;
            }
        }
    }
}

template<typename T>
T* luawt_checkFromLua(lua_State* L, int index) {
    T* t = luawt_fromLua<T>(L, index);
    if (t == 0) {
        throw std::logic_error("LuaWt: Type mismatch or "
                               "no WApplication (no web "
                               "session)");
    } else {
        return t;
    }
}

template<typename T>
void luawt_declareType(lua_State* L, luaL_Reg* mt,
                       luaL_Reg* methods,
                       const char* base) {
    assert(luaL_newmetatable(L, luawt_typeToStr<T>()));
    // name
    lua_pushstring(L, luawt_typeToStr<T>());
    lua_setfield(L, -2, "name");
    if (mt) {
        my_setfuncs(L, mt);
    }
    if (methods) {
        lua_newtable(L);
        my_setfuncs(L, methods);
        lua_setfield(L, -2, "__index");
    }
    if (base) {
        lua_getmetatable(L, base);
        assert(lua_type(L, -1) == LUA_TTABLE);
        lua_setfield(L, -2, "__base");
    }
    // remove metatable from stack
    lua_pop(L, 1);
}

/* In Lua: string with object ID instead of pointer
   WApplication::findWidget(), WObject::id()
*/
template<typename T>
void luawt_toLua(lua_State* L, T* obj) {
    void* lobj = lua_newuserdata(L, obj->id().size());
    std::string id = obj->id();
    memcpy(lobj, id.c_str(), id.size());
    assert(luaL_newmetatable(L, luawt_typeToStr<T>()));
    lua_setmetatable(L, -2);
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

#define DECLARE_CLASS(L, type, make, mt, \
                      methods, base) \
    if (make) { \
        luaL_getmetatable(L, "luawt"); \
        lua_pushcfunction(L, make); \
        lua_setfield(L, -2, "make"); \
        lua_pop(L, 1); \
     } \
     declareType<type>(L, mt, methods, base);

/* This functions are called from luaopen() */
void luawtShared(lua_State* L);
void luawtWServer(lua_State* L);
void luawtWEnvironment(lua_State* L);

#endif
