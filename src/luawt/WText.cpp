#include "boost-xtime.hpp"

#include <Wt/WString>
#include <Wt/WContainerWidget>
#include <Wt/WText>

#include "globals.hpp"

static const char* WText_make_args0[] = {NULL};
static const char* WText_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WText_make_args2[] = {"char const *", NULL};
static const char* WText_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WText_make_args4[] = {"char const *", "int", NULL};
static const char* WText_make_args5[] = {"char const *", "int", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WText_make_args[] = {WText_make_args0, WText_make_args1, WText_make_args2, WText_make_args3, WText_make_args4, WText_make_args5, NULL};

int luawt_WText_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_make_args);
    if (index == 0) {
    WText * result = new WText();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WText");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WText * result = new WText(parent);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    WText * result = new WText(text);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WText");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WText * result = new WText(text, parent);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 4) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(lua_tointeger(L, 2));
    WText * result = new WText(text, textFormat);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WText");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 5) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(lua_tointeger(L, 2));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 3);
    WText * result = new WText(text, textFormat, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WText.make");
    }
}

static const char* WText_hasInternalPathEncoding_args0[] = {luawt_typeToStr<WText>(), NULL};
static const char* const* const luawt_WText_hasInternalPathEncoding_args[] = {WText_hasInternalPathEncoding_args0, NULL};

int luawt_WText_hasInternalPathEncoding(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_hasInternalPathEncoding_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    bool result = self->hasInternalPathEncoding();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WText.hasInternalPathEncoding");
    }
}

static const char* WText_text_args0[] = {luawt_typeToStr<WText>(), NULL};
static const char* const* const luawt_WText_text_args[] = {WText_text_args0, NULL};

int luawt_WText_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_text_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    Wt::WString const & result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WText.text");
    }
}

static const char* WText_setText_args0[] = {luawt_typeToStr<WText>(), "char const *", NULL};
static const char* const* const luawt_WText_setText_args[] = {WText_setText_args0, NULL};

int luawt_WText_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_setText_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    bool result = self->setText(text);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WText.setText");
    }
}

static const char* WText_refresh_args0[] = {luawt_typeToStr<WText>(), NULL};
static const char* const* const luawt_WText_refresh_args[] = {WText_refresh_args0, NULL};

int luawt_WText_refresh(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_refresh_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WText.refresh");
    }
}

static const char* WText_wordWrap_args0[] = {luawt_typeToStr<WText>(), NULL};
static const char* const* const luawt_WText_wordWrap_args[] = {WText_wordWrap_args0, NULL};

int luawt_WText_wordWrap(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_wordWrap_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    bool result = self->wordWrap();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WText.wordWrap");
    }
}

static const char* WText_setWordWrap_args0[] = {luawt_typeToStr<WText>(), "bool", NULL};
static const char* const* const luawt_WText_setWordWrap_args[] = {WText_setWordWrap_args0, NULL};

int luawt_WText_setWordWrap(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_setWordWrap_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    bool wordWrap = lua_toboolean(L, 2);
    self->setWordWrap(wordWrap);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WText.setWordWrap");
    }
}

static const char* WText_textFormat_args0[] = {luawt_typeToStr<WText>(), NULL};
static const char* const* const luawt_WText_textFormat_args[] = {WText_textFormat_args0, NULL};

int luawt_WText_textFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_textFormat_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    Wt::TextFormat result = self->textFormat();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WText.textFormat");
    }
}

static const char* WText_setTextFormat_args0[] = {luawt_typeToStr<WText>(), "int", NULL};
static const char* const* const luawt_WText_setTextFormat_args[] = {WText_setTextFormat_args0, NULL};

int luawt_WText_setTextFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_setTextFormat_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    Wt::TextFormat format = static_cast<Wt::TextFormat>(lua_tointeger(L, 2));
    bool result = self->setTextFormat(format);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WText.setTextFormat");
    }
}

static const char* WText_setInternalPathEncoding_args0[] = {luawt_typeToStr<WText>(), "bool", NULL};
static const char* const* const luawt_WText_setInternalPathEncoding_args[] = {WText_setInternalPathEncoding_args0, NULL};

int luawt_WText_setInternalPathEncoding(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_setInternalPathEncoding_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    bool enabled = lua_toboolean(L, 2);
    self->setInternalPathEncoding(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WText.setInternalPathEncoding");
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
