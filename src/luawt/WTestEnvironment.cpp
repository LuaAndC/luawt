/* luawt, Lua bindings for Wt
 * Copyright (c) 2015-2017 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "boost-xtime.hpp"
#include <Wt/Test/WTestEnvironment>

#include "globals.hpp"

using namespace Test;

int luawt_WTestEnvironment_make(lua_State* L) {
    WTestEnvironment* wtest = reinterpret_cast<WTestEnvironment*>(
            lua_newuserdata(L, sizeof(WTestEnvironment))
        );
    new (wtest) WTestEnvironment();
    luaL_getmetatable(L, "luawt_WTestEnvironment");
    lua_setmetatable(L, -2);
    return 1;
}

int luawt_WTestEnvironment_gc(lua_State* L) {
    WTestEnvironment* s = reinterpret_cast<WTestEnvironment*>(
            luaL_checkudata(L, 1, "luawt_WTestEnvironment")
        );
    s->WTestEnvironment::~WTestEnvironment();
    return 0;
}

static const luaL_Reg luawt_WTestEnvironment_mt[] = {
    METHOD(WTestEnvironment, gc),
    {NULL, NULL},
};

void luawt_WTestEnvironment(lua_State* L) {
    luaL_newmetatable(L, "luawt_WTestEnvironment");
    my_setfuncs(L, luawt_WTestEnvironment_mt);
    lua_pop(L, 1); // mt
    // put make to luawt
    luaL_getmetatable(L, "luawt");
    lua_pushcfunction(L, wrap<luawt_WTestEnvironment_make>::func);
    lua_setfield(L, -2, "WTestEnvironment");
    lua_pop(L, 1); // luawt
}
