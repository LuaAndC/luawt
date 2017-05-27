#include "boost-xtime.hpp"

#include <Wt/WLength>
#include <Wt/WCompositeWidget>
#include <Wt/WString>
#include <Wt/WWidget>
#include <Wt/WWebWidget>
#include <Wt/WContainerWidget>

#include "enums.hpp"
#include "globals.hpp"

static const char* WCompositeWidget_make_args0[] = {NULL};
static const char* WCompositeWidget_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WCompositeWidget_make_args2[] = {luawt_typeToStr<Wt::WWidget>(), luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_make_args[] = {WCompositeWidget_make_args0, WCompositeWidget_make_args1, WCompositeWidget_make_args2, NULL};

int luawt_WCompositeWidget_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_make_args);
    if (index == 0) {
        WCompositeWidget* l_result = new WCompositeWidget();
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WCompositeWidget");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 1) {
        Wt::WContainerWidget* parent =
            luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
        WCompositeWidget* l_result = new WCompositeWidget(parent);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 2) {
        Wt::WWidget* implementation =
            luawt_checkFromLua<Wt::WWidget>(L, 1);
        Wt::WContainerWidget* parent =
            luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
        WCompositeWidget* l_result = new WCompositeWidget(implementation, parent);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.make");
    }
}

static const char* WCompositeWidget_load_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_load_args[] = {WCompositeWidget_load_args0, NULL};

int luawt_WCompositeWidget_load(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_load_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        self->load();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.load");
    }
}

static const char* WCompositeWidget_doJavaScript_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_doJavaScript_args[] = {WCompositeWidget_doJavaScript_args0, NULL};

int luawt_WCompositeWidget_doJavaScript(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_doJavaScript_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string js = std::string(raw2);
        self->doJavaScript(js);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.doJavaScript");
    }
}

static const char* WCompositeWidget_setMinimumSize_args0[] = {luawt_typeToStr<WCompositeWidget>(), "double", "double", NULL};
static const char* const* const luawt_WCompositeWidget_setMinimumSize_args[] = {WCompositeWidget_setMinimumSize_args0, NULL};

int luawt_WCompositeWidget_setMinimumSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setMinimumSize_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength width = Wt::WLength(raw2);
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength height = Wt::WLength(raw3);
        self->setMinimumSize(width, height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setMinimumSize");
    }
}

static const char* WCompositeWidget_floatSide_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_floatSide_args[] = {WCompositeWidget_floatSide_args0, NULL};

int luawt_WCompositeWidget_floatSide(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_floatSide_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::Side l_result = self->floatSide();
        luawt_returnEnum(L, luawt_enum_Side_str, luawt_enum_Side_val, l_result, "Side");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.floatSide");
    }
}

static const char* WCompositeWidget_webWidget_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_webWidget_args[] = {WCompositeWidget_webWidget_args0, NULL};

int luawt_WCompositeWidget_webWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_webWidget_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WWebWidget* l_result = self->webWidget();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.webWidget");
    }
}

static const char* WCompositeWidget_find_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_find_args[] = {WCompositeWidget_find_args0, NULL};

int luawt_WCompositeWidget_find(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_find_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        Wt::WWidget* l_result = self->find(name);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.find");
    }
}

static const char* WCompositeWidget_height_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_height_args[] = {WCompositeWidget_height_args0, NULL};

int luawt_WCompositeWidget_height(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_height_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->height();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.height");
    }
}

static const char* WCompositeWidget_hiddenKeepsGeometry_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_hiddenKeepsGeometry_args[] = {WCompositeWidget_hiddenKeepsGeometry_args0, NULL};

int luawt_WCompositeWidget_hiddenKeepsGeometry(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_hiddenKeepsGeometry_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->hiddenKeepsGeometry();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.hiddenKeepsGeometry");
    }
}

static const char* WCompositeWidget_minimumHeight_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_minimumHeight_args[] = {WCompositeWidget_minimumHeight_args0, NULL};

int luawt_WCompositeWidget_minimumHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_minimumHeight_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->minimumHeight();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.minimumHeight");
    }
}

static const char* WCompositeWidget_loaded_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_loaded_args[] = {WCompositeWidget_loaded_args0, NULL};

