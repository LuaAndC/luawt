#include "boost-xtime.hpp"

#include <Wt/WMenuItem>
#include <Wt/WTabWidget>
#include <Wt/WString>
#include <Wt/WWidget>
#include <Wt/WStackedWidget>
#include <Wt/WContainerWidget>

#include "enums.hpp"
#include "globals.hpp"

static const char* WTabWidget_make_args0[] = {NULL};
static const char* WTabWidget_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WTabWidget_make_args[] = {WTabWidget_make_args0, WTabWidget_make_args1, NULL};

int luawt_WTabWidget_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_make_args);
    if (index == 0) {
        WTabWidget* l_result = new WTabWidget();
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WTabWidget");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 1) {
        Wt::WContainerWidget* parent =
            luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
        WTabWidget* l_result = new WTabWidget(parent);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.make");
    }
}

static const char* WTabWidget_tabToolTip_args0[] = {luawt_typeToStr<WTabWidget>(), "int", NULL};
static const char* const* const luawt_WTabWidget_tabToolTip_args[] = {WTabWidget_tabToolTip_args0, NULL};

int luawt_WTabWidget_tabToolTip(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_tabToolTip_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        Wt::WString const& l_result = self->tabToolTip(index);
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.tabToolTip");
    }
}

static const char* WTabWidget_isTabEnabled_args0[] = {luawt_typeToStr<WTabWidget>(), "int", NULL};
static const char* const* const luawt_WTabWidget_isTabEnabled_args[] = {WTabWidget_isTabEnabled_args0, NULL};

int luawt_WTabWidget_isTabEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_isTabEnabled_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        bool l_result = self->isTabEnabled(index);
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.isTabEnabled");
    }
}

static const char* WTabWidget_internalBasePath_args0[] = {luawt_typeToStr<WTabWidget>(), NULL};
static const char* const* const luawt_WTabWidget_internalBasePath_args[] = {WTabWidget_internalBasePath_args0, NULL};

int luawt_WTabWidget_internalBasePath(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_internalBasePath_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        std::string const& l_result = self->internalBasePath();
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.internalBasePath");
    }
}

static const char* WTabWidget_setCurrentIndex_args0[] = {luawt_typeToStr<WTabWidget>(), "int", NULL};
static const char* const* const luawt_WTabWidget_setCurrentIndex_args[] = {WTabWidget_setCurrentIndex_args0, NULL};

int luawt_WTabWidget_setCurrentIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_setCurrentIndex_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        self->setCurrentIndex(index);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.setCurrentIndex");
    }
}

static const char* WTabWidget_currentWidget_args0[] = {luawt_typeToStr<WTabWidget>(), NULL};
static const char* const* const luawt_WTabWidget_currentWidget_args[] = {WTabWidget_currentWidget_args0, NULL};

int luawt_WTabWidget_currentWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_currentWidget_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        Wt::WWidget* l_result = self->currentWidget();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.currentWidget");
    }
}

static const char* WTabWidget_setCurrentWidget_args0[] = {luawt_typeToStr<WTabWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WTabWidget_setCurrentWidget_args[] = {WTabWidget_setCurrentWidget_args0, NULL};

int luawt_WTabWidget_setCurrentWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_setCurrentWidget_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        Wt::WWidget* widget =
            luawt_checkFromLua<Wt::WWidget>(L, 2);
        self->setCurrentWidget(widget);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.setCurrentWidget");
    }
}

static const char* WTabWidget_setInternalPathEnabled_args0[] = {luawt_typeToStr<WTabWidget>(), NULL};
static const char* WTabWidget_setInternalPathEnabled_args1[] = {luawt_typeToStr<WTabWidget>(), "char const *", NULL};
static const char* const* const luawt_WTabWidget_setInternalPathEnabled_args[] = {WTabWidget_setInternalPathEnabled_args0, WTabWidget_setInternalPathEnabled_args1, NULL};

int luawt_WTabWidget_setInternalPathEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_setInternalPathEnabled_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        self->setInternalPathEnabled();
        return 0;
    } else if (index == 1) {
        char const* raw2 = lua_tostring(L, 2);
        std::string basePath = std::string(raw2);
        self->setInternalPathEnabled(basePath);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.setInternalPathEnabled");
    }
}

static const char* WTabWidget_closeTab_args0[] = {luawt_typeToStr<WTabWidget>(), "int", NULL};
static const char* const* const luawt_WTabWidget_closeTab_args[] = {WTabWidget_closeTab_args0, NULL};

int luawt_WTabWidget_closeTab(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_closeTab_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        self->closeTab(index);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.closeTab");
    }
}

static const char* WTabWidget_isTabCloseable_args0[] = {luawt_typeToStr<WTabWidget>(), "int", NULL};
static const char* const* const luawt_WTabWidget_isTabCloseable_args[] = {WTabWidget_isTabCloseable_args0, NULL};

