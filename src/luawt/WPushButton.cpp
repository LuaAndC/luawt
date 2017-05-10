#include "boost-xtime.hpp"

#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WPopupMenu>
#include <Wt/WLink>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

static const char* WPushButton_make_args0[] = {NULL};
static const char* WPushButton_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WPushButton_make_args2[] = {"char const *", NULL};
static const char* WPushButton_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WPushButton_make_args[] = {WPushButton_make_args0, WPushButton_make_args1, WPushButton_make_args2, WPushButton_make_args3, NULL};

int luawt_WPushButton_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_make_args);
    if (index == 0) {
    WPushButton * l_result = new WPushButton();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WPushButton");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WPushButton * l_result = new WPushButton(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    WPushButton * l_result = new WPushButton(text);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WPushButton");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WPushButton * l_result = new WPushButton(text, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.make");
    }
}

static const char* WPushButton_setChecked_args0[] = {luawt_typeToStr<WPushButton>(), "bool", NULL};
static const char* WPushButton_setChecked_args1[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_setChecked_args[] = {WPushButton_setChecked_args0, WPushButton_setChecked_args1, NULL};

int luawt_WPushButton_setChecked(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setChecked_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    bool checked = lua_toboolean(L, 2);
    self->setChecked(checked);
    return 0;
    
    } else if (index == 1) {
    self->setChecked();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setChecked");
    }
}

static const char* WPushButton_setMenu_args0[] = {luawt_typeToStr<WPushButton>(), luawt_typeToStr<Wt::WPopupMenu>(), NULL};
static const char* const* const luawt_WPushButton_setMenu_args[] = {WPushButton_setMenu_args0, NULL};

int luawt_WPushButton_setMenu(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setMenu_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    Wt::WPopupMenu* menu =
        luawt_checkFromLua<Wt::WPopupMenu>(L, 2);
    self->setMenu(menu);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setMenu");
    }
}

static const char* WPushButton_isCheckable_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_isCheckable_args[] = {WPushButton_isCheckable_args0, NULL};

int luawt_WPushButton_isCheckable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_isCheckable_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    bool l_result = self->isCheckable();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.isCheckable");
    }
}

static const char* WPushButton_setUnChecked_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_setUnChecked_args[] = {WPushButton_setUnChecked_args0, NULL};

int luawt_WPushButton_setUnChecked(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setUnChecked_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    self->setUnChecked();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setUnChecked");
    }
}

static const char* WPushButton_setRef_args0[] = {luawt_typeToStr<WPushButton>(), "char const *", NULL};
static const char* const* const luawt_WPushButton_setRef_args[] = {WPushButton_setRef_args0, NULL};

int luawt_WPushButton_setRef(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setRef_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    self->setRef(url);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setRef");
    }
}

static const char* WPushButton_setTextFormat_args0[] = {luawt_typeToStr<WPushButton>(), "enum", NULL};
static const char* const* const luawt_WPushButton_setTextFormat_args[] = {WPushButton_setTextFormat_args0, NULL};

int luawt_WPushButton_setTextFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setTextFormat_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    Wt::TextFormat format = static_cast<Wt::TextFormat>(luawt_getEnum(
        L,
        luawt_enum_TextFormat_str,
        luawt_enum_TextFormat_val,
        2,
        "Wrong enum type in args of WPushButton.setTextFormat"
    ));
    bool l_result = self->setTextFormat(format);
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setTextFormat");
    }
}

static const char* WPushButton_valueText_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_valueText_args[] = {WPushButton_valueText_args0, NULL};

int luawt_WPushButton_valueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_valueText_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    Wt::WString l_result = self->valueText();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.valueText");
    }
}

static const char* WPushButton_menu_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_menu_args[] = {WPushButton_menu_args0, NULL};

int luawt_WPushButton_menu(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_menu_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    Wt::WPopupMenu * l_result = self->menu();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.menu");
    }
}

static const char* WPushButton_isChecked_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_isChecked_args[] = {WPushButton_isChecked_args0, NULL};

int luawt_WPushButton_isChecked(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_isChecked_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    bool l_result = self->isChecked();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.isChecked");
    }
}

static const char* WPushButton_setLink_args0[] = {luawt_typeToStr<WPushButton>(), "char const *", NULL};
static const char* const* const luawt_WPushButton_setLink_args[] = {WPushButton_setLink_args0, NULL};

