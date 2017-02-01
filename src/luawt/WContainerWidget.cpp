#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WLength>
#include <Wt/WContainerWidget>

#include "globals.hpp"

static const char* WContainerWidget_make_args0[] = {NULL};
static const char* WContainerWidget_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_make_args[] = {WContainerWidget_make_args0, WContainerWidget_make_args1, NULL};

int luawt_WContainerWidget_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_make_args);
    if (index == 0) {
    WContainerWidget * l_result = new WContainerWidget();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WContainerWidget");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WContainerWidget * l_result = new WContainerWidget(parent);
    luawt_toLua(L, l_result);
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
    int l_result = self->count();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.count");
    }
}

static const char* WContainerWidget_padding_args0[] = {luawt_typeToStr<WContainerWidget>(), "int", NULL};
static const char* const* const luawt_WContainerWidget_padding_args[] = {WContainerWidget_padding_args0, NULL};

int luawt_WContainerWidget_padding(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_padding_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    Wt::Side side = static_cast<Wt::Side>(lua_tointeger(L, 2));
    Wt::WLength l_result = self->padding(side);
    lua_pushnumber(L, l_result.value());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.padding");
    }
}

static const char* WContainerWidget_widget_args0[] = {luawt_typeToStr<WContainerWidget>(), "int", NULL};
static const char* const* const luawt_WContainerWidget_widget_args[] = {WContainerWidget_widget_args0, NULL};

int luawt_WContainerWidget_widget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_widget_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    Wt::WWidget * l_result = self->widget(index);
    luawt_toLua(L, l_result);
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
    int l_result = self->indexOf(widget);
    lua_pushinteger(L, l_result);
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
    bool l_result = self->isOrderedList();
    lua_pushboolean(L, l_result);
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
    bool l_result = self->isList();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.isList");
    }
}

static const char* WContainerWidget_setOverflow_args0[] = {luawt_typeToStr<WContainerWidget>(), "int", NULL};
static const char* WContainerWidget_setOverflow_args1[] = {luawt_typeToStr<WContainerWidget>(), "int", "int", NULL};
static const char* const* const luawt_WContainerWidget_setOverflow_args[] = {WContainerWidget_setOverflow_args0, WContainerWidget_setOverflow_args1, NULL};

int luawt_WContainerWidget_setOverflow(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_setOverflow_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    Wt::WContainerWidget::Overflow overflow = static_cast<Wt::WContainerWidget::Overflow>(lua_tointeger(L, 2));
    self->setOverflow(overflow);
    return 0;
    
    } else if (index == 1) {
    Wt::WContainerWidget::Overflow overflow = static_cast<Wt::WContainerWidget::Overflow>(lua_tointeger(L, 2));
    Wt::WFlags<Wt::Orientation> orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 3));
    self->setOverflow(overflow, orientation);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.setOverflow");
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

static const char* WContainerWidget_setContentAlignment_args0[] = {luawt_typeToStr<WContainerWidget>(), "int", NULL};
static const char* const* const luawt_WContainerWidget_setContentAlignment_args[] = {WContainerWidget_setContentAlignment_args0, NULL};

int luawt_WContainerWidget_setContentAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_setContentAlignment_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    Wt::WFlags<Wt::AlignmentFlag> contentAlignment = static_cast<Wt::AlignmentFlag>(lua_tointeger(L, 2));
    self->setContentAlignment(contentAlignment);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.setContentAlignment");
    }
}

static const char* WContainerWidget_contentAlignment_args0[] = {luawt_typeToStr<WContainerWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_contentAlignment_args[] = {WContainerWidget_contentAlignment_args0, NULL};

int luawt_WContainerWidget_contentAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_contentAlignment_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    Wt::WFlags<Wt::AlignmentFlag> l_result = self->contentAlignment();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.contentAlignment");
    }
}

static const char* WContainerWidget_isUnorderedList_args0[] = {luawt_typeToStr<WContainerWidget>(), NULL};
static const char* const* const luawt_WContainerWidget_isUnorderedList_args[] = {WContainerWidget_isUnorderedList_args0, NULL};

int luawt_WContainerWidget_isUnorderedList(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_isUnorderedList_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    bool l_result = self->isUnorderedList();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.isUnorderedList");
    }
}

static const char* WContainerWidget_setPadding_args0[] = {luawt_typeToStr<WContainerWidget>(), "double", NULL};
static const char* WContainerWidget_setPadding_args1[] = {luawt_typeToStr<WContainerWidget>(), "double", "int", NULL};
static const char* const* const luawt_WContainerWidget_setPadding_args[] = {WContainerWidget_setPadding_args0, WContainerWidget_setPadding_args1, NULL};

int luawt_WContainerWidget_setPadding(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WContainerWidget_setPadding_args);
    WContainerWidget* self = luawt_checkFromLua<WContainerWidget>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength padding = Wt::WLength(raw2);
    self->setPadding(padding);
    return 0;
    
    } else if (index == 1) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength padding = Wt::WLength(raw2);
    Wt::WFlags<Wt::Side> sides = static_cast<Wt::Side>(lua_tointeger(L, 3));
    self->setPadding(padding, sides);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WContainerWidget.setPadding");
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
    METHOD(WContainerWidget, setContentAlignment),
    METHOD(WContainerWidget, setPadding),
    METHOD(WContainerWidget, padding),
    METHOD(WContainerWidget, contentAlignment),
    METHOD(WContainerWidget, setOverflow),
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
