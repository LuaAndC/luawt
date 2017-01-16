#include "boost-xtime.hpp"

#include <Wt/WLabel>
#include <Wt/WFormWidget>
#include <Wt/WString>

#include "globals.hpp"

static const char* WFormWidget_setFocus_args0[] = {luawt_typeToStr<WFormWidget>(), NULL};
static const char* WFormWidget_setFocus_args1[] = {luawt_typeToStr<WFormWidget>(), "bool", NULL};
static const char* const* const luawt_WFormWidget_setFocus_args[] = {WFormWidget_setFocus_args0, WFormWidget_setFocus_args1, NULL};

int luawt_WFormWidget_setFocus(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_setFocus_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    self->setFocus();
    return 0;
    
    } else if (index == 1) {
    bool focus = lua_toboolean(L, 2);
    self->setFocus(focus);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.setFocus");
    }
}

static const char* WFormWidget_setEnabled_args0[] = {luawt_typeToStr<WFormWidget>(), "bool", NULL};
static const char* const* const luawt_WFormWidget_setEnabled_args[] = {WFormWidget_setEnabled_args0, NULL};

int luawt_WFormWidget_setEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_setEnabled_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    bool enabled = lua_toboolean(L, 2);
    self->setEnabled(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.setEnabled");
    }
}

static const char* WFormWidget_isReadOnly_args0[] = {luawt_typeToStr<WFormWidget>(), NULL};
static const char* const* const luawt_WFormWidget_isReadOnly_args[] = {WFormWidget_isReadOnly_args0, NULL};

int luawt_WFormWidget_isReadOnly(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_isReadOnly_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    bool result = self->isReadOnly();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.isReadOnly");
    }
}

static const char* WFormWidget_hasFocus_args0[] = {luawt_typeToStr<WFormWidget>(), NULL};
static const char* const* const luawt_WFormWidget_hasFocus_args[] = {WFormWidget_hasFocus_args0, NULL};

int luawt_WFormWidget_hasFocus(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_hasFocus_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    bool result = self->hasFocus();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.hasFocus");
    }
}

static const char* WFormWidget_setEmptyText_args0[] = {luawt_typeToStr<WFormWidget>(), "char const *", NULL};
static const char* const* const luawt_WFormWidget_setEmptyText_args[] = {WFormWidget_setEmptyText_args0, NULL};

int luawt_WFormWidget_setEmptyText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_setEmptyText_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString emptyText = Wt::WString(raw2);
    self->setEmptyText(emptyText);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.setEmptyText");
    }
}

static const char* WFormWidget_refresh_args0[] = {luawt_typeToStr<WFormWidget>(), NULL};
static const char* const* const luawt_WFormWidget_refresh_args[] = {WFormWidget_refresh_args0, NULL};

int luawt_WFormWidget_refresh(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_refresh_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.refresh");
    }
}

static const char* WFormWidget_label_args0[] = {luawt_typeToStr<WFormWidget>(), NULL};
static const char* const* const luawt_WFormWidget_label_args[] = {WFormWidget_label_args0, NULL};

int luawt_WFormWidget_label(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_label_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    Wt::WLabel * result = self->label();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.label");
    }
}

static const char* WFormWidget_setReadOnly_args0[] = {luawt_typeToStr<WFormWidget>(), "bool", NULL};
static const char* const* const luawt_WFormWidget_setReadOnly_args[] = {WFormWidget_setReadOnly_args0, NULL};

int luawt_WFormWidget_setReadOnly(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_setReadOnly_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    bool readOnly = lua_toboolean(L, 2);
    self->setReadOnly(readOnly);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.setReadOnly");
    }
}

static const char* WFormWidget_setToolTip_args0[] = {luawt_typeToStr<WFormWidget>(), "char const *", NULL};
static const char* WFormWidget_setToolTip_args1[] = {luawt_typeToStr<WFormWidget>(), "char const *", "int", NULL};
static const char* const* const luawt_WFormWidget_setToolTip_args[] = {WFormWidget_setToolTip_args0, WFormWidget_setToolTip_args1, NULL};

int luawt_WFormWidget_setToolTip(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_setToolTip_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setToolTip(text);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(lua_tointeger(L, 3));
    self->setToolTip(text, textFormat);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.setToolTip");
    }
}

static const char* WFormWidget_emptyText_args0[] = {luawt_typeToStr<WFormWidget>(), NULL};
static const char* const* const luawt_WFormWidget_emptyText_args[] = {WFormWidget_emptyText_args0, NULL};

int luawt_WFormWidget_emptyText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_emptyText_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    Wt::WString const & result = self->emptyText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.emptyText");
    }
}

static const char* WFormWidget_setValueText_args0[] = {luawt_typeToStr<WFormWidget>(), "char const *", NULL};
static const char* const* const luawt_WFormWidget_setValueText_args[] = {WFormWidget_setValueText_args0, NULL};

int luawt_WFormWidget_setValueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_setValueText_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString value = Wt::WString(raw2);
    self->setValueText(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.setValueText");
    }
}

static const char* WFormWidget_tabIndex_args0[] = {luawt_typeToStr<WFormWidget>(), NULL};
static const char* const* const luawt_WFormWidget_tabIndex_args[] = {WFormWidget_tabIndex_args0, NULL};

int luawt_WFormWidget_tabIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_tabIndex_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    int result = self->tabIndex();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.tabIndex");
    }
}

static const char* WFormWidget_setTabIndex_args0[] = {luawt_typeToStr<WFormWidget>(), "int", NULL};
static const char* const* const luawt_WFormWidget_setTabIndex_args[] = {WFormWidget_setTabIndex_args0, NULL};

int luawt_WFormWidget_setTabIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_setTabIndex_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    self->setTabIndex(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.setTabIndex");
    }
}

static const char* WFormWidget_validate_args0[] = {luawt_typeToStr<WFormWidget>(), NULL};
static const char* const* const luawt_WFormWidget_validate_args[] = {WFormWidget_validate_args0, NULL};

int luawt_WFormWidget_validate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_validate_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    Wt::WValidator::State result = self->validate();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.validate");
    }
}

static const char* WFormWidget_valueText_args0[] = {luawt_typeToStr<WFormWidget>(), NULL};
static const char* const* const luawt_WFormWidget_valueText_args[] = {WFormWidget_valueText_args0, NULL};

int luawt_WFormWidget_valueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFormWidget_valueText_args);
    WFormWidget* self = luawt_checkFromLua<WFormWidget>(L, 1);
    if (index == 0) {
    Wt::WString result = self->valueText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WFormWidget.valueText");
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
    METHOD(WFormWidget, valueText),
    METHOD(WFormWidget, setValueText),
    METHOD(WFormWidget, validate),
    METHOD(WFormWidget, setEnabled),
    METHOD(WFormWidget, setFocus),
    METHOD(WFormWidget, setFocus),
    METHOD(WFormWidget, hasFocus),
    METHOD(WFormWidget, setTabIndex),
    METHOD(WFormWidget, tabIndex),
    METHOD(WFormWidget, setReadOnly),
    METHOD(WFormWidget, isReadOnly),
    METHOD(WFormWidget, setEmptyText),
    METHOD(WFormWidget, emptyText),
    METHOD(WFormWidget, refresh),
    METHOD(WFormWidget, setToolTip),
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