int luawt_WPushButton_setLink(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setLink_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WLink link = Wt::WLink(raw2);
    self->setLink(link);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setLink");
    }
}

static const char* WPushButton_linkTarget_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_linkTarget_args[] = {WPushButton_linkTarget_args0, NULL};

int luawt_WPushButton_linkTarget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_linkTarget_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    Wt::AnchorTarget l_result = self->linkTarget();
    luawt_returnEnum(L, luawt_enum_AnchorTarget_str, luawt_enum_AnchorTarget_val, l_result, "AnchorTarget");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.linkTarget");
    }
}

static const char* WPushButton_setValueText_args0[] = {luawt_typeToStr<WPushButton>(), "char const *", NULL};
static const char* const* const luawt_WPushButton_setValueText_args[] = {WPushButton_setValueText_args0, NULL};

int luawt_WPushButton_setValueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setValueText_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString value = Wt::WString(raw2);
    self->setValueText(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setValueText");
    }
}

static const char* WPushButton_ref_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_ref_args[] = {WPushButton_ref_args0, NULL};

int luawt_WPushButton_ref(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_ref_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    std::string l_result = self->ref();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.ref");
    }
}

static const char* WPushButton_isDefault_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_isDefault_args[] = {WPushButton_isDefault_args0, NULL};

int luawt_WPushButton_isDefault(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_isDefault_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    bool l_result = self->isDefault();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.isDefault");
    }
}

static const char* WPushButton_setIcon_args0[] = {luawt_typeToStr<WPushButton>(), "char const *", NULL};
static const char* const* const luawt_WPushButton_setIcon_args[] = {WPushButton_setIcon_args0, NULL};

int luawt_WPushButton_setIcon(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setIcon_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WLink link = Wt::WLink(raw2);
    self->setIcon(link);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setIcon");
    }
}

static const char* WPushButton_setDefault_args0[] = {luawt_typeToStr<WPushButton>(), "bool", NULL};
static const char* const* const luawt_WPushButton_setDefault_args[] = {WPushButton_setDefault_args0, NULL};

int luawt_WPushButton_setDefault(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setDefault_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    bool enabled = lua_toboolean(L, 2);
    self->setDefault(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setDefault");
    }
}

static const char* WPushButton_link_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_link_args[] = {WPushButton_link_args0, NULL};

int luawt_WPushButton_link(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_link_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    Wt::WLink const & l_result = self->link();
    lua_pushstring(L, l_result.url().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.link");
    }
}

static const char* WPushButton_setLinkTarget_args0[] = {luawt_typeToStr<WPushButton>(), "enum", NULL};
static const char* const* const luawt_WPushButton_setLinkTarget_args[] = {WPushButton_setLinkTarget_args0, NULL};

int luawt_WPushButton_setLinkTarget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setLinkTarget_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    Wt::AnchorTarget target = static_cast<Wt::AnchorTarget>(luawt_getEnum(
        L,
        luawt_enum_AnchorTarget_str,
        luawt_enum_AnchorTarget_val,
        2,
        "Wrong enum type in args of WPushButton.setLinkTarget"
    ));
    self->setLinkTarget(target);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setLinkTarget");
    }
}

static const char* WPushButton_icon_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_icon_args[] = {WPushButton_icon_args0, NULL};

int luawt_WPushButton_icon(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_icon_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    Wt::WLink l_result = self->icon();
    lua_pushstring(L, l_result.url().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.icon");
    }
}

static const char* WPushButton_setCheckable_args0[] = {luawt_typeToStr<WPushButton>(), "bool", NULL};
static const char* const* const luawt_WPushButton_setCheckable_args[] = {WPushButton_setCheckable_args0, NULL};

int luawt_WPushButton_setCheckable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setCheckable_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    bool checkable = lua_toboolean(L, 2);
    self->setCheckable(checkable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setCheckable");
    }
}

static const char* WPushButton_setText_args0[] = {luawt_typeToStr<WPushButton>(), "char const *", NULL};
static const char* const* const luawt_WPushButton_setText_args[] = {WPushButton_setText_args0, NULL};

int luawt_WPushButton_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_setText_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    bool l_result = self->setText(text);
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.setText");
    }
}

static const char* WPushButton_refresh_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_refresh_args[] = {WPushButton_refresh_args0, NULL};

int luawt_WPushButton_refresh(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_refresh_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.refresh");
    }
}

