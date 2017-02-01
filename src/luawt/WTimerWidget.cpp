#include "boost-xtime.hpp"

#include <Wt/WTimerWidget>

#include "globals.hpp"

static const char* WTimerWidget_timerStart_args0[] = {luawt_typeToStr<WTimerWidget>(), "bool", NULL};
static const char* const* const luawt_WTimerWidget_timerStart_args[] = {WTimerWidget_timerStart_args0, NULL};

int luawt_WTimerWidget_timerStart(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTimerWidget_timerStart_args);
    WTimerWidget* self = luawt_checkFromLua<WTimerWidget>(L, 1);
    if (index == 0) {
    bool jsRepeat = lua_toboolean(L, 2);
    self->timerStart(jsRepeat);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTimerWidget.timerStart");
    }
}

static const char* WTimerWidget_timerExpired_args0[] = {luawt_typeToStr<WTimerWidget>(), NULL};
static const char* const* const luawt_WTimerWidget_timerExpired_args[] = {WTimerWidget_timerExpired_args0, NULL};

int luawt_WTimerWidget_timerExpired(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTimerWidget_timerExpired_args);
    WTimerWidget* self = luawt_checkFromLua<WTimerWidget>(L, 1);
    if (index == 0) {
    bool l_result = self->timerExpired();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTimerWidget.timerExpired");
    }
}

ADD_SIGNAL(keyWentDown, WTimerWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WTimerWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WTimerWidget, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WTimerWidget, Wt::NoClass)
ADD_SIGNAL(escapePressed, WTimerWidget, Wt::NoClass)
ADD_SIGNAL(clicked, WTimerWidget, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WTimerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WTimerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WTimerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WTimerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WTimerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WTimerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WTimerWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WTimerWidget, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WTimerWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WTimerWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WTimerWidget, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WTimerWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WTimerWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WTimerWidget, Wt::WGestureEvent)

static const luaL_Reg luawt_WTimerWidget_methods[] = {
    METHOD(WTimerWidget, timerStart),
    METHOD(WTimerWidget, timerExpired),
    METHOD(WTimerWidget, keyWentDown),
    METHOD(WTimerWidget, keyPressed),
    METHOD(WTimerWidget, keyWentUp),
    METHOD(WTimerWidget, enterPressed),
    METHOD(WTimerWidget, escapePressed),
    METHOD(WTimerWidget, clicked),
    METHOD(WTimerWidget, doubleClicked),
    METHOD(WTimerWidget, mouseWentDown),
    METHOD(WTimerWidget, mouseWentUp),
    METHOD(WTimerWidget, mouseWentOut),
    METHOD(WTimerWidget, mouseWentOver),
    METHOD(WTimerWidget, mouseMoved),
    METHOD(WTimerWidget, mouseDragged),
    METHOD(WTimerWidget, mouseWheel),
    METHOD(WTimerWidget, touchStarted),
    METHOD(WTimerWidget, touchEnded),
    METHOD(WTimerWidget, touchMoved),
    METHOD(WTimerWidget, gestureStarted),
    METHOD(WTimerWidget, gestureChanged),
    METHOD(WTimerWidget, gestureEnded),
    {NULL, NULL},
};

void luawt_WTimerWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WTimerWidget,
        L,
        0,
        0,
        luawt_WTimerWidget_methods,
        base
    );
}