int luawt_WCompositeWidget_loaded(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_loaded_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->loaded();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.loaded");
    }
}

static const char* WCompositeWidget_setMaximumSize_args0[] = {luawt_typeToStr<WCompositeWidget>(), "double", "double", NULL};
static const char* const* const luawt_WCompositeWidget_setMaximumSize_args[] = {WCompositeWidget_setMaximumSize_args0, NULL};

int luawt_WCompositeWidget_setMaximumSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setMaximumSize_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength width = Wt::WLength(raw2);
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength height = Wt::WLength(raw3);
        self->setMaximumSize(width, height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setMaximumSize");
    }
}

static const char* WCompositeWidget_styleClass_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_styleClass_args[] = {WCompositeWidget_styleClass_args0, NULL};

int luawt_WCompositeWidget_styleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_styleClass_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WString l_result = self->styleClass();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.styleClass");
    }
}

static const char* WCompositeWidget_id_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_id_args[] = {WCompositeWidget_id_args0, NULL};

int luawt_WCompositeWidget_id(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_id_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        std::string const l_result = self->id();
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.id");
    }
}

static const char* WCompositeWidget_setTabIndex_args0[] = {luawt_typeToStr<WCompositeWidget>(), "int", NULL};
static const char* const* const luawt_WCompositeWidget_setTabIndex_args[] = {WCompositeWidget_setTabIndex_args0, NULL};

int luawt_WCompositeWidget_setTabIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setTabIndex_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        self->setTabIndex(index);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setTabIndex");
    }
}

static const char* WCompositeWidget_isInline_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_isInline_args[] = {WCompositeWidget_isInline_args0, NULL};

int luawt_WCompositeWidget_isInline(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_isInline_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isInline();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.isInline");
    }
}

static const char* WCompositeWidget_propagateSetEnabled_args0[] = {luawt_typeToStr<WCompositeWidget>(), "bool", NULL};
static const char* const* const luawt_WCompositeWidget_propagateSetEnabled_args[] = {WCompositeWidget_propagateSetEnabled_args0, NULL};

int luawt_WCompositeWidget_propagateSetEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_propagateSetEnabled_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool enabled = lua_toboolean(L, 2);
        self->propagateSetEnabled(enabled);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.propagateSetEnabled");
    }
}

static const char* WCompositeWidget_setClearSides_args0[] = {luawt_typeToStr<WCompositeWidget>(), "enum", NULL};
static const char* const* const luawt_WCompositeWidget_setClearSides_args[] = {WCompositeWidget_setClearSides_args0, NULL};

int luawt_WCompositeWidget_setClearSides(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setClearSides_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WFlags<Wt::Side> sides = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WCompositeWidget.setClearSides"
                ));
        self->setClearSides(sides);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setClearSides");
    }
}

static const char* WCompositeWidget_setOffsets_args0[] = {luawt_typeToStr<WCompositeWidget>(), "double", NULL};
static const char* WCompositeWidget_setOffsets_args1[] = {luawt_typeToStr<WCompositeWidget>(), "double", "enum", NULL};
static const char* const* const luawt_WCompositeWidget_setOffsets_args[] = {WCompositeWidget_setOffsets_args0, WCompositeWidget_setOffsets_args1, NULL};

int luawt_WCompositeWidget_setOffsets(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setOffsets_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength offset = Wt::WLength(raw2);
        self->setOffsets(offset);
        return 0;
    } else if (index == 1) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength offset = Wt::WLength(raw2);
        Wt::WFlags<Wt::Side> sides = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    3,
                    "Wrong enum type in args of WCompositeWidget.setOffsets"
                ));
        self->setOffsets(offset, sides);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setOffsets");
    }
}

static const char* WCompositeWidget_setPopup_args0[] = {luawt_typeToStr<WCompositeWidget>(), "bool", NULL};
static const char* const* const luawt_WCompositeWidget_setPopup_args[] = {WCompositeWidget_setPopup_args0, NULL};

int luawt_WCompositeWidget_setPopup(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setPopup_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool popup = lua_toboolean(L, 2);
        self->setPopup(popup);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setPopup");
    }
}

