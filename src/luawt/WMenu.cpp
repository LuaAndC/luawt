#include "boost-xtime.hpp"

#include <Wt/WMenuItem>
#include <Wt/WString>
#include <Wt/WWidget>
#include <Wt/WStackedWidget>
#include <Wt/WMenu>
#include <Wt/WContainerWidget>

#include "enums.hpp"
#include "globals.hpp"

static const char* WMenu_make_args0[] = {"enum", NULL};
static const char* WMenu_make_args1[] = {"enum", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WMenu_make_args2[] = {NULL};
static const char* WMenu_make_args3[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WMenu_make_args4[] = {luawt_typeToStr<Wt::WStackedWidget>(), "enum", NULL};
static const char* WMenu_make_args5[] = {luawt_typeToStr<Wt::WStackedWidget>(), "enum", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WMenu_make_args6[] = {luawt_typeToStr<Wt::WStackedWidget>(), NULL};
static const char* WMenu_make_args7[] = {luawt_typeToStr<Wt::WStackedWidget>(), luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WMenu_make_args[] = {WMenu_make_args0, WMenu_make_args1, WMenu_make_args2, WMenu_make_args3, WMenu_make_args4, WMenu_make_args5, WMenu_make_args6, WMenu_make_args7, NULL};

int luawt_WMenu_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_make_args);
    if (index == 0) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(luawt_getEnum(
        L,
        luawt_enum_Orientation_str,
        luawt_enum_Orientation_val,
        1,
        "Wrong enum type in args of WMenu.make"
    ));
    WMenu * l_result = new WMenu(orientation);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WMenu");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(luawt_getEnum(
        L,
        luawt_enum_Orientation_str,
        luawt_enum_Orientation_val,
        1,
        "Wrong enum type in args of WMenu.make"
    ));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WMenu * l_result = new WMenu(orientation, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    WMenu * l_result = new WMenu();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WMenu");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 3) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WMenu * l_result = new WMenu(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 4) {
    Wt::WStackedWidget* contentsStack =
        luawt_checkFromLua<Wt::WStackedWidget>(L, 1);
    Wt::Orientation orientation = static_cast<Wt::Orientation>(luawt_getEnum(
        L,
        luawt_enum_Orientation_str,
        luawt_enum_Orientation_val,
        2,
        "Wrong enum type in args of WMenu.make"
    ));
    WMenu * l_result = new WMenu(contentsStack, orientation);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WMenu");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 5) {
    Wt::WStackedWidget* contentsStack =
        luawt_checkFromLua<Wt::WStackedWidget>(L, 1);
    Wt::Orientation orientation = static_cast<Wt::Orientation>(luawt_getEnum(
        L,
        luawt_enum_Orientation_str,
        luawt_enum_Orientation_val,
        2,
        "Wrong enum type in args of WMenu.make"
    ));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 3);
    WMenu * l_result = new WMenu(contentsStack, orientation, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 6) {
    Wt::WStackedWidget* contentsStack =
        luawt_checkFromLua<Wt::WStackedWidget>(L, 1);
    WMenu * l_result = new WMenu(contentsStack);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WMenu");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 7) {
    Wt::WStackedWidget* contentsStack =
        luawt_checkFromLua<Wt::WStackedWidget>(L, 1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WMenu * l_result = new WMenu(contentsStack, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.make");
    }
}

static const char* WMenu_isItemDisabled_args0[] = {luawt_typeToStr<WMenu>(), luawt_typeToStr<Wt::WMenuItem>(), NULL};
static const char* WMenu_isItemDisabled_args1[] = {luawt_typeToStr<WMenu>(), "int", NULL};
static const char* const* const luawt_WMenu_isItemDisabled_args[] = {WMenu_isItemDisabled_args0, WMenu_isItemDisabled_args1, NULL};

int luawt_WMenu_isItemDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_isItemDisabled_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WMenuItem* item =
        luawt_checkFromLua<Wt::WMenuItem>(L, 2);
    bool l_result = self->isItemDisabled(item);
    lua_pushboolean(L, l_result);
    return 1;

    } else if (index == 1) {
    int index = lua_tointeger(L, 2);
    bool l_result = self->isItemDisabled(index);
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.isItemDisabled");
    }
}

