#include "boost-xtime.hpp"

#include <Wt/WLineEdit>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

static const char* WLineEdit_make_args0[] = {NULL};
static const char* WLineEdit_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WLineEdit_make_args2[] = {"char const *", NULL};
static const char* WLineEdit_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WLineEdit_make_args[] = {WLineEdit_make_args0, WLineEdit_make_args1, WLineEdit_make_args2, WLineEdit_make_args3, NULL};

int luawt_WLineEdit_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_make_args);
    if (index == 0) {
    WLineEdit * result = new WLineEdit();
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WLineEdit * result = new WLineEdit(parent);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString content = Wt::WString(raw1);
    WLineEdit * result = new WLineEdit(content);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString content = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WLineEdit * result = new WLineEdit(content, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.make");
    }
}

static const char* WLineEdit_setTextSize_args0[] = {luawt_typeToStr<WLineEdit>(), "int", NULL};
static const char* const* const luawt_WLineEdit_setTextSize_args[] = {WLineEdit_setTextSize_args0, NULL};

int luawt_WLineEdit_setTextSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_setTextSize_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    int chars = lua_tointeger(L, 2);
    self->setTextSize(chars);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.setTextSize");
    }
}

static const char* WLineEdit_textSize_args0[] = {luawt_typeToStr<WLineEdit>(), NULL};
static const char* const* const luawt_WLineEdit_textSize_args[] = {WLineEdit_textSize_args0, NULL};

int luawt_WLineEdit_textSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_textSize_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    int result = self->textSize();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.textSize");
    }
}

static const char* WLineEdit_setEchoMode_args0[] = {luawt_typeToStr<WLineEdit>(), "int", NULL};
static const char* const* const luawt_WLineEdit_setEchoMode_args[] = {WLineEdit_setEchoMode_args0, NULL};

int luawt_WLineEdit_setEchoMode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_setEchoMode_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    Wt::WLineEdit::EchoMode echoMode = static_cast<Wt::WLineEdit::EchoMode>(lua_tointeger(L, 2));
    self->setEchoMode(echoMode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.setEchoMode");
    }
}

static const char* WLineEdit_text_args0[] = {luawt_typeToStr<WLineEdit>(), NULL};
static const char* const* const luawt_WLineEdit_text_args[] = {WLineEdit_text_args0, NULL};

int luawt_WLineEdit_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_text_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    Wt::WString const & result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.text");
    }
}

static const char* WLineEdit_setText_args0[] = {luawt_typeToStr<WLineEdit>(), "char const *", NULL};
static const char* const* const luawt_WLineEdit_setText_args[] = {WLineEdit_setText_args0, NULL};

int luawt_WLineEdit_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_setText_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.setText");
    }
}

static const char* WLineEdit_echoMode_args0[] = {luawt_typeToStr<WLineEdit>(), NULL};
static const char* const* const luawt_WLineEdit_echoMode_args[] = {WLineEdit_echoMode_args0, NULL};

int luawt_WLineEdit_echoMode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_echoMode_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    Wt::WLineEdit::EchoMode result = self->echoMode();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.echoMode");
    }
}

static const char* WLineEdit_setMaxLength_args0[] = {luawt_typeToStr<WLineEdit>(), "int", NULL};
static const char* const* const luawt_WLineEdit_setMaxLength_args[] = {WLineEdit_setMaxLength_args0, NULL};

int luawt_WLineEdit_setMaxLength(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_setMaxLength_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    int length = lua_tointeger(L, 2);
    self->setMaxLength(length);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.setMaxLength");
    }
}

static const char* WLineEdit_selectionStart_args0[] = {luawt_typeToStr<WLineEdit>(), NULL};
static const char* const* const luawt_WLineEdit_selectionStart_args[] = {WLineEdit_selectionStart_args0, NULL};

int luawt_WLineEdit_selectionStart(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_selectionStart_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    int result = self->selectionStart();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.selectionStart");
    }
}

static const char* WLineEdit_maxLength_args0[] = {luawt_typeToStr<WLineEdit>(), NULL};
static const char* const* const luawt_WLineEdit_maxLength_args[] = {WLineEdit_maxLength_args0, NULL};

int luawt_WLineEdit_maxLength(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_maxLength_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    int result = self->maxLength();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.maxLength");
    }
}

static const char* WLineEdit_selectedText_args0[] = {luawt_typeToStr<WLineEdit>(), NULL};
static const char* const* const luawt_WLineEdit_selectedText_args[] = {WLineEdit_selectedText_args0, NULL};

int luawt_WLineEdit_selectedText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_selectedText_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    Wt::WString result = self->selectedText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.selectedText");
    }
}

