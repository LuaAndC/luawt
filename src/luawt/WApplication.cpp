/* luawt, Lua bindings for Wt
 * Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "boost-xtime.hpp"
#include <Wt/WContainerWidget>

#include "globals.hpp"

/** Returns the IP address of the client */
int luawt_Application_root(lua_State* L) {
    luawt_Application* app =
        luawt_fromLua<luawt_Application>(L, 1);
    WContainerWidget* root = app->root();
    luawt_toLua<WContainerWidget>(L, root);
    return 1;
}

static const luaL_Reg luawt_Application_methods[] = {
    METHOD(Application, root),
    {NULL, NULL},
};

void luawt_WApplication(lua_State* L) {
    DECLARE_CLASS(
        luawt_Application,
        L,
        0,
        0,
        luawt_Application_methods,
        0
    );
}
