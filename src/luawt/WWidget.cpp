/* luawt, Lua bindings for Wt
 * Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "boost-xtime.hpp"
#include <Wt/WWidget>

#include "globals.hpp"

int luawt_WWidget_id(lua_State* L) {
    WWidget* widget = luawt_checkFromLua<WWidget>(L, -1);
    std::string id = widget->id();
    lua_pushstring(L, id.c_str());
    return 1;
}

static const luaL_Reg luawt_WWidget_methods[] = {
    METHOD(WWidget, id),
    {NULL, NULL},
};

void luawt_WWidget(lua_State* L) {
    DECLARE_CLASS(
        WWidget,
        L,
        0,
        0,
        luawt_WWidget_methods,
        0
    );
}
