#include "boost-xtime.hpp"

#include <Wt/WSpinBox>
#include <Wt/WContainerWidget>

#include "globals.hpp"

int luawt_WSpinBox_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WSpinBox * result = new WSpinBox(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSpinBox.make: %d", argc);
    }
}

int luawt_WSpinBox_singleStep(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
        if (argc == 0) {
    int result = self->singleStep();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSpinBox.singleStep: %d", argc);
    }
}

int luawt_WSpinBox_minimum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
        if (argc == 0) {
    int result = self->minimum();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSpinBox.minimum: %d", argc);
    }
}

int luawt_WSpinBox_maximum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
        if (argc == 0) {
    int result = self->maximum();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSpinBox.maximum: %d", argc);
    }
}

int luawt_WSpinBox_value(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
        if (argc == 0) {
    int result = self->value();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSpinBox.value: %d", argc);
    }
}

ADD_SIGNAL(changed, WSpinBox, Wt::NoClass)
ADD_SIGNAL(selected, WSpinBox, Wt::NoClass)
ADD_SIGNAL(blurred, WSpinBox, Wt::NoClass)
ADD_SIGNAL(focussed, WSpinBox, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WSpinBox, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WSpinBox, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WSpinBox, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WSpinBox, Wt::NoClass)
ADD_SIGNAL(escapePressed, WSpinBox, Wt::NoClass)
ADD_SIGNAL(clicked, WSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WSpinBox, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WSpinBox, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WSpinBox, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WSpinBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WSpinBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WSpinBox, Wt::WGestureEvent)

static const luaL_Reg luawt_WSpinBox_methods[] = {
    METHOD(WSpinBox, minimum),
    METHOD(WSpinBox, maximum),
    METHOD(WSpinBox, singleStep),
    METHOD(WSpinBox, value),
    METHOD(WSpinBox, changed),
    METHOD(WSpinBox, selected),
    METHOD(WSpinBox, blurred),
    METHOD(WSpinBox, focussed),
    METHOD(WSpinBox, keyWentDown),
    METHOD(WSpinBox, keyPressed),
    METHOD(WSpinBox, keyWentUp),
    METHOD(WSpinBox, enterPressed),
    METHOD(WSpinBox, escapePressed),
    METHOD(WSpinBox, clicked),
    METHOD(WSpinBox, doubleClicked),
    METHOD(WSpinBox, mouseWentDown),
    METHOD(WSpinBox, mouseWentUp),
    METHOD(WSpinBox, mouseWentOut),
    METHOD(WSpinBox, mouseWentOver),
    METHOD(WSpinBox, mouseMoved),
    METHOD(WSpinBox, mouseDragged),
    METHOD(WSpinBox, mouseWheel),
    METHOD(WSpinBox, touchStarted),
    METHOD(WSpinBox, touchEnded),
    METHOD(WSpinBox, touchMoved),
    METHOD(WSpinBox, gestureStarted),
    METHOD(WSpinBox, gestureChanged),
    METHOD(WSpinBox, gestureEnded),
    {NULL, NULL},
};

void luawt_WSpinBox(lua_State* L) {
    const char* base = luawt_typeToStr<WAbstractSpinBox>();
    assert(base);
    DECLARE_CLASS(
        WSpinBox,
        L,
        wrap<luawt_WSpinBox_make>::func,
        0,
        luawt_WSpinBox_methods,
        base
    );
}
