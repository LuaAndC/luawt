#include "boost-xtime.hpp"

#include <Wt/WViewWidget>

#include "globals.hpp"

int luawt_WViewWidget_load(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WViewWidget* self = luawt_checkFromLua<WViewWidget>(L, 1);
        if (argc == 0) {
    self->load();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WViewWidget.load: %d", argc);
    }
}

int luawt_WViewWidget_update(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WViewWidget* self = luawt_checkFromLua<WViewWidget>(L, 1);
        if (argc == 0) {
    self->update();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WViewWidget.update: %d", argc);
    }
}

int luawt_WViewWidget_refresh(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WViewWidget* self = luawt_checkFromLua<WViewWidget>(L, 1);
        if (argc == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WViewWidget.refresh: %d", argc);
    }
}


static const luaL_Reg luawt_WViewWidget_methods[] = {
    METHOD(WViewWidget, update),
    METHOD(WViewWidget, load),
    METHOD(WViewWidget, refresh),
    {NULL, NULL},
};

void luawt_WViewWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WWebWidget>();
    assert(base);
    DECLARE_CLASS(
        WViewWidget,
        L,
        0,
        0,
        luawt_WViewWidget_methods,
        base
    );
}
