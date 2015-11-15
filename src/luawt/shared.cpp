/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include <map>
#include <string>

#include "boost-xtime.hpp"
#include <boost/thread/mutex.hpp>

#include "globals.hpp"

typedef std::string Str;
typedef std::map<Str, Str> Map;
typedef Map::const_iterator It;

Map shared;
boost::mutex mtx;

int luawt_Shared_index(lua_State* L) {
    boost::mutex::scoped_lock lock(mtx);
    size_t key_len;
    const char* key = luaL_checklstring(L, 2, &key_len);
    It iterator = shared.find(Str(key, key_len));
    if (iterator != shared.end()) {
        const Str& value = iterator->second;
        lua_pushlstring(L, value.c_str(), value.size());
    } else {
        lua_pushnil(L);
    }
    return 1;
}

int luawt_Shared_newindex(lua_State* L) {
    boost::mutex::scoped_lock lock(mtx);
    size_t key_len, value_len;
    const char* key = luaL_checklstring(L, 2, &key_len);
    const char* value = lua_tolstring(L, 3, &value_len);
    if (value == 0) {
        // remove key
        shared.erase(Str(key, key_len));
    } else {
        shared[Str(key, key_len)] = Str(value, value_len);
    }
    return 0;
}

static const luaL_Reg shared_functions[] = {
    MT_METHOD(Shared, index),
    MT_METHOD(Shared, newindex),
    {NULL, NULL},
};

void luawtShared(lua_State* L) {
    luaL_getmetatable(L, "luawt");
    assert(lua_type(L, -1) == LUA_TTABLE);
    lua_newtable(L); // Shared table
    lua_newtable(L); // metatable of Shared
    my_setfuncs(L, shared_functions);
    lua_setmetatable(L, -2);
    lua_setfield(L, -2, "Shared");
    lua_pop(L, 1); // luawt
}
