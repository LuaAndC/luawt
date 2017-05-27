#include "boost-xtime.hpp"

#include <Wt/WMenuItem>
#include <Wt/WLink>
#include <Wt/WString>
#include <Wt/WWidget>
#include <Wt/WCheckBox>
#include <Wt/WMenu>

#include "enums.hpp"
#include "globals.hpp"

static const char* WMenuItem_make_args0[] = {"char const *", NULL};
static const char* WMenuItem_make_args1[] = {"char const *", luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WMenuItem_make_args2[] = {"char const *", luawt_typeToStr<Wt::WWidget>(), "enum", NULL};
static const char* WMenuItem_make_args3[] = {"char const *", "char const *", NULL};
static const char* WMenuItem_make_args4[] = {"char const *", "char const *", luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WMenuItem_make_args5[] = {"char const *", "char const *", luawt_typeToStr<Wt::WWidget>(), "enum", NULL};
static const char* const* const luawt_WMenuItem_make_args[] = {WMenuItem_make_args0, WMenuItem_make_args1, WMenuItem_make_args2, WMenuItem_make_args3, WMenuItem_make_args4, WMenuItem_make_args5, NULL};

int luawt_WMenuItem_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_make_args);
    if (index == 0) {
        char const* raw1 = lua_tostring(L, 1);
        Wt::WString label = Wt::WString(raw1);
        WMenuItem* l_result = new WMenuItem(label);
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WMenuItem");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 1) {
        char const* raw1 = lua_tostring(L, 1);
        Wt::WString label = Wt::WString(raw1);
        Wt::WWidget* contents =
            luawt_checkFromLua<Wt::WWidget>(L, 2);
        WMenuItem* l_result = new WMenuItem(label, contents);
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WMenuItem");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 2) {
        char const* raw1 = lua_tostring(L, 1);
        Wt::WString label = Wt::WString(raw1);
        Wt::WWidget* contents =
            luawt_checkFromLua<Wt::WWidget>(L, 2);
        Wt::WMenuItem::LoadPolicy policy = static_cast<Wt::WMenuItem::LoadPolicy>(luawt_getEnum(
                    L,
                    luawt_enum_WMenuItem_LoadPolicy_str,
                    luawt_enum_WMenuItem_LoadPolicy_val,
                    3,
                    "Wrong enum type in args of WMenuItem.make"
                ));
        WMenuItem* l_result = new WMenuItem(label, contents, policy);
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WMenuItem");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 3) {
        char const* raw1 = lua_tostring(L, 1);
        std::string iconPath = std::string(raw1);
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString label = Wt::WString(raw2);
        WMenuItem* l_result = new WMenuItem(iconPath, label);
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WMenuItem");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 4) {
        char const* raw1 = lua_tostring(L, 1);
        std::string iconPath = std::string(raw1);
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString label = Wt::WString(raw2);
        Wt::WWidget* contents =
            luawt_checkFromLua<Wt::WWidget>(L, 3);
        WMenuItem* l_result = new WMenuItem(iconPath, label, contents);
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WMenuItem");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 5) {
        char const* raw1 = lua_tostring(L, 1);
        std::string iconPath = std::string(raw1);
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString label = Wt::WString(raw2);
        Wt::WWidget* contents =
            luawt_checkFromLua<Wt::WWidget>(L, 3);
        Wt::WMenuItem::LoadPolicy policy = static_cast<Wt::WMenuItem::LoadPolicy>(luawt_getEnum(
                    L,
                    luawt_enum_WMenuItem_LoadPolicy_str,
                    luawt_enum_WMenuItem_LoadPolicy_val,
                    4,
                    "Wrong enum type in args of WMenuItem.make"
                ));
        WMenuItem* l_result = new WMenuItem(iconPath, label, contents, policy);
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WMenuItem");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.make");
    }
}

static const char* WMenuItem_setChecked_args0[] = {luawt_typeToStr<WMenuItem>(), "bool", NULL};
static const char* const* const luawt_WMenuItem_setChecked_args[] = {WMenuItem_setChecked_args0, NULL};

int luawt_WMenuItem_setChecked(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setChecked_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        bool checked = lua_toboolean(L, 2);
        self->setChecked(checked);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setChecked");
    }
}

static const char* WMenuItem_setMenu_args0[] = {luawt_typeToStr<WMenuItem>(), luawt_typeToStr<Wt::WMenu>(), NULL};
static const char* const* const luawt_WMenuItem_setMenu_args[] = {WMenuItem_setMenu_args0, NULL};

int luawt_WMenuItem_setMenu(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setMenu_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::WMenu* menu =
            luawt_checkFromLua<Wt::WMenu>(L, 2);
        self->setMenu(menu);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setMenu");
    }
}

