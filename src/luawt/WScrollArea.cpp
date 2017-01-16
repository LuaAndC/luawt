#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WContainerWidget>
#include <Wt/WScrollArea>

#include "globals.hpp"

static const char* WScrollArea_make_args0[] = {NULL};
static const char* WScrollArea_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WScrollArea_make_args[] = {WScrollArea_make_args0, WScrollArea_make_args1, NULL};

int luawt_WScrollArea_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WScrollArea_make_args);
    if (index == 0) {
    WScrollArea * result = new WScrollArea();
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WScrollArea");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WScrollArea * result = new WScrollArea(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WScrollArea.make");
    }
}

static const char* WScrollArea_widget_args0[] = {luawt_typeToStr<WScrollArea>(), NULL};
static const char* const* const luawt_WScrollArea_widget_args[] = {WScrollArea_widget_args0, NULL};

int luawt_WScrollArea_widget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WScrollArea_widget_args);
    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
    if (index == 0) {
    Wt::WWidget * result = self->widget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WScrollArea.widget");
    }
}

static const char* WScrollArea_verticalScrollBarPolicy_args0[] = {luawt_typeToStr<WScrollArea>(), NULL};
static const char* const* const luawt_WScrollArea_verticalScrollBarPolicy_args[] = {WScrollArea_verticalScrollBarPolicy_args0, NULL};

int luawt_WScrollArea_verticalScrollBarPolicy(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WScrollArea_verticalScrollBarPolicy_args);
    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
    if (index == 0) {
    Wt::WScrollArea::ScrollBarPolicy result = self->verticalScrollBarPolicy();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WScrollArea.verticalScrollBarPolicy");
    }
}

static const char* WScrollArea_setVerticalScrollBarPolicy_args0[] = {luawt_typeToStr<WScrollArea>(), "int", NULL};
static const char* const* const luawt_WScrollArea_setVerticalScrollBarPolicy_args[] = {WScrollArea_setVerticalScrollBarPolicy_args0, NULL};

int luawt_WScrollArea_setVerticalScrollBarPolicy(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WScrollArea_setVerticalScrollBarPolicy_args);
    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
    if (index == 0) {
    Wt::WScrollArea::ScrollBarPolicy scrollBarPolicy = static_cast<Wt::WScrollArea::ScrollBarPolicy>(lua_tointeger(L, 2));
    self->setVerticalScrollBarPolicy(scrollBarPolicy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WScrollArea.setVerticalScrollBarPolicy");
    }
}

static const char* WScrollArea_horizontalScrollBarPolicy_args0[] = {luawt_typeToStr<WScrollArea>(), NULL};
static const char* const* const luawt_WScrollArea_horizontalScrollBarPolicy_args[] = {WScrollArea_horizontalScrollBarPolicy_args0, NULL};

int luawt_WScrollArea_horizontalScrollBarPolicy(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WScrollArea_horizontalScrollBarPolicy_args);
    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
    if (index == 0) {
    Wt::WScrollArea::ScrollBarPolicy result = self->horizontalScrollBarPolicy();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WScrollArea.horizontalScrollBarPolicy");
    }
}

static const char* WScrollArea_setHorizontalScrollBarPolicy_args0[] = {luawt_typeToStr<WScrollArea>(), "int", NULL};
static const char* const* const luawt_WScrollArea_setHorizontalScrollBarPolicy_args[] = {WScrollArea_setHorizontalScrollBarPolicy_args0, NULL};

int luawt_WScrollArea_setHorizontalScrollBarPolicy(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WScrollArea_setHorizontalScrollBarPolicy_args);
    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
    if (index == 0) {
    Wt::WScrollArea::ScrollBarPolicy scrollBarPolicy = static_cast<Wt::WScrollArea::ScrollBarPolicy>(lua_tointeger(L, 2));
    self->setHorizontalScrollBarPolicy(scrollBarPolicy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WScrollArea.setHorizontalScrollBarPolicy");
    }
}

static const char* WScrollArea_setWidget_args0[] = {luawt_typeToStr<WScrollArea>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WScrollArea_setWidget_args[] = {WScrollArea_setWidget_args0, NULL};

int luawt_WScrollArea_setWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WScrollArea_setWidget_args);
    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->setWidget(widget);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WScrollArea.setWidget");
    }
}

static const char* WScrollArea_setScrollBarPolicy_args0[] = {luawt_typeToStr<WScrollArea>(), "int", NULL};
static const char* const* const luawt_WScrollArea_setScrollBarPolicy_args[] = {WScrollArea_setScrollBarPolicy_args0, NULL};

int luawt_WScrollArea_setScrollBarPolicy(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WScrollArea_setScrollBarPolicy_args);
    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
    if (index == 0) {
    Wt::WScrollArea::ScrollBarPolicy scrollBarPolicy = static_cast<Wt::WScrollArea::ScrollBarPolicy>(lua_tointeger(L, 2));
    self->setScrollBarPolicy(scrollBarPolicy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WScrollArea.setScrollBarPolicy");
    }
}

static const char* WScrollArea_takeWidget_args0[] = {luawt_typeToStr<WScrollArea>(), NULL};
static const char* const* const luawt_WScrollArea_takeWidget_args[] = {WScrollArea_takeWidget_args0, NULL};

int luawt_WScrollArea_takeWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WScrollArea_takeWidget_args);
    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
    if (index == 0) {
    Wt::WWidget * result = self->takeWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WScrollArea.takeWidget");
    }
}


static const luaL_Reg luawt_WScrollArea_methods[] = {
    METHOD(WScrollArea, setWidget),
    METHOD(WScrollArea, takeWidget),
    METHOD(WScrollArea, widget),
    METHOD(WScrollArea, setScrollBarPolicy),
    METHOD(WScrollArea, setHorizontalScrollBarPolicy),
    METHOD(WScrollArea, setVerticalScrollBarPolicy),
    METHOD(WScrollArea, horizontalScrollBarPolicy),
    METHOD(WScrollArea, verticalScrollBarPolicy),
    {NULL, NULL},
};

void luawt_WScrollArea(lua_State* L) {
    const char* base = luawt_typeToStr<WWebWidget>();
    assert(base);
    DECLARE_CLASS(
        WScrollArea,
        L,
        wrap<luawt_WScrollArea_make>::func,
        0,
        luawt_WScrollArea_methods,
        base
    );
}
