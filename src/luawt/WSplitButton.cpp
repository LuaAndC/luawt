#include "boost-xtime.hpp"

#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WPopupMenu>
#include <Wt/WSplitButton>
#include <Wt/WString>

#include "globals.hpp"

static const char* WSplitButton_make_args0[] = {NULL};
static const char* WSplitButton_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WSplitButton_make_args2[] = {"char const *", NULL};
static const char* WSplitButton_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WSplitButton_make_args[] = {WSplitButton_make_args0, WSplitButton_make_args1, WSplitButton_make_args2, WSplitButton_make_args3, NULL};

int luawt_WSplitButton_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSplitButton_make_args);
    if (index == 0) {
    WSplitButton * result = new WSplitButton();
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WSplitButton");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WSplitButton * result = new WSplitButton(parent);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString label = Wt::WString(raw1);
    WSplitButton * result = new WSplitButton(label);
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WSplitButton");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString label = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WSplitButton * result = new WSplitButton(label, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSplitButton.make");
    }
}

static const char* WSplitButton_menu_args0[] = {luawt_typeToStr<WSplitButton>(), NULL};
static const char* const* const luawt_WSplitButton_menu_args[] = {WSplitButton_menu_args0, NULL};

int luawt_WSplitButton_menu(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSplitButton_menu_args);
    WSplitButton* self = luawt_checkFromLua<WSplitButton>(L, 1);
    if (index == 0) {
    Wt::WPopupMenu * result = self->menu();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSplitButton.menu");
    }
}

static const char* WSplitButton_actionButton_args0[] = {luawt_typeToStr<WSplitButton>(), NULL};
static const char* const* const luawt_WSplitButton_actionButton_args[] = {WSplitButton_actionButton_args0, NULL};

int luawt_WSplitButton_actionButton(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSplitButton_actionButton_args);
    WSplitButton* self = luawt_checkFromLua<WSplitButton>(L, 1);
    if (index == 0) {
    Wt::WPushButton * result = self->actionButton();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSplitButton.actionButton");
    }
}

static const char* WSplitButton_dropDownButton_args0[] = {luawt_typeToStr<WSplitButton>(), NULL};
static const char* const* const luawt_WSplitButton_dropDownButton_args[] = {WSplitButton_dropDownButton_args0, NULL};

int luawt_WSplitButton_dropDownButton(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSplitButton_dropDownButton_args);
    WSplitButton* self = luawt_checkFromLua<WSplitButton>(L, 1);
    if (index == 0) {
    Wt::WPushButton * result = self->dropDownButton();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSplitButton.dropDownButton");
    }
}

static const char* WSplitButton_setMenu_args0[] = {luawt_typeToStr<WSplitButton>(), luawt_typeToStr<Wt::WPopupMenu>(), NULL};
static const char* const* const luawt_WSplitButton_setMenu_args[] = {WSplitButton_setMenu_args0, NULL};

int luawt_WSplitButton_setMenu(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSplitButton_setMenu_args);
    WSplitButton* self = luawt_checkFromLua<WSplitButton>(L, 1);
    if (index == 0) {
    Wt::WPopupMenu* menu =
        luawt_checkFromLua<Wt::WPopupMenu>(L, 2);
    self->setMenu(menu);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSplitButton.setMenu");
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
