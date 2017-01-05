#include "boost-xtime.hpp"

#include <Wt/WPaintedWidget>

#include "globals.hpp"

int luawt_WPaintedWidget_setPreferredMethod(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPaintedWidget* self = luawt_checkFromLua<WPaintedWidget>(L, 1);
        if (argc == 1) {
    Wt::WPaintedWidget::Method method = static_cast<Wt::WPaintedWidget::Method>(lua_tointeger(L, 2));
    self->setPreferredMethod(method);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPaintedWidget.setPreferredMethod: %d", argc);
    }
}

int luawt_WPaintedWidget_preferredMethod(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPaintedWidget* self = luawt_checkFromLua<WPaintedWidget>(L, 1);
        if (argc == 0) {
    Wt::WPaintedWidget::Method result = self->preferredMethod();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPaintedWidget.preferredMethod: %d", argc);
    }
}

ADD_SIGNAL(keyWentDown, WPaintedWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WPaintedWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WPaintedWidget, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WPaintedWidget, Wt::NoClass)
ADD_SIGNAL(escapePressed, WPaintedWidget, Wt::NoClass)
ADD_SIGNAL(clicked, WPaintedWidget, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WPaintedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WPaintedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WPaintedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WPaintedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WPaintedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WPaintedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WPaintedWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WPaintedWidget, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WPaintedWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WPaintedWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WPaintedWidget, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WPaintedWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WPaintedWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WPaintedWidget, Wt::WGestureEvent)

static const luaL_Reg luawt_WPaintedWidget_methods[] = {
    METHOD(WPaintedWidget, setPreferredMethod),
    METHOD(WPaintedWidget, preferredMethod),
    METHOD(WPaintedWidget, keyWentDown),
    METHOD(WPaintedWidget, keyPressed),
    METHOD(WPaintedWidget, keyWentUp),
    METHOD(WPaintedWidget, enterPressed),
    METHOD(WPaintedWidget, escapePressed),
    METHOD(WPaintedWidget, clicked),
    METHOD(WPaintedWidget, doubleClicked),
    METHOD(WPaintedWidget, mouseWentDown),
    METHOD(WPaintedWidget, mouseWentUp),
    METHOD(WPaintedWidget, mouseWentOut),
    METHOD(WPaintedWidget, mouseWentOver),
    METHOD(WPaintedWidget, mouseMoved),
    METHOD(WPaintedWidget, mouseDragged),
    METHOD(WPaintedWidget, mouseWheel),
    METHOD(WPaintedWidget, touchStarted),
    METHOD(WPaintedWidget, touchEnded),
    METHOD(WPaintedWidget, touchMoved),
    METHOD(WPaintedWidget, gestureStarted),
    METHOD(WPaintedWidget, gestureChanged),
    METHOD(WPaintedWidget, gestureEnded),
    {NULL, NULL},
};

void luawt_WPaintedWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WPaintedWidget,
        L,
        0,
        0,
        luawt_WPaintedWidget_methods,
        base
    );
}