static const char* WCompositeWidget_setFloatSide_args0[] = {luawt_typeToStr<WCompositeWidget>(), "enum", NULL};
static const char* const* const luawt_WCompositeWidget_setFloatSide_args[] = {WCompositeWidget_setFloatSide_args0, NULL};

int luawt_WCompositeWidget_setFloatSide(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setFloatSide_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::Side s = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WCompositeWidget.setFloatSide"
                ));
        self->setFloatSide(s);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setFloatSide");
    }
}

static const char* WCompositeWidget_width_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_width_args[] = {WCompositeWidget_width_args0, NULL};

int luawt_WCompositeWidget_width(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_width_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->width();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.width");
    }
}

static const char* WCompositeWidget_verticalAlignment_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_verticalAlignment_args[] = {WCompositeWidget_verticalAlignment_args0, NULL};

int luawt_WCompositeWidget_verticalAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_verticalAlignment_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::AlignmentFlag l_result = self->verticalAlignment();
        luawt_returnEnum(L, luawt_enum_AlignmentFlag_str, luawt_enum_AlignmentFlag_val, l_result, "AlignmentFlag");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.verticalAlignment");
    }
}

static const char* WCompositeWidget_resize_args0[] = {luawt_typeToStr<WCompositeWidget>(), "double", "double", NULL};
static const char* const* const luawt_WCompositeWidget_resize_args[] = {WCompositeWidget_resize_args0, NULL};

int luawt_WCompositeWidget_resize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_resize_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength width = Wt::WLength(raw2);
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength height = Wt::WLength(raw3);
        self->resize(width, height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.resize");
    }
}

static const char* WCompositeWidget_positionScheme_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_positionScheme_args[] = {WCompositeWidget_positionScheme_args0, NULL};

int luawt_WCompositeWidget_positionScheme(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_positionScheme_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::PositionScheme l_result = self->positionScheme();
        luawt_returnEnum(L, luawt_enum_PositionScheme_str, luawt_enum_PositionScheme_val, l_result, "PositionScheme");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.positionScheme");
    }
}

static const char* WCompositeWidget_lineHeight_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_lineHeight_args[] = {WCompositeWidget_lineHeight_args0, NULL};

int luawt_WCompositeWidget_lineHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_lineHeight_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->lineHeight();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.lineHeight");
    }
}

static const char* WCompositeWidget_tabIndex_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_tabIndex_args[] = {WCompositeWidget_tabIndex_args0, NULL};

int luawt_WCompositeWidget_tabIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_tabIndex_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        int l_result = self->tabIndex();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.tabIndex");
    }
}

static const char* WCompositeWidget_isHidden_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_isHidden_args[] = {WCompositeWidget_isHidden_args0, NULL};

int luawt_WCompositeWidget_isHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_isHidden_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isHidden();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.isHidden");
    }
}

static const char* WCompositeWidget_setSelectable_args0[] = {luawt_typeToStr<WCompositeWidget>(), "bool", NULL};
static const char* const* const luawt_WCompositeWidget_setSelectable_args[] = {WCompositeWidget_setSelectable_args0, NULL};

int luawt_WCompositeWidget_setSelectable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setSelectable_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool selectable = lua_toboolean(L, 2);
        self->setSelectable(selectable);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setSelectable");
    }
}

static const char* WCompositeWidget_minimumWidth_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_minimumWidth_args[] = {WCompositeWidget_minimumWidth_args0, NULL};

int luawt_WCompositeWidget_minimumWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_minimumWidth_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->minimumWidth();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.minimumWidth");
    }
}

static const char* WCompositeWidget_attributeValue_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_attributeValue_args[] = {WCompositeWidget_attributeValue_args0, NULL};

int luawt_WCompositeWidget_attributeValue(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_attributeValue_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        Wt::WString l_result = self->attributeValue(name);
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.attributeValue");
    }
}

static const char* WCompositeWidget_setPositionScheme_args0[] = {luawt_typeToStr<WCompositeWidget>(), "enum", NULL};
static const char* const* const luawt_WCompositeWidget_setPositionScheme_args[] = {WCompositeWidget_setPositionScheme_args0, NULL};

