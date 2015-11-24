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

static const luaL_Reg Test_functions[] = {
    METHOD(Test, unknownException),
    {NULL, NULL},
};

void luawtTest(lua_State* L) {
    lua_newtable(L); // Test table
    my_setfuncs(L, Test_functions);
    lua_setfield(L, -2, "__index");
}
