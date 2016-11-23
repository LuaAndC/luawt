#include "boost-xtime.hpp"

#include <Wt/WLineEdit>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WLineEdit_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WLineEdit * result = new WLineEdit(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString content = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WLineEdit * result = new WLineEdit(content, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.make: %d", argc);
    }
}

int luawt_WLineEdit_validate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    Wt::WValidator::State result = self->validate();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.validate: %d", argc);
    }
}

int luawt_WLineEdit_setTextSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 1) {
    int chars = lua_tointeger(L, 2);
    self->setTextSize(chars);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.setTextSize: %d", argc);
    }
}

int luawt_WLineEdit_textSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    int result = self->textSize();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.textSize: %d", argc);
    }
}

int luawt_WLineEdit_hasSelectedText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    bool result = self->hasSelectedText();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.hasSelectedText: %d", argc);
    }
}

int luawt_WLineEdit_inputMask(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->inputMask();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.inputMask: %d", argc);
    }
}

int luawt_WLineEdit_setEchoMode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 1) {
    Wt::WLineEdit::EchoMode echoMode = static_cast<Wt::WLineEdit::EchoMode>(lua_tointeger(L, 2));
    self->setEchoMode(echoMode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.setEchoMode: %d", argc);
    }
}

int luawt_WLineEdit_text(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.text: %d", argc);
    }
}

int luawt_WLineEdit_setText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.setText: %d", argc);
    }
}

int luawt_WLineEdit_echoMode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    Wt::WLineEdit::EchoMode result = self->echoMode();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.echoMode: %d", argc);
    }
}

int luawt_WLineEdit_autoComplete(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    bool result = self->autoComplete();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.autoComplete: %d", argc);
    }
}

int luawt_WLineEdit_setMaxLength(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 1) {
    int length = lua_tointeger(L, 2);
    self->setMaxLength(length);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.setMaxLength: %d", argc);
    }
}

int luawt_WLineEdit_setAutoComplete(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->setAutoComplete(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.setAutoComplete: %d", argc);
    }
}

int luawt_WLineEdit_displayText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->displayText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.displayText: %d", argc);
    }
}

int luawt_WLineEdit_maxLength(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    int result = self->maxLength();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.maxLength: %d", argc);
    }
}

int luawt_WLineEdit_selectedText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->selectedText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.selectedText: %d", argc);
    }
}

int luawt_WLineEdit_selectionStart(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    int result = self->selectionStart();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.selectionStart: %d", argc);
    }
}

int luawt_WLineEdit_setValueText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString value = Wt::WString(raw2);
    self->setValueText(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.setValueText: %d", argc);
    }
}

int luawt_WLineEdit_cursorPosition(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    int result = self->cursorPosition();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.cursorPosition: %d", argc);
    }
}

int luawt_WLineEdit_valueText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLineEdit* self = luawt_checkFromLua<WLineEdit>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->valueText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLineEdit.valueText: %d", argc);
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
    METHOD(WLineEdit, displayText),
    METHOD(WLineEdit, setMaxLength),
    METHOD(WLineEdit, maxLength),
    METHOD(WLineEdit, setEchoMode),
    METHOD(WLineEdit, echoMode),
    METHOD(WLineEdit, setAutoComplete),
    METHOD(WLineEdit, autoComplete),
    METHOD(WLineEdit, selectionStart),
    METHOD(WLineEdit, selectedText),
    METHOD(WLineEdit, hasSelectedText),
    METHOD(WLineEdit, cursorPosition),
    METHOD(WLineEdit, valueText),
    METHOD(WLineEdit, setValueText),
    METHOD(WLineEdit, inputMask),
    METHOD(WLineEdit, validate),
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
