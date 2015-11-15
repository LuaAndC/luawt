/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "boost-xtime.hpp"
#include <Wt/WContainerWidget>

#include "globals.hpp"

/** Returns the IP address of the client */
int luawt_LuaWApplication_root(lua_State* L) {
    LuaWApplication* app =
        luawt_fromLua<LuaWApplication>(L, 1);
    WContainerWidget* root = app->root();
    luawt_toLua<WContainerWidget>(L, root);
    return 1;
}

static const luaL_Reg functions[] = {
    METHOD(LuaWApplication, root),
    {NULL, NULL},
};

void luawtWApplication(lua_State* L) {
    DECLARE_CLASS(
        LuaWApplication,
        L,
        0,
        0,
        functions,
        0
    );
}
