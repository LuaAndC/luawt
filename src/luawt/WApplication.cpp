/* luawt, Lua bindings for Wt
 * Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "boost-xtime.hpp"
#include <Wt/WContainerWidget>
#include <Wt/WEnvironment>
#include <Wt/Test/WTestEnvironment>

#include "globals.hpp"

int luawt_Application_make(lua_State* L) {
    WEnvironment* env = reinterpret_cast<WEnvironment*>(
        lua_touserdata(L, 1)
    );
    luawt_Application* app = new luawt_Application(L, *env);
    luawt_toLua(L, app);
    return 1;
}

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
        wrap<luawt_Application_make>::func,
        0,
        luawt_Application_methods,
        0
    );
}
