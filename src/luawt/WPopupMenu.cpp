#include "boost-xtime.hpp"

#include <Wt/WStackedWidget>
#include <Wt/WInteractWidget>
#include <Wt/WPopupMenu>
#include <Wt/WMenuItem>

#include "globals.hpp"

int luawt_WPopupMenu_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WStackedWidget* contentsStack =
        luawt_checkFromLua<Wt::WStackedWidget>(L, 1);
    WPopupMenu * result = new WPopupMenu(contentsStack);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPopupMenu.make: %d", argc);
    }
}

int luawt_WPopupMenu_setButton(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPopupMenu* self = luawt_checkFromLua<WPopupMenu>(L, 1);
        if (argc == 1) {
    Wt::WInteractWidget* button =
        luawt_checkFromLua<Wt::WInteractWidget>(L, 2);
    self->setButton(button);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPopupMenu.setButton: %d", argc);
    }
}

int luawt_WPopupMenu_setAutoHide(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPopupMenu* self = luawt_checkFromLua<WPopupMenu>(L, 1);
        if (argc == 2) {
    bool enabled = lua_toboolean(L, 2);
    int autoHideDelay = lua_tointeger(L, 3);
    self->setAutoHide(enabled, autoHideDelay);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPopupMenu.setAutoHide: %d", argc);
    }
}

int luawt_WPopupMenu_result(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPopupMenu* self = luawt_checkFromLua<WPopupMenu>(L, 1);
        if (argc == 0) {
    Wt::WMenuItem * result = self->result();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPopupMenu.result: %d", argc);
    }
}


static const luaL_Reg luawt_WPopupMenu_methods[] = {
    METHOD(WPopupMenu, setButton),
    METHOD(WPopupMenu, result),
    METHOD(WPopupMenu, setAutoHide),
    {NULL, NULL},
};

void luawt_WPopupMenu(lua_State* L) {
    const char* base = luawt_typeToStr<WMenu>();
    assert(base);
    DECLARE_CLASS(
        WPopupMenu,
        L,
        wrap<luawt_WPopupMenu_make>::func,
        0,
        luawt_WPopupMenu_methods,
        base
    );
}