static const char* WMenuItem_renderSelected_args0[] = {luawt_typeToStr<WMenuItem>(), "bool", NULL};
static const char* const* const luawt_WMenuItem_renderSelected_args[] = {WMenuItem_renderSelected_args0, NULL};

int luawt_WMenuItem_renderSelected(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_renderSelected_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        bool selected = lua_toboolean(L, 2);
        self->renderSelected(selected);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.renderSelected");
    }
}

static const char* WMenuItem_enableAjax_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_enableAjax_args[] = {WMenuItem_enableAjax_args0, NULL};

int luawt_WMenuItem_enableAjax(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_enableAjax_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        self->enableAjax();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.enableAjax");
    }
}

static const char* WMenuItem_isCheckable_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_isCheckable_args[] = {WMenuItem_isCheckable_args0, NULL};

int luawt_WMenuItem_isCheckable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_isCheckable_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        bool l_result = self->isCheckable();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.isCheckable");
    }
}

static const char* WMenuItem_isSelectable_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_isSelectable_args[] = {WMenuItem_isSelectable_args0, NULL};

int luawt_WMenuItem_isSelectable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_isSelectable_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        bool l_result = self->isSelectable();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.isSelectable");
    }
}

static const char* WMenuItem_itemWidget_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_itemWidget_args[] = {WMenuItem_itemWidget_args0, NULL};

int luawt_WMenuItem_itemWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_itemWidget_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::WWidget* l_result = self->itemWidget();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.itemWidget");
    }
}

static const char* WMenuItem_close_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_close_args[] = {WMenuItem_close_args0, NULL};

int luawt_WMenuItem_close(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_close_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        self->close();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.close");
    }
}

static const char* WMenuItem_contents_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_contents_args[] = {WMenuItem_contents_args0, NULL};

int luawt_WMenuItem_contents(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_contents_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::WWidget* l_result = self->contents();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.contents");
    }
}

static const char* WMenuItem_menu_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_menu_args[] = {WMenuItem_menu_args0, NULL};

int luawt_WMenuItem_menu(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_menu_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::WMenu* l_result = self->menu();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.menu");
    }
}

static const char* WMenuItem_setSubMenu_args0[] = {luawt_typeToStr<WMenuItem>(), luawt_typeToStr<Wt::WMenu>(), NULL};
static const char* const* const luawt_WMenuItem_setSubMenu_args[] = {WMenuItem_setSubMenu_args0, NULL};

int luawt_WMenuItem_setSubMenu(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setSubMenu_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::WMenu* menu =
            luawt_checkFromLua<Wt::WMenu>(L, 2);
        self->setSubMenu(menu);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setSubMenu");
    }
}

static const char* WMenuItem_isChecked_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_isChecked_args[] = {WMenuItem_isChecked_args0, NULL};

int luawt_WMenuItem_isChecked(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_isChecked_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        bool l_result = self->isChecked();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.isChecked");
    }
}

static const char* WMenuItem_select_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_select_args[] = {WMenuItem_select_args0, NULL};

int luawt_WMenuItem_select(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_select_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        self->select();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.select");
    }
}

static const char* WMenuItem_text_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_text_args[] = {WMenuItem_text_args0, NULL};

int luawt_WMenuItem_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_text_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::WString const& l_result = self->text();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.text");
    }
}

static const char* WMenuItem_linkTarget_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_linkTarget_args[] = {WMenuItem_linkTarget_args0, NULL};

int luawt_WMenuItem_linkTarget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_linkTarget_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::AnchorTarget l_result = self->linkTarget();
        luawt_returnEnum(L, luawt_enum_AnchorTarget_str, luawt_enum_AnchorTarget_val, l_result, "AnchorTarget");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.linkTarget");
    }
}

static const char* WMenuItem_takeContents_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_takeContents_args[] = {WMenuItem_takeContents_args0, NULL};

int luawt_WMenuItem_takeContents(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_takeContents_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::WWidget* l_result = self->takeContents();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.takeContents");
    }
}

static const char* WMenuItem_setCheckable_args0[] = {luawt_typeToStr<WMenuItem>(), "bool", NULL};
static const char* const* const luawt_WMenuItem_setCheckable_args[] = {WMenuItem_setCheckable_args0, NULL};

int luawt_WMenuItem_setCheckable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setCheckable_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        bool checkable = lua_toboolean(L, 2);
        self->setCheckable(checkable);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setCheckable");
    }
}

static const char* WMenuItem_setSelectable_args0[] = {luawt_typeToStr<WMenuItem>(), "bool", NULL};
static const char* const* const luawt_WMenuItem_setSelectable_args[] = {WMenuItem_setSelectable_args0, NULL};