int luawt_WTabWidget_isTabCloseable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_isTabCloseable_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        bool l_result = self->isTabCloseable(index);
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.isTabCloseable");
    }
}

static const char* WTabWidget_widget_args0[] = {luawt_typeToStr<WTabWidget>(), "int", NULL};
static const char* const* const luawt_WTabWidget_widget_args[] = {WTabWidget_widget_args0, NULL};

int luawt_WTabWidget_widget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_widget_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        Wt::WWidget* l_result = self->widget(index);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.widget");
    }
}

static const char* WTabWidget_removeTab_args0[] = {luawt_typeToStr<WTabWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WTabWidget_removeTab_args[] = {WTabWidget_removeTab_args0, NULL};

int luawt_WTabWidget_removeTab(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_removeTab_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        Wt::WWidget* widget =
            luawt_checkFromLua<Wt::WWidget>(L, 2);
        self->removeTab(widget);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.removeTab");
    }
}

static const char* WTabWidget_indexOf_args0[] = {luawt_typeToStr<WTabWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WTabWidget_indexOf_args[] = {WTabWidget_indexOf_args0, NULL};

int luawt_WTabWidget_indexOf(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_indexOf_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        Wt::WWidget* widget =
            luawt_checkFromLua<Wt::WWidget>(L, 2);
        int l_result = self->indexOf(widget);
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.indexOf");
    }
}

static const char* WTabWidget_internalPathEnabled_args0[] = {luawt_typeToStr<WTabWidget>(), NULL};
static const char* const* const luawt_WTabWidget_internalPathEnabled_args[] = {WTabWidget_internalPathEnabled_args0, NULL};

int luawt_WTabWidget_internalPathEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_internalPathEnabled_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->internalPathEnabled();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.internalPathEnabled");
    }
}

static const char* WTabWidget_tabText_args0[] = {luawt_typeToStr<WTabWidget>(), "int", NULL};
static const char* const* const luawt_WTabWidget_tabText_args[] = {WTabWidget_tabText_args0, NULL};

int luawt_WTabWidget_tabText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_tabText_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        Wt::WString const& l_result = self->tabText(index);
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.tabText");
    }
}

static const char* WTabWidget_addTab_args0[] = {luawt_typeToStr<WTabWidget>(), luawt_typeToStr<Wt::WWidget>(), "char const *", NULL};
static const char* WTabWidget_addTab_args1[] = {luawt_typeToStr<WTabWidget>(), luawt_typeToStr<Wt::WWidget>(), "char const *", "enum", NULL};
static const char* const* const luawt_WTabWidget_addTab_args[] = {WTabWidget_addTab_args0, WTabWidget_addTab_args1, NULL};

int luawt_WTabWidget_addTab(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_addTab_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        Wt::WWidget* child =
            luawt_checkFromLua<Wt::WWidget>(L, 2);
        char const* raw3 = lua_tostring(L, 3);
        Wt::WString label = Wt::WString(raw3);
        Wt::WMenuItem* l_result = self->addTab(child, label);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 1) {
        Wt::WWidget* child =
            luawt_checkFromLua<Wt::WWidget>(L, 2);
        char const* raw3 = lua_tostring(L, 3);
        Wt::WString label = Wt::WString(raw3);
        Wt::WTabWidget::LoadPolicy arg2 = static_cast<Wt::WTabWidget::LoadPolicy>(luawt_getEnum(
                    L,
                    luawt_enum_WTabWidget_LoadPolicy_str,
                    luawt_enum_WTabWidget_LoadPolicy_val,
                    4,
                    "Wrong enum type in args of WTabWidget.addTab"
                ));
        Wt::WMenuItem* l_result = self->addTab(child, label, arg2);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.addTab");
    }
}

static const char* WTabWidget_setTabHidden_args0[] = {luawt_typeToStr<WTabWidget>(), "int", "bool", NULL};
static const char* const* const luawt_WTabWidget_setTabHidden_args[] = {WTabWidget_setTabHidden_args0, NULL};

int luawt_WTabWidget_setTabHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_setTabHidden_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        bool hidden = lua_toboolean(L, 3);
        self->setTabHidden(index, hidden);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.setTabHidden");
    }
}

static const char* WTabWidget_contentsStack_args0[] = {luawt_typeToStr<WTabWidget>(), NULL};
static const char* const* const luawt_WTabWidget_contentsStack_args[] = {WTabWidget_contentsStack_args0, NULL};

int luawt_WTabWidget_contentsStack(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_contentsStack_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        Wt::WStackedWidget* l_result = self->contentsStack();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.contentsStack");
    }
}

static const char* WTabWidget_count_args0[] = {luawt_typeToStr<WTabWidget>(), NULL};
static const char* const* const luawt_WTabWidget_count_args[] = {WTabWidget_count_args0, NULL};

int luawt_WTabWidget_count(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_count_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int l_result = self->count();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.count");
    }
}

