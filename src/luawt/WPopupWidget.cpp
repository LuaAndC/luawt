#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WPopupWidget>

#include "enums.hpp"
#include "globals.hpp"

static const char* WPopupWidget_orientation_args0[] = {luawt_typeToStr<WPopupWidget>(), NULL};
static const char* const* const luawt_WPopupWidget_orientation_args[] = {WPopupWidget_orientation_args0, NULL};

int luawt_WPopupWidget_orientation(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupWidget_orientation_args);
    WPopupWidget* self = luawt_checkFromLua<WPopupWidget>(L, 1);
    if (index == 0) {
    Wt::Orientation l_result = self->orientation();
    luawt_returnEnum(L, luawt_enum_Orientation_str, luawt_enum_Orientation_val, l_result, "Orientation");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPopupWidget.orientation");
    }
}

static const char* WPopupWidget_isTransient_args0[] = {luawt_typeToStr<WPopupWidget>(), NULL};
static const char* const* const luawt_WPopupWidget_isTransient_args[] = {WPopupWidget_isTransient_args0, NULL};

int luawt_WPopupWidget_isTransient(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupWidget_isTransient_args);
    WPopupWidget* self = luawt_checkFromLua<WPopupWidget>(L, 1);
    if (index == 0) {
    bool l_result = self->isTransient();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPopupWidget.isTransient");
    }
}

static const char* WPopupWidget_autoHideDelay_args0[] = {luawt_typeToStr<WPopupWidget>(), NULL};
static const char* const* const luawt_WPopupWidget_autoHideDelay_args[] = {WPopupWidget_autoHideDelay_args0, NULL};

int luawt_WPopupWidget_autoHideDelay(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupWidget_autoHideDelay_args);
    WPopupWidget* self = luawt_checkFromLua<WPopupWidget>(L, 1);
    if (index == 0) {
    int l_result = self->autoHideDelay();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPopupWidget.autoHideDelay");
    }
}

static const char* WPopupWidget_setTransient_args0[] = {luawt_typeToStr<WPopupWidget>(), "bool", NULL};
static const char* WPopupWidget_setTransient_args1[] = {luawt_typeToStr<WPopupWidget>(), "bool", "int", NULL};
static const char* const* const luawt_WPopupWidget_setTransient_args[] = {WPopupWidget_setTransient_args0, WPopupWidget_setTransient_args1, NULL};

int luawt_WPopupWidget_setTransient(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupWidget_setTransient_args);
    WPopupWidget* self = luawt_checkFromLua<WPopupWidget>(L, 1);
    if (index == 0) {
    bool transient = lua_toboolean(L, 2);
    self->setTransient(transient);
    return 0;
    
    } else if (index == 1) {
    bool transient = lua_toboolean(L, 2);
    int autoHideDelay = lua_tointeger(L, 3);
    self->setTransient(transient, autoHideDelay);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPopupWidget.setTransient");
    }
}

static const char* WPopupWidget_setAnchorWidget_args0[] = {luawt_typeToStr<WPopupWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WPopupWidget_setAnchorWidget_args1[] = {luawt_typeToStr<WPopupWidget>(), luawt_typeToStr<Wt::WWidget>(), "enum", NULL};
static const char* const* const luawt_WPopupWidget_setAnchorWidget_args[] = {WPopupWidget_setAnchorWidget_args0, WPopupWidget_setAnchorWidget_args1, NULL};

int luawt_WPopupWidget_setAnchorWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupWidget_setAnchorWidget_args);
    WPopupWidget* self = luawt_checkFromLua<WPopupWidget>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->setAnchorWidget(widget);
    return 0;
    
    } else if (index == 1) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    Wt::Orientation orientation = static_cast<Wt::Orientation>(luawt_getEnum(
        L,
        luawt_enum_Orientation_str,
        luawt_enum_Orientation_val,
        3,
        "Wrong enum type in args of WPopupWidget.setAnchorWidget"
    ));
    self->setAnchorWidget(widget, orientation);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPopupWidget.setAnchorWidget");
    }
}

static const char* WPopupWidget_anchorWidget_args0[] = {luawt_typeToStr<WPopupWidget>(), NULL};
static const char* const* const luawt_WPopupWidget_anchorWidget_args[] = {WPopupWidget_anchorWidget_args0, NULL};

int luawt_WPopupWidget_anchorWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupWidget_anchorWidget_args);
    WPopupWidget* self = luawt_checkFromLua<WPopupWidget>(L, 1);
    if (index == 0) {
    Wt::WWidget * l_result = self->anchorWidget();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPopupWidget.anchorWidget");
    }
}


static const luaL_Reg luawt_WPopupWidget_methods[] = {
    METHOD(WPopupWidget, setAnchorWidget),
    METHOD(WPopupWidget, anchorWidget),
    METHOD(WPopupWidget, orientation),
    METHOD(WPopupWidget, setTransient),
    METHOD(WPopupWidget, isTransient),
    METHOD(WPopupWidget, autoHideDelay),
    {NULL, NULL},
};

void luawt_WPopupWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WPopupWidget,
        L,
        0,
        0,
        luawt_WPopupWidget_methods,
        base
    );
}