int luawt_WMenuItem_setSelectable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setSelectable_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        bool selectable = lua_toboolean(L, 2);
        self->setSelectable(selectable);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setSelectable");
    }
}

static const char* WMenuItem_parentMenu_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_parentMenu_args[] = {WMenuItem_parentMenu_args0, NULL};

int luawt_WMenuItem_parentMenu(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_parentMenu_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::WMenu* l_result = self->parentMenu();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.parentMenu");
    }
}

static const char* WMenuItem_isCloseable_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_isCloseable_args[] = {WMenuItem_isCloseable_args0, NULL};

int luawt_WMenuItem_isCloseable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_isCloseable_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        bool l_result = self->isCloseable();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.isCloseable");
    }
}

static const char* WMenuItem_setFromInternalPath_args0[] = {luawt_typeToStr<WMenuItem>(), "char const *", NULL};
static const char* const* const luawt_WMenuItem_setFromInternalPath_args[] = {WMenuItem_setFromInternalPath_args0, NULL};

int luawt_WMenuItem_setFromInternalPath(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setFromInternalPath_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string path = std::string(raw2);
        self->setFromInternalPath(path);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setFromInternalPath");
    }
}

static const char* WMenuItem_link_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_link_args[] = {WMenuItem_link_args0, NULL};

int luawt_WMenuItem_link(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_link_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::WLink l_result = self->link();
        lua_pushstring(L, l_result.url().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.link");
    }
}

static const char* WMenuItem_setCloseable_args0[] = {luawt_typeToStr<WMenuItem>(), "bool", NULL};
static const char* const* const luawt_WMenuItem_setCloseable_args[] = {WMenuItem_setCloseable_args0, NULL};

int luawt_WMenuItem_setCloseable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setCloseable_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        bool closeable = lua_toboolean(L, 2);
        self->setCloseable(closeable);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setCloseable");
    }
}

static const char* WMenuItem_pathComponent_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_pathComponent_args[] = {WMenuItem_pathComponent_args0, NULL};

int luawt_WMenuItem_pathComponent(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_pathComponent_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        std::string l_result = self->pathComponent();
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.pathComponent");
    }
}

static const char* WMenuItem_setLinkTarget_args0[] = {luawt_typeToStr<WMenuItem>(), "enum", NULL};
static const char* const* const luawt_WMenuItem_setLinkTarget_args[] = {WMenuItem_setLinkTarget_args0, NULL};

int luawt_WMenuItem_setLinkTarget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setLinkTarget_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::AnchorTarget target = static_cast<Wt::AnchorTarget>(luawt_getEnum(
                    L,
                    luawt_enum_AnchorTarget_str,
                    luawt_enum_AnchorTarget_val,
                    2,
                    "Wrong enum type in args of WMenuItem.setLinkTarget"
                ));
        self->setLinkTarget(target);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setLinkTarget");
    }
}

static const char* WMenuItem_icon_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_icon_args[] = {WMenuItem_icon_args0, NULL};

int luawt_WMenuItem_icon(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_icon_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        std::string l_result = self->icon();
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.icon");
    }
}

static const char* WMenuItem_checkBox_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_checkBox_args[] = {WMenuItem_checkBox_args0, NULL};

int luawt_WMenuItem_checkBox(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_checkBox_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        Wt::WCheckBox* l_result = self->checkBox();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.checkBox");
    }
}

static const char* WMenuItem_setPathComponent_args0[] = {luawt_typeToStr<WMenuItem>(), "char const *", NULL};
static const char* const* const luawt_WMenuItem_setPathComponent_args[] = {WMenuItem_setPathComponent_args0, NULL};

int luawt_WMenuItem_setPathComponent(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setPathComponent_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string path = std::string(raw2);
        self->setPathComponent(path);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setPathComponent");
    }
}

static const char* WMenuItem_setIcon_args0[] = {luawt_typeToStr<WMenuItem>(), "char const *", NULL};
static const char* const* const luawt_WMenuItem_setIcon_args[] = {WMenuItem_setIcon_args0, NULL};

int luawt_WMenuItem_setIcon(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setIcon_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string path = std::string(raw2);
        self->setIcon(path);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setIcon");
    }
}

static const char* WMenuItem_setText_args0[] = {luawt_typeToStr<WMenuItem>(), "char const *", NULL};
static const char* const* const luawt_WMenuItem_setText_args[] = {WMenuItem_setText_args0, NULL};

int luawt_WMenuItem_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setText_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString text = Wt::WString(raw2);
        self->setText(text);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setText");
    }
}

static const char* WMenuItem_isSectionHeader_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_isSectionHeader_args[] = {WMenuItem_isSectionHeader_args0, NULL};

int luawt_WMenuItem_isSectionHeader(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_isSectionHeader_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        bool l_result = self->isSectionHeader();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.isSectionHeader");
    }
}