int luawt_WCompositeWidget_setPositionScheme(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setPositionScheme_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::PositionScheme scheme = static_cast<Wt::PositionScheme>(luawt_getEnum(
                    L,
                    luawt_enum_PositionScheme_str,
                    luawt_enum_PositionScheme_val,
                    2,
                    "Wrong enum type in args of WCompositeWidget.setPositionScheme"
                ));
        self->setPositionScheme(scheme);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setPositionScheme");
    }
}

static const char* WCompositeWidget_maximumHeight_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_maximumHeight_args[] = {WCompositeWidget_maximumHeight_args0, NULL};

int luawt_WCompositeWidget_maximumHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_maximumHeight_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->maximumHeight();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.maximumHeight");
    }
}

static const char* WCompositeWidget_javaScriptMember_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_javaScriptMember_args[] = {WCompositeWidget_javaScriptMember_args0, NULL};

int luawt_WCompositeWidget_javaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_javaScriptMember_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        std::string l_result = self->javaScriptMember(name);
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.javaScriptMember");
    }
}

static const char* WCompositeWidget_verticalAlignmentLength_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_verticalAlignmentLength_args[] = {WCompositeWidget_verticalAlignmentLength_args0, NULL};

int luawt_WCompositeWidget_verticalAlignmentLength(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_verticalAlignmentLength_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->verticalAlignmentLength();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.verticalAlignmentLength");
    }
}

static const char* WCompositeWidget_toolTip_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_toolTip_args[] = {WCompositeWidget_toolTip_args0, NULL};

int luawt_WCompositeWidget_toolTip(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_toolTip_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WString const& l_result = self->toolTip();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.toolTip");
    }
}

static const char* WCompositeWidget_setVerticalAlignment_args0[] = {luawt_typeToStr<WCompositeWidget>(), "enum", NULL};
static const char* WCompositeWidget_setVerticalAlignment_args1[] = {luawt_typeToStr<WCompositeWidget>(), "enum", "double", NULL};
static const char* const* const luawt_WCompositeWidget_setVerticalAlignment_args[] = {WCompositeWidget_setVerticalAlignment_args0, WCompositeWidget_setVerticalAlignment_args1, NULL};

int luawt_WCompositeWidget_setVerticalAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setVerticalAlignment_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(luawt_getEnum(
                    L,
                    luawt_enum_AlignmentFlag_str,
                    luawt_enum_AlignmentFlag_val,
                    2,
                    "Wrong enum type in args of WCompositeWidget.setVerticalAlignment"
                ));
        self->setVerticalAlignment(alignment);
        return 0;
    } else if (index == 1) {
        Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(luawt_getEnum(
                    L,
                    luawt_enum_AlignmentFlag_str,
                    luawt_enum_AlignmentFlag_val,
                    2,
                    "Wrong enum type in args of WCompositeWidget.setVerticalAlignment"
                ));
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength length = Wt::WLength(raw3);
        self->setVerticalAlignment(alignment, length);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setVerticalAlignment");
    }
}

static const char* WCompositeWidget_setMargin_args0[] = {luawt_typeToStr<WCompositeWidget>(), "double", NULL};
static const char* WCompositeWidget_setMargin_args1[] = {luawt_typeToStr<WCompositeWidget>(), "double", "enum", NULL};
static const char* const* const luawt_WCompositeWidget_setMargin_args[] = {WCompositeWidget_setMargin_args0, WCompositeWidget_setMargin_args1, NULL};

int luawt_WCompositeWidget_setMargin(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setMargin_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength margin = Wt::WLength(raw2);
        self->setMargin(margin);
        return 0;
    } else if (index == 1) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength margin = Wt::WLength(raw2);
        Wt::WFlags<Wt::Side> sides = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    3,
                    "Wrong enum type in args of WCompositeWidget.setMargin"
                ));
        self->setMargin(margin, sides);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setMargin");
    }
}

static const char* WCompositeWidget_setInline_args0[] = {luawt_typeToStr<WCompositeWidget>(), "bool", NULL};
static const char* const* const luawt_WCompositeWidget_setInline_args[] = {WCompositeWidget_setInline_args0, NULL};

int luawt_WCompositeWidget_setInline(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setInline_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool isInline = lua_toboolean(L, 2);
        self->setInline(isInline);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setInline");
    }
}

