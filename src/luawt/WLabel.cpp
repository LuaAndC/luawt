#include "boost-xtime.hpp"

#include <Wt/WImage>
#include <Wt/WLabel>
#include <Wt/WContainerWidget>
#include <Wt/WFormWidget>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

static const char* WLabel_make_args0[] = {NULL};
static const char* WLabel_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WLabel_make_args2[] = {"char const *", NULL};
static const char* WLabel_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WLabel_make_args4[] = {luawt_typeToStr<Wt::WImage>(), NULL};
static const char* WLabel_make_args5[] = {luawt_typeToStr<Wt::WImage>(), luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WLabel_make_args[] = {WLabel_make_args0, WLabel_make_args1, WLabel_make_args2, WLabel_make_args3, WLabel_make_args4, WLabel_make_args5, NULL};

int luawt_WLabel_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLabel_make_args);
    if (index == 0) {
        WLabel* l_result = new WLabel();
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WLabel");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 1) {
        Wt::WContainerWidget* parent =
            luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
        WLabel* l_result = new WLabel(parent);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 2) {
        char const* raw1 = lua_tostring(L, 1);
        Wt::WString text = Wt::WString(raw1);
        WLabel* l_result = new WLabel(text);
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WLabel");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 3) {
        char const* raw1 = lua_tostring(L, 1);
        Wt::WString text = Wt::WString(raw1);
        Wt::WContainerWidget* parent =
            luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
        WLabel* l_result = new WLabel(text, parent);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 4) {
        Wt::WImage* image =
            luawt_checkFromLua<Wt::WImage>(L, 1);
        WLabel* l_result = new WLabel(image);
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WLabel");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 5) {
        Wt::WImage* image =
            luawt_checkFromLua<Wt::WImage>(L, 1);
        Wt::WContainerWidget* parent =
            luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
        WLabel* l_result = new WLabel(image, parent);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WLabel.make");
    }
}

static const char* WLabel_buddy_args0[] = {luawt_typeToStr<WLabel>(), NULL};
static const char* const* const luawt_WLabel_buddy_args[] = {WLabel_buddy_args0, NULL};

int luawt_WLabel_buddy(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLabel_buddy_args);
    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
    if (index == 0) {
        Wt::WFormWidget* l_result = self->buddy();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WLabel.buddy");
    }
}

static const char* WLabel_setImage_args0[] = {luawt_typeToStr<WLabel>(), luawt_typeToStr<Wt::WImage>(), NULL};
static const char* WLabel_setImage_args1[] = {luawt_typeToStr<WLabel>(), luawt_typeToStr<Wt::WImage>(), "enum", NULL};
static const char* const* const luawt_WLabel_setImage_args[] = {WLabel_setImage_args0, WLabel_setImage_args1, NULL};

int luawt_WLabel_setImage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLabel_setImage_args);
    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
    if (index == 0) {
        Wt::WImage* image =
            luawt_checkFromLua<Wt::WImage>(L, 2);
        self->setImage(image);
        return 0;
    } else if (index == 1) {
        Wt::WImage* image =
            luawt_checkFromLua<Wt::WImage>(L, 2);
        Wt::Side side = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    3,
                    "Wrong enum type in args of WLabel.setImage"
                ));
        self->setImage(image, side);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WLabel.setImage");
    }
}

static const char* WLabel_setBuddy_args0[] = {luawt_typeToStr<WLabel>(), luawt_typeToStr<Wt::WFormWidget>(), NULL};
static const char* const* const luawt_WLabel_setBuddy_args[] = {WLabel_setBuddy_args0, NULL};

int luawt_WLabel_setBuddy(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLabel_setBuddy_args);
    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
    if (index == 0) {
        Wt::WFormWidget* buddy =
            luawt_checkFromLua<Wt::WFormWidget>(L, 2);
        self->setBuddy(buddy);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WLabel.setBuddy");
    }
}

static const char* WLabel_text_args0[] = {luawt_typeToStr<WLabel>(), NULL};
static const char* const* const luawt_WLabel_text_args[] = {WLabel_text_args0, NULL};

int luawt_WLabel_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLabel_text_args);
    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
    if (index == 0) {
        Wt::WString const& l_result = self->text();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WLabel.text");
    }
}

static const char* WLabel_setText_args0[] = {luawt_typeToStr<WLabel>(), "char const *", NULL};
static const char* const* const luawt_WLabel_setText_args[] = {WLabel_setText_args0, NULL};

int luawt_WLabel_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLabel_setText_args);
    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString text = Wt::WString(raw2);
        self->setText(text);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WLabel.setText");
    }
}