static const char* WMenu_orientation_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_orientation_args[] = {WMenu_orientation_args0, NULL};

int luawt_WMenu_orientation(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_orientation_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::Orientation l_result = self->orientation();
    luawt_returnEnum(L, luawt_enum_Orientation_str, luawt_enum_Orientation_val, l_result, "Orientation");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.orientation");
    }
}

static const char* WMenu_internalBasePath_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_internalBasePath_args[] = {WMenu_internalBasePath_args0, NULL};

int luawt_WMenu_internalBasePath(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_internalBasePath_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    std::string const & l_result = self->internalBasePath();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.internalBasePath");
    }
}

static const char* WMenu_addMenu_args0[] = {luawt_typeToStr<WMenu>(), "char const *", luawt_typeToStr<Wt::WMenu>(), NULL};
static const char* WMenu_addMenu_args1[] = {luawt_typeToStr<WMenu>(), "char const *", "char const *", luawt_typeToStr<Wt::WMenu>(), NULL};
static const char* const* const luawt_WMenu_addMenu_args[] = {WMenu_addMenu_args0, WMenu_addMenu_args1, NULL};

int luawt_WMenu_addMenu(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_addMenu_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    Wt::WMenu* menu =
        luawt_checkFromLua<Wt::WMenu>(L, 3);
    Wt::WMenuItem * l_result = self->addMenu(text, menu);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string iconPath = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString text = Wt::WString(raw3);
    Wt::WMenu* menu =
        luawt_checkFromLua<Wt::WMenu>(L, 4);
    Wt::WMenuItem * l_result = self->addMenu(iconPath, text, menu);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.addMenu");
    }
}

static const char* WMenu_addSectionHeader_args0[] = {luawt_typeToStr<WMenu>(), "char const *", NULL};
static const char* const* const luawt_WMenu_addSectionHeader_args[] = {WMenu_addSectionHeader_args0, NULL};

int luawt_WMenu_addSectionHeader(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_addSectionHeader_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->addSectionHeader(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.addSectionHeader");
    }
}

static const char* WMenu_close_args0[] = {luawt_typeToStr<WMenu>(), luawt_typeToStr<Wt::WMenuItem>(), NULL};
static const char* WMenu_close_args1[] = {luawt_typeToStr<WMenu>(), "int", NULL};
static const char* const* const luawt_WMenu_close_args[] = {WMenu_close_args0, WMenu_close_args1, NULL};

int luawt_WMenu_close(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_close_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WMenuItem* item =
        luawt_checkFromLua<Wt::WMenuItem>(L, 2);
    self->close(item);
    return 0;
    
    } else if (index == 1) {
    int index = lua_tointeger(L, 2);
    self->close(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.close");
    }
}

static const char* WMenu_setRenderAsList_args0[] = {luawt_typeToStr<WMenu>(), "bool", NULL};
static const char* const* const luawt_WMenu_setRenderAsList_args[] = {WMenu_setRenderAsList_args0, NULL};

int luawt_WMenu_setRenderAsList(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_setRenderAsList_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    bool enable = lua_toboolean(L, 2);
    self->setRenderAsList(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.setRenderAsList");
    }
}

static const char* WMenu_select_args0[] = {luawt_typeToStr<WMenu>(), luawt_typeToStr<Wt::WMenuItem>(), NULL};
static const char* WMenu_select_args1[] = {luawt_typeToStr<WMenu>(), "int", NULL};
static const char* const* const luawt_WMenu_select_args[] = {WMenu_select_args0, WMenu_select_args1, NULL};

int luawt_WMenu_select(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_select_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WMenuItem* item =
        luawt_checkFromLua<Wt::WMenuItem>(L, 2);
    self->select(item);
    return 0;
    
    } else if (index == 1) {
    int index = lua_tointeger(L, 2);
    self->select(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.select");
    }
}

static const char* WMenu_parentItem_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_parentItem_args[] = {WMenu_parentItem_args0, NULL};

