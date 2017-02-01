#include "boost-xtime.hpp"

#include <Wt/WLength>
#include <Wt/WPaintedWidget>

#include "globals.hpp"

static const char* WPaintedWidget_setPreferredMethod_args0[] = {luawt_typeToStr<WPaintedWidget>(), "int", NULL};
static const char* const* const luawt_WPaintedWidget_setPreferredMethod_args[] = {WPaintedWidget_setPreferredMethod_args0, NULL};

int luawt_WPaintedWidget_setPreferredMethod(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPaintedWidget_setPreferredMethod_args);
    WPaintedWidget* self = luawt_checkFromLua<WPaintedWidget>(L, 1);
    if (index == 0) {
    Wt::WPaintedWidget::Method method = static_cast<Wt::WPaintedWidget::Method>(lua_tointeger(L, 2));
    self->setPreferredMethod(method);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPaintedWidget.setPreferredMethod");
    }
}

static const char* WPaintedWidget_update_args0[] = {luawt_typeToStr<WPaintedWidget>(), NULL};
static const char* WPaintedWidget_update_args1[] = {luawt_typeToStr<WPaintedWidget>(), "int", NULL};
static const char* const* const luawt_WPaintedWidget_update_args[] = {WPaintedWidget_update_args0, WPaintedWidget_update_args1, NULL};

int luawt_WPaintedWidget_update(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPaintedWidget_update_args);
    WPaintedWidget* self = luawt_checkFromLua<WPaintedWidget>(L, 1);
    if (index == 0) {
    self->update();
    return 0;
    
    } else if (index == 1) {
    Wt::WFlags<Wt::PaintFlag> flags = static_cast<Wt::PaintFlag>(lua_tointeger(L, 2));
    self->update(flags);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPaintedWidget.update");
    }
}

static const char* WPaintedWidget_resize_args0[] = {luawt_typeToStr<WPaintedWidget>(), "double", "double", NULL};
static const char* const* const luawt_WPaintedWidget_resize_args[] = {WPaintedWidget_resize_args0, NULL};

int luawt_WPaintedWidget_resize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPaintedWidget_resize_args);
    WPaintedWidget* self = luawt_checkFromLua<WPaintedWidget>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength width = Wt::WLength(raw2);
    double raw3 = lua_tonumber(L, 3);
    Wt::WLength height = Wt::WLength(raw3);
    self->resize(width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPaintedWidget.resize");
    }
}

static const char* WPaintedWidget_preferredMethod_args0[] = {luawt_typeToStr<WPaintedWidget>(), NULL};
static const char* const* const luawt_WPaintedWidget_preferredMethod_args[] = {WPaintedWidget_preferredMethod_args0, NULL};

int luawt_WPaintedWidget_preferredMethod(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPaintedWidget_preferredMethod_args);
    WPaintedWidget* self = luawt_checkFromLua<WPaintedWidget>(L, 1);
    if (index == 0) {
    Wt::WPaintedWidget::Method l_result = self->preferredMethod();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPaintedWidget.preferredMethod");
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
    METHOD(WPaintedWidget, update),
    METHOD(WPaintedWidget, resize),
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
