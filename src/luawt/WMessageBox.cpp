#include "boost-xtime.hpp"

#include <Wt/WPushButton>
#include <Wt/WText>
#include <Wt/WMessageBox>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

static const char* WMessageBox_text_args0[] = {luawt_typeToStr<WMessageBox>(), NULL};
static const char* const* const luawt_WMessageBox_text_args[] = {WMessageBox_text_args0, NULL};

int luawt_WMessageBox_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMessageBox_text_args);
    WMessageBox* self = luawt_checkFromLua<WMessageBox>(L, 1);
    if (index == 0) {
        Wt::WString const& l_result = self->text();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMessageBox.text");
    }
}

static const char* WMessageBox_setText_args0[] = {luawt_typeToStr<WMessageBox>(), "char const *", NULL};
static const char* const* const luawt_WMessageBox_setText_args[] = {WMessageBox_setText_args0, NULL};

int luawt_WMessageBox_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMessageBox_setText_args);
    WMessageBox* self = luawt_checkFromLua<WMessageBox>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString text = Wt::WString(raw2);
        self->setText(text);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMessageBox.setText");
    }
}

static const char* WMessageBox_textWidget_args0[] = {luawt_typeToStr<WMessageBox>(), NULL};
static const char* const* const luawt_WMessageBox_textWidget_args[] = {WMessageBox_textWidget_args0, NULL};

int luawt_WMessageBox_textWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMessageBox_textWidget_args);
    WMessageBox* self = luawt_checkFromLua<WMessageBox>(L, 1);
    if (index == 0) {
        Wt::WText* l_result = self->textWidget();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMessageBox.textWidget");
    }
}

static const char* WMessageBox_addButton_args0[] = {luawt_typeToStr<WMessageBox>(), "char const *", "enum", NULL};
static const char* const* const luawt_WMessageBox_addButton_args[] = {WMessageBox_addButton_args0, NULL};

int luawt_WMessageBox_addButton(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMessageBox_addButton_args);
    WMessageBox* self = luawt_checkFromLua<WMessageBox>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString text = Wt::WString(raw2);
        Wt::StandardButton result = static_cast<Wt::StandardButton>(luawt_getEnum(
                    L,
                    luawt_enum_StandardButton_str,
                    luawt_enum_StandardButton_val,
                    3,
                    "Wrong enum type in args of WMessageBox.addButton"
                ));
        Wt::WPushButton* l_result = self->addButton(text, result);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMessageBox.addButton");
    }
}

static const char* WMessageBox_buttonResult_args0[] = {luawt_typeToStr<WMessageBox>(), NULL};
static const char* const* const luawt_WMessageBox_buttonResult_args[] = {WMessageBox_buttonResult_args0, NULL};

int luawt_WMessageBox_buttonResult(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMessageBox_buttonResult_args);
    WMessageBox* self = luawt_checkFromLua<WMessageBox>(L, 1);
    if (index == 0) {
        Wt::StandardButton l_result = self->buttonResult();
        luawt_returnEnum(L, luawt_enum_StandardButton_str, luawt_enum_StandardButton_val, l_result, "StandardButton");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMessageBox.buttonResult");
    }
}

static const char* WMessageBox_button_args0[] = {luawt_typeToStr<WMessageBox>(), "enum", NULL};
static const char* const* const luawt_WMessageBox_button_args[] = {WMessageBox_button_args0, NULL};

int luawt_WMessageBox_button(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMessageBox_button_args);
    WMessageBox* self = luawt_checkFromLua<WMessageBox>(L, 1);
    if (index == 0) {
        Wt::StandardButton b = static_cast<Wt::StandardButton>(luawt_getEnum(
                    L,
                    luawt_enum_StandardButton_str,
                    luawt_enum_StandardButton_val,
                    2,
                    "Wrong enum type in args of WMessageBox.button"
                ));
        Wt::WPushButton* l_result = self->button(b);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMessageBox.button");
    }
}

static const char* WMessageBox_setIcon_args0[] = {luawt_typeToStr<WMessageBox>(), "enum", NULL};
static const char* const* const luawt_WMessageBox_setIcon_args[] = {WMessageBox_setIcon_args0, NULL};

int luawt_WMessageBox_setIcon(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMessageBox_setIcon_args);
    WMessageBox* self = luawt_checkFromLua<WMessageBox>(L, 1);
    if (index == 0) {
        Wt::Icon icon = static_cast<Wt::Icon>(luawt_getEnum(
                    L,
                    luawt_enum_Icon_str,
                    luawt_enum_Icon_val,
                    2,
                    "Wrong enum type in args of WMessageBox.setIcon"
                ));
        self->setIcon(icon);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMessageBox.setIcon");
    }
}

static const char* WMessageBox_setButtons_args0[] = {luawt_typeToStr<WMessageBox>(), "enum", NULL};
static const char* const* const luawt_WMessageBox_setButtons_args[] = {WMessageBox_setButtons_args0, NULL};

int luawt_WMessageBox_setButtons(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMessageBox_setButtons_args);
    WMessageBox* self = luawt_checkFromLua<WMessageBox>(L, 1);
    if (index == 0) {
        Wt::WFlags<Wt::StandardButton> buttons = static_cast<Wt::StandardButton>(luawt_getEnum(
                    L,
                    luawt_enum_StandardButton_str,
                    luawt_enum_StandardButton_val,
                    2,
                    "Wrong enum type in args of WMessageBox.setButtons"
                ));
        self->setButtons(buttons);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMessageBox.setButtons");
    }
}

static const char* WMessageBox_icon_args0[] = {luawt_typeToStr<WMessageBox>(), NULL};
static const char* const* const luawt_WMessageBox_icon_args[] = {WMessageBox_icon_args0, NULL};

int luawt_WMessageBox_icon(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMessageBox_icon_args);
    WMessageBox* self = luawt_checkFromLua<WMessageBox>(L, 1);
    if (index == 0) {
        Wt::Icon l_result = self->icon();
        luawt_returnEnum(L, luawt_enum_Icon_str, luawt_enum_Icon_val, l_result, "Icon");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMessageBox.icon");
    }
}

static const luaL_Reg luawt_WMessageBox_methods[] = {
    METHOD(WMessageBox, setText),
    METHOD(WMessageBox, text),
    METHOD(WMessageBox, textWidget),
    METHOD(WMessageBox, setIcon),
    METHOD(WMessageBox, icon),
    METHOD(WMessageBox, addButton),
    METHOD(WMessageBox, setButtons),
    METHOD(WMessageBox, button),
    METHOD(WMessageBox, buttonResult),
    {NULL, NULL},
};

void luawt_WMessageBox(lua_State* L) {
    const char* base = luawt_typeToStr<WDialog>();
    assert(base);
    DECLARE_CLASS(
        WMessageBox,
        L,
        0,
        0,
        luawt_WMessageBox_methods,
        base
    );
}
