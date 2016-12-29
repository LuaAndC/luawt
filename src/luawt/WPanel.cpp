#include "boost-xtime.hpp"

#include <Wt/WPanel>
#include <Wt/WContainerWidget>
#include <Wt/WIconPair>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WPanel_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WPanel * result = new WPanel(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.make: %d", argc);
    }
}

int luawt_WPanel_isCollapsed(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 0) {
    bool result = self->isCollapsed();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.isCollapsed: %d", argc);
    }
}

int luawt_WPanel_collapse(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 0) {
    self->collapse();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.collapse: %d", argc);
    }
}

int luawt_WPanel_setCollapsible(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 1) {
    bool on = lua_toboolean(L, 2);
    self->setCollapsible(on);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.setCollapsible: %d", argc);
    }
}

int luawt_WPanel_title(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->title();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.title: %d", argc);
    }
}

int luawt_WPanel_setTitle(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString title = Wt::WString(raw2);
    self->setTitle(title);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.setTitle: %d", argc);
    }
}

int luawt_WPanel_collapseIcon(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 0) {
    Wt::WIconPair * result = self->collapseIcon();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.collapseIcon: %d", argc);
    }
}

int luawt_WPanel_isCollapsible(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 0) {
    bool result = self->isCollapsible();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.isCollapsible: %d", argc);
    }
}

int luawt_WPanel_titleBarWidget(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 0) {
    Wt::WContainerWidget * result = self->titleBarWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.titleBarWidget: %d", argc);
    }
}

int luawt_WPanel_expand(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 0) {
    self->expand();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.expand: %d", argc);
    }
}

int luawt_WPanel_setCollapsed(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 1) {
    bool on = lua_toboolean(L, 2);
    self->setCollapsed(on);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.setCollapsed: %d", argc);
    }
}

int luawt_WPanel_titleBar(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 0) {
    bool result = self->titleBar();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.titleBar: %d", argc);
    }
}

int luawt_WPanel_setTitleBar(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
        if (argc == 1) {
    bool enable = lua_toboolean(L, 2);
    self->setTitleBar(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPanel.setTitleBar: %d", argc);
    }
}


static const luaL_Reg luawt_WPanel_methods[] = {
    METHOD(WPanel, setTitle),
    METHOD(WPanel, title),
    METHOD(WPanel, setTitleBar),
    METHOD(WPanel, titleBar),
    METHOD(WPanel, titleBarWidget),
    METHOD(WPanel, setCollapsible),
    METHOD(WPanel, isCollapsible),
    METHOD(WPanel, setCollapsed),
    METHOD(WPanel, isCollapsed),
    METHOD(WPanel, collapse),
    METHOD(WPanel, expand),
    METHOD(WPanel, collapseIcon),
    {NULL, NULL},
};

void luawt_WPanel(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WPanel,
        L,
        wrap<luawt_WPanel_make>::func,
        0,
        luawt_WPanel_methods,
        base
    );
}
