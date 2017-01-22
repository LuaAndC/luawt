#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WPanel>
#include <Wt/WContainerWidget>
#include <Wt/WIconPair>
#include <Wt/WString>

#include "globals.hpp"

static const char* WPanel_make_args0[] = {NULL};
static const char* WPanel_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WPanel_make_args[] = {WPanel_make_args0, WPanel_make_args1, NULL};

int luawt_WPanel_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_make_args);
    if (index == 0) {
    WPanel * result = new WPanel();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WPanel");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WPanel * result = new WPanel(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPanel.make");
    }
}

static const char* WPanel_isCollapsed_args0[] = {luawt_typeToStr<WPanel>(), NULL};
static const char* const* const luawt_WPanel_isCollapsed_args[] = {WPanel_isCollapsed_args0, NULL};

int luawt_WPanel_isCollapsed(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_isCollapsed_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    bool result = self->isCollapsed();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPanel.isCollapsed");
    }
}

static const char* WPanel_setCentralWidget_args0[] = {luawt_typeToStr<WPanel>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WPanel_setCentralWidget_args[] = {WPanel_setCentralWidget_args0, NULL};

int luawt_WPanel_setCentralWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_setCentralWidget_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    Wt::WWidget* arg0 =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->setCentralWidget(arg0);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPanel.setCentralWidget");
    }
}

static const char* WPanel_collapse_args0[] = {luawt_typeToStr<WPanel>(), NULL};
static const char* const* const luawt_WPanel_collapse_args[] = {WPanel_collapse_args0, NULL};

int luawt_WPanel_collapse(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_collapse_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    self->collapse();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPanel.collapse");
    }
}

static const char* WPanel_setCollapsible_args0[] = {luawt_typeToStr<WPanel>(), "bool", NULL};
static const char* const* const luawt_WPanel_setCollapsible_args[] = {WPanel_setCollapsible_args0, NULL};

int luawt_WPanel_setCollapsible(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_setCollapsible_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    bool on = lua_toboolean(L, 2);
    self->setCollapsible(on);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPanel.setCollapsible");
    }
}

static const char* WPanel_title_args0[] = {luawt_typeToStr<WPanel>(), NULL};
static const char* const* const luawt_WPanel_title_args[] = {WPanel_title_args0, NULL};

int luawt_WPanel_title(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_title_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    Wt::WString result = self->title();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPanel.title");
    }
}

static const char* WPanel_setTitle_args0[] = {luawt_typeToStr<WPanel>(), "char const *", NULL};
static const char* const* const luawt_WPanel_setTitle_args[] = {WPanel_setTitle_args0, NULL};

int luawt_WPanel_setTitle(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_setTitle_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString title = Wt::WString(raw2);
    self->setTitle(title);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPanel.setTitle");
    }
}

static const char* WPanel_collapseIcon_args0[] = {luawt_typeToStr<WPanel>(), NULL};
static const char* const* const luawt_WPanel_collapseIcon_args[] = {WPanel_collapseIcon_args0, NULL};

int luawt_WPanel_collapseIcon(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_collapseIcon_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    Wt::WIconPair * result = self->collapseIcon();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPanel.collapseIcon");
    }
}

static const char* WPanel_isCollapsible_args0[] = {luawt_typeToStr<WPanel>(), NULL};
static const char* const* const luawt_WPanel_isCollapsible_args[] = {WPanel_isCollapsible_args0, NULL};

int luawt_WPanel_isCollapsible(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_isCollapsible_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    bool result = self->isCollapsible();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPanel.isCollapsible");
    }
}

static const char* WPanel_titleBarWidget_args0[] = {luawt_typeToStr<WPanel>(), NULL};
static const char* const* const luawt_WPanel_titleBarWidget_args[] = {WPanel_titleBarWidget_args0, NULL};

int luawt_WPanel_titleBarWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_titleBarWidget_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    Wt::WContainerWidget * result = self->titleBarWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPanel.titleBarWidget");
    }
}

static const char* WPanel_expand_args0[] = {luawt_typeToStr<WPanel>(), NULL};
static const char* const* const luawt_WPanel_expand_args[] = {WPanel_expand_args0, NULL};

int luawt_WPanel_expand(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_expand_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    self->expand();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPanel.expand");
    }
}

static const char* WPanel_centralWidget_args0[] = {luawt_typeToStr<WPanel>(), NULL};
static const char* const* const luawt_WPanel_centralWidget_args[] = {WPanel_centralWidget_args0, NULL};

int luawt_WPanel_centralWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_centralWidget_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    Wt::WWidget * result = self->centralWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPanel.centralWidget");
    }
}

static const char* WPanel_setCollapsed_args0[] = {luawt_typeToStr<WPanel>(), "bool", NULL};
static const char* const* const luawt_WPanel_setCollapsed_args[] = {WPanel_setCollapsed_args0, NULL};

int luawt_WPanel_setCollapsed(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_setCollapsed_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    bool on = lua_toboolean(L, 2);
    self->setCollapsed(on);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPanel.setCollapsed");
    }
}

static const char* WPanel_titleBar_args0[] = {luawt_typeToStr<WPanel>(), NULL};
static const char* const* const luawt_WPanel_titleBar_args[] = {WPanel_titleBar_args0, NULL};

int luawt_WPanel_titleBar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_titleBar_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    bool result = self->titleBar();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPanel.titleBar");
    }
}

static const char* WPanel_setTitleBar_args0[] = {luawt_typeToStr<WPanel>(), "bool", NULL};
static const char* const* const luawt_WPanel_setTitleBar_args[] = {WPanel_setTitleBar_args0, NULL};

int luawt_WPanel_setTitleBar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPanel_setTitleBar_args);
    WPanel* self = luawt_checkFromLua<WPanel>(L, 1);
    if (index == 0) {
    bool enable = lua_toboolean(L, 2);
    self->setTitleBar(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPanel.setTitleBar");
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
    METHOD(WPanel, setCentralWidget),
    METHOD(WPanel, centralWidget),
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
