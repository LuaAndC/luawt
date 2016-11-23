#include "boost-xtime.hpp"

#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WPopupMenu>
#include <Wt/WSplitButton>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WSplitButton_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WSplitButton * result = new WSplitButton(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString label = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WSplitButton * result = new WSplitButton(label, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSplitButton.make: %d", argc);
    }
}

int luawt_WSplitButton_menu(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSplitButton* self = luawt_checkFromLua<WSplitButton>(L, 1);
        if (argc == 0) {
    Wt::WPopupMenu * result = self->menu();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSplitButton.menu: %d", argc);
    }
}

int luawt_WSplitButton_actionButton(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSplitButton* self = luawt_checkFromLua<WSplitButton>(L, 1);
        if (argc == 0) {
    Wt::WPushButton * result = self->actionButton();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSplitButton.actionButton: %d", argc);
    }
}

int luawt_WSplitButton_dropDownButton(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSplitButton* self = luawt_checkFromLua<WSplitButton>(L, 1);
        if (argc == 0) {
    Wt::WPushButton * result = self->dropDownButton();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSplitButton.dropDownButton: %d", argc);
    }
}

int luawt_WSplitButton_setMenu(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSplitButton* self = luawt_checkFromLua<WSplitButton>(L, 1);
        if (argc == 1) {
    Wt::WPopupMenu* menu =
        luawt_checkFromLua<Wt::WPopupMenu>(L, 2);
    self->setMenu(menu);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WSplitButton.setMenu: %d", argc);
    }
}


static const luaL_Reg luawt_WSplitButton_methods[] = {
    METHOD(WSplitButton, actionButton),
    METHOD(WSplitButton, dropDownButton),
    METHOD(WSplitButton, setMenu),
    METHOD(WSplitButton, menu),
    {NULL, NULL},
};

void luawt_WSplitButton(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WSplitButton,
        L,
        wrap<luawt_WSplitButton_make>::func,
        0,
        luawt_WSplitButton_methods,
        base
    );
}
