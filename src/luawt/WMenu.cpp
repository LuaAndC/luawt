#include "boost-xtime.hpp"

#include <Wt/WStackedWidget>
#include <Wt/WMenu>
#include <Wt/WContainerWidget>

#include "globals.hpp"

static const char* WMenu_make_args0[] = {"int", NULL};
static const char* WMenu_make_args1[] = {"int", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WMenu_make_args2[] = {luawt_typeToStr<Wt::WStackedWidget>(), "int", NULL};
static const char* WMenu_make_args3[] = {luawt_typeToStr<Wt::WStackedWidget>(), "int", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WMenu_make_args[] = {WMenu_make_args0, WMenu_make_args1, WMenu_make_args2, WMenu_make_args3, NULL};

int luawt_WMenu_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_make_args);
    if (index == 0) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 1));
    WMenu * result = new WMenu(orientation);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 1));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WMenu * result = new WMenu(orientation, parent);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
    Wt::WStackedWidget* contentsStack =
        luawt_checkFromLua<Wt::WStackedWidget>(L, 1);
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 2));
    WMenu * result = new WMenu(contentsStack, orientation);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 3) {
    Wt::WStackedWidget* contentsStack =
        luawt_checkFromLua<Wt::WStackedWidget>(L, 1);
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 2));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 3);
    WMenu * result = new WMenu(contentsStack, orientation, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.make");
    }
}

static const char* WMenu_isItemHidden_args0[] = {luawt_typeToStr<WMenu>(), "int", NULL};
static const char* const* const luawt_WMenu_isItemHidden_args[] = {WMenu_isItemHidden_args0, NULL};

int luawt_WMenu_isItemHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_isItemHidden_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    bool result = self->isItemHidden(index);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.isItemHidden");
    }
}

static const char* WMenu_isItemDisabled_args0[] = {luawt_typeToStr<WMenu>(), "int", NULL};
static const char* const* const luawt_WMenu_isItemDisabled_args[] = {WMenu_isItemDisabled_args0, NULL};

int luawt_WMenu_isItemDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_isItemDisabled_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    bool result = self->isItemDisabled(index);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.isItemDisabled");
    }
}

static const char* WMenu_orientation_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_orientation_args[] = {WMenu_orientation_args0, NULL};

int luawt_WMenu_orientation(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_orientation_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::Orientation result = self->orientation();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.orientation");
    }
}

static const char* WMenu_internalBasePath_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_internalBasePath_args[] = {WMenu_internalBasePath_args0, NULL};

int luawt_WMenu_internalBasePath(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_internalBasePath_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    std::string const & result = self->internalBasePath();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.internalBasePath");
    }
}

static const char* WMenu_setItemDisabled_args0[] = {luawt_typeToStr<WMenu>(), "int", "bool", NULL};
static const char* const* const luawt_WMenu_setItemDisabled_args[] = {WMenu_setItemDisabled_args0, NULL};

int luawt_WMenu_setItemDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_setItemDisabled_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    bool disabled = lua_toboolean(L, 3);
    self->setItemDisabled(index, disabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.setItemDisabled");
    }
}

static const char* WMenu_setInternalPathEnabled_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* WMenu_setInternalPathEnabled_args1[] = {luawt_typeToStr<WMenu>(), "char const *", NULL};
static const char* const* const luawt_WMenu_setInternalPathEnabled_args[] = {WMenu_setInternalPathEnabled_args0, WMenu_setInternalPathEnabled_args1, NULL};

int luawt_WMenu_setInternalPathEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_setInternalPathEnabled_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    self->setInternalPathEnabled();
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string basePath = std::string(raw2);
    self->setInternalPathEnabled(basePath);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.setInternalPathEnabled");
    }
}

static const char* WMenu_internalPathEnabled_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_internalPathEnabled_args[] = {WMenu_internalPathEnabled_args0, NULL};

int luawt_WMenu_internalPathEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_internalPathEnabled_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    bool result = self->internalPathEnabled();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.internalPathEnabled");
    }
}

static const char* WMenu_renderAsList_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_renderAsList_args[] = {WMenu_renderAsList_args0, NULL};

int luawt_WMenu_renderAsList(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_renderAsList_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    bool result = self->renderAsList();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.renderAsList");
    }
}

static const char* WMenu_currentIndex_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_currentIndex_args[] = {WMenu_currentIndex_args0, NULL};

int luawt_WMenu_currentIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_currentIndex_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    int result = self->currentIndex();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.currentIndex");
    }
}

static const char* WMenu_setRenderAsList_args0[] = {luawt_typeToStr<WMenu>(), "bool", NULL};
static const char* const* const luawt_WMenu_setRenderAsList_args[] = {WMenu_setRenderAsList_args0, NULL};

int luawt_WMenu_setRenderAsList(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_setRenderAsList_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    bool enable = lua_toboolean(L, 2);
    self->setRenderAsList(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.setRenderAsList");
    }
}

static const char* WMenu_setItemHidden_args0[] = {luawt_typeToStr<WMenu>(), "int", "bool", NULL};
static const char* const* const luawt_WMenu_setItemHidden_args[] = {WMenu_setItemHidden_args0, NULL};

int luawt_WMenu_setItemHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_setItemHidden_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    bool hidden = lua_toboolean(L, 3);
    self->setItemHidden(index, hidden);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.setItemHidden");
    }
}

static const char* WMenu_close_args0[] = {luawt_typeToStr<WMenu>(), "int", NULL};
static const char* const* const luawt_WMenu_close_args[] = {WMenu_close_args0, NULL};

int luawt_WMenu_close(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_close_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    self->close(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.close");
    }
}

static const char* WMenu_contentsStack_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_contentsStack_args[] = {WMenu_contentsStack_args0, NULL};

int luawt_WMenu_contentsStack(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_contentsStack_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WStackedWidget * result = self->contentsStack();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.contentsStack");
    }
}

static const char* WMenu_setInternalBasePath_args0[] = {luawt_typeToStr<WMenu>(), "char const *", NULL};
static const char* const* const luawt_WMenu_setInternalBasePath_args[] = {WMenu_setInternalBasePath_args0, NULL};

int luawt_WMenu_setInternalBasePath(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_setInternalBasePath_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string basePath = std::string(raw2);
    self->setInternalBasePath(basePath);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.setInternalBasePath");
    }
}

static const char* WMenu_select_args0[] = {luawt_typeToStr<WMenu>(), "int", NULL};
static const char* const* const luawt_WMenu_select_args[] = {WMenu_select_args0, NULL};

int luawt_WMenu_select(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_select_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    self->select(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.select");
    }
}


static const luaL_Reg luawt_WMenu_methods[] = {
    METHOD(WMenu, select),
    METHOD(WMenu, close),
    METHOD(WMenu, setItemHidden),
    METHOD(WMenu, isItemHidden),
    METHOD(WMenu, setItemDisabled),
    METHOD(WMenu, isItemDisabled),
    METHOD(WMenu, currentIndex),
    METHOD(WMenu, orientation),
    METHOD(WMenu, setRenderAsList),
    METHOD(WMenu, renderAsList),
    METHOD(WMenu, setInternalPathEnabled),
    METHOD(WMenu, internalPathEnabled),
    METHOD(WMenu, setInternalBasePath),
    METHOD(WMenu, internalBasePath),
    METHOD(WMenu, contentsStack),
    {NULL, NULL},
};

void luawt_WMenu(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WMenu,
        L,
        wrap<luawt_WMenu_make>::func,
        0,
        luawt_WMenu_methods,
        base
    );
}