int luawt_WMenu_parentItem(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_parentItem_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WMenuItem * l_result = self->parentItem();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.parentItem");
    }
}

static const char* WMenu_setInternalPathEnabled_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* WMenu_setInternalPathEnabled_args1[] = {luawt_typeToStr<WMenu>(), "char const *", NULL};
static const char* const* const luawt_WMenu_setInternalPathEnabled_args[] = {WMenu_setInternalPathEnabled_args0, WMenu_setInternalPathEnabled_args1, NULL};

int luawt_WMenu_setInternalPathEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_setInternalPathEnabled_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    self->setInternalPathEnabled();
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string basePath = std::string(raw2);
    self->setInternalPathEnabled(basePath);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.setInternalPathEnabled");
    }
}

static const char* WMenu_currentItem_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_currentItem_args[] = {WMenu_currentItem_args0, NULL};

int luawt_WMenu_currentItem(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_currentItem_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WMenuItem * l_result = self->currentItem();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.currentItem");
    }
}

static const char* WMenu_isItemHidden_args0[] = {luawt_typeToStr<WMenu>(), luawt_typeToStr<Wt::WMenuItem>(), NULL};
static const char* WMenu_isItemHidden_args1[] = {luawt_typeToStr<WMenu>(), "int", NULL};
static const char* const* const luawt_WMenu_isItemHidden_args[] = {WMenu_isItemHidden_args0, WMenu_isItemHidden_args1, NULL};

int luawt_WMenu_isItemHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_isItemHidden_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WMenuItem* item =
        luawt_checkFromLua<Wt::WMenuItem>(L, 2);
    bool l_result = self->isItemHidden(item);
    lua_pushboolean(L, l_result);
    return 1;

    } else if (index == 1) {
    int index = lua_tointeger(L, 2);
    bool l_result = self->isItemHidden(index);
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.isItemHidden");
    }
}

static const char* WMenu_addSeparator_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_addSeparator_args[] = {WMenu_addSeparator_args0, NULL};

int luawt_WMenu_addSeparator(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_addSeparator_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    self->addSeparator();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.addSeparator");
    }
}

static const char* WMenu_indexOf_args0[] = {luawt_typeToStr<WMenu>(), luawt_typeToStr<Wt::WMenuItem>(), NULL};
static const char* const* const luawt_WMenu_indexOf_args[] = {WMenu_indexOf_args0, NULL};

int luawt_WMenu_indexOf(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_indexOf_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WMenuItem* item =
        luawt_checkFromLua<Wt::WMenuItem>(L, 2);
    int l_result = self->indexOf(item);
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.indexOf");
    }
}

