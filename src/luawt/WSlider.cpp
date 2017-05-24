#include "boost-xtime.hpp"

#include <Wt/WLength>
#include <Wt/WSlider>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

static const char* WSlider_make_args0[] = {NULL};
static const char* WSlider_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WSlider_make_args2[] = {"enum", NULL};
static const char* WSlider_make_args3[] = {"enum", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WSlider_make_args[] = {WSlider_make_args0, WSlider_make_args1, WSlider_make_args2, WSlider_make_args3, NULL};

int luawt_WSlider_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_make_args);
    if (index == 0) {
    WSlider * l_result = new WSlider();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WSlider");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WSlider * l_result = new WSlider(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(luawt_getEnum(
        L,
        luawt_enum_Orientation_str,
        luawt_enum_Orientation_val,
        1,
        "Wrong enum type in args of WSlider.make"
    ));
    WSlider * l_result = new WSlider(orientation);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WSlider");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 3) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(luawt_getEnum(
        L,
        luawt_enum_Orientation_str,
        luawt_enum_Orientation_val,
        1,
        "Wrong enum type in args of WSlider.make"
    ));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WSlider * l_result = new WSlider(orientation, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSlider.make");
    }
}

static const char* WSlider_setOrientation_args0[] = {luawt_typeToStr<WSlider>(), "enum", NULL};
static const char* const* const luawt_WSlider_setOrientation_args[] = {WSlider_setOrientation_args0, NULL};

int luawt_WSlider_setOrientation(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_setOrientation_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(luawt_getEnum(
        L,
        luawt_enum_Orientation_str,
        luawt_enum_Orientation_val,
        2,
        "Wrong enum type in args of WSlider.setOrientation"
    ));
    self->setOrientation(orientation);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.setOrientation");
    }
}

static const char* WSlider_setMaximum_args0[] = {luawt_typeToStr<WSlider>(), "int", NULL};
static const char* const* const luawt_WSlider_setMaximum_args[] = {WSlider_setMaximum_args0, NULL};

int luawt_WSlider_setMaximum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_setMaximum_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    int maximum = lua_tointeger(L, 2);
    self->setMaximum(maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.setMaximum");
    }
}

static const char* WSlider_setValue_args0[] = {luawt_typeToStr<WSlider>(), "int", NULL};
static const char* const* const luawt_WSlider_setValue_args[] = {WSlider_setValue_args0, NULL};

int luawt_WSlider_setValue(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_setValue_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    int value = lua_tointeger(L, 2);
    self->setValue(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.setValue");
    }
}

static const char* WSlider_setNativeControl_args0[] = {luawt_typeToStr<WSlider>(), "bool", NULL};
static const char* const* const luawt_WSlider_setNativeControl_args[] = {WSlider_setNativeControl_args0, NULL};

int luawt_WSlider_setNativeControl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_setNativeControl_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    bool nativeControl = lua_toboolean(L, 2);
    self->setNativeControl(nativeControl);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.setNativeControl");
    }
}

static const char* WSlider_orientation_args0[] = {luawt_typeToStr<WSlider>(), NULL};
static const char* const* const luawt_WSlider_orientation_args[] = {WSlider_orientation_args0, NULL};

int luawt_WSlider_orientation(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_orientation_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    Wt::Orientation l_result = self->orientation();
    luawt_returnEnum(L, luawt_enum_Orientation_str, luawt_enum_Orientation_val, l_result, "Orientation");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSlider.orientation");
    }
}

static const char* WSlider_valueText_args0[] = {luawt_typeToStr<WSlider>(), NULL};
static const char* const* const luawt_WSlider_valueText_args[] = {WSlider_valueText_args0, NULL};

int luawt_WSlider_valueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_valueText_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    Wt::WString l_result = self->valueText();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSlider.valueText");
    }
}

static const char* WSlider_maximum_args0[] = {luawt_typeToStr<WSlider>(), NULL};
static const char* const* const luawt_WSlider_maximum_args[] = {WSlider_maximum_args0, NULL};

int luawt_WSlider_maximum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_maximum_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    int l_result = self->maximum();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSlider.maximum");
    }
}

static const char* WSlider_value_args0[] = {luawt_typeToStr<WSlider>(), NULL};
static const char* const* const luawt_WSlider_value_args[] = {WSlider_value_args0, NULL};

int luawt_WSlider_value(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_value_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    int l_result = self->value();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSlider.value");
    }
}

