#include "boost-xtime.hpp"

#include <Wt/WStackedWidget>
#include <Wt/WMenu>
#include <Wt/WContainerWidget>

#include "globals.hpp"

int luawt_WMenu_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 2) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 1));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WMenu * result = new WMenu(orientation, parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 3) {
    Wt::WStackedWidget* contentsStack =
        luawt_checkFromLua<Wt::WStackedWidget>(L, 1);
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 2));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 3);
    WMenu * result = new WMenu(contentsStack, orientation, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.make: %d", argc);
    }
}

int luawt_WMenu_isItemHidden(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    bool result = self->isItemHidden(index);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.isItemHidden: %d", argc);
    }
}

int luawt_WMenu_isItemDisabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    bool result = self->isItemDisabled(index);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.isItemDisabled: %d", argc);
    }
}

int luawt_WMenu_orientation(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 0) {
    Wt::Orientation result = self->orientation();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.orientation: %d", argc);
    }
}

int luawt_WMenu_internalBasePath(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 0) {
    std::string const & result = self->internalBasePath();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.internalBasePath: %d", argc);
    }
}

int luawt_WMenu_setItemDisabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 2) {
    int index = lua_tointeger(L, 2);
    bool disabled = lua_toboolean(L, 3);
    self->setItemDisabled(index, disabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.setItemDisabled: %d", argc);
    }
}

int luawt_WMenu_setInternalPathEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string basePath = std::string(raw2);
    self->setInternalPathEnabled(basePath);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.setInternalPathEnabled: %d", argc);
    }
}

int luawt_WMenu_internalPathEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 0) {
    bool result = self->internalPathEnabled();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.internalPathEnabled: %d", argc);
    }
}

int luawt_WMenu_renderAsList(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 0) {
    bool result = self->renderAsList();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.renderAsList: %d", argc);
    }
}

int luawt_WMenu_currentIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 0) {
    int result = self->currentIndex();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.currentIndex: %d", argc);
    }
}

int luawt_WMenu_setRenderAsList(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 1) {
    bool enable = lua_toboolean(L, 2);
    self->setRenderAsList(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.setRenderAsList: %d", argc);
    }
}

int luawt_WMenu_setItemHidden(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 2) {
    int index = lua_tointeger(L, 2);
    bool hidden = lua_toboolean(L, 3);
    self->setItemHidden(index, hidden);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.setItemHidden: %d", argc);
    }
}

int luawt_WMenu_close(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    self->close(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.close: %d", argc);
    }
}

int luawt_WMenu_contentsStack(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 0) {
    Wt::WStackedWidget * result = self->contentsStack();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.contentsStack: %d", argc);
    }
}

int luawt_WMenu_setInternalBasePath(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string basePath = std::string(raw2);
    self->setInternalBasePath(basePath);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.setInternalBasePath: %d", argc);
    }
}

int luawt_WMenu_select(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    self->select(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMenu.select: %d", argc);
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
