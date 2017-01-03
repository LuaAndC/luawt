#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WDoubleSpinBox>

#include "globals.hpp"

int luawt_WDoubleSpinBox_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WDoubleSpinBox * result = new WDoubleSpinBox(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.make: %d", argc);
    }
}

int luawt_WDoubleSpinBox_setMaximum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
        if (argc == 1) {
    double maximum = lua_tonumber(L, 2);
    self->setMaximum(maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.setMaximum: %d", argc);
    }
}

int luawt_WDoubleSpinBox_setValue(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
        if (argc == 1) {
    double value = lua_tonumber(L, 2);
    self->setValue(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.setValue: %d", argc);
    }
}

int luawt_WDoubleSpinBox_maximum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
        if (argc == 0) {
    double result = self->maximum();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.maximum: %d", argc);
    }
}

int luawt_WDoubleSpinBox_value(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
        if (argc == 0) {
    double result = self->value();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.value: %d", argc);
    }
}

int luawt_WDoubleSpinBox_singleStep(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
        if (argc == 0) {
    double result = self->singleStep();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.singleStep: %d", argc);
    }
}

int luawt_WDoubleSpinBox_minimum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
        if (argc == 0) {
    double result = self->minimum();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.minimum: %d", argc);
    }
}

int luawt_WDoubleSpinBox_setSingleStep(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
        if (argc == 1) {
    double step = lua_tonumber(L, 2);
    self->setSingleStep(step);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.setSingleStep: %d", argc);
    }
}

int luawt_WDoubleSpinBox_setDecimals(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
        if (argc == 1) {
    int precision = lua_tointeger(L, 2);
    self->setDecimals(precision);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.setDecimals: %d", argc);
    }
}

int luawt_WDoubleSpinBox_decimals(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
        if (argc == 0) {
    int result = self->decimals();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.decimals: %d", argc);
    }
}

int luawt_WDoubleSpinBox_setMinimum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
        if (argc == 1) {
    double minimum = lua_tonumber(L, 2);
    self->setMinimum(minimum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.setMinimum: %d", argc);
    }
}

int luawt_WDoubleSpinBox_setRange(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
        if (argc == 2) {
    double minimum = lua_tonumber(L, 2);
    double maximum = lua_tonumber(L, 3);
    self->setRange(minimum, maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDoubleSpinBox.setRange: %d", argc);
    }
}

ADD_SIGNAL(changed, WDoubleSpinBox, Wt::NoClass)
ADD_SIGNAL(selected, WDoubleSpinBox, Wt::NoClass)
ADD_SIGNAL(blurred, WDoubleSpinBox, Wt::NoClass)
ADD_SIGNAL(focussed, WDoubleSpinBox, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WDoubleSpinBox, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WDoubleSpinBox, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WDoubleSpinBox, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WDoubleSpinBox, Wt::NoClass)
ADD_SIGNAL(escapePressed, WDoubleSpinBox, Wt::NoClass)
ADD_SIGNAL(clicked, WDoubleSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WDoubleSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WDoubleSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WDoubleSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WDoubleSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WDoubleSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WDoubleSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WDoubleSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WDoubleSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WDoubleSpinBox, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WDoubleSpinBox, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WDoubleSpinBox, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WDoubleSpinBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WDoubleSpinBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WDoubleSpinBox, Wt::WGestureEvent)

static const luaL_Reg luawt_WDoubleSpinBox_methods[] = {
    METHOD(WDoubleSpinBox, setMinimum),
    METHOD(WDoubleSpinBox, minimum),
    METHOD(WDoubleSpinBox, setMaximum),
    METHOD(WDoubleSpinBox, maximum),
    METHOD(WDoubleSpinBox, setRange),
    METHOD(WDoubleSpinBox, setSingleStep),
    METHOD(WDoubleSpinBox, singleStep),
    METHOD(WDoubleSpinBox, setDecimals),
    METHOD(WDoubleSpinBox, decimals),
    METHOD(WDoubleSpinBox, setValue),
    METHOD(WDoubleSpinBox, value),
    METHOD(WDoubleSpinBox, changed),
    METHOD(WDoubleSpinBox, selected),
    METHOD(WDoubleSpinBox, blurred),
    METHOD(WDoubleSpinBox, focussed),
    METHOD(WDoubleSpinBox, keyWentDown),
    METHOD(WDoubleSpinBox, keyPressed),
    METHOD(WDoubleSpinBox, keyWentUp),
    METHOD(WDoubleSpinBox, enterPressed),
    METHOD(WDoubleSpinBox, escapePressed),
    METHOD(WDoubleSpinBox, clicked),
    METHOD(WDoubleSpinBox, doubleClicked),
    METHOD(WDoubleSpinBox, mouseWentDown),
    METHOD(WDoubleSpinBox, mouseWentUp),
    METHOD(WDoubleSpinBox, mouseWentOut),
    METHOD(WDoubleSpinBox, mouseWentOver),
    METHOD(WDoubleSpinBox, mouseMoved),
    METHOD(WDoubleSpinBox, mouseDragged),
    METHOD(WDoubleSpinBox, mouseWheel),
    METHOD(WDoubleSpinBox, touchStarted),
    METHOD(WDoubleSpinBox, touchEnded),
    METHOD(WDoubleSpinBox, touchMoved),
    METHOD(WDoubleSpinBox, gestureStarted),
    METHOD(WDoubleSpinBox, gestureChanged),
    METHOD(WDoubleSpinBox, gestureEnded),
    {NULL, NULL},
};

void luawt_WDoubleSpinBox(lua_State* L) {
    const char* base = luawt_typeToStr<WAbstractSpinBox>();
    assert(base);
    DECLARE_CLASS(
        WDoubleSpinBox,
        L,
        wrap<luawt_WDoubleSpinBox_make>::func,
        0,
        luawt_WDoubleSpinBox_methods,
        base
    );
}
