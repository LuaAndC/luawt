#include "boost-xtime.hpp"

#include <Wt/WViewWidget>

#include "globals.hpp"

static const char* WViewWidget_load_args0[] = {luawt_typeToStr<WViewWidget>(), NULL};
static const char* const* const luawt_WViewWidget_load_args[] = {WViewWidget_load_args0, NULL};

int luawt_WViewWidget_load(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WViewWidget_load_args);
    WViewWidget* self = luawt_checkFromLua<WViewWidget>(L, 1);
    if (index == 0) {
    self->load();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WViewWidget.load");
    }
}

static const char* WViewWidget_update_args0[] = {luawt_typeToStr<WViewWidget>(), NULL};
static const char* const* const luawt_WViewWidget_update_args[] = {WViewWidget_update_args0, NULL};

int luawt_WViewWidget_update(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WViewWidget_update_args);
    WViewWidget* self = luawt_checkFromLua<WViewWidget>(L, 1);
    if (index == 0) {
    self->update();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WViewWidget.update");
    }
}

static const char* WViewWidget_refresh_args0[] = {luawt_typeToStr<WViewWidget>(), NULL};
static const char* const* const luawt_WViewWidget_refresh_args[] = {WViewWidget_refresh_args0, NULL};

int luawt_WViewWidget_refresh(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WViewWidget_refresh_args);
    WViewWidget* self = luawt_checkFromLua<WViewWidget>(L, 1);
    if (index == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WViewWidget.refresh");
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
