#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WDoubleSpinBox>

#include "globals.hpp"

static const char* WDoubleSpinBox_make_args0[] = {NULL};
static const char* WDoubleSpinBox_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WDoubleSpinBox_make_args[] = {WDoubleSpinBox_make_args0, WDoubleSpinBox_make_args1, NULL};

int luawt_WDoubleSpinBox_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_make_args);
    if (index == 0) {
    WDoubleSpinBox * result = new WDoubleSpinBox();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WDoubleSpinBox");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WDoubleSpinBox * result = new WDoubleSpinBox(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.make");
    }
}

static const char* WDoubleSpinBox_setMaximum_args0[] = {luawt_typeToStr<WDoubleSpinBox>(), "double", NULL};
static const char* const* const luawt_WDoubleSpinBox_setMaximum_args[] = {WDoubleSpinBox_setMaximum_args0, NULL};

int luawt_WDoubleSpinBox_setMaximum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_setMaximum_args);
    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
    if (index == 0) {
    double maximum = lua_tonumber(L, 2);
    self->setMaximum(maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.setMaximum");
    }
}

static const char* WDoubleSpinBox_setValue_args0[] = {luawt_typeToStr<WDoubleSpinBox>(), "double", NULL};
static const char* const* const luawt_WDoubleSpinBox_setValue_args[] = {WDoubleSpinBox_setValue_args0, NULL};

int luawt_WDoubleSpinBox_setValue(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_setValue_args);
    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
    if (index == 0) {
    double value = lua_tonumber(L, 2);
    self->setValue(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.setValue");
    }
}

static const char* WDoubleSpinBox_maximum_args0[] = {luawt_typeToStr<WDoubleSpinBox>(), NULL};
static const char* const* const luawt_WDoubleSpinBox_maximum_args[] = {WDoubleSpinBox_maximum_args0, NULL};

int luawt_WDoubleSpinBox_maximum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_maximum_args);
    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
    if (index == 0) {
    double result = self->maximum();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.maximum");
    }
}

static const char* WDoubleSpinBox_value_args0[] = {luawt_typeToStr<WDoubleSpinBox>(), NULL};
static const char* const* const luawt_WDoubleSpinBox_value_args[] = {WDoubleSpinBox_value_args0, NULL};

int luawt_WDoubleSpinBox_value(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_value_args);
    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
    if (index == 0) {
    double result = self->value();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.value");
    }
}

static const char* WDoubleSpinBox_singleStep_args0[] = {luawt_typeToStr<WDoubleSpinBox>(), NULL};
static const char* const* const luawt_WDoubleSpinBox_singleStep_args[] = {WDoubleSpinBox_singleStep_args0, NULL};

int luawt_WDoubleSpinBox_singleStep(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_singleStep_args);
    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
    if (index == 0) {
    double result = self->singleStep();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.singleStep");
    }
}

static const char* WDoubleSpinBox_minimum_args0[] = {luawt_typeToStr<WDoubleSpinBox>(), NULL};
static const char* const* const luawt_WDoubleSpinBox_minimum_args[] = {WDoubleSpinBox_minimum_args0, NULL};

int luawt_WDoubleSpinBox_minimum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_minimum_args);
    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
    if (index == 0) {
    double result = self->minimum();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.minimum");
    }
}

static const char* WDoubleSpinBox_setSingleStep_args0[] = {luawt_typeToStr<WDoubleSpinBox>(), "double", NULL};
static const char* const* const luawt_WDoubleSpinBox_setSingleStep_args[] = {WDoubleSpinBox_setSingleStep_args0, NULL};

int luawt_WDoubleSpinBox_setSingleStep(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_setSingleStep_args);
    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
    if (index == 0) {
    double step = lua_tonumber(L, 2);
    self->setSingleStep(step);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.setSingleStep");
    }
}

static const char* WDoubleSpinBox_setDecimals_args0[] = {luawt_typeToStr<WDoubleSpinBox>(), "int", NULL};
static const char* const* const luawt_WDoubleSpinBox_setDecimals_args[] = {WDoubleSpinBox_setDecimals_args0, NULL};

int luawt_WDoubleSpinBox_setDecimals(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_setDecimals_args);
    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
    if (index == 0) {
    int precision = lua_tointeger(L, 2);
    self->setDecimals(precision);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.setDecimals");
    }
}

static const char* WDoubleSpinBox_decimals_args0[] = {luawt_typeToStr<WDoubleSpinBox>(), NULL};
static const char* const* const luawt_WDoubleSpinBox_decimals_args[] = {WDoubleSpinBox_decimals_args0, NULL};

int luawt_WDoubleSpinBox_decimals(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_decimals_args);
    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
    if (index == 0) {
    int result = self->decimals();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.decimals");
    }
}

static const char* WDoubleSpinBox_setMinimum_args0[] = {luawt_typeToStr<WDoubleSpinBox>(), "double", NULL};
static const char* const* const luawt_WDoubleSpinBox_setMinimum_args[] = {WDoubleSpinBox_setMinimum_args0, NULL};

int luawt_WDoubleSpinBox_setMinimum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_setMinimum_args);
    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
    if (index == 0) {
    double minimum = lua_tonumber(L, 2);
    self->setMinimum(minimum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.setMinimum");
    }
}

static const char* WDoubleSpinBox_setRange_args0[] = {luawt_typeToStr<WDoubleSpinBox>(), "double", "double", NULL};
static const char* const* const luawt_WDoubleSpinBox_setRange_args[] = {WDoubleSpinBox_setRange_args0, NULL};

int luawt_WDoubleSpinBox_setRange(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDoubleSpinBox_setRange_args);
    WDoubleSpinBox* self = luawt_checkFromLua<WDoubleSpinBox>(L, 1);
    if (index == 0) {
    double minimum = lua_tonumber(L, 2);
    double maximum = lua_tonumber(L, 3);
    self->setRange(minimum, maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDoubleSpinBox.setRange");
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
