#include "boost-xtime.hpp"

#include <Wt/WSpinBox>
#include <Wt/WContainerWidget>

#include "globals.hpp"

static const char* WSpinBox_make_args0[] = {NULL};
static const char* WSpinBox_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WSpinBox_make_args[] = {WSpinBox_make_args0, WSpinBox_make_args1, NULL};

int luawt_WSpinBox_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSpinBox_make_args);
    if (index == 0) {
    WSpinBox * result = new WSpinBox();
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WSpinBox");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WSpinBox * result = new WSpinBox(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSpinBox.make");
    }
}

static const char* WSpinBox_setMaximum_args0[] = {luawt_typeToStr<WSpinBox>(), "int", NULL};
static const char* const* const luawt_WSpinBox_setMaximum_args[] = {WSpinBox_setMaximum_args0, NULL};

int luawt_WSpinBox_setMaximum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSpinBox_setMaximum_args);
    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
    if (index == 0) {
    int maximum = lua_tointeger(L, 2);
    self->setMaximum(maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSpinBox.setMaximum");
    }
}

static const char* WSpinBox_setValue_args0[] = {luawt_typeToStr<WSpinBox>(), "int", NULL};
static const char* const* const luawt_WSpinBox_setValue_args[] = {WSpinBox_setValue_args0, NULL};

int luawt_WSpinBox_setValue(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSpinBox_setValue_args);
    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
    if (index == 0) {
    int value = lua_tointeger(L, 2);
    self->setValue(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSpinBox.setValue");
    }
}

static const char* WSpinBox_maximum_args0[] = {luawt_typeToStr<WSpinBox>(), NULL};
static const char* const* const luawt_WSpinBox_maximum_args[] = {WSpinBox_maximum_args0, NULL};

int luawt_WSpinBox_maximum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSpinBox_maximum_args);
    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
    if (index == 0) {
    int result = self->maximum();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSpinBox.maximum");
    }
}

static const char* WSpinBox_value_args0[] = {luawt_typeToStr<WSpinBox>(), NULL};
static const char* const* const luawt_WSpinBox_value_args[] = {WSpinBox_value_args0, NULL};

int luawt_WSpinBox_value(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSpinBox_value_args);
    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
    if (index == 0) {
    int result = self->value();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSpinBox.value");
    }
}

static const char* WSpinBox_singleStep_args0[] = {luawt_typeToStr<WSpinBox>(), NULL};
static const char* const* const luawt_WSpinBox_singleStep_args[] = {WSpinBox_singleStep_args0, NULL};

int luawt_WSpinBox_singleStep(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSpinBox_singleStep_args);
    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
    if (index == 0) {
    int result = self->singleStep();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSpinBox.singleStep");
    }
}

static const char* WSpinBox_minimum_args0[] = {luawt_typeToStr<WSpinBox>(), NULL};
static const char* const* const luawt_WSpinBox_minimum_args[] = {WSpinBox_minimum_args0, NULL};

int luawt_WSpinBox_minimum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSpinBox_minimum_args);
    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
    if (index == 0) {
    int result = self->minimum();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSpinBox.minimum");
    }
}

static const char* WSpinBox_setSingleStep_args0[] = {luawt_typeToStr<WSpinBox>(), "int", NULL};
static const char* const* const luawt_WSpinBox_setSingleStep_args[] = {WSpinBox_setSingleStep_args0, NULL};

int luawt_WSpinBox_setSingleStep(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSpinBox_setSingleStep_args);
    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
    if (index == 0) {
    int step = lua_tointeger(L, 2);
    self->setSingleStep(step);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSpinBox.setSingleStep");
    }
}

static const char* WSpinBox_setMinimum_args0[] = {luawt_typeToStr<WSpinBox>(), "int", NULL};
static const char* const* const luawt_WSpinBox_setMinimum_args[] = {WSpinBox_setMinimum_args0, NULL};

int luawt_WSpinBox_setMinimum(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSpinBox_setMinimum_args);
    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
    if (index == 0) {
    int minimum = lua_tointeger(L, 2);
    self->setMinimum(minimum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSpinBox.setMinimum");
    }
}

static const char* WSpinBox_setRange_args0[] = {luawt_typeToStr<WSpinBox>(), "int", "int", NULL};
static const char* const* const luawt_WSpinBox_setRange_args[] = {WSpinBox_setRange_args0, NULL};

int luawt_WSpinBox_setRange(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSpinBox_setRange_args);
    WSpinBox* self = luawt_checkFromLua<WSpinBox>(L, 1);
    if (index == 0) {
    int minimum = lua_tointeger(L, 2);
    int maximum = lua_tointeger(L, 3);
    self->setRange(minimum, maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSpinBox.setRange");
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
    METHOD(WSpinBox, setMinimum),
    METHOD(WSpinBox, minimum),
    METHOD(WSpinBox, setMaximum),
    METHOD(WSpinBox, maximum),
    METHOD(WSpinBox, setRange),
    METHOD(WSpinBox, setSingleStep),
    METHOD(WSpinBox, singleStep),
    METHOD(WSpinBox, setValue),
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
