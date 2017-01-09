#include "boost-xtime.hpp"

#include <Wt/WPushButton>
#include <Wt/WInPlaceEdit>
#include <Wt/WString>
#include <Wt/WLineEdit>
#include <Wt/WContainerWidget>
#include <Wt/WText>

#include "globals.hpp"

static const char* WInPlaceEdit_make_args0[] = {"char const *", NULL};
static const char* WInPlaceEdit_make_args1[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WInPlaceEdit_make_args[] = {WInPlaceEdit_make_args0, WInPlaceEdit_make_args1, NULL};

int luawt_WInPlaceEdit_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInPlaceEdit_make_args);
    if (index == 0) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    WInPlaceEdit * result = new WInPlaceEdit(text);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WInPlaceEdit * result = new WInPlaceEdit(text, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WInPlaceEdit.make");
    }
}

static const char* WInPlaceEdit_setButtonsEnabled_args0[] = {luawt_typeToStr<WInPlaceEdit>(), NULL};
static const char* WInPlaceEdit_setButtonsEnabled_args1[] = {luawt_typeToStr<WInPlaceEdit>(), "bool", NULL};
static const char* const* const luawt_WInPlaceEdit_setButtonsEnabled_args[] = {WInPlaceEdit_setButtonsEnabled_args0, WInPlaceEdit_setButtonsEnabled_args1, NULL};

int luawt_WInPlaceEdit_setButtonsEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInPlaceEdit_setButtonsEnabled_args);
    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
    if (index == 0) {
    self->setButtonsEnabled();
    return 0;
    
    } else if (index == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->setButtonsEnabled(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WInPlaceEdit.setButtonsEnabled");
    }
}

static const char* WInPlaceEdit_text_args0[] = {luawt_typeToStr<WInPlaceEdit>(), NULL};
static const char* const* const luawt_WInPlaceEdit_text_args[] = {WInPlaceEdit_text_args0, NULL};

int luawt_WInPlaceEdit_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInPlaceEdit_text_args);
    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
    if (index == 0) {
    Wt::WString const & result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WInPlaceEdit.text");
    }
}

static const char* WInPlaceEdit_setText_args0[] = {luawt_typeToStr<WInPlaceEdit>(), "char const *", NULL};
static const char* const* const luawt_WInPlaceEdit_setText_args[] = {WInPlaceEdit_setText_args0, NULL};

int luawt_WInPlaceEdit_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInPlaceEdit_setText_args);
    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WInPlaceEdit.setText");
    }
}

static const char* WInPlaceEdit_cancelButton_args0[] = {luawt_typeToStr<WInPlaceEdit>(), NULL};
static const char* const* const luawt_WInPlaceEdit_cancelButton_args[] = {WInPlaceEdit_cancelButton_args0, NULL};

int luawt_WInPlaceEdit_cancelButton(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInPlaceEdit_cancelButton_args);
    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
    if (index == 0) {
    Wt::WPushButton * result = self->cancelButton();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WInPlaceEdit.cancelButton");
    }
}

static const char* WInPlaceEdit_textWidget_args0[] = {luawt_typeToStr<WInPlaceEdit>(), NULL};
static const char* const* const luawt_WInPlaceEdit_textWidget_args[] = {WInPlaceEdit_textWidget_args0, NULL};

int luawt_WInPlaceEdit_textWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInPlaceEdit_textWidget_args);
    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
    if (index == 0) {
    Wt::WText * result = self->textWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WInPlaceEdit.textWidget");
    }
}

static const char* WInPlaceEdit_saveButton_args0[] = {luawt_typeToStr<WInPlaceEdit>(), NULL};
static const char* const* const luawt_WInPlaceEdit_saveButton_args[] = {WInPlaceEdit_saveButton_args0, NULL};

int luawt_WInPlaceEdit_saveButton(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInPlaceEdit_saveButton_args);
    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
    if (index == 0) {
    Wt::WPushButton * result = self->saveButton();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WInPlaceEdit.saveButton");
    }
}

static const char* WInPlaceEdit_lineEdit_args0[] = {luawt_typeToStr<WInPlaceEdit>(), NULL};
static const char* const* const luawt_WInPlaceEdit_lineEdit_args[] = {WInPlaceEdit_lineEdit_args0, NULL};

int luawt_WInPlaceEdit_lineEdit(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInPlaceEdit_lineEdit_args);
    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
    if (index == 0) {
    Wt::WLineEdit * result = self->lineEdit();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WInPlaceEdit.lineEdit");
    }
}

static const char* WInPlaceEdit_emptyText_args0[] = {luawt_typeToStr<WInPlaceEdit>(), NULL};
static const char* const* const luawt_WInPlaceEdit_emptyText_args[] = {WInPlaceEdit_emptyText_args0, NULL};

int luawt_WInPlaceEdit_emptyText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInPlaceEdit_emptyText_args);
    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
    if (index == 0) {
    Wt::WString const & result = self->emptyText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WInPlaceEdit.emptyText");
    }
}

static const char* WInPlaceEdit_setEmptyText_args0[] = {luawt_typeToStr<WInPlaceEdit>(), "char const *", NULL};
static const char* const* const luawt_WInPlaceEdit_setEmptyText_args[] = {WInPlaceEdit_setEmptyText_args0, NULL};

int luawt_WInPlaceEdit_setEmptyText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WInPlaceEdit_setEmptyText_args);
    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString emptyText = Wt::WString(raw2);
    self->setEmptyText(emptyText);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WInPlaceEdit.setEmptyText");
    }
}


static const luaL_Reg luawt_WInPlaceEdit_methods[] = {
    METHOD(WInPlaceEdit, text),
    METHOD(WInPlaceEdit, setText),
    METHOD(WInPlaceEdit, setEmptyText),
    METHOD(WInPlaceEdit, emptyText),
    METHOD(WInPlaceEdit, lineEdit),
    METHOD(WInPlaceEdit, textWidget),
    METHOD(WInPlaceEdit, saveButton),
    METHOD(WInPlaceEdit, cancelButton),
    METHOD(WInPlaceEdit, setButtonsEnabled),
    {NULL, NULL},
};

void luawt_WInPlaceEdit(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WInPlaceEdit,
        L,
        wrap<luawt_WInPlaceEdit_make>::func,
        0,
        luawt_WInPlaceEdit_methods,
        base
    );
}
