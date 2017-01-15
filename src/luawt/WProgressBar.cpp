#include "boost-xtime.hpp"

#include <Wt/WProgressBar>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

static const char* WProgressBar_make_args0[] = {NULL};
static const char* WProgressBar_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WProgressBar_make_args[] = {WProgressBar_make_args0, WProgressBar_make_args1, NULL};

int luawt_WProgressBar_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_make_args);
    if (index == 0) {
    WProgressBar * result = new WProgressBar();
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WProgressBar * result = new WProgressBar(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.make");
    }
}

static const char* WProgressBar_setMaximum_args0[] = {luawt_typeToStr<WProgressBar>(), "double", NULL};
static const char* const* const luawt_WProgressBar_setMaximum_args[] = {WProgressBar_setMaximum_args0, NULL};

int luawt_WProgressBar_setMaximum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_setMaximum_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    double maximum = lua_tonumber(L, 2);
    self->setMaximum(maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.setMaximum");
    }
}

static const char* WProgressBar_setValue_args0[] = {luawt_typeToStr<WProgressBar>(), "double", NULL};
static const char* const* const luawt_WProgressBar_setValue_args[] = {WProgressBar_setValue_args0, NULL};

int luawt_WProgressBar_setValue(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_setValue_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    double value = lua_tonumber(L, 2);
    self->setValue(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.setValue");
    }
}

static const char* WProgressBar_setValueStyleClass_args0[] = {luawt_typeToStr<WProgressBar>(), "char const *", NULL};
static const char* const* const luawt_WProgressBar_setValueStyleClass_args[] = {WProgressBar_setValueStyleClass_args0, NULL};

int luawt_WProgressBar_setValueStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_setValueStyleClass_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string valueClass = std::string(raw2);
    self->setValueStyleClass(valueClass);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.setValueStyleClass");
    }
}

static const char* WProgressBar_format_args0[] = {luawt_typeToStr<WProgressBar>(), NULL};
static const char* const* const luawt_WProgressBar_format_args[] = {WProgressBar_format_args0, NULL};

int luawt_WProgressBar_format(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_format_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    Wt::WString const & result = self->format();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.format");
    }
}

static const char* WProgressBar_setFormat_args0[] = {luawt_typeToStr<WProgressBar>(), "char const *", NULL};
static const char* const* const luawt_WProgressBar_setFormat_args[] = {WProgressBar_setFormat_args0, NULL};

int luawt_WProgressBar_setFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_setFormat_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString format = Wt::WString(raw2);
    self->setFormat(format);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.setFormat");
    }
}

static const char* WProgressBar_text_args0[] = {luawt_typeToStr<WProgressBar>(), NULL};
static const char* const* const luawt_WProgressBar_text_args[] = {WProgressBar_text_args0, NULL};

int luawt_WProgressBar_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_text_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    Wt::WString result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.text");
    }
}

static const char* WProgressBar_maximum_args0[] = {luawt_typeToStr<WProgressBar>(), NULL};
static const char* const* const luawt_WProgressBar_maximum_args[] = {WProgressBar_maximum_args0, NULL};

int luawt_WProgressBar_maximum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_maximum_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    double result = self->maximum();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.maximum");
    }
}

static const char* WProgressBar_value_args0[] = {luawt_typeToStr<WProgressBar>(), NULL};
static const char* const* const luawt_WProgressBar_value_args[] = {WProgressBar_value_args0, NULL};

int luawt_WProgressBar_value(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_value_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    double result = self->value();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.value");
    }
}

static const char* WProgressBar_minimum_args0[] = {luawt_typeToStr<WProgressBar>(), NULL};
static const char* const* const luawt_WProgressBar_minimum_args[] = {WProgressBar_minimum_args0, NULL};

int luawt_WProgressBar_minimum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_minimum_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    double result = self->minimum();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.minimum");
    }
}

static const char* WProgressBar_setState_args0[] = {luawt_typeToStr<WProgressBar>(), "double", "double", "double", NULL};
static const char* const* const luawt_WProgressBar_setState_args[] = {WProgressBar_setState_args0, NULL};

int luawt_WProgressBar_setState(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_setState_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    double minimum = lua_tonumber(L, 2);
    double maximum = lua_tonumber(L, 3);
    double value = lua_tonumber(L, 4);
    self->setState(minimum, maximum, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.setState");
    }
}

static const char* WProgressBar_setMinimum_args0[] = {luawt_typeToStr<WProgressBar>(), "double", NULL};
static const char* const* const luawt_WProgressBar_setMinimum_args[] = {WProgressBar_setMinimum_args0, NULL};

int luawt_WProgressBar_setMinimum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_setMinimum_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    double minimum = lua_tonumber(L, 2);
    self->setMinimum(minimum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.setMinimum");
    }
}

static const char* WProgressBar_setRange_args0[] = {luawt_typeToStr<WProgressBar>(), "double", "double", NULL};
static const char* const* const luawt_WProgressBar_setRange_args[] = {WProgressBar_setRange_args0, NULL};

int luawt_WProgressBar_setRange(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WProgressBar_setRange_args);
    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
    if (index == 0) {
    double minimum = lua_tonumber(L, 2);
    double maximum = lua_tonumber(L, 3);
    self->setRange(minimum, maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WProgressBar.setRange");
    }
}

ADD_SIGNAL(keyWentDown, WProgressBar, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WProgressBar, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WProgressBar, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WProgressBar, Wt::NoClass)
ADD_SIGNAL(escapePressed, WProgressBar, Wt::NoClass)
ADD_SIGNAL(clicked, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WProgressBar, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WProgressBar, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WProgressBar, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WProgressBar, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WProgressBar, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WProgressBar, Wt::WGestureEvent)

static const luaL_Reg luawt_WProgressBar_methods[] = {
    METHOD(WProgressBar, setMinimum),
    METHOD(WProgressBar, minimum),
    METHOD(WProgressBar, setMaximum),
    METHOD(WProgressBar, maximum),
    METHOD(WProgressBar, setRange),
    METHOD(WProgressBar, setValue),
    METHOD(WProgressBar, value),
    METHOD(WProgressBar, setFormat),
    METHOD(WProgressBar, format),
    METHOD(WProgressBar, text),
    METHOD(WProgressBar, setValueStyleClass),
    METHOD(WProgressBar, setState),
    METHOD(WProgressBar, keyWentDown),
    METHOD(WProgressBar, keyPressed),
    METHOD(WProgressBar, keyWentUp),
    METHOD(WProgressBar, enterPressed),
    METHOD(WProgressBar, escapePressed),
    METHOD(WProgressBar, clicked),
    METHOD(WProgressBar, doubleClicked),
    METHOD(WProgressBar, mouseWentDown),
    METHOD(WProgressBar, mouseWentUp),
    METHOD(WProgressBar, mouseWentOut),
    METHOD(WProgressBar, mouseWentOver),
    METHOD(WProgressBar, mouseMoved),
    METHOD(WProgressBar, mouseDragged),
    METHOD(WProgressBar, mouseWheel),
    METHOD(WProgressBar, touchStarted),
    METHOD(WProgressBar, touchEnded),
    METHOD(WProgressBar, touchMoved),
    METHOD(WProgressBar, gestureStarted),
    METHOD(WProgressBar, gestureChanged),
    METHOD(WProgressBar, gestureEnded),
    {NULL, NULL},
};

void luawt_WProgressBar(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WProgressBar,
        L,
        wrap<luawt_WProgressBar_make>::func,
        0,
        luawt_WProgressBar_methods,
        base
    );
}