static const char* WSlider_setDisabled_args0[] = {luawt_typeToStr<WSlider>(), "bool", NULL};
static const char* const* const luawt_WSlider_setDisabled_args[] = {WSlider_setDisabled_args0, NULL};

int luawt_WSlider_setDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_setDisabled_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    bool disabled = lua_toboolean(L, 2);
    self->setDisabled(disabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.setDisabled");
    }
}

static const char* WSlider_minimum_args0[] = {luawt_typeToStr<WSlider>(), NULL};
static const char* const* const luawt_WSlider_minimum_args[] = {WSlider_minimum_args0, NULL};

int luawt_WSlider_minimum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_minimum_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    int l_result = self->minimum();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSlider.minimum");
    }
}

static const char* WSlider_resize_args0[] = {luawt_typeToStr<WSlider>(), "double", "double", NULL};
static const char* const* const luawt_WSlider_resize_args[] = {WSlider_resize_args0, NULL};

int luawt_WSlider_resize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_resize_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength width = Wt::WLength(raw2);
    double raw3 = lua_tonumber(L, 3);
    Wt::WLength height = Wt::WLength(raw3);
    self->resize(width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.resize");
    }
}

static const char* WSlider_setValueText_args0[] = {luawt_typeToStr<WSlider>(), "char const *", NULL};
static const char* const* const luawt_WSlider_setValueText_args[] = {WSlider_setValueText_args0, NULL};

int luawt_WSlider_setValueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_setValueText_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString value = Wt::WString(raw2);
    self->setValueText(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.setValueText");
    }
}

static const char* WSlider_setTickPosition_args0[] = {luawt_typeToStr<WSlider>(), "enum", NULL};
static const char* const* const luawt_WSlider_setTickPosition_args[] = {WSlider_setTickPosition_args0, NULL};

int luawt_WSlider_setTickPosition(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_setTickPosition_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    Wt::WFlags<Wt::WSlider::TickPosition> tickPosition = static_cast<Wt::WSlider::TickPosition>(luawt_getEnum(
        L,
        luawt_enum_WSlider_TickPosition_str,
        luawt_enum_WSlider_TickPosition_val,
        2,
        "Wrong enum type in args of WSlider.setTickPosition"
    ));
    self->setTickPosition(tickPosition);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.setTickPosition");
    }
}

static const char* WSlider_setHandleWidth_args0[] = {luawt_typeToStr<WSlider>(), "int", NULL};
static const char* const* const luawt_WSlider_setHandleWidth_args[] = {WSlider_setHandleWidth_args0, NULL};

int luawt_WSlider_setHandleWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_setHandleWidth_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    int width = lua_tointeger(L, 2);
    self->setHandleWidth(width);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.setHandleWidth");
    }
}

static const char* WSlider_nativeControl_args0[] = {luawt_typeToStr<WSlider>(), NULL};
static const char* const* const luawt_WSlider_nativeControl_args[] = {WSlider_nativeControl_args0, NULL};

int luawt_WSlider_nativeControl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_nativeControl_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    bool l_result = self->nativeControl();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSlider.nativeControl");
    }
}

static const char* WSlider_tickPosition_args0[] = {luawt_typeToStr<WSlider>(), NULL};
static const char* const* const luawt_WSlider_tickPosition_args[] = {WSlider_tickPosition_args0, NULL};

int luawt_WSlider_tickPosition(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_tickPosition_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    Wt::WFlags<Wt::WSlider::TickPosition> l_result = self->tickPosition();
    luawt_returnEnum(L, luawt_enum_WSlider_TickPosition_str, luawt_enum_WSlider_TickPosition_val, l_result, "WSlider::TickPosition");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSlider.tickPosition");
    }
}

static const char* WSlider_setRange_args0[] = {luawt_typeToStr<WSlider>(), "int", "int", NULL};
static const char* const* const luawt_WSlider_setRange_args[] = {WSlider_setRange_args0, NULL};

int luawt_WSlider_setRange(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_setRange_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    int minimum = lua_tointeger(L, 2);
    int maximum = lua_tointeger(L, 3);
    self->setRange(minimum, maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.setRange");
    }
}

static const char* WSlider_tickInterval_args0[] = {luawt_typeToStr<WSlider>(), NULL};
static const char* const* const luawt_WSlider_tickInterval_args[] = {WSlider_tickInterval_args0, NULL};

