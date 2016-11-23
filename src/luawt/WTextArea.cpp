#include "boost-xtime.hpp"

#include <Wt/WTextArea>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WTextArea_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTextArea * result = new WTextArea(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString content = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WTextArea * result = new WTextArea(content, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.make: %d", argc);
    }
}

int luawt_WTextArea_setRows(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 1) {
    int rows = lua_tointeger(L, 2);
    self->setRows(rows);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.setRows: %d", argc);
    }
}

int luawt_WTextArea_cursorPosition(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 0) {
    int result = self->cursorPosition();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.cursorPosition: %d", argc);
    }
}

int luawt_WTextArea_rows(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 0) {
    int result = self->rows();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.rows: %d", argc);
    }
}

int luawt_WTextArea_text(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.text: %d", argc);
    }
}

int luawt_WTextArea_setText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.setText: %d", argc);
    }
}

int luawt_WTextArea_selectedText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->selectedText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.selectedText: %d", argc);
    }
}

int luawt_WTextArea_setColumns(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 1) {
    int cols = lua_tointeger(L, 2);
    self->setColumns(cols);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.setColumns: %d", argc);
    }
}

int luawt_WTextArea_selectionStart(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 0) {
    int result = self->selectionStart();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.selectionStart: %d", argc);
    }
}

int luawt_WTextArea_hasSelectedText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 0) {
    bool result = self->hasSelectedText();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.hasSelectedText: %d", argc);
    }
}

int luawt_WTextArea_setValueText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setValueText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.setValueText: %d", argc);
    }
}

int luawt_WTextArea_columns(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 0) {
    int result = self->columns();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.columns: %d", argc);
    }
}

int luawt_WTextArea_valueText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->valueText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextArea.valueText: %d", argc);
    }
}

ADD_SIGNAL(changed, WTextArea, Wt::NoClass)
ADD_SIGNAL(selected, WTextArea, Wt::NoClass)
ADD_SIGNAL(blurred, WTextArea, Wt::NoClass)
ADD_SIGNAL(focussed, WTextArea, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WTextArea, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WTextArea, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WTextArea, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WTextArea, Wt::NoClass)
ADD_SIGNAL(escapePressed, WTextArea, Wt::NoClass)
ADD_SIGNAL(clicked, WTextArea, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WTextArea, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WTextArea, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WTextArea, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WTextArea, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WTextArea, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WTextArea, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WTextArea, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WTextArea, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WTextArea, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WTextArea, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WTextArea, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WTextArea, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WTextArea, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WTextArea, Wt::WGestureEvent)

static const luaL_Reg luawt_WTextArea_methods[] = {
    METHOD(WTextArea, setColumns),
    METHOD(WTextArea, setRows),
    METHOD(WTextArea, columns),
    METHOD(WTextArea, rows),
    METHOD(WTextArea, text),
    METHOD(WTextArea, setText),
    METHOD(WTextArea, selectionStart),
    METHOD(WTextArea, selectedText),
    METHOD(WTextArea, hasSelectedText),
    METHOD(WTextArea, cursorPosition),
    METHOD(WTextArea, valueText),
    METHOD(WTextArea, setValueText),
    METHOD(WTextArea, changed),
    METHOD(WTextArea, selected),
    METHOD(WTextArea, blurred),
    METHOD(WTextArea, focussed),
    METHOD(WTextArea, keyWentDown),
    METHOD(WTextArea, keyPressed),
    METHOD(WTextArea, keyWentUp),
    METHOD(WTextArea, enterPressed),
    METHOD(WTextArea, escapePressed),
    METHOD(WTextArea, clicked),
    METHOD(WTextArea, doubleClicked),
    METHOD(WTextArea, mouseWentDown),
    METHOD(WTextArea, mouseWentUp),
    METHOD(WTextArea, mouseWentOut),
    METHOD(WTextArea, mouseWentOver),
    METHOD(WTextArea, mouseMoved),
    METHOD(WTextArea, mouseDragged),
    METHOD(WTextArea, mouseWheel),
    METHOD(WTextArea, touchStarted),
    METHOD(WTextArea, touchEnded),
    METHOD(WTextArea, touchMoved),
    METHOD(WTextArea, gestureStarted),
    METHOD(WTextArea, gestureChanged),
    METHOD(WTextArea, gestureEnded),
    {NULL, NULL},
};

void luawt_WTextArea(lua_State* L) {
    const char* base = luawt_typeToStr<WFormWidget>();
    assert(base);
    DECLARE_CLASS(
        WTextArea,
        L,
        wrap<luawt_WTextArea_make>::func,
        0,
        luawt_WTextArea_methods,
        base
    );
}
