#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WContainerWidget>

#include "globals.hpp"

static const char* WContainerWidget_make_args0[] = {NULL};
static const char* WContainerWidget_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_make_args[] = {WContainerWidget_make_args0, WContainerWidget_make_args1, NULL};

int luawt_WContainerWidget_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_make_args);
    if (index == 0) {
    WContainerWidget * result = new WContainerWidget();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WContainerWidget");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WContainerWidget * result = new WContainerWidget(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.make");
    }
}

static const char* WContainerWidget_count_args0[] = {luawt_typeToStr<WContainerWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_count_args[] = {WContainerWidget_count_args0, NULL};

int luawt_WContainerWidget_count(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_count_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    int result = self->count();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.count");
    }
}

static const char* WContainerWidget_widget_args0[] = {luawt_typeToStr<WContainerWidget>(), "int", NULL};
static const char* const* const luawt_WContainerWidget_widget_args[] = {WContainerWidget_widget_args0, NULL};

int luawt_WContainerWidget_widget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_widget_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    Wt::WWidget * result = self->widget(index);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.widget");
    }
}

static const char* WContainerWidget_insertBefore_args0[] = {luawt_typeToStr<WContainerWidget>(), luawt_typeToStr<Wt::WWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_insertBefore_args[] = {WContainerWidget_insertBefore_args0, NULL};

int luawt_WContainerWidget_insertBefore(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_insertBefore_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    Wt::WWidget* before =
        luawt_checkFromLua<Wt::WWidget>(L, 3);
    self->insertBefore(widget, before);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.insertBefore");
    }
}

static const char* WContainerWidget_indexOf_args0[] = {luawt_typeToStr<WContainerWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_indexOf_args[] = {WContainerWidget_indexOf_args0, NULL};

int luawt_WContainerWidget_indexOf(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_indexOf_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    int result = self->indexOf(widget);
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.indexOf");
    }
}

static const char* WContainerWidget_clear_args0[] = {luawt_typeToStr<WContainerWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_clear_args[] = {WContainerWidget_clear_args0, NULL};

int luawt_WContainerWidget_clear(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_clear_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    self->clear();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.clear");
    }
}

static const char* WContainerWidget_insertWidget_args0[] = {luawt_typeToStr<WContainerWidget>(), "int", luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_insertWidget_args[] = {WContainerWidget_insertWidget_args0, NULL};

int luawt_WContainerWidget_insertWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_insertWidget_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 3);
    self->insertWidget(index, widget);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.insertWidget");
    }
}

static const char* WContainerWidget_setList_args0[] = {luawt_typeToStr<WContainerWidget>(), "bool", NULL};
static const char* WContainerWidget_setList_args1[] = {luawt_typeToStr<WContainerWidget>(), "bool", "bool", NULL};
static const char* const* const luawt_WContainerWidget_setList_args[] = {WContainerWidget_setList_args0, WContainerWidget_setList_args1, NULL};

int luawt_WContainerWidget_setList(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_setList_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    bool list = lua_toboolean(L, 2);
    self->setList(list);
    return 0;
    
    } else if (index == 1) {
    bool list = lua_toboolean(L, 2);
    bool ordered = lua_toboolean(L, 3);
    self->setList(list, ordered);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.setList");
    }
}

static const char* WContainerWidget_removeWidget_args0[] = {luawt_typeToStr<WContainerWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_removeWidget_args[] = {WContainerWidget_removeWidget_args0, NULL};

int luawt_WContainerWidget_removeWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_removeWidget_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->removeWidget(widget);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.removeWidget");
    }
}

static const char* WContainerWidget_isOrderedList_args0[] = {luawt_typeToStr<WContainerWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_isOrderedList_args[] = {WContainerWidget_isOrderedList_args0, NULL};

int luawt_WContainerWidget_isOrderedList(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_isOrderedList_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    bool result = self->isOrderedList();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.isOrderedList");
    }
}

static const char* WContainerWidget_isList_args0[] = {luawt_typeToStr<WContainerWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_isList_args[] = {WContainerWidget_isList_args0, NULL};

int luawt_WContainerWidget_isList(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_isList_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    bool result = self->isList();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.isList");
    }
}

static const char* WContainerWidget_addWidget_args0[] = {luawt_typeToStr<WContainerWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_addWidget_args[] = {WContainerWidget_addWidget_args0, NULL};

int luawt_WContainerWidget_addWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_addWidget_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->addWidget(widget);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.addWidget");
    }
}

static const char* WContainerWidget_isUnorderedList_args0[] = {luawt_typeToStr<WContainerWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_isUnorderedList_args[] = {WContainerWidget_isUnorderedList_args0, NULL};

int luawt_WContainerWidget_isUnorderedList(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_isUnorderedList_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    bool result = self->isUnorderedList();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.isUnorderedList");
    }
}

ADD_SIGNAL(scrolled, WContainerWidget, Wt::WScrollEvent)
ADD_SIGNAL(keyWentDown, WContainerWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WContainerWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WContainerWidget, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WContainerWidget, Wt::NoClass)
ADD_SIGNAL(escapePressed, WContainerWidget, Wt::NoClass)
ADD_SIGNAL(clicked, WContainerWidget, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WContainerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WContainerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WContainerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WContainerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WContainerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WContainerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WContainerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WContainerWidget, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WContainerWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WContainerWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WContainerWidget, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WContainerWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WContainerWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WContainerWidget, Wt::WGestureEvent)

static const luaL_Reg luawt_WContainerWidget_methods[] = {
    METHOD(WContainerWidget, addWidget),
    METHOD(WContainerWidget, insertBefore),
    METHOD(WContainerWidget, insertWidget),
    METHOD(WContainerWidget, removeWidget),
    METHOD(WContainerWidget, clear),
    METHOD(WContainerWidget, indexOf),
    METHOD(WContainerWidget, widget),
    METHOD(WContainerWidget, count),
    METHOD(WContainerWidget, setList),
    METHOD(WContainerWidget, isList),
    METHOD(WContainerWidget, isUnorderedList),
    METHOD(WContainerWidget, isOrderedList),
    METHOD(WContainerWidget, scrolled),
    METHOD(WContainerWidget, keyWentDown),
    METHOD(WContainerWidget, keyPressed),
    METHOD(WContainerWidget, keyWentUp),
    METHOD(WContainerWidget, enterPressed),
    METHOD(WContainerWidget, escapePressed),
    METHOD(WContainerWidget, clicked),
    METHOD(WContainerWidget, doubleClicked),
    METHOD(WContainerWidget, mouseWentDown),
    METHOD(WContainerWidget, mouseWentUp),
    METHOD(WContainerWidget, mouseWentOut),
    METHOD(WContainerWidget, mouseWentOver),
    METHOD(WContainerWidget, mouseMoved),
    METHOD(WContainerWidget, mouseDragged),
    METHOD(WContainerWidget, mouseWheel),
    METHOD(WContainerWidget, touchStarted),
    METHOD(WContainerWidget, touchEnded),
    METHOD(WContainerWidget, touchMoved),
    METHOD(WContainerWidget, gestureStarted),
    METHOD(WContainerWidget, gestureChanged),
    METHOD(WContainerWidget, gestureEnded),
    {NULL, NULL},
};

void luawt_WContainerWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WContainerWidget,
        L,
        wrap<luawt_WContainerWidget_make>::func,
        0,
        luawt_WContainerWidget_methods,
        base
    );
}
