#include "boost-xtime.hpp"

#include <Wt/WStackedWidget>
#include <Wt/WContainerWidget>

#include "globals.hpp"

int luawt_WStackedWidget_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WStackedWidget * result = new WStackedWidget(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WStackedWidget.make: %d", argc);
    }
}

int luawt_WStackedWidget_currentIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WStackedWidget* self = luawt_checkFromLua<WStackedWidget>(L, 1);
        if (argc == 0) {
    int result = self->currentIndex();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WStackedWidget.currentIndex: %d", argc);
    }
}

int luawt_WStackedWidget_setCurrentIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WStackedWidget* self = luawt_checkFromLua<WStackedWidget>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    self->setCurrentIndex(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WStackedWidget.setCurrentIndex: %d", argc);
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
    METHOD(WStackedWidget, currentIndex),
    METHOD(WStackedWidget, setCurrentIndex),
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