static const char* WPushButton_text_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_text_args[] = {WPushButton_text_args0, NULL};

int luawt_WPushButton_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_text_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    Wt::WString const & l_result = self->text();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.text");
    }
}

static const char* WPushButton_textFormat_args0[] = {luawt_typeToStr<WPushButton>(), NULL};
static const char* const* const luawt_WPushButton_textFormat_args[] = {WPushButton_textFormat_args0, NULL};

int luawt_WPushButton_textFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WPushButton_textFormat_args);
    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
    if (index == 0) {
    Wt::TextFormat l_result = self->textFormat();
    luawt_returnEnum(L, luawt_enum_TextFormat_str, luawt_enum_TextFormat_val, l_result, "TextFormat");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WPushButton.textFormat");
    }
}

ADD_SIGNAL(checked, WPushButton, Wt::NoClass)
ADD_SIGNAL(unChecked, WPushButton, Wt::NoClass)
ADD_SIGNAL(changed, WPushButton, Wt::NoClass)
ADD_SIGNAL(selected, WPushButton, Wt::NoClass)
ADD_SIGNAL(blurred, WPushButton, Wt::NoClass)
ADD_SIGNAL(focussed, WPushButton, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WPushButton, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WPushButton, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WPushButton, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WPushButton, Wt::NoClass)
ADD_SIGNAL(escapePressed, WPushButton, Wt::NoClass)
ADD_SIGNAL(clicked, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WPushButton, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WPushButton, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WPushButton, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WPushButton, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WPushButton, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WPushButton, Wt::WGestureEvent)

static const luaL_Reg luawt_WPushButton_methods[] = {
    METHOD(WPushButton, setDefault),
    METHOD(WPushButton, isDefault),
    METHOD(WPushButton, setCheckable),
    METHOD(WPushButton, isCheckable),
    METHOD(WPushButton, setChecked),
    METHOD(WPushButton, setChecked),
    METHOD(WPushButton, setUnChecked),
    METHOD(WPushButton, isChecked),
    METHOD(WPushButton, setText),
    METHOD(WPushButton, text),
    METHOD(WPushButton, setTextFormat),
    METHOD(WPushButton, textFormat),
    METHOD(WPushButton, setIcon),
    METHOD(WPushButton, icon),
    METHOD(WPushButton, setLink),
    METHOD(WPushButton, link),
    METHOD(WPushButton, setRef),
    METHOD(WPushButton, ref),
    METHOD(WPushButton, valueText),
    METHOD(WPushButton, setValueText),
    METHOD(WPushButton, setLinkTarget),
    METHOD(WPushButton, linkTarget),
    METHOD(WPushButton, setMenu),
    METHOD(WPushButton, menu),
    METHOD(WPushButton, refresh),
    METHOD(WPushButton, checked),
    METHOD(WPushButton, unChecked),
    METHOD(WPushButton, changed),
    METHOD(WPushButton, selected),
    METHOD(WPushButton, blurred),
    METHOD(WPushButton, focussed),
    METHOD(WPushButton, keyWentDown),
    METHOD(WPushButton, keyPressed),
    METHOD(WPushButton, keyWentUp),
    METHOD(WPushButton, enterPressed),
    METHOD(WPushButton, escapePressed),
    METHOD(WPushButton, clicked),
    METHOD(WPushButton, doubleClicked),
    METHOD(WPushButton, mouseWentDown),
    METHOD(WPushButton, mouseWentUp),
    METHOD(WPushButton, mouseWentOut),
    METHOD(WPushButton, mouseWentOver),
    METHOD(WPushButton, mouseMoved),
    METHOD(WPushButton, mouseDragged),
    METHOD(WPushButton, mouseWheel),
    METHOD(WPushButton, touchStarted),
    METHOD(WPushButton, touchEnded),
    METHOD(WPushButton, touchMoved),
    METHOD(WPushButton, gestureStarted),
    METHOD(WPushButton, gestureChanged),
    METHOD(WPushButton, gestureEnded),
    {NULL, NULL},
};

void luawt_WPushButton(lua_State* L) {
    const char* base = luawt_typeToStr<WFormWidget>();
    assert(base);
    DECLARE_CLASS(
        WPushButton,
        L,
        wrap<luawt_WPushButton_make>::func,
        0,
        luawt_WPushButton_methods,
        base
    );
}