static const char* WLabel_wordWrap_args0[] = {luawt_typeToStr<WLabel>(), NULL};
static const char* const* const luawt_WLabel_wordWrap_args[] = {WLabel_wordWrap_args0, NULL};

int luawt_WLabel_wordWrap(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLabel_wordWrap_args);
    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
    if (index == 0) {
        bool l_result = self->wordWrap();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WLabel.wordWrap");
    }
}

static const char* WLabel_image_args0[] = {luawt_typeToStr<WLabel>(), NULL};
static const char* const* const luawt_WLabel_image_args[] = {WLabel_image_args0, NULL};

int luawt_WLabel_image(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLabel_image_args);
    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
    if (index == 0) {
        Wt::WImage* l_result = self->image();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WLabel.image");
    }
}

static const char* WLabel_setWordWrap_args0[] = {luawt_typeToStr<WLabel>(), "bool", NULL};
static const char* const* const luawt_WLabel_setWordWrap_args[] = {WLabel_setWordWrap_args0, NULL};

int luawt_WLabel_setWordWrap(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLabel_setWordWrap_args);
    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
    if (index == 0) {
        bool wordWrap = lua_toboolean(L, 2);
        self->setWordWrap(wordWrap);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WLabel.setWordWrap");
    }
}

static const char* WLabel_textFormat_args0[] = {luawt_typeToStr<WLabel>(), NULL};
static const char* const* const luawt_WLabel_textFormat_args[] = {WLabel_textFormat_args0, NULL};

int luawt_WLabel_textFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLabel_textFormat_args);
    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
    if (index == 0) {
        Wt::TextFormat l_result = self->textFormat();
        luawt_returnEnum(L, luawt_enum_TextFormat_str, luawt_enum_TextFormat_val, l_result, "TextFormat");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WLabel.textFormat");
    }
}

static const char* WLabel_setTextFormat_args0[] = {luawt_typeToStr<WLabel>(), "enum", NULL};
static const char* const* const luawt_WLabel_setTextFormat_args[] = {WLabel_setTextFormat_args0, NULL};

int luawt_WLabel_setTextFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WLabel_setTextFormat_args);
    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
    if (index == 0) {
        Wt::TextFormat format = static_cast<Wt::TextFormat>(luawt_getEnum(
                    L,
                    luawt_enum_TextFormat_str,
                    luawt_enum_TextFormat_val,
                    2,
                    "Wrong enum type in args of WLabel.setTextFormat"
                ));
        bool l_result = self->setTextFormat(format);
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WLabel.setTextFormat");
    }
}

ADD_SIGNAL(keyWentDown, WLabel, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WLabel, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WLabel, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WLabel, Wt::NoClass)
ADD_SIGNAL(escapePressed, WLabel, Wt::NoClass)
ADD_SIGNAL(clicked, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WLabel, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WLabel, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WLabel, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WLabel, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WLabel, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WLabel, Wt::WGestureEvent)

static const luaL_Reg luawt_WLabel_methods[] = {
    METHOD(WLabel, buddy),
    METHOD(WLabel, setBuddy),
    METHOD(WLabel, setText),
    METHOD(WLabel, text),
    METHOD(WLabel, setTextFormat),
    METHOD(WLabel, textFormat),
    METHOD(WLabel, setImage),
    METHOD(WLabel, image),
    METHOD(WLabel, setWordWrap),
    METHOD(WLabel, wordWrap),
    METHOD(WLabel, keyWentDown),
    METHOD(WLabel, keyPressed),
    METHOD(WLabel, keyWentUp),
    METHOD(WLabel, enterPressed),
    METHOD(WLabel, escapePressed),
    METHOD(WLabel, clicked),
    METHOD(WLabel, doubleClicked),
    METHOD(WLabel, mouseWentDown),
    METHOD(WLabel, mouseWentUp),
    METHOD(WLabel, mouseWentOut),
    METHOD(WLabel, mouseWentOver),
    METHOD(WLabel, mouseMoved),
    METHOD(WLabel, mouseDragged),
    METHOD(WLabel, mouseWheel),
    METHOD(WLabel, touchStarted),
    METHOD(WLabel, touchEnded),
    METHOD(WLabel, touchMoved),
    METHOD(WLabel, gestureStarted),
    METHOD(WLabel, gestureChanged),
    METHOD(WLabel, gestureEnded),
    {NULL, NULL},
};

void luawt_WLabel(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WLabel,
        L,
        wrap<luawt_WLabel_make>::func,
        0,
        luawt_WLabel_methods,
        base
    );
}
