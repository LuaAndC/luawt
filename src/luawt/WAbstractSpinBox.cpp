#include "boost-xtime.hpp"

#include <Wt/WAbstractSpinBox>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WAbstractSpinBox_setNativeControl(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
        if (argc == 1) {
    bool nativeControl = lua_toboolean(L, 2);
    self->setNativeControl(nativeControl);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractSpinBox.setNativeControl: %d", argc);
    }
}

int luawt_WAbstractSpinBox_suffix(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->suffix();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractSpinBox.suffix: %d", argc);
    }
}

int luawt_WAbstractSpinBox_setSuffix(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString suffix = Wt::WString(raw2);
    self->setSuffix(suffix);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractSpinBox.setSuffix: %d", argc);
    }
}

int luawt_WAbstractSpinBox_refresh(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
        if (argc == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractSpinBox.refresh: %d", argc);
    }
}

int luawt_WAbstractSpinBox_setText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractSpinBox.setText: %d", argc);
    }
}

int luawt_WAbstractSpinBox_prefix(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->prefix();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractSpinBox.prefix: %d", argc);
    }
}

int luawt_WAbstractSpinBox_nativeControl(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
        if (argc == 0) {
    bool result = self->nativeControl();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractSpinBox.nativeControl: %d", argc);
    }
}

int luawt_WAbstractSpinBox_validate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
        if (argc == 0) {
    Wt::WValidator::State result = self->validate();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractSpinBox.validate: %d", argc);
    }
}

int luawt_WAbstractSpinBox_setPrefix(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractSpinBox* self = luawt_checkFromLua<WAbstractSpinBox>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString prefix = Wt::WString(raw2);
    self->setPrefix(prefix);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractSpinBox.setPrefix: %d", argc);
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
    METHOD(WAbstractSpinBox, refresh),
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