static const char* WTabWidget_setTabText_args0[] = {luawt_typeToStr<WTabWidget>(), "int", "char const *", NULL};
static const char* const* const luawt_WTabWidget_setTabText_args[] = {WTabWidget_setTabText_args0, NULL};

int luawt_WTabWidget_setTabText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_setTabText_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        char const* raw3 = lua_tostring(L, 3);
        Wt::WString label = Wt::WString(raw3);
        self->setTabText(index, label);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.setTabText");
    }
}

static const char* WTabWidget_setTabToolTip_args0[] = {luawt_typeToStr<WTabWidget>(), "int", "char const *", NULL};
static const char* const* const luawt_WTabWidget_setTabToolTip_args[] = {WTabWidget_setTabToolTip_args0, NULL};

int luawt_WTabWidget_setTabToolTip(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_setTabToolTip_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        char const* raw3 = lua_tostring(L, 3);
        Wt::WString tip = Wt::WString(raw3);
        self->setTabToolTip(index, tip);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.setTabToolTip");
    }
}

static const char* WTabWidget_setInternalBasePath_args0[] = {luawt_typeToStr<WTabWidget>(), "char const *", NULL};
static const char* const* const luawt_WTabWidget_setInternalBasePath_args[] = {WTabWidget_setInternalBasePath_args0, NULL};

int luawt_WTabWidget_setInternalBasePath(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_setInternalBasePath_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string path = std::string(raw2);
        self->setInternalBasePath(path);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.setInternalBasePath");
    }
}

static const char* WTabWidget_setTabEnabled_args0[] = {luawt_typeToStr<WTabWidget>(), "int", "bool", NULL};
static const char* const* const luawt_WTabWidget_setTabEnabled_args[] = {WTabWidget_setTabEnabled_args0, NULL};

int luawt_WTabWidget_setTabEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_setTabEnabled_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        bool enable = lua_toboolean(L, 3);
        self->setTabEnabled(index, enable);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.setTabEnabled");
    }
}

static const char* WTabWidget_currentIndex_args0[] = {luawt_typeToStr<WTabWidget>(), NULL};
static const char* const* const luawt_WTabWidget_currentIndex_args[] = {WTabWidget_currentIndex_args0, NULL};

int luawt_WTabWidget_currentIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_currentIndex_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int l_result = self->currentIndex();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.currentIndex");
    }
}

static const char* WTabWidget_isTabHidden_args0[] = {luawt_typeToStr<WTabWidget>(), "int", NULL};
static const char* const* const luawt_WTabWidget_isTabHidden_args[] = {WTabWidget_isTabHidden_args0, NULL};

int luawt_WTabWidget_isTabHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_isTabHidden_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        bool l_result = self->isTabHidden(index);
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.isTabHidden");
    }
}

static const char* WTabWidget_setTabCloseable_args0[] = {luawt_typeToStr<WTabWidget>(), "int", "bool", NULL};
static const char* const* const luawt_WTabWidget_setTabCloseable_args[] = {WTabWidget_setTabCloseable_args0, NULL};

int luawt_WTabWidget_setTabCloseable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTabWidget_setTabCloseable_args);
    WTabWidget* self = luawt_checkFromLua<WTabWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        bool closeable = lua_toboolean(L, 3);
        self->setTabCloseable(index, closeable);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTabWidget.setTabCloseable");
    }
}

static const luaL_Reg luawt_WTabWidget_methods[] = {
    METHOD(WTabWidget, addTab),
    METHOD(WTabWidget, removeTab),
    METHOD(WTabWidget, count),
    METHOD(WTabWidget, widget),
    METHOD(WTabWidget, indexOf),
    METHOD(WTabWidget, setCurrentIndex),
    METHOD(WTabWidget, currentIndex),
    METHOD(WTabWidget, setCurrentWidget),
    METHOD(WTabWidget, currentWidget),
    METHOD(WTabWidget, setTabEnabled),
    METHOD(WTabWidget, isTabEnabled),
    METHOD(WTabWidget, setTabHidden),
    METHOD(WTabWidget, isTabHidden),
    METHOD(WTabWidget, setTabCloseable),
    METHOD(WTabWidget, isTabCloseable),
    METHOD(WTabWidget, setTabText),
    METHOD(WTabWidget, tabText),
    METHOD(WTabWidget, setTabToolTip),
    METHOD(WTabWidget, tabToolTip),
    METHOD(WTabWidget, setInternalPathEnabled),
    METHOD(WTabWidget, internalPathEnabled),
    METHOD(WTabWidget, setInternalBasePath),
    METHOD(WTabWidget, internalBasePath),
    METHOD(WTabWidget, closeTab),
    METHOD(WTabWidget, contentsStack),
    {NULL, NULL},
};

void luawt_WTabWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WTabWidget,
        L,
        wrap<luawt_WTabWidget_make>::func,
        0,
        luawt_WTabWidget_methods,
        base
    );
}
