#include "boost-xtime.hpp"

#include <Wt/WLineEdit>
#include <Wt/WPushButton>
#include <Wt/WInPlaceEdit>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WInPlaceEdit_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WInPlaceEdit * result = new WInPlaceEdit(text, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WInPlaceEdit.make: %d", argc);
    }
}

int luawt_WInPlaceEdit_setButtonsEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->setButtonsEnabled(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WInPlaceEdit.setButtonsEnabled: %d", argc);
    }
}

int luawt_WInPlaceEdit_text(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WInPlaceEdit.text: %d", argc);
    }
}

int luawt_WInPlaceEdit_setText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WInPlaceEdit.setText: %d", argc);
    }
}

int luawt_WInPlaceEdit_cancelButton(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
        if (argc == 0) {
    Wt::WPushButton * result = self->cancelButton();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WInPlaceEdit.cancelButton: %d", argc);
    }
}

int luawt_WInPlaceEdit_emptyText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->emptyText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WInPlaceEdit.emptyText: %d", argc);
    }
}

int luawt_WInPlaceEdit_saveButton(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
        if (argc == 0) {
    Wt::WPushButton * result = self->saveButton();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WInPlaceEdit.saveButton: %d", argc);
    }
}

int luawt_WInPlaceEdit_lineEdit(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
        if (argc == 0) {
    Wt::WLineEdit * result = self->lineEdit();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WInPlaceEdit.lineEdit: %d", argc);
    }
}

int luawt_WInPlaceEdit_setEmptyText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WInPlaceEdit* self = luawt_checkFromLua<WInPlaceEdit>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString emptyText = Wt::WString(raw2);
    self->setEmptyText(emptyText);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WInPlaceEdit.setEmptyText: %d", argc);
    }
}


static const luaL_Reg luawt_WInPlaceEdit_methods[] = {
    METHOD(WInPlaceEdit, text),
    METHOD(WInPlaceEdit, setText),
    METHOD(WInPlaceEdit, setEmptyText),
    METHOD(WInPlaceEdit, emptyText),
    METHOD(WInPlaceEdit, lineEdit),
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
