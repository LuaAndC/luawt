#include "boost-xtime.hpp"

#include <Wt/WString>
#include <Wt/WContainerWidget>
#include <Wt/WTextEdit>

#include "globals.hpp"

int luawt_WTextEdit_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTextEdit * result = new WTextEdit(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WTextEdit * result = new WTextEdit(text, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.make: %d", argc);
    }
}

int luawt_WTextEdit_propagateSetEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->propagateSetEnabled(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.propagateSetEnabled: %d", argc);
    }
}

int luawt_WTextEdit_setReadOnly(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
        if (argc == 1) {
    bool readOnly = lua_toboolean(L, 2);
    self->setReadOnly(readOnly);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.setReadOnly: %d", argc);
    }
}

int luawt_WTextEdit_setToolBar(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
        if (argc == 2) {
    int i = lua_tointeger(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    std::string config = std::string(raw3);
    self->setToolBar(i, config);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.setToolBar: %d", argc);
    }
}

int luawt_WTextEdit_setText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.setText: %d", argc);
    }
}

int luawt_WTextEdit_setExtraPlugins(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string plugins = std::string(raw2);
    self->setExtraPlugins(plugins);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.setExtraPlugins: %d", argc);
    }
}

int luawt_WTextEdit_extraPlugins(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
        if (argc == 0) {
    std::string const result = self->extraPlugins();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.extraPlugins: %d", argc);
    }
}

int luawt_WTextEdit_setPlaceholderText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString placeholder = Wt::WString(raw2);
    self->setPlaceholderText(placeholder);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.setPlaceholderText: %d", argc);
    }
}

int luawt_WTextEdit_styleSheet(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
        if (argc == 0) {
    std::string const result = self->styleSheet();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.styleSheet: %d", argc);
    }
}

int luawt_WTextEdit_version(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
        if (argc == 0) {
    int result = self->version();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.version: %d", argc);
    }
}

int luawt_WTextEdit_setStyleSheet(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string uri = std::string(raw2);
    self->setStyleSheet(uri);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.setStyleSheet: %d", argc);
    }
}

int luawt_WTextEdit_toolBar(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
        if (argc == 1) {
    int i = lua_tointeger(L, 2);
    std::string const result = self->toolBar(i);
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTextEdit.toolBar: %d", argc);
    }
}

ADD_SIGNAL(changed, WTextEdit, Wt::NoClass)
ADD_SIGNAL(selected, WTextEdit, Wt::NoClass)
ADD_SIGNAL(blurred, WTextEdit, Wt::NoClass)
ADD_SIGNAL(focussed, WTextEdit, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WTextEdit, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WTextEdit, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WTextEdit, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WTextEdit, Wt::NoClass)
ADD_SIGNAL(escapePressed, WTextEdit, Wt::NoClass)
ADD_SIGNAL(clicked, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WTextEdit, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WTextEdit, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WTextEdit, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WTextEdit, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WTextEdit, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WTextEdit, Wt::WGestureEvent)

static const luaL_Reg luawt_WTextEdit_methods[] = {
    METHOD(WTextEdit, version),
    METHOD(WTextEdit, setText),
    METHOD(WTextEdit, setStyleSheet),
    METHOD(WTextEdit, styleSheet),
    METHOD(WTextEdit, setExtraPlugins),
    METHOD(WTextEdit, extraPlugins),
    METHOD(WTextEdit, setToolBar),
    METHOD(WTextEdit, toolBar),
    METHOD(WTextEdit, setPlaceholderText),
    METHOD(WTextEdit, setReadOnly),
    METHOD(WTextEdit, propagateSetEnabled),
    METHOD(WTextEdit, changed),
    METHOD(WTextEdit, selected),
    METHOD(WTextEdit, blurred),
    METHOD(WTextEdit, focussed),
    METHOD(WTextEdit, keyWentDown),
    METHOD(WTextEdit, keyPressed),
    METHOD(WTextEdit, keyWentUp),
    METHOD(WTextEdit, enterPressed),
    METHOD(WTextEdit, escapePressed),
    METHOD(WTextEdit, clicked),
    METHOD(WTextEdit, doubleClicked),
    METHOD(WTextEdit, mouseWentDown),
    METHOD(WTextEdit, mouseWentUp),
    METHOD(WTextEdit, mouseWentOut),
    METHOD(WTextEdit, mouseWentOver),
    METHOD(WTextEdit, mouseMoved),
    METHOD(WTextEdit, mouseDragged),
    METHOD(WTextEdit, mouseWheel),
    METHOD(WTextEdit, touchStarted),
    METHOD(WTextEdit, touchEnded),
    METHOD(WTextEdit, touchMoved),
    METHOD(WTextEdit, gestureStarted),
    METHOD(WTextEdit, gestureChanged),
    METHOD(WTextEdit, gestureEnded),
    {NULL, NULL},
};

void luawt_WTextEdit(lua_State* L) {
    const char* base = luawt_typeToStr<WTextArea>();
    assert(base);
    DECLARE_CLASS(
        WTextEdit,
        L,
        wrap<luawt_WTextEdit_make>::func,
        0,
        luawt_WTextEdit_methods,
        base
    );
}
