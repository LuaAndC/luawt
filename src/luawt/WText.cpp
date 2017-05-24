#include "boost-xtime.hpp"

#include <Wt/WLength>
#include <Wt/WString>
#include <Wt/WContainerWidget>
#include <Wt/WText>

#include "enums.hpp"
#include "globals.hpp"

static const char* WText_make_args0[] = {NULL};
static const char* WText_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WText_make_args2[] = {"char const *", NULL};
static const char* WText_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WText_make_args4[] = {"char const *", "enum", NULL};
static const char* WText_make_args5[] = {"char const *", "enum", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WText_make_args[] = {WText_make_args0, WText_make_args1, WText_make_args2, WText_make_args3, WText_make_args4, WText_make_args5, NULL};

int luawt_WText_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_make_args);
    if (index == 0) {
    WText * l_result = new WText();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WText");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WText * l_result = new WText(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    WText * l_result = new WText(text);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WText");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WText * l_result = new WText(text, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 4) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(luawt_getEnum(
        L,
        luawt_enum_TextFormat_str,
        luawt_enum_TextFormat_val,
        2,
        "Wrong enum type in args of WText.make"
    ));
    WText * l_result = new WText(text, textFormat);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WText");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 5) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(luawt_getEnum(
        L,
        luawt_enum_TextFormat_str,
        luawt_enum_TextFormat_val,
        2,
        "Wrong enum type in args of WText.make"
    ));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 3);
    WText * l_result = new WText(text, textFormat, parent);
    luawt_toLua(L, l_result);
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
    bool l_result = self->hasInternalPathEncoding();
    lua_pushboolean(L, l_result);
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
    Wt::WString const & l_result = self->text();
    lua_pushstring(L, l_result.toUTF8().c_str());
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
    bool l_result = self->setText(text);
    lua_pushboolean(L, l_result);
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

static const char* WText_setPadding_args0[] = {luawt_typeToStr<WText>(), "double", NULL};
static const char* WText_setPadding_args1[] = {luawt_typeToStr<WText>(), "double", "enum", NULL};
static const char* const* const luawt_WText_setPadding_args[] = {WText_setPadding_args0, WText_setPadding_args1, NULL};

int luawt_WText_setPadding(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_setPadding_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength padding = Wt::WLength(raw2);
    self->setPadding(padding);
    return 0;
    
    } else if (index == 1) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength padding = Wt::WLength(raw2);
    Wt::WFlags<Wt::Side> sides = static_cast<Wt::Side>(luawt_getEnum(
        L,
        luawt_enum_Side_str,
        luawt_enum_Side_val,
        3,
        "Wrong enum type in args of WText.setPadding"
    ));
    self->setPadding(padding, sides);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WText.setPadding");
    }
}

static const char* WText_padding_args0[] = {luawt_typeToStr<WText>(), "enum", NULL};
static const char* const* const luawt_WText_padding_args[] = {WText_padding_args0, NULL};

int luawt_WText_padding(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_padding_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    Wt::Side side = static_cast<Wt::Side>(luawt_getEnum(
        L,
        luawt_enum_Side_str,
        luawt_enum_Side_val,
        2,
        "Wrong enum type in args of WText.padding"
    ));
    Wt::WLength l_result = self->padding(side);
    lua_pushnumber(L, l_result.value());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WText.padding");
    }
}

static const char* WText_wordWrap_args0[] = {luawt_typeToStr<WText>(), NULL};
static const char* const* const luawt_WText_wordWrap_args[] = {WText_wordWrap_args0, NULL};

int luawt_WText_wordWrap(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_wordWrap_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    bool l_result = self->wordWrap();
    lua_pushboolean(L, l_result);
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
    Wt::TextFormat l_result = self->textFormat();
    luawt_returnEnum(L, luawt_enum_TextFormat_str, luawt_enum_TextFormat_val, l_result, "TextFormat");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WText.textFormat");
    }
}

static const char* WText_setTextFormat_args0[] = {luawt_typeToStr<WText>(), "enum", NULL};
static const char* const* const luawt_WText_setTextFormat_args[] = {WText_setTextFormat_args0, NULL};

int luawt_WText_setTextFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WText_setTextFormat_args);
    WText* self = luawt_checkFromLua<WText>(L, 1);
    if (index == 0) {
    Wt::TextFormat format = static_cast<Wt::TextFormat>(luawt_getEnum(
        L,
        luawt_enum_TextFormat_str,
        luawt_enum_TextFormat_val,
        2,
        "Wrong enum type in args of WText.setTextFormat"
    ));
    bool l_result = self->setTextFormat(format);
    lua_pushboolean(L, l_result);
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
    METHOD(WText, setPadding),
    METHOD(WText, padding),
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
