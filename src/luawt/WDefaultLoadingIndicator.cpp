#include "boost-xtime.hpp"

#include <Wt/WDefaultLoadingIndicator>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WDefaultLoadingIndicator_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 0) {
    WDefaultLoadingIndicator * result = new WDefaultLoadingIndicator();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDefaultLoadingIndicator.make: %d", argc);
    }
}

int luawt_WDefaultLoadingIndicator_setMessage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDefaultLoadingIndicator* self = luawt_checkFromLua<WDefaultLoadingIndicator>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setMessage(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDefaultLoadingIndicator.setMessage: %d", argc);
    }
}

ADD_SIGNAL(keyWentDown, WDefaultLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WDefaultLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WDefaultLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WDefaultLoadingIndicator, Wt::NoClass)
ADD_SIGNAL(escapePressed, WDefaultLoadingIndicator, Wt::NoClass)
ADD_SIGNAL(clicked, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WDefaultLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WDefaultLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WDefaultLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WDefaultLoadingIndicator, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WDefaultLoadingIndicator, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WDefaultLoadingIndicator, Wt::WGestureEvent)

static const luaL_Reg luawt_WDefaultLoadingIndicator_methods[] = {
    METHOD(WDefaultLoadingIndicator, setMessage),
    METHOD(WDefaultLoadingIndicator, keyWentDown),
    METHOD(WDefaultLoadingIndicator, keyPressed),
    METHOD(WDefaultLoadingIndicator, keyWentUp),
    METHOD(WDefaultLoadingIndicator, enterPressed),
    METHOD(WDefaultLoadingIndicator, escapePressed),
    METHOD(WDefaultLoadingIndicator, clicked),
    METHOD(WDefaultLoadingIndicator, doubleClicked),
    METHOD(WDefaultLoadingIndicator, mouseWentDown),
    METHOD(WDefaultLoadingIndicator, mouseWentUp),
    METHOD(WDefaultLoadingIndicator, mouseWentOut),
    METHOD(WDefaultLoadingIndicator, mouseWentOver),
    METHOD(WDefaultLoadingIndicator, mouseMoved),
    METHOD(WDefaultLoadingIndicator, mouseDragged),
    METHOD(WDefaultLoadingIndicator, mouseWheel),
    METHOD(WDefaultLoadingIndicator, touchStarted),
    METHOD(WDefaultLoadingIndicator, touchEnded),
    METHOD(WDefaultLoadingIndicator, touchMoved),
    METHOD(WDefaultLoadingIndicator, gestureStarted),
    METHOD(WDefaultLoadingIndicator, gestureChanged),
    METHOD(WDefaultLoadingIndicator, gestureEnded),
    {NULL, NULL},
};

void luawt_WDefaultLoadingIndicator(lua_State* L) {
    const char* base = luawt_typeToStr<WText>();
    assert(base);
    DECLARE_CLASS(
        WDefaultLoadingIndicator,
        L,
        wrap<luawt_WDefaultLoadingIndicator_make>::func,
        0,
        luawt_WDefaultLoadingIndicator_methods,
        base
    );
}
