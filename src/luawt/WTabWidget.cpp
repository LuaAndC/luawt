#include "boost-xtime.hpp"

#include <Wt/WStackedWidget>
#include <Wt/WTabWidget>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WTabWidget_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTabWidget * result = new WTabWidget(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.make: %d", argc);
    }
}

int luawt_WTabWidget_count(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 0) {
    int result = self->count();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.count: %d", argc);
    }
}

int luawt_WTabWidget_isTabCloseable(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    bool result = self->isTabCloseable(index);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.isTabCloseable: %d", argc);
    }
}

int luawt_WTabWidget_setTabText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 2) {
    int index = lua_tointeger(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString label = Wt::WString(raw3);
    self->setTabText(index, label);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.setTabText: %d", argc);
    }
}

int luawt_WTabWidget_contentsStack(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 0) {
    Wt::WStackedWidget * result = self->contentsStack();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.contentsStack: %d", argc);
    }
}

int luawt_WTabWidget_isTabHidden(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    bool result = self->isTabHidden(index);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.isTabHidden: %d", argc);
    }
}

int luawt_WTabWidget_setTabToolTip(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 2) {
    int index = lua_tointeger(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString tip = Wt::WString(raw3);
    self->setTabToolTip(index, tip);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.setTabToolTip: %d", argc);
    }
}

int luawt_WTabWidget_isTabEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    bool result = self->isTabEnabled(index);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.isTabEnabled: %d", argc);
    }
}

int luawt_WTabWidget_internalBasePath(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 0) {
    std::string const & result = self->internalBasePath();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.internalBasePath: %d", argc);
    }
}

int luawt_WTabWidget_setInternalBasePath(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string path = std::string(raw2);
    self->setInternalBasePath(path);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.setInternalBasePath: %d", argc);
    }
}

int luawt_WTabWidget_setInternalPathEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string basePath = std::string(raw2);
    self->setInternalPathEnabled(basePath);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.setInternalPathEnabled: %d", argc);
    }
}

int luawt_WTabWidget_internalPathEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 0) {
    bool result = self->internalPathEnabled();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.internalPathEnabled: %d", argc);
    }
}

int luawt_WTabWidget_tabText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    Wt::WString const & result = self->tabText(index);
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.tabText: %d", argc);
    }
}

int luawt_WTabWidget_setTabEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 2) {
    int index = lua_tointeger(L, 2);
    bool enable = lua_toboolean(L, 3);
    self->setTabEnabled(index, enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.setTabEnabled: %d", argc);
    }
}

int luawt_WTabWidget_currentIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 0) {
    int result = self->currentIndex();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.currentIndex: %d", argc);
    }
}

int luawt_WTabWidget_setCurrentIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    self->setCurrentIndex(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.setCurrentIndex: %d", argc);
    }
}

int luawt_WTabWidget_closeTab(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    self->closeTab(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.closeTab: %d", argc);
    }
}

int luawt_WTabWidget_setTabCloseable(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 2) {
    int index = lua_tointeger(L, 2);
    bool closeable = lua_toboolean(L, 3);
    self->setTabCloseable(index, closeable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.setTabCloseable: %d", argc);
    }
}

int luawt_WTabWidget_setTabHidden(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 2) {
    int index = lua_tointeger(L, 2);
    bool hidden = lua_toboolean(L, 3);
    self->setTabHidden(index, hidden);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.setTabHidden: %d", argc);
    }
}

int luawt_WTabWidget_tabToolTip(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    Wt::WString const & result = self->tabToolTip(index);
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTabWidget.tabToolTip: %d", argc);
    }
}


static const luaL_Reg luawt_WTabWidget_methods[] = {
    METHOD(WTabWidget, count),
    METHOD(WTabWidget, setCurrentIndex),
    METHOD(WTabWidget, currentIndex),
    METHOD(WTabWidget, setTabEnabled),
    METHOD(WTabWidget, isTabEnabled),
    METHOD(WTabWidget, setTabHidden),
    METHOD(WTabWidget, isTabHidden),
    METHOD(WTabWidget, setTabCloseable),
    METHOD(WTabWidget, isTabCloseable),
    METHOD(WTabWidget, setTabText),
    METHOD(WTabWidget, tabText),
    METHOD(WTabWidget, setTabToolTip),
    METHOD(WTabWidget, tabToolTip),
    METHOD(WTabWidget, setInternalPathEnabled),
    METHOD(WTabWidget, internalPathEnabled),
    METHOD(WTabWidget, setInternalBasePath),
    METHOD(WTabWidget, internalBasePath),
    METHOD(WTabWidget, closeTab),
    METHOD(WTabWidget, contentsStack),
    {NULL, NULL},
};

void luawt_WTabWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WTabWidget,
        L,
        wrap<luawt_WTabWidget_make>::func,
        0,
        luawt_WTabWidget_methods,
        base
    );
}
