/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "globals.hpp"

int luawt_Test_unknownException(lua_State* L) {
    int error;
    throw error;
}

static const luaL_Reg luawt_Test_functions[] = {
    METHOD(Test, unknownException),
    {NULL, NULL},
};

void luawt_Test(lua_State* L) {
    luaL_getmetatable(L, "luawt");
    assert(lua_type(L, -1) == LUA_TTABLE);
    lua_newtable(L); // Test table
    my_setfuncs(L, luawt_Test_functions);
    lua_setfield(L, -2, "Test");
    lua_pop(L, 1); // luawt
}