static const char* WMenu_addItem_args0[] = {luawt_typeToStr<WMenu>(), "char const *", NULL};
static const char* WMenu_addItem_args1[] = {luawt_typeToStr<WMenu>(), "char const *", luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WMenu_addItem_args2[] = {luawt_typeToStr<WMenu>(), "char const *", luawt_typeToStr<Wt::WWidget>(), "enum", NULL};
static const char* WMenu_addItem_args3[] = {luawt_typeToStr<WMenu>(), "char const *", "char const *", NULL};
static const char* WMenu_addItem_args4[] = {luawt_typeToStr<WMenu>(), "char const *", "char const *", luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WMenu_addItem_args5[] = {luawt_typeToStr<WMenu>(), "char const *", "char const *", luawt_typeToStr<Wt::WWidget>(), "enum", NULL};
static const char* const* const luawt_WMenu_addItem_args[] = {WMenu_addItem_args0, WMenu_addItem_args1, WMenu_addItem_args2, WMenu_addItem_args3, WMenu_addItem_args4, WMenu_addItem_args5, NULL};

int luawt_WMenu_addItem(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_addItem_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString label = Wt::WString(raw2);
    Wt::WMenuItem * l_result = self->addItem(label);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString label = Wt::WString(raw2);
    Wt::WWidget* contents =
        luawt_checkFromLua<Wt::WWidget>(L, 3);
    Wt::WMenuItem * l_result = self->addItem(label, contents);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString label = Wt::WString(raw2);
    Wt::WWidget* contents =
        luawt_checkFromLua<Wt::WWidget>(L, 3);
    Wt::WMenuItem::LoadPolicy policy = static_cast<Wt::WMenuItem::LoadPolicy>(luawt_getEnum(
        L,
        luawt_enum_WMenuItem_LoadPolicy_str,
        luawt_enum_WMenuItem_LoadPolicy_val,
        4,
        "Wrong enum type in args of WMenu.addItem"
    ));
    Wt::WMenuItem * l_result = self->addItem(label, contents, policy);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 3) {
    char const * raw2 = lua_tostring(L, 2);
    std::string iconPath = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString label = Wt::WString(raw3);
    Wt::WMenuItem * l_result = self->addItem(iconPath, label);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 4) {
    char const * raw2 = lua_tostring(L, 2);
    std::string iconPath = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString label = Wt::WString(raw3);
    Wt::WWidget* contents =
        luawt_checkFromLua<Wt::WWidget>(L, 4);
    Wt::WMenuItem * l_result = self->addItem(iconPath, label, contents);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 5) {
    char const * raw2 = lua_tostring(L, 2);
    std::string iconPath = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString label = Wt::WString(raw3);
    Wt::WWidget* contents =
        luawt_checkFromLua<Wt::WWidget>(L, 4);
    Wt::WMenuItem::LoadPolicy policy = static_cast<Wt::WMenuItem::LoadPolicy>(luawt_getEnum(
        L,
        luawt_enum_WMenuItem_LoadPolicy_str,
        luawt_enum_WMenuItem_LoadPolicy_val,
        5,
        "Wrong enum type in args of WMenu.addItem"
    ));
    Wt::WMenuItem * l_result = self->addItem(iconPath, label, contents, policy);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.addItem");
    }
}

static const char* WMenu_internalPathEnabled_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_internalPathEnabled_args[] = {WMenu_internalPathEnabled_args0, NULL};

int luawt_WMenu_internalPathEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_internalPathEnabled_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    bool l_result = self->internalPathEnabled();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.internalPathEnabled");
    }
}

static const char* WMenu_removeItem_args0[] = {luawt_typeToStr<WMenu>(), luawt_typeToStr<Wt::WMenuItem>(), NULL};
static const char* const* const luawt_WMenu_removeItem_args[] = {WMenu_removeItem_args0, NULL};

int luawt_WMenu_removeItem(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_removeItem_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WMenuItem* item =
        luawt_checkFromLua<Wt::WMenuItem>(L, 2);
    self->removeItem(item);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.removeItem");
    }
}

static const char* WMenu_contentsStack_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_contentsStack_args[] = {WMenu_contentsStack_args0, NULL};

int luawt_WMenu_contentsStack(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_contentsStack_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WStackedWidget * l_result = self->contentsStack();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.contentsStack");
    }
}

static const char* WMenu_count_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_count_args[] = {WMenu_count_args0, NULL};

int luawt_WMenu_count(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_count_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    int l_result = self->count();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.count");
    }
}

static const char* WMenu_itemAt_args0[] = {luawt_typeToStr<WMenu>(), "int", NULL};
static const char* const* const luawt_WMenu_itemAt_args[] = {WMenu_itemAt_args0, NULL};

int luawt_WMenu_itemAt(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_itemAt_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    Wt::WMenuItem * l_result = self->itemAt(index);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.itemAt");
    }
}

static const char* WMenu_setItemDisabled_args0[] = {luawt_typeToStr<WMenu>(), luawt_typeToStr<Wt::WMenuItem>(), "bool", NULL};
static const char* WMenu_setItemDisabled_args1[] = {luawt_typeToStr<WMenu>(), "int", "bool", NULL};
static const char* const* const luawt_WMenu_setItemDisabled_args[] = {WMenu_setItemDisabled_args0, WMenu_setItemDisabled_args1, NULL};

