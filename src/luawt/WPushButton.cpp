/* luawt, Lua bindings for Wt
 * Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "boost-xtime.hpp"
#include <Wt/WApplication>
#include <Wt/WPushButton>
#include <Wt/WServer>
#include <Wt/WText>

#include "globals.hpp"

int luawt_WPushButton_make(lua_State* L) {
    WContainerWidget* container =
        luawt_checkFromLua<WContainerWidget>(L, -1);
    WPushButton* button = new WPushButton(container);
    luawt_toLua(L, button);
    return 1;
}

int luawt_WPushButton_setText(lua_State* L) {
    WPushButton* button =
        luawt_checkFromLua<WPushButton>(L, 1);
    const char* wstr = luaL_checkstring(L, 2);
    bool ok = button->setText(WString::fromUTF8(wstr));
    lua_pushboolean(L, ok);
    return 1;
}

static const luaL_Reg luawt_WPushButton_methods[] = {
    METHOD(WPushButton, setText),
    {NULL, NULL},
};

void luawt_WPushButton(lua_State* L) {
    const char* base = luawt_typeToStr<WWidget>();
    assert(base);
    DECLARE_CLASS(
        WPushButton,
        L,
        wrap<luawt_WPushButton_make>::func,
        0,
        luawt_WPushButton_methods,
        base
    );
}