static const char* WLineEdit_hasSelectedText_args0[] = {luawt_typeToStr<WLineEdit>(), NULL};
static const char* const* const luawt_WLineEdit_hasSelectedText_args[] = {WLineEdit_hasSelectedText_args0, NULL};

int luawt_WLineEdit_hasSelectedText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_hasSelectedText_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    bool result = self->hasSelectedText();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.hasSelectedText");
    }
}

static const char* WLineEdit_setValueText_args0[] = {luawt_typeToStr<WLineEdit>(), "char const *", NULL};
static const char* const* const luawt_WLineEdit_setValueText_args[] = {WLineEdit_setValueText_args0, NULL};

int luawt_WLineEdit_setValueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_setValueText_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString value = Wt::WString(raw2);
    self->setValueText(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.setValueText");
    }
}

static const char* WLineEdit_cursorPosition_args0[] = {luawt_typeToStr<WLineEdit>(), NULL};
static const char* const* const luawt_WLineEdit_cursorPosition_args[] = {WLineEdit_cursorPosition_args0, NULL};

int luawt_WLineEdit_cursorPosition(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_cursorPosition_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    int result = self->cursorPosition();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.cursorPosition");
    }
}

static const char* WLineEdit_valueText_args0[] = {luawt_typeToStr<WLineEdit>(), NULL};
static const char* const* const luawt_WLineEdit_valueText_args[] = {WLineEdit_valueText_args0, NULL};

int luawt_WLineEdit_valueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLineEdit_valueText_args);
    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
    if (index == 0) {
    Wt::WString result = self->valueText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WLineEdit.valueText");
    }
}

ADD_SIGNAL(changed, WLineEdit, Wt::NoClass)
ADD_SIGNAL(selected, WLineEdit, Wt::NoClass)
ADD_SIGNAL(blurred, WLineEdit, Wt::NoClass)
ADD_SIGNAL(focussed, WLineEdit, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WLineEdit, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WLineEdit, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WLineEdit, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WLineEdit, Wt::NoClass)
ADD_SIGNAL(escapePressed, WLineEdit, Wt::NoClass)
ADD_SIGNAL(clicked, WLineEdit, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WLineEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WLineEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WLineEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WLineEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WLineEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WLineEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WLineEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WLineEdit, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WLineEdit, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WLineEdit, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WLineEdit, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WLineEdit, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WLineEdit, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WLineEdit, Wt::WGestureEvent)

static const luaL_Reg luawt_WLineEdit_methods[] = {
    METHOD(WLineEdit, setTextSize),
    METHOD(WLineEdit, textSize),
    METHOD(WLineEdit, setText),
    METHOD(WLineEdit, text),
    METHOD(WLineEdit, setMaxLength),
    METHOD(WLineEdit, maxLength),
    METHOD(WLineEdit, setEchoMode),
    METHOD(WLineEdit, echoMode),
    METHOD(WLineEdit, selectionStart),
    METHOD(WLineEdit, selectedText),
    METHOD(WLineEdit, hasSelectedText),
    METHOD(WLineEdit, cursorPosition),
    METHOD(WLineEdit, valueText),
    METHOD(WLineEdit, setValueText),
    METHOD(WLineEdit, changed),
    METHOD(WLineEdit, selected),
    METHOD(WLineEdit, blurred),
    METHOD(WLineEdit, focussed),
    METHOD(WLineEdit, keyWentDown),
    METHOD(WLineEdit, keyPressed),
    METHOD(WLineEdit, keyWentUp),
    METHOD(WLineEdit, enterPressed),
    METHOD(WLineEdit, escapePressed),
    METHOD(WLineEdit, clicked),
    METHOD(WLineEdit, doubleClicked),
    METHOD(WLineEdit, mouseWentDown),
    METHOD(WLineEdit, mouseWentUp),
    METHOD(WLineEdit, mouseWentOut),
    METHOD(WLineEdit, mouseWentOver),
    METHOD(WLineEdit, mouseMoved),
    METHOD(WLineEdit, mouseDragged),
    METHOD(WLineEdit, mouseWheel),
    METHOD(WLineEdit, touchStarted),
    METHOD(WLineEdit, touchEnded),
    METHOD(WLineEdit, touchMoved),
    METHOD(WLineEdit, gestureStarted),
    METHOD(WLineEdit, gestureChanged),
    METHOD(WLineEdit, gestureEnded),
    {NULL, NULL},
};

void luawt_WLineEdit(lua_State* L) {
    const char* base = luawt_typeToStr<WFormWidget>();
    assert(base);
    DECLARE_CLASS(
        WLineEdit,
        L,
        wrap<luawt_WLineEdit_make>::func,
        0,
        luawt_WLineEdit_methods,
        base
    );
}
