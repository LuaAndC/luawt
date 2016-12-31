#include "boost-xtime.hpp"

#include <Wt/WAbstractToggleButton>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WAbstractToggleButton_text(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
        if (argc == 0) {
    Wt::WString const result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractToggleButton.text: %d", argc);
    }
}

int luawt_WAbstractToggleButton_setText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractToggleButton.setText: %d", argc);
    }
}

int luawt_WAbstractToggleButton_refresh(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
        if (argc == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractToggleButton.refresh: %d", argc);
    }
}

int luawt_WAbstractToggleButton_isChecked(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
        if (argc == 0) {
    bool result = self->isChecked();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractToggleButton.isChecked: %d", argc);
    }
}

int luawt_WAbstractToggleButton_setChecked(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
        if (argc == 0) {
    self->setChecked();
    return 0;
    
    } else     if (argc == 1) {
    bool checked = lua_toboolean(L, 2);
    self->setChecked(checked);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractToggleButton.setChecked: %d", argc);
    }
}

int luawt_WAbstractToggleButton_setUnChecked(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
        if (argc == 0) {
    self->setUnChecked();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractToggleButton.setUnChecked: %d", argc);
    }
}

int luawt_WAbstractToggleButton_setValueText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setValueText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractToggleButton.setValueText: %d", argc);
    }
}

int luawt_WAbstractToggleButton_valueText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractToggleButton* self = luawt_checkFromLua<WAbstractToggleButton>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->valueText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractToggleButton.valueText: %d", argc);
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
    METHOD(WAbstractToggleButton, refresh),
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
