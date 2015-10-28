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

#include "boost-xtime.hpp"
#include <Wt/WApplication>
#include <Wt/WText>
#include <Wt/WServer>

#include <lua.hpp>

#if LUA_VERSION_NUM == 501
#define my_setfuncs(L, funcs) luaL_register(L, NULL, funcs)
#define my_equal lua_equal
#else
#define my_setfuncs(L, funcs) luaL_setfuncs(L, funcs, 0)
#define my_equal(L, i, j) lua_compare(L, i, j, LUA_OPEQ)
#endif

using namespace Wt;

class LuaAppCreator {
public:
    LuaAppCreator(const std::string& code):
        code_(code) {
    }

    lua_State* L() const {
        return L_;
    }

    WApplication* operator()(const WEnvironment& env) const {
        std::auto_ptr<WApplication> app(new WApplication(env));
        new WText(code_, app->root());
        return app.release();
    }

private:
    std::string code_;
    lua_State* L_;
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
   - __parent -- parent class metatable
   - __name -- name of class
*/
template<typename T>
T* fromLua(LuaAppCreator* creator, int index) {
    lua_State* L = creator->L();
    if (!lua_getmetatable(L, index)) {
        return 0;
    }
    const char* parent_type = luawt_typeToStr<T>();
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
        if (memcmp(parent_type, name, name_len) == 0) {
            luaL_getmetatable(L, parent_type);
            if (!my_equal(L, -1, -3)) {
                lua_pop(L, 3); // metatable, field name, mt2
                return 0;
            }
            lua_pop(L, 3); // metatable, field name, mt2
            return lua_touserdata(L, index);
        } else {
            lua_pop(L, 1); // name
            lua_getfield(L, -1, "__parent");
            lua_remove(L, -2);
            if (lua_type(L, -1) == LUA_TNIL) {
                lua_pop(L, 2); // metatable, field name
                return 0;
            }
        }
    }
}

template<typename T>
T* checkFromLua(LuaAppCreator* creator, int index) {
    lua_State* L = creator->L();
    T* t = fromLua<T>(L, index);
    if (t == 0) {
        throw std::logic_error("LuaWt: Type mismatch");
    } else {
        return t;
    }
}

template<typename T>
void declareType(LuaAppCreator* creator, luaL_Reg* mt,
                 luaL_Reg* methods, const char* parent) {
    lua_State* L = creator->L();
    assert(luaL_newmetatable(L, luawt_typeToStr<T>()));
    // name
    lua_pushstring(L, luawt_typeToStr<T>());
    lua_setfield(L, -2, "name");
    if (parent) {
        lua_getmetatable(L, parent);
        assert(lua_type(L, -1) == LUA_TTABLE);
        lua_setfield(L, -2, "__parent");
    }
    // set metatable's members
    my_setfuncs(L, mt);
    // index
    lua_newtable(L);
    my_setfuncs(L, methods);
    lua_setfield(L, -2, "__index");
    // remove metatable from stack
    lua_pop(L, 1);
}

/* In Lua: string with object ID instead of pointer
   WApplication::findWidget(), WObject::id()
*/
template<typename T>
void toLua(LuaAppCreator* creator, T* obj) {
    lua_State* L = creator->L();
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

void luawtShared(lua_State* L);
void luawtWServer(lua_State* L);
void luawtWEnvironment(lua_State* L);

#endif