int luawt_WMenu_setItemDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_setItemDisabled_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WMenuItem* item =
        luawt_checkFromLua<Wt::WMenuItem>(L, 2);
    bool disabled = lua_toboolean(L, 3);
    self->setItemDisabled(item, disabled);
    return 0;
    
    } else if (index == 1) {
    int index = lua_tointeger(L, 2);
    bool disabled = lua_toboolean(L, 3);
    self->setItemDisabled(index, disabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.setItemDisabled");
    }
}

static const char* WMenu_renderAsList_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_renderAsList_args[] = {WMenu_renderAsList_args0, NULL};

int luawt_WMenu_renderAsList(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_renderAsList_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    bool l_result = self->renderAsList();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.renderAsList");
    }
}

static const char* WMenu_currentIndex_args0[] = {luawt_typeToStr<WMenu>(), NULL};
static const char* const* const luawt_WMenu_currentIndex_args[] = {WMenu_currentIndex_args0, NULL};

int luawt_WMenu_currentIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_currentIndex_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    int l_result = self->currentIndex();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMenu.currentIndex");
    }
}

static const char* WMenu_setItemHidden_args0[] = {luawt_typeToStr<WMenu>(), luawt_typeToStr<Wt::WMenuItem>(), "bool", NULL};
static const char* WMenu_setItemHidden_args1[] = {luawt_typeToStr<WMenu>(), "int", "bool", NULL};
static const char* const* const luawt_WMenu_setItemHidden_args[] = {WMenu_setItemHidden_args0, WMenu_setItemHidden_args1, NULL};

int luawt_WMenu_setItemHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_setItemHidden_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    Wt::WMenuItem* item =
        luawt_checkFromLua<Wt::WMenuItem>(L, 2);
    bool hidden = lua_toboolean(L, 3);
    self->setItemHidden(item, hidden);
    return 0;
    
    } else if (index == 1) {
    int index = lua_tointeger(L, 2);
    bool hidden = lua_toboolean(L, 3);
    self->setItemHidden(index, hidden);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.setItemHidden");
    }
}

static const char* WMenu_setInternalBasePath_args0[] = {luawt_typeToStr<WMenu>(), "char const *", NULL};
static const char* const* const luawt_WMenu_setInternalBasePath_args[] = {WMenu_setInternalBasePath_args0, NULL};

int luawt_WMenu_setInternalBasePath(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenu_setInternalBasePath_args);
    WMenu* self = luawt_checkFromLua<WMenu>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string basePath = std::string(raw2);
    self->setInternalBasePath(basePath);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMenu.setInternalBasePath");
    }
}


static const luaL_Reg luawt_WMenu_methods[] = {
    METHOD(WMenu, addItem),
    METHOD(WMenu, addItem),
    METHOD(WMenu, addMenu),
    METHOD(WMenu, addMenu),
    METHOD(WMenu, addSeparator),
    METHOD(WMenu, addSectionHeader),
    METHOD(WMenu, removeItem),
    METHOD(WMenu, select),
    METHOD(WMenu, select),
    METHOD(WMenu, close),
    METHOD(WMenu, close),
    METHOD(WMenu, setItemHidden),
    METHOD(WMenu, setItemHidden),
    METHOD(WMenu, isItemHidden),
    METHOD(WMenu, isItemHidden),
    METHOD(WMenu, setItemDisabled),
    METHOD(WMenu, setItemDisabled),
    METHOD(WMenu, isItemDisabled),
    METHOD(WMenu, isItemDisabled),
    METHOD(WMenu, currentItem),
    METHOD(WMenu, currentIndex),
    METHOD(WMenu, orientation),
    METHOD(WMenu, setRenderAsList),
    METHOD(WMenu, renderAsList),
    METHOD(WMenu, setInternalPathEnabled),
    METHOD(WMenu, internalPathEnabled),
    METHOD(WMenu, setInternalBasePath),
    METHOD(WMenu, internalBasePath),
    METHOD(WMenu, contentsStack),
    METHOD(WMenu, count),
    METHOD(WMenu, itemAt),
    METHOD(WMenu, indexOf),
    METHOD(WMenu, parentItem),
    {NULL, NULL},
};

void luawt_WMenu(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WMenu,
        L,
        wrap<luawt_WMenu_make>::func,
        0,
        luawt_WMenu_methods,
        base
    );
}
