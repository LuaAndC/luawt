#include "boost-xtime.hpp"

#include <Wt/WTextArea>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

static const char* WTextArea_make_args0[] = {NULL};
static const char* WTextArea_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WTextArea_make_args2[] = {"char const *", NULL};
static const char* WTextArea_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WTextArea_make_args[] = {WTextArea_make_args0, WTextArea_make_args1, WTextArea_make_args2, WTextArea_make_args3, NULL};

int luawt_WTextArea_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_make_args);
    if (index == 0) {
    WTextArea * l_result = new WTextArea();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WTextArea");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTextArea * l_result = new WTextArea(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString content = Wt::WString(raw1);
    WTextArea * l_result = new WTextArea(content);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WTextArea");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString content = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WTextArea * l_result = new WTextArea(content, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.make");
    }
}

static const char* WTextArea_setRows_args0[] = {luawt_typeToStr<WTextArea>(), "int", NULL};
static const char* const* const luawt_WTextArea_setRows_args[] = {WTextArea_setRows_args0, NULL};

int luawt_WTextArea_setRows(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_setRows_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    int rows = lua_tointeger(L, 2);
    self->setRows(rows);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.setRows");
    }
}

static const char* WTextArea_cursorPosition_args0[] = {luawt_typeToStr<WTextArea>(), NULL};
static const char* const* const luawt_WTextArea_cursorPosition_args[] = {WTextArea_cursorPosition_args0, NULL};

int luawt_WTextArea_cursorPosition(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_cursorPosition_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    int l_result = self->cursorPosition();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.cursorPosition");
    }
}

static const char* WTextArea_rows_args0[] = {luawt_typeToStr<WTextArea>(), NULL};
static const char* const* const luawt_WTextArea_rows_args[] = {WTextArea_rows_args0, NULL};

int luawt_WTextArea_rows(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_rows_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    int l_result = self->rows();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.rows");
    }
}

static const char* WTextArea_text_args0[] = {luawt_typeToStr<WTextArea>(), NULL};
static const char* const* const luawt_WTextArea_text_args[] = {WTextArea_text_args0, NULL};

int luawt_WTextArea_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_text_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    Wt::WString const & l_result = self->text();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.text");
    }
}

static const char* WTextArea_setText_args0[] = {luawt_typeToStr<WTextArea>(), "char const *", NULL};
static const char* const* const luawt_WTextArea_setText_args[] = {WTextArea_setText_args0, NULL};

int luawt_WTextArea_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_setText_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.setText");
    }
}

static const char* WTextArea_selectedText_args0[] = {luawt_typeToStr<WTextArea>(), NULL};
static const char* const* const luawt_WTextArea_selectedText_args[] = {WTextArea_selectedText_args0, NULL};

int luawt_WTextArea_selectedText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_selectedText_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    Wt::WString l_result = self->selectedText();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.selectedText");
    }
}

static const char* WTextArea_setColumns_args0[] = {luawt_typeToStr<WTextArea>(), "int", NULL};
static const char* const* const luawt_WTextArea_setColumns_args[] = {WTextArea_setColumns_args0, NULL};

int luawt_WTextArea_setColumns(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_setColumns_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    int cols = lua_tointeger(L, 2);
    self->setColumns(cols);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.setColumns");
    }
}

static const char* WTextArea_selectionStart_args0[] = {luawt_typeToStr<WTextArea>(), NULL};
static const char* const* const luawt_WTextArea_selectionStart_args[] = {WTextArea_selectionStart_args0, NULL};

int luawt_WTextArea_selectionStart(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_selectionStart_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    int l_result = self->selectionStart();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.selectionStart");
    }
}

static const char* WTextArea_hasSelectedText_args0[] = {luawt_typeToStr<WTextArea>(), NULL};
static const char* const* const luawt_WTextArea_hasSelectedText_args[] = {WTextArea_hasSelectedText_args0, NULL};

int luawt_WTextArea_hasSelectedText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_hasSelectedText_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    bool l_result = self->hasSelectedText();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.hasSelectedText");
    }
}

static const char* WTextArea_setValueText_args0[] = {luawt_typeToStr<WTextArea>(), "char const *", NULL};
static const char* const* const luawt_WTextArea_setValueText_args[] = {WTextArea_setValueText_args0, NULL};

int luawt_WTextArea_setValueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_setValueText_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setValueText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.setValueText");
    }
}

static const char* WTextArea_columns_args0[] = {luawt_typeToStr<WTextArea>(), NULL};
static const char* const* const luawt_WTextArea_columns_args[] = {WTextArea_columns_args0, NULL};

int luawt_WTextArea_columns(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_columns_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    int l_result = self->columns();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.columns");
    }
}

static const char* WTextArea_valueText_args0[] = {luawt_typeToStr<WTextArea>(), NULL};
static const char* const* const luawt_WTextArea_valueText_args[] = {WTextArea_valueText_args0, NULL};

int luawt_WTextArea_valueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextArea_valueText_args);
    WTextArea* self = luawt_checkFromLua<WTextArea>(L, 1);
    if (index == 0) {
    Wt::WString l_result = self->valueText();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextArea.valueText");
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