static const char* WCompositeWidget_offset_args0[] = {luawt_typeToStr<WCompositeWidget>(), "enum", NULL};
static const char* const* const luawt_WCompositeWidget_offset_args[] = {WCompositeWidget_offset_args0, NULL};

int luawt_WCompositeWidget_offset(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_offset_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::Side s = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WCompositeWidget.offset"
                ));
        Wt::WLength l_result = self->offset(s);
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.offset");
    }
}

static const char* WCompositeWidget_clearSides_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_clearSides_args[] = {WCompositeWidget_clearSides_args0, NULL};

int luawt_WCompositeWidget_clearSides(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_clearSides_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WFlags<Wt::Side> l_result = self->clearSides();
        luawt_returnEnum(L, luawt_enum_Side_str, luawt_enum_Side_val, l_result, "Side");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.clearSides");
    }
}

static const char* WCompositeWidget_setId_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_setId_args[] = {WCompositeWidget_setId_args0, NULL};

int luawt_WCompositeWidget_setId(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setId_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string id = std::string(raw2);
        self->setId(id);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setId");
    }
}

static const char* WCompositeWidget_setLineHeight_args0[] = {luawt_typeToStr<WCompositeWidget>(), "double", NULL};
static const char* const* const luawt_WCompositeWidget_setLineHeight_args[] = {WCompositeWidget_setLineHeight_args0, NULL};

int luawt_WCompositeWidget_setLineHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setLineHeight_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength height = Wt::WLength(raw2);
        self->setLineHeight(height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setLineHeight");
    }
}

static const char* WCompositeWidget_hasStyleClass_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_hasStyleClass_args[] = {WCompositeWidget_hasStyleClass_args0, NULL};

int luawt_WCompositeWidget_hasStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_hasStyleClass_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        bool l_result = self->hasStyleClass(styleClass);
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.hasStyleClass");
    }
}

static const char* WCompositeWidget_findById_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_findById_args[] = {WCompositeWidget_findById_args0, NULL};

int luawt_WCompositeWidget_findById(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_findById_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        Wt::WWidget* l_result = self->findById(name);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.findById");
    }
}

static const char* WCompositeWidget_maximumWidth_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_maximumWidth_args[] = {WCompositeWidget_maximumWidth_args0, NULL};

int luawt_WCompositeWidget_maximumWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_maximumWidth_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->maximumWidth();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.maximumWidth");
    }
}

static const char* WCompositeWidget_setToolTip_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* WCompositeWidget_setToolTip_args1[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", "enum", NULL};
static const char* const* const luawt_WCompositeWidget_setToolTip_args[] = {WCompositeWidget_setToolTip_args0, WCompositeWidget_setToolTip_args1, NULL};

int luawt_WCompositeWidget_setToolTip(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setToolTip_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString text = Wt::WString(raw2);
        self->setToolTip(text);
        return 0;
    } else if (index == 1) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString text = Wt::WString(raw2);
        Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(luawt_getEnum(
                    L,
                    luawt_enum_TextFormat_str,
                    luawt_enum_TextFormat_val,
                    3,
                    "Wrong enum type in args of WCompositeWidget.setToolTip"
                ));
        self->setToolTip(text, textFormat);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setToolTip");
    }
}

static const char* WCompositeWidget_isPopup_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_isPopup_args[] = {WCompositeWidget_isPopup_args0, NULL};

int luawt_WCompositeWidget_isPopup(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_isPopup_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isPopup();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.isPopup");
    }
}

static const char* WCompositeWidget_setJavaScriptMember_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_setJavaScriptMember_args[] = {WCompositeWidget_setJavaScriptMember_args0, NULL};

int luawt_WCompositeWidget_setJavaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setJavaScriptMember_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        char const* raw3 = lua_tostring(L, 3);
        std::string value = std::string(raw3);
        self->setJavaScriptMember(name, value);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setJavaScriptMember");
    }
}