int luawt_WSlider_tickInterval(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_tickInterval_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    int l_result = self->tickInterval();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSlider.tickInterval");
    }
}

static const char* WSlider_handleWidth_args0[] = {luawt_typeToStr<WSlider>(), NULL};
static const char* const* const luawt_WSlider_handleWidth_args[] = {WSlider_handleWidth_args0, NULL};

int luawt_WSlider_handleWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_handleWidth_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    int l_result = self->handleWidth();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSlider.handleWidth");
    }
}

static const char* WSlider_setMinimum_args0[] = {luawt_typeToStr<WSlider>(), "int", NULL};
static const char* const* const luawt_WSlider_setMinimum_args[] = {WSlider_setMinimum_args0, NULL};

int luawt_WSlider_setMinimum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_setMinimum_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    int minimum = lua_tointeger(L, 2);
    self->setMinimum(minimum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.setMinimum");
    }
}

static const char* WSlider_setTickInterval_args0[] = {luawt_typeToStr<WSlider>(), "int", NULL};
static const char* const* const luawt_WSlider_setTickInterval_args[] = {WSlider_setTickInterval_args0, NULL};

int luawt_WSlider_setTickInterval(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSlider_setTickInterval_args);
    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
    if (index == 0) {
    int tickInterval = lua_tointeger(L, 2);
    self->setTickInterval(tickInterval);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSlider.setTickInterval");
    }
}

ADD_SIGNAL(changed, WSlider, Wt::NoClass)
ADD_SIGNAL(selected, WSlider, Wt::NoClass)
ADD_SIGNAL(blurred, WSlider, Wt::NoClass)
ADD_SIGNAL(focussed, WSlider, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WSlider, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WSlider, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WSlider, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WSlider, Wt::NoClass)
ADD_SIGNAL(escapePressed, WSlider, Wt::NoClass)
ADD_SIGNAL(clicked, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WSlider, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WSlider, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WSlider, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WSlider, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WSlider, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WSlider, Wt::WGestureEvent)

static const luaL_Reg luawt_WSlider_methods[] = {
    METHOD(WSlider, setNativeControl),
    METHOD(WSlider, nativeControl),
    METHOD(WSlider, setOrientation),
    METHOD(WSlider, orientation),
    METHOD(WSlider, setTickInterval),
    METHOD(WSlider, tickInterval),
    METHOD(WSlider, setTickPosition),
    METHOD(WSlider, tickPosition),
    METHOD(WSlider, setValue),
    METHOD(WSlider, value),
    METHOD(WSlider, setMaximum),
    METHOD(WSlider, maximum),
    METHOD(WSlider, setMinimum),
    METHOD(WSlider, minimum),
    METHOD(WSlider, setRange),
    METHOD(WSlider, setHandleWidth),
    METHOD(WSlider, handleWidth),
    METHOD(WSlider, setDisabled),
    METHOD(WSlider, resize),
    METHOD(WSlider, valueText),
    METHOD(WSlider, setValueText),
    METHOD(WSlider, changed),
    METHOD(WSlider, selected),
    METHOD(WSlider, blurred),
    METHOD(WSlider, focussed),
    METHOD(WSlider, keyWentDown),
    METHOD(WSlider, keyPressed),
    METHOD(WSlider, keyWentUp),
    METHOD(WSlider, enterPressed),
    METHOD(WSlider, escapePressed),
    METHOD(WSlider, clicked),
    METHOD(WSlider, doubleClicked),
    METHOD(WSlider, mouseWentDown),
    METHOD(WSlider, mouseWentUp),
    METHOD(WSlider, mouseWentOut),
    METHOD(WSlider, mouseWentOver),
    METHOD(WSlider, mouseMoved),
    METHOD(WSlider, mouseDragged),
    METHOD(WSlider, mouseWheel),
    METHOD(WSlider, touchStarted),
    METHOD(WSlider, touchEnded),
    METHOD(WSlider, touchMoved),
    METHOD(WSlider, gestureStarted),
    METHOD(WSlider, gestureChanged),
    METHOD(WSlider, gestureEnded),
    {NULL, NULL},
};

void luawt_WSlider(lua_State* L) {
    const char* base = luawt_typeToStr<WFormWidget>();
    assert(base);
    DECLARE_CLASS(
        WSlider,
        L,
        wrap<luawt_WSlider_make>::func,
        0,
        luawt_WSlider_methods,
        base
    );
}
