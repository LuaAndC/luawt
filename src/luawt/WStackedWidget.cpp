#include "boost-xtime.hpp"

#include <Wt/WStackedWidget>
#include <Wt/WWidget>
#include <Wt/WContainerWidget>

#include "globals.hpp"

static const char* WStackedWidget_make_args0[] = {NULL};
static const char* WStackedWidget_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WStackedWidget_make_args[] = {WStackedWidget_make_args0, WStackedWidget_make_args1, NULL};

int luawt_WStackedWidget_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WStackedWidget_make_args);
    if (index == 0) {
    WStackedWidget * result = new WStackedWidget();
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WStackedWidget");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WStackedWidget * result = new WStackedWidget(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WStackedWidget.make");
    }
}

static const char* WStackedWidget_setCurrentWidget_args0[] = {luawt_typeToStr<WStackedWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WStackedWidget_setCurrentWidget_args[] = {WStackedWidget_setCurrentWidget_args0, NULL};

int luawt_WStackedWidget_setCurrentWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WStackedWidget_setCurrentWidget_args);
    WStackedWidget* self = luawt_checkFromLua<WStackedWidget>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->setCurrentWidget(widget);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WStackedWidget.setCurrentWidget");
    }
}

static const char* WStackedWidget_insertWidget_args0[] = {luawt_typeToStr<WStackedWidget>(), "int", luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WStackedWidget_insertWidget_args[] = {WStackedWidget_insertWidget_args0, NULL};

int luawt_WStackedWidget_insertWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WStackedWidget_insertWidget_args);
    WStackedWidget* self = luawt_checkFromLua<WStackedWidget>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 3);
    self->insertWidget(index, widget);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WStackedWidget.insertWidget");
    }
}

static const char* WStackedWidget_currentIndex_args0[] = {luawt_typeToStr<WStackedWidget>(), NULL};
static const char* const* const luawt_WStackedWidget_currentIndex_args[] = {WStackedWidget_currentIndex_args0, NULL};

int luawt_WStackedWidget_currentIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WStackedWidget_currentIndex_args);
    WStackedWidget* self = luawt_checkFromLua<WStackedWidget>(L, 1);
    if (index == 0) {
    int result = self->currentIndex();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WStackedWidget.currentIndex");
    }
}

static const char* WStackedWidget_setCurrentIndex_args0[] = {luawt_typeToStr<WStackedWidget>(), "int", NULL};
static const char* const* const luawt_WStackedWidget_setCurrentIndex_args[] = {WStackedWidget_setCurrentIndex_args0, NULL};

int luawt_WStackedWidget_setCurrentIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WStackedWidget_setCurrentIndex_args);
    WStackedWidget* self = luawt_checkFromLua<WStackedWidget>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    self->setCurrentIndex(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WStackedWidget.setCurrentIndex");
    }
}

static const char* WStackedWidget_addWidget_args0[] = {luawt_typeToStr<WStackedWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WStackedWidget_addWidget_args[] = {WStackedWidget_addWidget_args0, NULL};

int luawt_WStackedWidget_addWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WStackedWidget_addWidget_args);
    WStackedWidget* self = luawt_checkFromLua<WStackedWidget>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->addWidget(widget);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WStackedWidget.addWidget");
    }
}

static const char* WStackedWidget_currentWidget_args0[] = {luawt_typeToStr<WStackedWidget>(), NULL};
static const char* const* const luawt_WStackedWidget_currentWidget_args[] = {WStackedWidget_currentWidget_args0, NULL};

int luawt_WStackedWidget_currentWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WStackedWidget_currentWidget_args);
    WStackedWidget* self = luawt_checkFromLua<WStackedWidget>(L, 1);
    if (index == 0) {
    Wt::WWidget * result = self->currentWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WStackedWidget.currentWidget");
    }
}

ADD_SIGNAL(scrolled, WStackedWidget, Wt::WScrollEvent)
ADD_SIGNAL(keyWentDown, WStackedWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WStackedWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WStackedWidget, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WStackedWidget, Wt::NoClass)
ADD_SIGNAL(escapePressed, WStackedWidget, Wt::NoClass)
ADD_SIGNAL(clicked, WStackedWidget, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WStackedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WStackedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WStackedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WStackedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WStackedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WStackedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WStackedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WStackedWidget, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WStackedWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WStackedWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WStackedWidget, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WStackedWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WStackedWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WStackedWidget, Wt::WGestureEvent)

static const luaL_Reg luawt_WStackedWidget_methods[] = {
    METHOD(WStackedWidget, addWidget),
    METHOD(WStackedWidget, currentIndex),
    METHOD(WStackedWidget, currentWidget),
    METHOD(WStackedWidget, insertWidget),
    METHOD(WStackedWidget, setCurrentIndex),
    METHOD(WStackedWidget, setCurrentWidget),
    METHOD(WStackedWidget, scrolled),
    METHOD(WStackedWidget, keyWentDown),
    METHOD(WStackedWidget, keyPressed),
    METHOD(WStackedWidget, keyWentUp),
    METHOD(WStackedWidget, enterPressed),
    METHOD(WStackedWidget, escapePressed),
    METHOD(WStackedWidget, clicked),
    METHOD(WStackedWidget, doubleClicked),
    METHOD(WStackedWidget, mouseWentDown),
    METHOD(WStackedWidget, mouseWentUp),
    METHOD(WStackedWidget, mouseWentOut),
    METHOD(WStackedWidget, mouseWentOver),
    METHOD(WStackedWidget, mouseMoved),
    METHOD(WStackedWidget, mouseDragged),
    METHOD(WStackedWidget, mouseWheel),
    METHOD(WStackedWidget, touchStarted),
    METHOD(WStackedWidget, touchEnded),
    METHOD(WStackedWidget, touchMoved),
    METHOD(WStackedWidget, gestureStarted),
    METHOD(WStackedWidget, gestureChanged),
    METHOD(WStackedWidget, gestureEnded),
    {NULL, NULL},
};

void luawt_WStackedWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WContainerWidget>();
    assert(base);
    DECLARE_CLASS(
        WStackedWidget,
        L,
        wrap<luawt_WStackedWidget_make>::func,
        0,
        luawt_WStackedWidget_methods,
        base
    );
}