static const char* WCompositeWidget_removeStyleClass_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* WCompositeWidget_removeStyleClass_args1[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", "bool", NULL};
static const char* const* const luawt_WCompositeWidget_removeStyleClass_args[] = {WCompositeWidget_removeStyleClass_args0, WCompositeWidget_removeStyleClass_args1, NULL};

int luawt_WCompositeWidget_removeStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_removeStyleClass_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        self->removeStyleClass(styleClass);
        return 0;
    } else if (index == 1) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        bool force = lua_toboolean(L, 3);
        self->removeStyleClass(styleClass, force);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.removeStyleClass");
    }
}

static const char* WCompositeWidget_refresh_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_refresh_args[] = {WCompositeWidget_refresh_args0, NULL};

int luawt_WCompositeWidget_refresh(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_refresh_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        self->refresh();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.refresh");
    }
}

static const char* WCompositeWidget_setStyleClass_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_setStyleClass_args[] = {WCompositeWidget_setStyleClass_args0, NULL};

int luawt_WCompositeWidget_setStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setStyleClass_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        self->setStyleClass(styleClass);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setStyleClass");
    }
}

static const char* WCompositeWidget_setDisabled_args0[] = {luawt_typeToStr<WCompositeWidget>(), "bool", NULL};
static const char* const* const luawt_WCompositeWidget_setDisabled_args[] = {WCompositeWidget_setDisabled_args0, NULL};

int luawt_WCompositeWidget_setDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setDisabled_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool disabled = lua_toboolean(L, 2);
        self->setDisabled(disabled);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setDisabled");
    }
}

static const char* WCompositeWidget_setHiddenKeepsGeometry_args0[] = {luawt_typeToStr<WCompositeWidget>(), "bool", NULL};
static const char* const* const luawt_WCompositeWidget_setHiddenKeepsGeometry_args[] = {WCompositeWidget_setHiddenKeepsGeometry_args0, NULL};

int luawt_WCompositeWidget_setHiddenKeepsGeometry(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setHiddenKeepsGeometry_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool enabled = lua_toboolean(L, 2);
        self->setHiddenKeepsGeometry(enabled);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setHiddenKeepsGeometry");
    }
}

static const char* WCompositeWidget_isVisible_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_isVisible_args[] = {WCompositeWidget_isVisible_args0, NULL};

int luawt_WCompositeWidget_isVisible(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_isVisible_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isVisible();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.isVisible");
    }
}

static const char* WCompositeWidget_addStyleClass_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* WCompositeWidget_addStyleClass_args1[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", "bool", NULL};
static const char* const* const luawt_WCompositeWidget_addStyleClass_args[] = {WCompositeWidget_addStyleClass_args0, WCompositeWidget_addStyleClass_args1, NULL};

int luawt_WCompositeWidget_addStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_addStyleClass_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        self->addStyleClass(styleClass);
        return 0;
    } else if (index == 1) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        bool force = lua_toboolean(L, 3);
        self->addStyleClass(styleClass, force);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.addStyleClass");
    }
}

static const char* WCompositeWidget_setAttributeValue_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_setAttributeValue_args[] = {WCompositeWidget_setAttributeValue_args0, NULL};

int luawt_WCompositeWidget_setAttributeValue(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setAttributeValue_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        char const* raw3 = lua_tostring(L, 3);
        Wt::WString value = Wt::WString(raw3);
        self->setAttributeValue(name, value);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setAttributeValue");
    }
}

static const char* WCompositeWidget_callJavaScriptMember_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_callJavaScriptMember_args[] = {WCompositeWidget_callJavaScriptMember_args0, NULL};

int luawt_WCompositeWidget_callJavaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_callJavaScriptMember_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        char const* raw3 = lua_tostring(L, 3);
        std::string args = std::string(raw3);
        self->callJavaScriptMember(name, args);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.callJavaScriptMember");
    }
}

static const char* WCompositeWidget_margin_args0[] = {luawt_typeToStr<WCompositeWidget>(), "enum", NULL};
static const char* const* const luawt_WCompositeWidget_margin_args[] = {WCompositeWidget_margin_args0, NULL};

int luawt_WCompositeWidget_margin(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_margin_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        Wt::Side side = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WCompositeWidget.margin"
                ));
        Wt::WLength l_result = self->margin(side);
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.margin");
    }
}

