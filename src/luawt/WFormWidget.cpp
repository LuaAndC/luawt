#include "boost-xtime.hpp"

#include <Wt/WLabel>
#include <Wt/WFormWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WFormWidget_setEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->setEnabled(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFormWidget.setEnabled: %d", argc);
    }
}

int luawt_WFormWidget_isReadOnly(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isReadOnly();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFormWidget.isReadOnly: %d", argc);
    }
}

int luawt_WFormWidget_setEmptyText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString emptyText = Wt::WString(raw2);
    self->setEmptyText(emptyText);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFormWidget.setEmptyText: %d", argc);
    }
}

int luawt_WFormWidget_label(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
        if (argc == 0) {
    Wt::WLabel * result = self->label();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFormWidget.label: %d", argc);
    }
}

int luawt_WFormWidget_setReadOnly(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
        if (argc == 1) {
    bool readOnly = lua_toboolean(L, 2);
    self->setReadOnly(readOnly);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFormWidget.setReadOnly: %d", argc);
    }
}

int luawt_WFormWidget_emptyText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->emptyText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFormWidget.emptyText: %d", argc);
    }
}

int luawt_WFormWidget_tabIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
        if (argc == 0) {
    int result = self->tabIndex();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFormWidget.tabIndex: %d", argc);
    }
}

int luawt_WFormWidget_validate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
        if (argc == 0) {
    Wt::WValidator::State result = self->validate();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFormWidget.validate: %d", argc);
    }
}

ADD_SIGNAL(changed, WFormWidget, Wt::NoClass)
ADD_SIGNAL(selected, WFormWidget, Wt::NoClass)
ADD_SIGNAL(blurred, WFormWidget, Wt::NoClass)
ADD_SIGNAL(focussed, WFormWidget, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WFormWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WFormWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WFormWidget, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WFormWidget, Wt::NoClass)
ADD_SIGNAL(escapePressed, WFormWidget, Wt::NoClass)
ADD_SIGNAL(clicked, WFormWidget, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WFormWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WFormWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WFormWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WFormWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WFormWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WFormWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WFormWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WFormWidget, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WFormWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WFormWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WFormWidget, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WFormWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WFormWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WFormWidget, Wt::WGestureEvent)

static const luaL_Reg luawt_WFormWidget_methods[] = {
    METHOD(WFormWidget, label),
    METHOD(WFormWidget, validate),
    METHOD(WFormWidget, setEnabled),
    METHOD(WFormWidget, tabIndex),
    METHOD(WFormWidget, setReadOnly),
    METHOD(WFormWidget, isReadOnly),
    METHOD(WFormWidget, setEmptyText),
    METHOD(WFormWidget, emptyText),
    METHOD(WFormWidget, changed),
    METHOD(WFormWidget, selected),
    METHOD(WFormWidget, blurred),
    METHOD(WFormWidget, focussed),
    METHOD(WFormWidget, keyWentDown),
    METHOD(WFormWidget, keyPressed),
    METHOD(WFormWidget, keyWentUp),
    METHOD(WFormWidget, enterPressed),
    METHOD(WFormWidget, escapePressed),
    METHOD(WFormWidget, clicked),
    METHOD(WFormWidget, doubleClicked),
    METHOD(WFormWidget, mouseWentDown),
    METHOD(WFormWidget, mouseWentUp),
    METHOD(WFormWidget, mouseWentOut),
    METHOD(WFormWidget, mouseWentOver),
    METHOD(WFormWidget, mouseMoved),
    METHOD(WFormWidget, mouseDragged),
    METHOD(WFormWidget, mouseWheel),
    METHOD(WFormWidget, touchStarted),
    METHOD(WFormWidget, touchEnded),
    METHOD(WFormWidget, touchMoved),
    METHOD(WFormWidget, gestureStarted),
    METHOD(WFormWidget, gestureChanged),
    METHOD(WFormWidget, gestureEnded),
    {NULL, NULL},
};

void luawt_WFormWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WFormWidget,
        L,
        0,
        0,
        luawt_WFormWidget_methods,
        base
    );
}
