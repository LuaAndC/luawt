#include "boost-xtime.hpp"

#include <Wt/WAbstractSpinBox>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

static const char* WAbstractSpinBox_setNativeControl_args0[] = {luawt_typeToStr<WAbstractSpinBox>(), "bool", NULL};
static const char* const* const luawt_WAbstractSpinBox_setNativeControl_args[] = {WAbstractSpinBox_setNativeControl_args0, NULL};

int luawt_WAbstractSpinBox_setNativeControl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractSpinBox_setNativeControl_args);
    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
    if (index == 0) {
        bool nativeControl = lua_toboolean(L, 2);
        self->setNativeControl(nativeControl);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractSpinBox.setNativeControl");
    }
}

static const char* WAbstractSpinBox_suffix_args0[] = {luawt_typeToStr<WAbstractSpinBox>(), NULL};
static const char* const* const luawt_WAbstractSpinBox_suffix_args[] = {WAbstractSpinBox_suffix_args0, NULL};

int luawt_WAbstractSpinBox_suffix(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractSpinBox_suffix_args);
    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
    if (index == 0) {
        Wt::WString const& l_result = self->suffix();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractSpinBox.suffix");
    }
}

static const char* WAbstractSpinBox_setSuffix_args0[] = {luawt_typeToStr<WAbstractSpinBox>(), "char const *", NULL};
static const char* const* const luawt_WAbstractSpinBox_setSuffix_args[] = {WAbstractSpinBox_setSuffix_args0, NULL};

int luawt_WAbstractSpinBox_setSuffix(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractSpinBox_setSuffix_args);
    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString suffix = Wt::WString(raw2);
        self->setSuffix(suffix);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractSpinBox.setSuffix");
    }
}

static const char* WAbstractSpinBox_setText_args0[] = {luawt_typeToStr<WAbstractSpinBox>(), "char const *", NULL};
static const char* const* const luawt_WAbstractSpinBox_setText_args[] = {WAbstractSpinBox_setText_args0, NULL};

int luawt_WAbstractSpinBox_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractSpinBox_setText_args);
    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString text = Wt::WString(raw2);
        self->setText(text);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractSpinBox.setText");
    }
}

static const char* WAbstractSpinBox_prefix_args0[] = {luawt_typeToStr<WAbstractSpinBox>(), NULL};
static const char* const* const luawt_WAbstractSpinBox_prefix_args[] = {WAbstractSpinBox_prefix_args0, NULL};

int luawt_WAbstractSpinBox_prefix(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractSpinBox_prefix_args);
    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
    if (index == 0) {
        Wt::WString const& l_result = self->prefix();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractSpinBox.prefix");
    }
}

static const char* WAbstractSpinBox_nativeControl_args0[] = {luawt_typeToStr<WAbstractSpinBox>(), NULL};
static const char* const* const luawt_WAbstractSpinBox_nativeControl_args[] = {WAbstractSpinBox_nativeControl_args0, NULL};

int luawt_WAbstractSpinBox_nativeControl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractSpinBox_nativeControl_args);
    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
    if (index == 0) {
        bool l_result = self->nativeControl();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractSpinBox.nativeControl");
    }
}

static const char* WAbstractSpinBox_validate_args0[] = {luawt_typeToStr<WAbstractSpinBox>(), NULL};
static const char* const* const luawt_WAbstractSpinBox_validate_args[] = {WAbstractSpinBox_validate_args0, NULL};

int luawt_WAbstractSpinBox_validate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractSpinBox_validate_args);
    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
    if (index == 0) {
        Wt::WValidator::State l_result = self->validate();
        luawt_returnEnum(L, luawt_enum_WValidator_State_str, luawt_enum_WValidator_State_val, l_result, "WValidator::State");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractSpinBox.validate");
    }
}

static const char* WAbstractSpinBox_setPrefix_args0[] = {luawt_typeToStr<WAbstractSpinBox>(), "char const *", NULL};
static const char* const* const luawt_WAbstractSpinBox_setPrefix_args[] = {WAbstractSpinBox_setPrefix_args0, NULL};

int luawt_WAbstractSpinBox_setPrefix(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractSpinBox_setPrefix_args);
    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString prefix = Wt::WString(raw2);
        self->setPrefix(prefix);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractSpinBox.setPrefix");
    }
}

ADD_SIGNAL(changed, WAbstractSpinBox, Wt::NoClass)
ADD_SIGNAL(selected, WAbstractSpinBox, Wt::NoClass)
ADD_SIGNAL(blurred, WAbstractSpinBox, Wt::NoClass)
ADD_SIGNAL(focussed, WAbstractSpinBox, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WAbstractSpinBox, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WAbstractSpinBox, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WAbstractSpinBox, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WAbstractSpinBox, Wt::NoClass)
ADD_SIGNAL(escapePressed, WAbstractSpinBox, Wt::NoClass)
ADD_SIGNAL(clicked, WAbstractSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WAbstractSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WAbstractSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WAbstractSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WAbstractSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WAbstractSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WAbstractSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WAbstractSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WAbstractSpinBox, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WAbstractSpinBox, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WAbstractSpinBox, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WAbstractSpinBox, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WAbstractSpinBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WAbstractSpinBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WAbstractSpinBox, Wt::WGestureEvent)

static const luaL_Reg luawt_WAbstractSpinBox_methods[] = {
    METHOD(WAbstractSpinBox, setNativeControl),
    METHOD(WAbstractSpinBox, nativeControl),
    METHOD(WAbstractSpinBox, setPrefix),
    METHOD(WAbstractSpinBox, prefix),
    METHOD(WAbstractSpinBox, setSuffix),
    METHOD(WAbstractSpinBox, suffix),
    METHOD(WAbstractSpinBox, setText),
    METHOD(WAbstractSpinBox, validate),
    METHOD(WAbstractSpinBox, changed),
    METHOD(WAbstractSpinBox, selected),
    METHOD(WAbstractSpinBox, blurred),
    METHOD(WAbstractSpinBox, focussed),
    METHOD(WAbstractSpinBox, keyWentDown),
    METHOD(WAbstractSpinBox, keyPressed),
    METHOD(WAbstractSpinBox, keyWentUp),
    METHOD(WAbstractSpinBox, enterPressed),
    METHOD(WAbstractSpinBox, escapePressed),
    METHOD(WAbstractSpinBox, clicked),
    METHOD(WAbstractSpinBox, doubleClicked),
    METHOD(WAbstractSpinBox, mouseWentDown),
    METHOD(WAbstractSpinBox, mouseWentUp),
    METHOD(WAbstractSpinBox, mouseWentOut),
    METHOD(WAbstractSpinBox, mouseWentOver),
    METHOD(WAbstractSpinBox, mouseMoved),
    METHOD(WAbstractSpinBox, mouseDragged),
    METHOD(WAbstractSpinBox, mouseWheel),
    METHOD(WAbstractSpinBox, touchStarted),
    METHOD(WAbstractSpinBox, touchEnded),
    METHOD(WAbstractSpinBox, touchMoved),
    METHOD(WAbstractSpinBox, gestureStarted),
    METHOD(WAbstractSpinBox, gestureChanged),
    METHOD(WAbstractSpinBox, gestureEnded),
    {NULL, NULL},
};

void luawt_WAbstractSpinBox(lua_State* L) {
    const char* base = luawt_typeToStr<WLineEdit>();
    assert(base);
    DECLARE_CLASS(
        WAbstractSpinBox,
        L,
        0,
        0,
        luawt_WAbstractSpinBox_methods,
        base
    );
}
