#include "boost-xtime.hpp"

#include <Wt/WInteractWidget>

#include "globals.hpp"

static const char* WInteractWidget_load_args0[] = {luawt_typeToStr<WInteractWidget>(), NULL};
static const char* const* const luawt_WInteractWidget_load_args[] = {WInteractWidget_load_args0, NULL};

int luawt_WInteractWidget_load(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInteractWidget_load_args);
    WInteractWidget* self = luawt_checkFromLua<WInteractWidget>(L, 1);
    if (index == 0) {
    self->load();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WInteractWidget.load");
    }
}

static const char* WInteractWidget_mouseOverDelay_args0[] = {luawt_typeToStr<WInteractWidget>(), NULL};
static const char* const* const luawt_WInteractWidget_mouseOverDelay_args[] = {WInteractWidget_mouseOverDelay_args0, NULL};

int luawt_WInteractWidget_mouseOverDelay(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInteractWidget_mouseOverDelay_args);
    WInteractWidget* self = luawt_checkFromLua<WInteractWidget>(L, 1);
    if (index == 0) {
    int result = self->mouseOverDelay();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WInteractWidget.mouseOverDelay");
    }
}

static const char* WInteractWidget_isEnabled_args0[] = {luawt_typeToStr<WInteractWidget>(), NULL};
static const char* const* const luawt_WInteractWidget_isEnabled_args[] = {WInteractWidget_isEnabled_args0, NULL};

int luawt_WInteractWidget_isEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInteractWidget_isEnabled_args);
    WInteractWidget* self = luawt_checkFromLua<WInteractWidget>(L, 1);
    if (index == 0) {
    bool result = self->isEnabled();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WInteractWidget.isEnabled");
    }
}

static const char* WInteractWidget_setMouseOverDelay_args0[] = {luawt_typeToStr<WInteractWidget>(), "int", NULL};
static const char* const* const luawt_WInteractWidget_setMouseOverDelay_args[] = {WInteractWidget_setMouseOverDelay_args0, NULL};

int luawt_WInteractWidget_setMouseOverDelay(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInteractWidget_setMouseOverDelay_args);
    WInteractWidget* self = luawt_checkFromLua<WInteractWidget>(L, 1);
    if (index == 0) {
    int delay = lua_tointeger(L, 2);
    self->setMouseOverDelay(delay);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WInteractWidget.setMouseOverDelay");
    }
}

ADD_SIGNAL(keyWentDown, WInteractWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WInteractWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WInteractWidget, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WInteractWidget, Wt::NoClass)
ADD_SIGNAL(escapePressed, WInteractWidget, Wt::NoClass)
ADD_SIGNAL(clicked, WInteractWidget, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WInteractWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WInteractWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WInteractWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WInteractWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WInteractWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WInteractWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WInteractWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WInteractWidget, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WInteractWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WInteractWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WInteractWidget, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WInteractWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WInteractWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WInteractWidget, Wt::WGestureEvent)

static const luaL_Reg luawt_WInteractWidget_methods[] = {
    METHOD(WInteractWidget, setMouseOverDelay),
    METHOD(WInteractWidget, mouseOverDelay),
    METHOD(WInteractWidget, load),
    METHOD(WInteractWidget, isEnabled),
    METHOD(WInteractWidget, keyWentDown),
    METHOD(WInteractWidget, keyPressed),
    METHOD(WInteractWidget, keyWentUp),
    METHOD(WInteractWidget, enterPressed),
    METHOD(WInteractWidget, escapePressed),
    METHOD(WInteractWidget, clicked),
    METHOD(WInteractWidget, doubleClicked),
    METHOD(WInteractWidget, mouseWentDown),
    METHOD(WInteractWidget, mouseWentUp),
    METHOD(WInteractWidget, mouseWentOut),
    METHOD(WInteractWidget, mouseWentOver),
    METHOD(WInteractWidget, mouseMoved),
    METHOD(WInteractWidget, mouseDragged),
    METHOD(WInteractWidget, mouseWheel),
    METHOD(WInteractWidget, touchStarted),
    METHOD(WInteractWidget, touchEnded),
    METHOD(WInteractWidget, touchMoved),
    METHOD(WInteractWidget, gestureStarted),
    METHOD(WInteractWidget, gestureChanged),
    METHOD(WInteractWidget, gestureEnded),
    {NULL, NULL},
};

void luawt_WInteractWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WWebWidget>();
    assert(base);
    DECLARE_CLASS(
        WInteractWidget,
        L,
        0,
        0,
        luawt_WInteractWidget_methods,
        base
    );
}
