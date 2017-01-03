#include "boost-xtime.hpp"

#include <Wt/WString>
#include <Wt/WContainerWidget>
#include <Wt/WText>

#include "globals.hpp"

int luawt_WText_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WText * result = new WText(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WText * result = new WText(text, parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(lua_tointeger(L, 2));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 3);
    WText * result = new WText(text, textFormat, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WText.make: %d", argc);
    }
}

int luawt_WText_hasInternalPathEncoding(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WText* self = luawt_checkFromLua<WText>(L, 1);
        if (argc == 0) {
    bool result = self->hasInternalPathEncoding();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WText.hasInternalPathEncoding: %d", argc);
    }
}

int luawt_WText_text(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WText* self = luawt_checkFromLua<WText>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WText.text: %d", argc);
    }
}

int luawt_WText_setText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WText* self = luawt_checkFromLua<WText>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    bool result = self->setText(text);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WText.setText: %d", argc);
    }
}

int luawt_WText_refresh(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WText* self = luawt_checkFromLua<WText>(L, 1);
        if (argc == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WText.refresh: %d", argc);
    }
}

int luawt_WText_wordWrap(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WText* self = luawt_checkFromLua<WText>(L, 1);
        if (argc == 0) {
    bool result = self->wordWrap();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WText.wordWrap: %d", argc);
    }
}

int luawt_WText_setWordWrap(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WText* self = luawt_checkFromLua<WText>(L, 1);
        if (argc == 1) {
    bool wordWrap = lua_toboolean(L, 2);
    self->setWordWrap(wordWrap);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WText.setWordWrap: %d", argc);
    }
}

int luawt_WText_textFormat(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WText* self = luawt_checkFromLua<WText>(L, 1);
        if (argc == 0) {
    Wt::TextFormat result = self->textFormat();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WText.textFormat: %d", argc);
    }
}

int luawt_WText_setTextFormat(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WText* self = luawt_checkFromLua<WText>(L, 1);
        if (argc == 1) {
    Wt::TextFormat format = static_cast<Wt::TextFormat>(lua_tointeger(L, 2));
    bool result = self->setTextFormat(format);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WText.setTextFormat: %d", argc);
    }
}

int luawt_WText_setInternalPathEncoding(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WText* self = luawt_checkFromLua<WText>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->setInternalPathEncoding(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WText.setInternalPathEncoding: %d", argc);
    }
}

ADD_SIGNAL(keyWentDown, WText, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WText, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WText, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WText, Wt::NoClass)
ADD_SIGNAL(escapePressed, WText, Wt::NoClass)
ADD_SIGNAL(clicked, WText, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WText, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WText, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WText, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WText, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WText, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WText, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WText, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WText, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WText, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WText, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WText, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WText, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WText, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WText, Wt::WGestureEvent)

static const luaL_Reg luawt_WText_methods[] = {
    METHOD(WText, text),
    METHOD(WText, setText),
    METHOD(WText, setTextFormat),
    METHOD(WText, textFormat),
    METHOD(WText, setWordWrap),
    METHOD(WText, wordWrap),
    METHOD(WText, setInternalPathEncoding),
    METHOD(WText, hasInternalPathEncoding),
    METHOD(WText, refresh),
    METHOD(WText, keyWentDown),
    METHOD(WText, keyPressed),
    METHOD(WText, keyWentUp),
    METHOD(WText, enterPressed),
    METHOD(WText, escapePressed),
    METHOD(WText, clicked),
    METHOD(WText, doubleClicked),
    METHOD(WText, mouseWentDown),
    METHOD(WText, mouseWentUp),
    METHOD(WText, mouseWentOut),
    METHOD(WText, mouseWentOver),
    METHOD(WText, mouseMoved),
    METHOD(WText, mouseDragged),
    METHOD(WText, mouseWheel),
    METHOD(WText, touchStarted),
    METHOD(WText, touchEnded),
    METHOD(WText, touchMoved),
    METHOD(WText, gestureStarted),
    METHOD(WText, gestureChanged),
    METHOD(WText, gestureEnded),
    {NULL, NULL},
};

void luawt_WText(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WText,
        L,
        wrap<luawt_WText_make>::func,
        0,
        luawt_WText_methods,
        base
    );
}