static const char* WCompositeWidget_isDisabled_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_isDisabled_args[] = {WCompositeWidget_isDisabled_args0, NULL};

int luawt_WCompositeWidget_isDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_isDisabled_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isDisabled();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.isDisabled");
    }
}

static const char* WCompositeWidget_isEnabled_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_isEnabled_args[] = {WCompositeWidget_isEnabled_args0, NULL};

int luawt_WCompositeWidget_isEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_isEnabled_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isEnabled();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.isEnabled");
    }
}

static const luaL_Reg luawt_WCompositeWidget_methods[] = {
    METHOD(WCompositeWidget, id),
    METHOD(WCompositeWidget, setPositionScheme),
    METHOD(WCompositeWidget, positionScheme),
    METHOD(WCompositeWidget, setOffsets),
    METHOD(WCompositeWidget, offset),
    METHOD(WCompositeWidget, resize),
    METHOD(WCompositeWidget, width),
    METHOD(WCompositeWidget, height),
    METHOD(WCompositeWidget, setMinimumSize),
    METHOD(WCompositeWidget, minimumWidth),
    METHOD(WCompositeWidget, minimumHeight),
    METHOD(WCompositeWidget, setMaximumSize),
    METHOD(WCompositeWidget, maximumWidth),
    METHOD(WCompositeWidget, maximumHeight),
    METHOD(WCompositeWidget, setLineHeight),
    METHOD(WCompositeWidget, lineHeight),
    METHOD(WCompositeWidget, setFloatSide),
    METHOD(WCompositeWidget, floatSide),
    METHOD(WCompositeWidget, setClearSides),
    METHOD(WCompositeWidget, clearSides),
    METHOD(WCompositeWidget, setMargin),
    METHOD(WCompositeWidget, margin),
    METHOD(WCompositeWidget, setHiddenKeepsGeometry),
    METHOD(WCompositeWidget, hiddenKeepsGeometry),
    METHOD(WCompositeWidget, isHidden),
    METHOD(WCompositeWidget, isVisible),
    METHOD(WCompositeWidget, setDisabled),
    METHOD(WCompositeWidget, isDisabled),
    METHOD(WCompositeWidget, isEnabled),
    METHOD(WCompositeWidget, setPopup),
    METHOD(WCompositeWidget, isPopup),
    METHOD(WCompositeWidget, setInline),
    METHOD(WCompositeWidget, isInline),
    METHOD(WCompositeWidget, setStyleClass),
    METHOD(WCompositeWidget, styleClass),
    METHOD(WCompositeWidget, addStyleClass),
    METHOD(WCompositeWidget, removeStyleClass),
    METHOD(WCompositeWidget, hasStyleClass),
    METHOD(WCompositeWidget, setVerticalAlignment),
    METHOD(WCompositeWidget, verticalAlignment),
    METHOD(WCompositeWidget, verticalAlignmentLength),
    METHOD(WCompositeWidget, webWidget),
    METHOD(WCompositeWidget, setToolTip),
    METHOD(WCompositeWidget, toolTip),
    METHOD(WCompositeWidget, refresh),
    METHOD(WCompositeWidget, setAttributeValue),
    METHOD(WCompositeWidget, attributeValue),
    METHOD(WCompositeWidget, setJavaScriptMember),
    METHOD(WCompositeWidget, javaScriptMember),
    METHOD(WCompositeWidget, callJavaScriptMember),
    METHOD(WCompositeWidget, load),
    METHOD(WCompositeWidget, loaded),
    METHOD(WCompositeWidget, setTabIndex),
    METHOD(WCompositeWidget, tabIndex),
    METHOD(WCompositeWidget, setId),
    METHOD(WCompositeWidget, find),
    METHOD(WCompositeWidget, findById),
    METHOD(WCompositeWidget, setSelectable),
    METHOD(WCompositeWidget, doJavaScript),
    METHOD(WCompositeWidget, propagateSetEnabled),
    {NULL, NULL},
};

void luawt_WCompositeWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WWidget>();
    assert(base);
    DECLARE_CLASS(
        WCompositeWidget,
        L,
        wrap<luawt_WCompositeWidget_make>::func,
        0,
        luawt_WCompositeWidget_methods,
        base
    );
}
