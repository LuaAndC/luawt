#include "boost-xtime.hpp"

#include <Wt/WAbstractToggleButton>
#include <Wt/WString>

#include "globals.hpp"

static const char* WAbstractToggleButton_text_args0[] = {luawt_typeToStr<WAbstractToggleButton>(), NULL};
static const char* const* const luawt_WAbstractToggleButton_text_args[] = {WAbstractToggleButton_text_args0, NULL};

int luawt_WAbstractToggleButton_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractToggleButton_text_args);
    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
    if (index == 0) {
    Wt::WString const l_result = self->text();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractToggleButton.text");
    }
}

static const char* WAbstractToggleButton_setText_args0[] = {luawt_typeToStr<WAbstractToggleButton>(), "char const *", NULL};
static const char* const* const luawt_WAbstractToggleButton_setText_args[] = {WAbstractToggleButton_setText_args0, NULL};

int luawt_WAbstractToggleButton_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractToggleButton_setText_args);
    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractToggleButton.setText");
    }
}

static const char* WAbstractToggleButton_isChecked_args0[] = {luawt_typeToStr<WAbstractToggleButton>(), NULL};
static const char* const* const luawt_WAbstractToggleButton_isChecked_args[] = {WAbstractToggleButton_isChecked_args0, NULL};

int luawt_WAbstractToggleButton_isChecked(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractToggleButton_isChecked_args);
    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
    if (index == 0) {
    bool l_result = self->isChecked();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractToggleButton.isChecked");
    }
}

static const char* WAbstractToggleButton_setChecked_args0[] = {luawt_typeToStr<WAbstractToggleButton>(), "bool", NULL};
static const char* WAbstractToggleButton_setChecked_args1[] = {luawt_typeToStr<WAbstractToggleButton>(), NULL};
static const char* const* const luawt_WAbstractToggleButton_setChecked_args[] = {WAbstractToggleButton_setChecked_args0, WAbstractToggleButton_setChecked_args1, NULL};

int luawt_WAbstractToggleButton_setChecked(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractToggleButton_setChecked_args);
    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
    if (index == 0) {
    bool checked = lua_toboolean(L, 2);
    self->setChecked(checked);
    return 0;
    
    } else if (index == 1) {
    self->setChecked();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractToggleButton.setChecked");
    }
}

static const char* WAbstractToggleButton_setUnChecked_args0[] = {luawt_typeToStr<WAbstractToggleButton>(), NULL};
static const char* const* const luawt_WAbstractToggleButton_setUnChecked_args[] = {WAbstractToggleButton_setUnChecked_args0, NULL};

int luawt_WAbstractToggleButton_setUnChecked(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractToggleButton_setUnChecked_args);
    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
    if (index == 0) {
    self->setUnChecked();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractToggleButton.setUnChecked");
    }
}

static const char* WAbstractToggleButton_setValueText_args0[] = {luawt_typeToStr<WAbstractToggleButton>(), "char const *", NULL};
static const char* const* const luawt_WAbstractToggleButton_setValueText_args[] = {WAbstractToggleButton_setValueText_args0, NULL};

int luawt_WAbstractToggleButton_setValueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractToggleButton_setValueText_args);
    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setValueText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractToggleButton.setValueText");
    }
}

static const char* WAbstractToggleButton_valueText_args0[] = {luawt_typeToStr<WAbstractToggleButton>(), NULL};
static const char* const* const luawt_WAbstractToggleButton_valueText_args[] = {WAbstractToggleButton_valueText_args0, NULL};

int luawt_WAbstractToggleButton_valueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractToggleButton_valueText_args);
    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
    if (index == 0) {
    Wt::WString l_result = self->valueText();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractToggleButton.valueText");
    }
}

ADD_SIGNAL(checked, WAbstractToggleButton, Wt::NoClass)
ADD_SIGNAL(unChecked, WAbstractToggleButton, Wt::NoClass)
ADD_SIGNAL(changed, WAbstractToggleButton, Wt::NoClass)
ADD_SIGNAL(selected, WAbstractToggleButton, Wt::NoClass)
ADD_SIGNAL(blurred, WAbstractToggleButton, Wt::NoClass)
ADD_SIGNAL(focussed, WAbstractToggleButton, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WAbstractToggleButton, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WAbstractToggleButton, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WAbstractToggleButton, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WAbstractToggleButton, Wt::NoClass)
ADD_SIGNAL(escapePressed, WAbstractToggleButton, Wt::NoClass)
ADD_SIGNAL(clicked, WAbstractToggleButton, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WAbstractToggleButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WAbstractToggleButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WAbstractToggleButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WAbstractToggleButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WAbstractToggleButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WAbstractToggleButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WAbstractToggleButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WAbstractToggleButton, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WAbstractToggleButton, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WAbstractToggleButton, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WAbstractToggleButton, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WAbstractToggleButton, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WAbstractToggleButton, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WAbstractToggleButton, Wt::WGestureEvent)

static const luaL_Reg luawt_WAbstractToggleButton_methods[] = {
    METHOD(WAbstractToggleButton, setText),
    METHOD(WAbstractToggleButton, text),
    METHOD(WAbstractToggleButton, isChecked),
    METHOD(WAbstractToggleButton, setChecked),
    METHOD(WAbstractToggleButton, setChecked),
    METHOD(WAbstractToggleButton, setUnChecked),
    METHOD(WAbstractToggleButton, valueText),
    METHOD(WAbstractToggleButton, setValueText),
    METHOD(WAbstractToggleButton, checked),
    METHOD(WAbstractToggleButton, unChecked),
    METHOD(WAbstractToggleButton, changed),
    METHOD(WAbstractToggleButton, selected),
    METHOD(WAbstractToggleButton, blurred),
    METHOD(WAbstractToggleButton, focussed),
    METHOD(WAbstractToggleButton, keyWentDown),
    METHOD(WAbstractToggleButton, keyPressed),
    METHOD(WAbstractToggleButton, keyWentUp),
    METHOD(WAbstractToggleButton, enterPressed),
    METHOD(WAbstractToggleButton, escapePressed),
    METHOD(WAbstractToggleButton, clicked),
    METHOD(WAbstractToggleButton, doubleClicked),
    METHOD(WAbstractToggleButton, mouseWentDown),
    METHOD(WAbstractToggleButton, mouseWentUp),
    METHOD(WAbstractToggleButton, mouseWentOut),
    METHOD(WAbstractToggleButton, mouseWentOver),
    METHOD(WAbstractToggleButton, mouseMoved),
    METHOD(WAbstractToggleButton, mouseDragged),
    METHOD(WAbstractToggleButton, mouseWheel),
    METHOD(WAbstractToggleButton, touchStarted),
    METHOD(WAbstractToggleButton, touchEnded),
    METHOD(WAbstractToggleButton, touchMoved),
    METHOD(WAbstractToggleButton, gestureStarted),
    METHOD(WAbstractToggleButton, gestureChanged),
    METHOD(WAbstractToggleButton, gestureEnded),
    {NULL, NULL},
};

void luawt_WAbstractToggleButton(lua_State* L) {
    const char* base = luawt_typeToStr<WFormWidget>();
    assert(base);
    DECLARE_CLASS(
        WAbstractToggleButton,
        L,
        0,
        0,
        luawt_WAbstractToggleButton_methods,
        base
    );
}
