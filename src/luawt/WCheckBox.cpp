#include "boost-xtime.hpp"

#include <Wt/WCheckBox>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

static const char* WCheckBox_make_args0[] = {NULL};
static const char* WCheckBox_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WCheckBox_make_args2[] = {"char const *", NULL};
static const char* WCheckBox_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WCheckBox_make_args[] = {WCheckBox_make_args0, WCheckBox_make_args1, WCheckBox_make_args2, WCheckBox_make_args3, NULL};

int luawt_WCheckBox_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCheckBox_make_args);
    if (index == 0) {
    WCheckBox * l_result = new WCheckBox();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WCheckBox");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WCheckBox * l_result = new WCheckBox(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    WCheckBox * l_result = new WCheckBox(text);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WCheckBox");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WCheckBox * l_result = new WCheckBox(text, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCheckBox.make");
    }
}

static const char* WCheckBox_setCheckState_args0[] = {luawt_typeToStr<WCheckBox>(), "enum", NULL};
static const char* const* const luawt_WCheckBox_setCheckState_args[] = {WCheckBox_setCheckState_args0, NULL};

int luawt_WCheckBox_setCheckState(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCheckBox_setCheckState_args);
    WCheckBox* self = luawt_checkFromLua<WCheckBox>(L, 1);
    if (index == 0) {
    Wt::CheckState state = static_cast<Wt::CheckState>(luawt_getEnum(
        L,
        luawt_enum_CheckState_str,
        luawt_enum_CheckState_val,
        2,
        "Wrong enum type in args of WCheckBox.setCheckState"
    ));
    self->setCheckState(state);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCheckBox.setCheckState");
    }
}

static const char* WCheckBox_isTristate_args0[] = {luawt_typeToStr<WCheckBox>(), NULL};
static const char* const* const luawt_WCheckBox_isTristate_args[] = {WCheckBox_isTristate_args0, NULL};

int luawt_WCheckBox_isTristate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCheckBox_isTristate_args);
    WCheckBox* self = luawt_checkFromLua<WCheckBox>(L, 1);
    if (index == 0) {
    bool l_result = self->isTristate();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCheckBox.isTristate");
    }
}

static const char* WCheckBox_setTristate_args0[] = {luawt_typeToStr<WCheckBox>(), NULL};
static const char* WCheckBox_setTristate_args1[] = {luawt_typeToStr<WCheckBox>(), "bool", NULL};
static const char* const* const luawt_WCheckBox_setTristate_args[] = {WCheckBox_setTristate_args0, WCheckBox_setTristate_args1, NULL};

int luawt_WCheckBox_setTristate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCheckBox_setTristate_args);
    WCheckBox* self = luawt_checkFromLua<WCheckBox>(L, 1);
    if (index == 0) {
    self->setTristate();
    return 0;
    
    } else if (index == 1) {
    bool tristate = lua_toboolean(L, 2);
    self->setTristate(tristate);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCheckBox.setTristate");
    }
}

static const char* WCheckBox_checkState_args0[] = {luawt_typeToStr<WCheckBox>(), NULL};
static const char* const* const luawt_WCheckBox_checkState_args[] = {WCheckBox_checkState_args0, NULL};

int luawt_WCheckBox_checkState(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCheckBox_checkState_args);
    WCheckBox* self = luawt_checkFromLua<WCheckBox>(L, 1);
    if (index == 0) {
    Wt::CheckState l_result = self->checkState();
    luawt_returnEnum(L, luawt_enum_CheckState_str, luawt_enum_CheckState_val, l_result, "CheckState");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCheckBox.checkState");
    }
}

ADD_SIGNAL(checked, WCheckBox, Wt::NoClass)
ADD_SIGNAL(unChecked, WCheckBox, Wt::NoClass)
ADD_SIGNAL(changed, WCheckBox, Wt::NoClass)
ADD_SIGNAL(selected, WCheckBox, Wt::NoClass)
ADD_SIGNAL(blurred, WCheckBox, Wt::NoClass)
ADD_SIGNAL(focussed, WCheckBox, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WCheckBox, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WCheckBox, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WCheckBox, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WCheckBox, Wt::NoClass)
ADD_SIGNAL(escapePressed, WCheckBox, Wt::NoClass)
ADD_SIGNAL(clicked, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WCheckBox, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WCheckBox, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WCheckBox, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WCheckBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WCheckBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WCheckBox, Wt::WGestureEvent)

static const luaL_Reg luawt_WCheckBox_methods[] = {
    METHOD(WCheckBox, setTristate),
    METHOD(WCheckBox, isTristate),
    METHOD(WCheckBox, setCheckState),
    METHOD(WCheckBox, checkState),
    METHOD(WCheckBox, checked),
    METHOD(WCheckBox, unChecked),
    METHOD(WCheckBox, changed),
    METHOD(WCheckBox, selected),
    METHOD(WCheckBox, blurred),
    METHOD(WCheckBox, focussed),
    METHOD(WCheckBox, keyWentDown),
    METHOD(WCheckBox, keyPressed),
    METHOD(WCheckBox, keyWentUp),
    METHOD(WCheckBox, enterPressed),
    METHOD(WCheckBox, escapePressed),
    METHOD(WCheckBox, clicked),
    METHOD(WCheckBox, doubleClicked),
    METHOD(WCheckBox, mouseWentDown),
    METHOD(WCheckBox, mouseWentUp),
    METHOD(WCheckBox, mouseWentOut),
    METHOD(WCheckBox, mouseWentOver),
    METHOD(WCheckBox, mouseMoved),
    METHOD(WCheckBox, mouseDragged),
    METHOD(WCheckBox, mouseWheel),
    METHOD(WCheckBox, touchStarted),
    METHOD(WCheckBox, touchEnded),
    METHOD(WCheckBox, touchMoved),
    METHOD(WCheckBox, gestureStarted),
    METHOD(WCheckBox, gestureChanged),
    METHOD(WCheckBox, gestureEnded),
    {NULL, NULL},
};

void luawt_WCheckBox(lua_State* L) {
    const char* base = luawt_typeToStr<WAbstractToggleButton>();
    assert(base);
    DECLARE_CLASS(
        WCheckBox,
        L,
        wrap<luawt_WCheckBox_make>::func,
        0,
        luawt_WCheckBox_methods,
        base
    );
}
