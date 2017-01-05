#include "boost-xtime.hpp"

#include <Wt/WOverlayLoadingIndicator>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WOverlayLoadingIndicator_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString styleClass = Wt::WString(raw1);
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString backgroundStyleClass = Wt::WString(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString textStyleClass = Wt::WString(raw3);
    WOverlayLoadingIndicator * result = new WOverlayLoadingIndicator(styleClass, backgroundStyleClass, textStyleClass);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WOverlayLoadingIndicator.make: %d", argc);
    }
}

int luawt_WOverlayLoadingIndicator_setMessage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WOverlayLoadingIndicator* self = luawt_checkFromLua<WOverlayLoadingIndicator>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setMessage(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WOverlayLoadingIndicator.setMessage: %d", argc);
    }
}

ADD_SIGNAL(scrolled, WOverlayLoadingIndicator, Wt::WScrollEvent)
ADD_SIGNAL(keyWentDown, WOverlayLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WOverlayLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WOverlayLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WOverlayLoadingIndicator, Wt::NoClass)
ADD_SIGNAL(escapePressed, WOverlayLoadingIndicator, Wt::NoClass)
ADD_SIGNAL(clicked, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WOverlayLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WOverlayLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WOverlayLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WOverlayLoadingIndicator, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WOverlayLoadingIndicator, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WOverlayLoadingIndicator, Wt::WGestureEvent)

static const luaL_Reg luawt_WOverlayLoadingIndicator_methods[] = {
    METHOD(WOverlayLoadingIndicator, setMessage),
    METHOD(WOverlayLoadingIndicator, scrolled),
    METHOD(WOverlayLoadingIndicator, keyWentDown),
    METHOD(WOverlayLoadingIndicator, keyPressed),
    METHOD(WOverlayLoadingIndicator, keyWentUp),
    METHOD(WOverlayLoadingIndicator, enterPressed),
    METHOD(WOverlayLoadingIndicator, escapePressed),
    METHOD(WOverlayLoadingIndicator, clicked),
    METHOD(WOverlayLoadingIndicator, doubleClicked),
    METHOD(WOverlayLoadingIndicator, mouseWentDown),
    METHOD(WOverlayLoadingIndicator, mouseWentUp),
    METHOD(WOverlayLoadingIndicator, mouseWentOut),
    METHOD(WOverlayLoadingIndicator, mouseWentOver),
    METHOD(WOverlayLoadingIndicator, mouseMoved),
    METHOD(WOverlayLoadingIndicator, mouseDragged),
    METHOD(WOverlayLoadingIndicator, mouseWheel),
    METHOD(WOverlayLoadingIndicator, touchStarted),
    METHOD(WOverlayLoadingIndicator, touchEnded),
    METHOD(WOverlayLoadingIndicator, touchMoved),
    METHOD(WOverlayLoadingIndicator, gestureStarted),
    METHOD(WOverlayLoadingIndicator, gestureChanged),
    METHOD(WOverlayLoadingIndicator, gestureEnded),
    {NULL, NULL},
};

void luawt_WOverlayLoadingIndicator(lua_State* L) {
    const char* base = luawt_typeToStr<WContainerWidget>();
    assert(base);
    DECLARE_CLASS(
        WOverlayLoadingIndicator,
        L,
        wrap<luawt_WOverlayLoadingIndicator_make>::func,
        0,
        luawt_WOverlayLoadingIndicator_methods,
        base
    );
}