static const char* WMenuItem_isSeparator_args0[] = {luawt_typeToStr<WMenuItem>(), NULL};
static const char* const* const luawt_WMenuItem_isSeparator_args[] = {WMenuItem_isSeparator_args0, NULL};

int luawt_WMenuItem_isSeparator(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_isSeparator_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        bool l_result = self->isSeparator();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.isSeparator");
    }
}

static const char* WMenuItem_setLink_args0[] = {luawt_typeToStr<WMenuItem>(), "char const *", NULL};
static const char* const* const luawt_WMenuItem_setLink_args[] = {WMenuItem_setLink_args0, NULL};

int luawt_WMenuItem_setLink(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMenuItem_setLink_args);
    WMenuItem* self = luawt_checkFromLua<WMenuItem>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WLink link = Wt::WLink(raw2);
        self->setLink(link);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WMenuItem.setLink");
    }
}

ADD_SIGNAL(scrolled, WMenuItem, Wt::WScrollEvent)
ADD_SIGNAL(keyWentDown, WMenuItem, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WMenuItem, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WMenuItem, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WMenuItem, Wt::NoClass)
ADD_SIGNAL(escapePressed, WMenuItem, Wt::NoClass)
ADD_SIGNAL(clicked, WMenuItem, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WMenuItem, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WMenuItem, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WMenuItem, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WMenuItem, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WMenuItem, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WMenuItem, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WMenuItem, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WMenuItem, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WMenuItem, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WMenuItem, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WMenuItem, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WMenuItem, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WMenuItem, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WMenuItem, Wt::WGestureEvent)

static const luaL_Reg luawt_WMenuItem_methods[] = {
    METHOD(WMenuItem, setText),
    METHOD(WMenuItem, text),
    METHOD(WMenuItem, setIcon),
    METHOD(WMenuItem, icon),
    METHOD(WMenuItem, setCheckable),
    METHOD(WMenuItem, isCheckable),
    METHOD(WMenuItem, setPathComponent),
    METHOD(WMenuItem, pathComponent),
    METHOD(WMenuItem, setLink),
    METHOD(WMenuItem, link),
    METHOD(WMenuItem, setLinkTarget),
    METHOD(WMenuItem, linkTarget),
    METHOD(WMenuItem, setMenu),
    METHOD(WMenuItem, setSubMenu),
    METHOD(WMenuItem, menu),
    METHOD(WMenuItem, setChecked),
    METHOD(WMenuItem, isChecked),
    METHOD(WMenuItem, setSelectable),
    METHOD(WMenuItem, isSelectable),
    METHOD(WMenuItem, checkBox),
    METHOD(WMenuItem, setCloseable),
    METHOD(WMenuItem, isCloseable),
    METHOD(WMenuItem, close),
    METHOD(WMenuItem, parentMenu),
    METHOD(WMenuItem, contents),
    METHOD(WMenuItem, takeContents),
    METHOD(WMenuItem, itemWidget),
    METHOD(WMenuItem, select),
    METHOD(WMenuItem, isSeparator),
    METHOD(WMenuItem, isSectionHeader),
    METHOD(WMenuItem, renderSelected),
    METHOD(WMenuItem, setFromInternalPath),
    METHOD(WMenuItem, enableAjax),
    METHOD(WMenuItem, scrolled),
    METHOD(WMenuItem, keyWentDown),
    METHOD(WMenuItem, keyPressed),
    METHOD(WMenuItem, keyWentUp),
    METHOD(WMenuItem, enterPressed),
    METHOD(WMenuItem, escapePressed),
    METHOD(WMenuItem, clicked),
    METHOD(WMenuItem, doubleClicked),
    METHOD(WMenuItem, mouseWentDown),
    METHOD(WMenuItem, mouseWentUp),
    METHOD(WMenuItem, mouseWentOut),
    METHOD(WMenuItem, mouseWentOver),
    METHOD(WMenuItem, mouseMoved),
    METHOD(WMenuItem, mouseDragged),
    METHOD(WMenuItem, mouseWheel),
    METHOD(WMenuItem, touchStarted),
    METHOD(WMenuItem, touchEnded),
    METHOD(WMenuItem, touchMoved),
    METHOD(WMenuItem, gestureStarted),
    METHOD(WMenuItem, gestureChanged),
    METHOD(WMenuItem, gestureEnded),
    {NULL, NULL},
};

void luawt_WMenuItem(lua_State* L) {
    const char* base = luawt_typeToStr<WContainerWidget>();
    assert(base);
    DECLARE_CLASS(
        WMenuItem,
        L,
        wrap<luawt_WMenuItem_make>::func,
        0,
        luawt_WMenuItem_methods,
        base
    );
}
