#include "boost-xtime.hpp"

#include <Wt/WLength>
#include <Wt/WInteractWidget>
#include <Wt/WMenuItem>
#include <Wt/WWidget>
#include <Wt/WStackedWidget>
#include <Wt/WPopupMenu>

#include "globals.hpp"

static const char* WPopupMenu_make_args0[] = {NULL};
static const char* WPopupMenu_make_args1[] = {luawt_typeToStr<Wt::WStackedWidget>(), NULL};
static const char* const* const luawt_WPopupMenu_make_args[] = {WPopupMenu_make_args0, WPopupMenu_make_args1, NULL};

int luawt_WPopupMenu_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupMenu_make_args);
    if (index == 0) {
    WPopupMenu * l_result = new WPopupMenu();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WPopupMenu");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WStackedWidget* contentsStack =
        luawt_checkFromLua<Wt::WStackedWidget>(L, 1);
    WPopupMenu * l_result = new WPopupMenu(contentsStack);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WPopupMenu");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPopupMenu.make");
    }
}

static const char* WPopupMenu_popup_args0[] = {luawt_typeToStr<WPopupMenu>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WPopupMenu_popup_args1[] = {luawt_typeToStr<WPopupMenu>(), luawt_typeToStr<Wt::WWidget>(), "int", NULL};
static const char* const* const luawt_WPopupMenu_popup_args[] = {WPopupMenu_popup_args0, WPopupMenu_popup_args1, NULL};

int luawt_WPopupMenu_popup(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupMenu_popup_args);
    WPopupMenu* self = luawt_checkFromLua<WPopupMenu>(L, 1);
    if (index == 0) {
    Wt::WWidget* location =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->popup(location);
    return 0;
    
    } else if (index == 1) {
    Wt::WWidget* location =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 3));
    self->popup(location, orientation);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPopupMenu.popup");
    }
}

static const char* WPopupMenu_setButton_args0[] = {luawt_typeToStr<WPopupMenu>(), luawt_typeToStr<Wt::WInteractWidget>(), NULL};
static const char* const* const luawt_WPopupMenu_setButton_args[] = {WPopupMenu_setButton_args0, NULL};

int luawt_WPopupMenu_setButton(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupMenu_setButton_args);
    WPopupMenu* self = luawt_checkFromLua<WPopupMenu>(L, 1);
    if (index == 0) {
    Wt::WInteractWidget* button =
        luawt_checkFromLua<Wt::WInteractWidget>(L, 2);
    self->setButton(button);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPopupMenu.setButton");
    }
}

static const char* WPopupMenu_exec_args0[] = {luawt_typeToStr<WPopupMenu>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WPopupMenu_exec_args1[] = {luawt_typeToStr<WPopupMenu>(), luawt_typeToStr<Wt::WWidget>(), "int", NULL};
static const char* const* const luawt_WPopupMenu_exec_args[] = {WPopupMenu_exec_args0, WPopupMenu_exec_args1, NULL};

int luawt_WPopupMenu_exec(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupMenu_exec_args);
    WPopupMenu* self = luawt_checkFromLua<WPopupMenu>(L, 1);
    if (index == 0) {
    Wt::WWidget* location =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    Wt::WMenuItem * l_result = self->exec(location);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WWidget* location =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 3));
    Wt::WMenuItem * l_result = self->exec(location, orientation);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPopupMenu.exec");
    }
}

static const char* WPopupMenu_setMinimumSize_args0[] = {luawt_typeToStr<WPopupMenu>(), "double", "double", NULL};
static const char* const* const luawt_WPopupMenu_setMinimumSize_args[] = {WPopupMenu_setMinimumSize_args0, NULL};

int luawt_WPopupMenu_setMinimumSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupMenu_setMinimumSize_args);
    WPopupMenu* self = luawt_checkFromLua<WPopupMenu>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength width = Wt::WLength(raw2);
    double raw3 = lua_tonumber(L, 3);
    Wt::WLength height = Wt::WLength(raw3);
    self->setMinimumSize(width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPopupMenu.setMinimumSize");
    }
}

static const char* WPopupMenu_result_args0[] = {luawt_typeToStr<WPopupMenu>(), NULL};
static const char* const* const luawt_WPopupMenu_result_args[] = {WPopupMenu_result_args0, NULL};

int luawt_WPopupMenu_result(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupMenu_result_args);
    WPopupMenu* self = luawt_checkFromLua<WPopupMenu>(L, 1);
    if (index == 0) {
    Wt::WMenuItem * l_result = self->result();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPopupMenu.result");
    }
}

static const char* WPopupMenu_setAutoHide_args0[] = {luawt_typeToStr<WPopupMenu>(), "bool", NULL};
static const char* WPopupMenu_setAutoHide_args1[] = {luawt_typeToStr<WPopupMenu>(), "bool", "int", NULL};
static const char* const* const luawt_WPopupMenu_setAutoHide_args[] = {WPopupMenu_setAutoHide_args0, WPopupMenu_setAutoHide_args1, NULL};

int luawt_WPopupMenu_setAutoHide(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupMenu_setAutoHide_args);
    WPopupMenu* self = luawt_checkFromLua<WPopupMenu>(L, 1);
    if (index == 0) {
    bool enabled = lua_toboolean(L, 2);
    self->setAutoHide(enabled);
    return 0;
    
    } else if (index == 1) {
    bool enabled = lua_toboolean(L, 2);
    int autoHideDelay = lua_tointeger(L, 3);
    self->setAutoHide(enabled, autoHideDelay);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPopupMenu.setAutoHide");
    }
}

static const char* WPopupMenu_setMaximumSize_args0[] = {luawt_typeToStr<WPopupMenu>(), "double", "double", NULL};
static const char* const* const luawt_WPopupMenu_setMaximumSize_args[] = {WPopupMenu_setMaximumSize_args0, NULL};

int luawt_WPopupMenu_setMaximumSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPopupMenu_setMaximumSize_args);
    WPopupMenu* self = luawt_checkFromLua<WPopupMenu>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength width = Wt::WLength(raw2);
    double raw3 = lua_tonumber(L, 3);
    Wt::WLength height = Wt::WLength(raw3);
    self->setMaximumSize(width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPopupMenu.setMaximumSize");
    }
}


static const luaL_Reg luawt_WPopupMenu_methods[] = {
    METHOD(WPopupMenu, setButton),
    METHOD(WPopupMenu, popup),
    METHOD(WPopupMenu, exec),
    METHOD(WPopupMenu, result),
    METHOD(WPopupMenu, setMaximumSize),
    METHOD(WPopupMenu, setMinimumSize),
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
