#include "boost-xtime.hpp"

#include <Wt/WToolBar>
#include <Wt/WWidget>
#include <Wt/WContainerWidget>

#include "enums.hpp"
#include "globals.hpp"

static const char* WToolBar_make_args0[] = {NULL};
static const char* WToolBar_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WToolBar_make_args[] = {WToolBar_make_args0, WToolBar_make_args1, NULL};

int luawt_WToolBar_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WToolBar_make_args);
    if (index == 0) {
    WToolBar * l_result = new WToolBar();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WToolBar");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WToolBar * l_result = new WToolBar(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WToolBar.make");
    }
}

static const char* WToolBar_count_args0[] = {luawt_typeToStr<WToolBar>(), NULL};
static const char* const* const luawt_WToolBar_count_args[] = {WToolBar_count_args0, NULL};

int luawt_WToolBar_count(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WToolBar_count_args);
    WToolBar* self = luawt_checkFromLua<WToolBar>(L, 1);
    if (index == 0) {
    int l_result = self->count();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WToolBar.count");
    }
}

static const char* WToolBar_widget_args0[] = {luawt_typeToStr<WToolBar>(), "int", NULL};
static const char* const* const luawt_WToolBar_widget_args[] = {WToolBar_widget_args0, NULL};

int luawt_WToolBar_widget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WToolBar_widget_args);
    WToolBar* self = luawt_checkFromLua<WToolBar>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    Wt::WWidget * l_result = self->widget(index);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WToolBar.widget");
    }
}

static const char* WToolBar_isCompact_args0[] = {luawt_typeToStr<WToolBar>(), NULL};
static const char* const* const luawt_WToolBar_isCompact_args[] = {WToolBar_isCompact_args0, NULL};

int luawt_WToolBar_isCompact(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WToolBar_isCompact_args);
    WToolBar* self = luawt_checkFromLua<WToolBar>(L, 1);
    if (index == 0) {
    bool l_result = self->isCompact();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WToolBar.isCompact");
    }
}

static const char* WToolBar_setCompact_args0[] = {luawt_typeToStr<WToolBar>(), "bool", NULL};
static const char* const* const luawt_WToolBar_setCompact_args[] = {WToolBar_setCompact_args0, NULL};

int luawt_WToolBar_setCompact(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WToolBar_setCompact_args);
    WToolBar* self = luawt_checkFromLua<WToolBar>(L, 1);
    if (index == 0) {
    bool compact = lua_toboolean(L, 2);
    self->setCompact(compact);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WToolBar.setCompact");
    }
}

static const char* WToolBar_addSeparator_args0[] = {luawt_typeToStr<WToolBar>(), NULL};
static const char* const* const luawt_WToolBar_addSeparator_args[] = {WToolBar_addSeparator_args0, NULL};

int luawt_WToolBar_addSeparator(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WToolBar_addSeparator_args);
    WToolBar* self = luawt_checkFromLua<WToolBar>(L, 1);
    if (index == 0) {
    self->addSeparator();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WToolBar.addSeparator");
    }
}


static const luaL_Reg luawt_WToolBar_methods[] = {
    METHOD(WToolBar, addSeparator),
    METHOD(WToolBar, count),
    METHOD(WToolBar, widget),
    METHOD(WToolBar, setCompact),
    METHOD(WToolBar, isCompact),
    {NULL, NULL},
};

void luawt_WToolBar(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WToolBar,
        L,
        wrap<luawt_WToolBar_make>::func,
        0,
        luawt_WToolBar_methods,
        base
    );
}
