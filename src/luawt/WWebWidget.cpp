#include "boost-xtime.hpp"

#include <Wt/WLength>
#include <Wt/WWebWidget>
#include <Wt/WWidget>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

static const char* WWebWidget_load_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_load_args[] = {WWebWidget_load_args0, NULL};

int luawt_WWebWidget_load(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_load_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        self->load();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.load");
    }
}

static const char* WWebWidget_setZIndex_args0[] = {luawt_typeToStr<WWebWidget>(), "int", NULL};
static const char* const* const luawt_WWebWidget_setZIndex_args[] = {WWebWidget_setZIndex_args0, NULL};

int luawt_WWebWidget_setZIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setZIndex_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        int zIndex = lua_tointeger(L, 2);
        self->setZIndex(zIndex);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setZIndex");
    }
}

static const char* WWebWidget_doJavaScript_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* const* const luawt_WWebWidget_doJavaScript_args[] = {WWebWidget_doJavaScript_args0, NULL};

int luawt_WWebWidget_doJavaScript(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_doJavaScript_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string javascript = std::string(raw2);
        self->doJavaScript(javascript);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.doJavaScript");
    }
}

static const char* WWebWidget_setFormObject_args0[] = {luawt_typeToStr<WWebWidget>(), "bool", NULL};
static const char* const* const luawt_WWebWidget_setFormObject_args[] = {WWebWidget_setFormObject_args0, NULL};

int luawt_WWebWidget_setFormObject(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setFormObject_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool how = lua_toboolean(L, 2);
        self->setFormObject(how);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setFormObject");
    }
}

static const char* WWebWidget_setMinimumSize_args0[] = {luawt_typeToStr<WWebWidget>(), "double", "double", NULL};
static const char* const* const luawt_WWebWidget_setMinimumSize_args[] = {WWebWidget_setMinimumSize_args0, NULL};

int luawt_WWebWidget_setMinimumSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setMinimumSize_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength width = Wt::WLength(raw2);
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength height = Wt::WLength(raw3);
        self->setMinimumSize(width, height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setMinimumSize");
    }
}

static const char* WWebWidget_floatSide_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_floatSide_args[] = {WWebWidget_floatSide_args0, NULL};

int luawt_WWebWidget_floatSide(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_floatSide_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::Side l_result = self->floatSide();
        luawt_returnEnum(L, luawt_enum_Side_str, luawt_enum_Side_val, l_result, "Side");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.floatSide");
    }
}

static const char* WWebWidget_resolveRelativeUrl_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* const* const luawt_WWebWidget_resolveRelativeUrl_args[] = {WWebWidget_resolveRelativeUrl_args0, NULL};

int luawt_WWebWidget_resolveRelativeUrl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_resolveRelativeUrl_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string url = std::string(raw2);
        std::string l_result = self->resolveRelativeUrl(url);
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.resolveRelativeUrl");
    }
}

static const char* WWebWidget_height_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_height_args[] = {WWebWidget_height_args0, NULL};

int luawt_WWebWidget_height(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_height_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->height();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.height");
    }
}

static const char* WWebWidget_hiddenKeepsGeometry_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_hiddenKeepsGeometry_args[] = {WWebWidget_hiddenKeepsGeometry_args0, NULL};

int luawt_WWebWidget_hiddenKeepsGeometry(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_hiddenKeepsGeometry_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->hiddenKeepsGeometry();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.hiddenKeepsGeometry");
    }
}

static const char* WWebWidget_minimumHeight_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_minimumHeight_args[] = {WWebWidget_minimumHeight_args0, NULL};

int luawt_WWebWidget_minimumHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_minimumHeight_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->minimumHeight();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.minimumHeight");
    }
}

static const char* WWebWidget_loaded_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_loaded_args[] = {WWebWidget_loaded_args0, NULL};

int luawt_WWebWidget_loaded(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_loaded_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->loaded();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.loaded");
    }
}

static const char* WWebWidget_setMaximumSize_args0[] = {luawt_typeToStr<WWebWidget>(), "double", "double", NULL};
static const char* const* const luawt_WWebWidget_setMaximumSize_args[] = {WWebWidget_setMaximumSize_args0, NULL};

int luawt_WWebWidget_setMaximumSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setMaximumSize_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength width = Wt::WLength(raw2);
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength height = Wt::WLength(raw3);
        self->setMaximumSize(width, height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setMaximumSize");
    }
}

static const char* WWebWidget_styleClass_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_styleClass_args[] = {WWebWidget_styleClass_args0, NULL};

int luawt_WWebWidget_styleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_styleClass_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WString l_result = self->styleClass();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.styleClass");
    }
}

static const char* WWebWidget_find_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* const* const luawt_WWebWidget_find_args[] = {WWebWidget_find_args0, NULL};

int luawt_WWebWidget_find(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_find_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        Wt::WWidget* l_result = self->find(name);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.find");
    }
}

static const char* WWebWidget_setTabIndex_args0[] = {luawt_typeToStr<WWebWidget>(), "int", NULL};
static const char* const* const luawt_WWebWidget_setTabIndex_args[] = {WWebWidget_setTabIndex_args0, NULL};

int luawt_WWebWidget_setTabIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setTabIndex_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        self->setTabIndex(index);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setTabIndex");
    }
}

static const char* WWebWidget_isInline_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_isInline_args[] = {WWebWidget_isInline_args0, NULL};

int luawt_WWebWidget_isInline(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_isInline_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isInline();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.isInline");
    }
}

static const char* WWebWidget_canOptimizeUpdates_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_canOptimizeUpdates_args[] = {WWebWidget_canOptimizeUpdates_args0, NULL};

int luawt_WWebWidget_canOptimizeUpdates(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_canOptimizeUpdates_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->canOptimizeUpdates();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.canOptimizeUpdates");
    }
}

static const char* WWebWidget_setClearSides_args0[] = {luawt_typeToStr<WWebWidget>(), "enum", NULL};
static const char* const* const luawt_WWebWidget_setClearSides_args[] = {WWebWidget_setClearSides_args0, NULL};

int luawt_WWebWidget_setClearSides(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setClearSides_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WFlags<Wt::Side> sides = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WWebWidget.setClearSides"
                ));
        self->setClearSides(sides);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setClearSides");
    }
}

static const char* WWebWidget_isRendered_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_isRendered_args[] = {WWebWidget_isRendered_args0, NULL};

int luawt_WWebWidget_isRendered(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_isRendered_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isRendered();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.isRendered");
    }
}

static const char* WWebWidget_setOffsets_args0[] = {luawt_typeToStr<WWebWidget>(), "double", NULL};
static const char* WWebWidget_setOffsets_args1[] = {luawt_typeToStr<WWebWidget>(), "double", "enum", NULL};
static const char* const* const luawt_WWebWidget_setOffsets_args[] = {WWebWidget_setOffsets_args0, WWebWidget_setOffsets_args1, NULL};

int luawt_WWebWidget_setOffsets(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setOffsets_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
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
                    "Wrong enum type in args of WWebWidget.setOffsets"
                ));
        self->setOffsets(offset, sides);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setOffsets");
    }
}

static const char* WWebWidget_setPopup_args0[] = {luawt_typeToStr<WWebWidget>(), "bool", NULL};
static const char* const* const luawt_WWebWidget_setPopup_args[] = {WWebWidget_setPopup_args0, NULL};

int luawt_WWebWidget_setPopup(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setPopup_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool popup = lua_toboolean(L, 2);
        self->setPopup(popup);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setPopup");
    }
}

static const char* WWebWidget_setFloatSide_args0[] = {luawt_typeToStr<WWebWidget>(), "enum", NULL};
static const char* const* const luawt_WWebWidget_setFloatSide_args[] = {WWebWidget_setFloatSide_args0, NULL};

int luawt_WWebWidget_setFloatSide(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setFloatSide_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::Side s = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WWebWidget.setFloatSide"
                ));
        self->setFloatSide(s);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setFloatSide");
    }
}

static const char* WWebWidget_width_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_width_args[] = {WWebWidget_width_args0, NULL};

int luawt_WWebWidget_width(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_width_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->width();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.width");
    }
}

static const char* WWebWidget_verticalAlignment_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_verticalAlignment_args[] = {WWebWidget_verticalAlignment_args0, NULL};

int luawt_WWebWidget_verticalAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_verticalAlignment_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::AlignmentFlag l_result = self->verticalAlignment();
        luawt_returnEnum(L, luawt_enum_AlignmentFlag_str, luawt_enum_AlignmentFlag_val, l_result, "AlignmentFlag");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.verticalAlignment");
    }
}

static const char* WWebWidget_resize_args0[] = {luawt_typeToStr<WWebWidget>(), "double", "double", NULL};
static const char* const* const luawt_WWebWidget_resize_args[] = {WWebWidget_resize_args0, NULL};

int luawt_WWebWidget_resize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_resize_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength width = Wt::WLength(raw2);
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength height = Wt::WLength(raw3);
        self->resize(width, height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.resize");
    }
}

static const char* WWebWidget_positionScheme_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_positionScheme_args[] = {WWebWidget_positionScheme_args0, NULL};

int luawt_WWebWidget_positionScheme(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_positionScheme_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::PositionScheme l_result = self->positionScheme();
        luawt_returnEnum(L, luawt_enum_PositionScheme_str, luawt_enum_PositionScheme_val, l_result, "PositionScheme");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.positionScheme");
    }
}

static const char* WWebWidget_lineHeight_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_lineHeight_args[] = {WWebWidget_lineHeight_args0, NULL};

int luawt_WWebWidget_lineHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_lineHeight_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->lineHeight();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.lineHeight");
    }
}

static const char* WWebWidget_id_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_id_args[] = {WWebWidget_id_args0, NULL};

int luawt_WWebWidget_id(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_id_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        std::string const l_result = self->id();
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.id");
    }
}

static const char* WWebWidget_tabIndex_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_tabIndex_args[] = {WWebWidget_tabIndex_args0, NULL};

int luawt_WWebWidget_tabIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_tabIndex_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        int l_result = self->tabIndex();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.tabIndex");
    }
}

static const char* WWebWidget_isHidden_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_isHidden_args[] = {WWebWidget_isHidden_args0, NULL};

int luawt_WWebWidget_isHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_isHidden_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isHidden();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.isHidden");
    }
}

static const char* WWebWidget_setSelectable_args0[] = {luawt_typeToStr<WWebWidget>(), "bool", NULL};
static const char* const* const luawt_WWebWidget_setSelectable_args[] = {WWebWidget_setSelectable_args0, NULL};

int luawt_WWebWidget_setSelectable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setSelectable_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool selectable = lua_toboolean(L, 2);
        self->setSelectable(selectable);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setSelectable");
    }
}

static const char* WWebWidget_minimumWidth_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_minimumWidth_args[] = {WWebWidget_minimumWidth_args0, NULL};

int luawt_WWebWidget_minimumWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_minimumWidth_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->minimumWidth();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.minimumWidth");
    }
}

static const char* WWebWidget_attributeValue_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* const* const luawt_WWebWidget_attributeValue_args[] = {WWebWidget_attributeValue_args0, NULL};

int luawt_WWebWidget_attributeValue(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_attributeValue_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        Wt::WString l_result = self->attributeValue(name);
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.attributeValue");
    }
}

static const char* WWebWidget_domElementType_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_domElementType_args[] = {WWebWidget_domElementType_args0, NULL};

int luawt_WWebWidget_domElementType(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_domElementType_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::DomElementType l_result = self->domElementType();
        luawt_returnEnum(L, luawt_enum_DomElementType_str, luawt_enum_DomElementType_val, l_result, "DomElementType");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.domElementType");
    }
}

static const char* WWebWidget_setPositionScheme_args0[] = {luawt_typeToStr<WWebWidget>(), "enum", NULL};
static const char* const* const luawt_WWebWidget_setPositionScheme_args[] = {WWebWidget_setPositionScheme_args0, NULL};

int luawt_WWebWidget_setPositionScheme(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setPositionScheme_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::PositionScheme scheme = static_cast<Wt::PositionScheme>(luawt_getEnum(
                    L,
                    luawt_enum_PositionScheme_str,
                    luawt_enum_PositionScheme_val,
                    2,
                    "Wrong enum type in args of WWebWidget.setPositionScheme"
                ));
        self->setPositionScheme(scheme);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setPositionScheme");
    }
}

static const char* WWebWidget_maximumHeight_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_maximumHeight_args[] = {WWebWidget_maximumHeight_args0, NULL};

int luawt_WWebWidget_maximumHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_maximumHeight_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->maximumHeight();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.maximumHeight");
    }
}

static const char* WWebWidget_javaScriptMember_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* const* const luawt_WWebWidget_javaScriptMember_args[] = {WWebWidget_javaScriptMember_args0, NULL};

int luawt_WWebWidget_javaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_javaScriptMember_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        std::string l_result = self->javaScriptMember(name);
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.javaScriptMember");
    }
}

static const char* WWebWidget_verticalAlignmentLength_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_verticalAlignmentLength_args[] = {WWebWidget_verticalAlignmentLength_args0, NULL};

int luawt_WWebWidget_verticalAlignmentLength(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_verticalAlignmentLength_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->verticalAlignmentLength();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.verticalAlignmentLength");
    }
}

static const char* WWebWidget_toolTip_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_toolTip_args[] = {WWebWidget_toolTip_args0, NULL};

int luawt_WWebWidget_toolTip(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_toolTip_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WString const& l_result = self->toolTip();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.toolTip");
    }
}

static const char* WWebWidget_zIndex_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_zIndex_args[] = {WWebWidget_zIndex_args0, NULL};

int luawt_WWebWidget_zIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_zIndex_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        int l_result = self->zIndex();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.zIndex");
    }
}

static const char* WWebWidget_setVerticalAlignment_args0[] = {luawt_typeToStr<WWebWidget>(), "enum", NULL};
static const char* WWebWidget_setVerticalAlignment_args1[] = {luawt_typeToStr<WWebWidget>(), "enum", "double", NULL};
static const char* const* const luawt_WWebWidget_setVerticalAlignment_args[] = {WWebWidget_setVerticalAlignment_args0, WWebWidget_setVerticalAlignment_args1, NULL};

int luawt_WWebWidget_setVerticalAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setVerticalAlignment_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(luawt_getEnum(
                    L,
                    luawt_enum_AlignmentFlag_str,
                    luawt_enum_AlignmentFlag_val,
                    2,
                    "Wrong enum type in args of WWebWidget.setVerticalAlignment"
                ));
        self->setVerticalAlignment(alignment);
        return 0;
    } else if (index == 1) {
        Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(luawt_getEnum(
                    L,
                    luawt_enum_AlignmentFlag_str,
                    luawt_enum_AlignmentFlag_val,
                    2,
                    "Wrong enum type in args of WWebWidget.setVerticalAlignment"
                ));
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength length = Wt::WLength(raw3);
        self->setVerticalAlignment(alignment, length);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setVerticalAlignment");
    }
}

static const char* WWebWidget_setMargin_args0[] = {luawt_typeToStr<WWebWidget>(), "double", NULL};
static const char* WWebWidget_setMargin_args1[] = {luawt_typeToStr<WWebWidget>(), "double", "enum", NULL};
static const char* const* const luawt_WWebWidget_setMargin_args[] = {WWebWidget_setMargin_args0, WWebWidget_setMargin_args1, NULL};

int luawt_WWebWidget_setMargin(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setMargin_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
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
                    "Wrong enum type in args of WWebWidget.setMargin"
                ));
        self->setMargin(margin, sides);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setMargin");
    }
}

static const char* WWebWidget_setLoadLaterWhenInvisible_args0[] = {luawt_typeToStr<WWebWidget>(), "bool", NULL};
static const char* const* const luawt_WWebWidget_setLoadLaterWhenInvisible_args[] = {WWebWidget_setLoadLaterWhenInvisible_args0, NULL};

int luawt_WWebWidget_setLoadLaterWhenInvisible(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setLoadLaterWhenInvisible_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool arg0 = lua_toboolean(L, 2);
        self->setLoadLaterWhenInvisible(arg0);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setLoadLaterWhenInvisible");
    }
}

static const char* WWebWidget_setInline_args0[] = {luawt_typeToStr<WWebWidget>(), "bool", NULL};
static const char* const* const luawt_WWebWidget_setInline_args[] = {WWebWidget_setInline_args0, NULL};

int luawt_WWebWidget_setInline(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setInline_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool isInline = lua_toboolean(L, 2);
        self->setInline(isInline);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setInline");
    }
}

static const char* WWebWidget_offset_args0[] = {luawt_typeToStr<WWebWidget>(), "enum", NULL};
static const char* const* const luawt_WWebWidget_offset_args[] = {WWebWidget_offset_args0, NULL};

int luawt_WWebWidget_offset(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_offset_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::Side s = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WWebWidget.offset"
                ));
        Wt::WLength l_result = self->offset(s);
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.offset");
    }
}

static const char* WWebWidget_clearSides_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_clearSides_args[] = {WWebWidget_clearSides_args0, NULL};

int luawt_WWebWidget_clearSides(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_clearSides_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WFlags<Wt::Side> l_result = self->clearSides();
        luawt_returnEnum(L, luawt_enum_Side_str, luawt_enum_Side_val, l_result, "Side");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.clearSides");
    }
}

static const char* WWebWidget_setId_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* const* const luawt_WWebWidget_setId_args[] = {WWebWidget_setId_args0, NULL};

int luawt_WWebWidget_setId(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setId_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string id = std::string(raw2);
        self->setId(id);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setId");
    }
}

static const char* WWebWidget_setLineHeight_args0[] = {luawt_typeToStr<WWebWidget>(), "double", NULL};
static const char* const* const luawt_WWebWidget_setLineHeight_args[] = {WWebWidget_setLineHeight_args0, NULL};

int luawt_WWebWidget_setLineHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setLineHeight_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength height = Wt::WLength(raw2);
        self->setLineHeight(height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setLineHeight");
    }
}

static const char* WWebWidget_hasStyleClass_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* const* const luawt_WWebWidget_hasStyleClass_args[] = {WWebWidget_hasStyleClass_args0, NULL};

int luawt_WWebWidget_hasStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_hasStyleClass_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        bool l_result = self->hasStyleClass(styleClass);
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.hasStyleClass");
    }
}

static const char* WWebWidget_findById_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* const* const luawt_WWebWidget_findById_args[] = {WWebWidget_findById_args0, NULL};

int luawt_WWebWidget_findById(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_findById_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string id = std::string(raw2);
        Wt::WWidget* l_result = self->findById(id);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.findById");
    }
}

static const char* WWebWidget_maximumWidth_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_maximumWidth_args[] = {WWebWidget_maximumWidth_args0, NULL};

int luawt_WWebWidget_maximumWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_maximumWidth_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->maximumWidth();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.maximumWidth");
    }
}

static const char* WWebWidget_setToolTip_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* WWebWidget_setToolTip_args1[] = {luawt_typeToStr<WWebWidget>(), "char const *", "enum", NULL};
static const char* const* const luawt_WWebWidget_setToolTip_args[] = {WWebWidget_setToolTip_args0, WWebWidget_setToolTip_args1, NULL};

int luawt_WWebWidget_setToolTip(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setToolTip_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
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
                    "Wrong enum type in args of WWebWidget.setToolTip"
                ));
        self->setToolTip(text, textFormat);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setToolTip");
    }
}

static const char* WWebWidget_escapeText_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* WWebWidget_escapeText_args1[] = {luawt_typeToStr<WWebWidget>(), "char const *", "bool", NULL};
static const char* const* const luawt_WWebWidget_escapeText_args[] = {WWebWidget_escapeText_args0, WWebWidget_escapeText_args1, NULL};

int luawt_WWebWidget_escapeText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_escapeText_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString text = Wt::WString(raw2);
        Wt::WString l_result = self->escapeText(text);
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else if (index == 1) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString text = Wt::WString(raw2);
        bool newlinesToo = lua_toboolean(L, 3);
        Wt::WString l_result = self->escapeText(text, newlinesToo);
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.escapeText");
    }
}

static const char* WWebWidget_isPopup_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_isPopup_args[] = {WWebWidget_isPopup_args0, NULL};

int luawt_WWebWidget_isPopup(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_isPopup_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isPopup();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.isPopup");
    }
}

static const char* WWebWidget_setJavaScriptMember_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WWebWidget_setJavaScriptMember_args[] = {WWebWidget_setJavaScriptMember_args0, NULL};

int luawt_WWebWidget_setJavaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setJavaScriptMember_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        char const* raw3 = lua_tostring(L, 3);
        std::string value = std::string(raw3);
        self->setJavaScriptMember(name, value);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setJavaScriptMember");
    }
}

static const char* WWebWidget_removeStyleClass_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* WWebWidget_removeStyleClass_args1[] = {luawt_typeToStr<WWebWidget>(), "char const *", "bool", NULL};
static const char* const* const luawt_WWebWidget_removeStyleClass_args[] = {WWebWidget_removeStyleClass_args0, WWebWidget_removeStyleClass_args1, NULL};

int luawt_WWebWidget_removeStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_removeStyleClass_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
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
        return luaL_error(L, "Wrong arguments for WWebWidget.removeStyleClass");
    }
}

static const char* WWebWidget_refresh_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_refresh_args[] = {WWebWidget_refresh_args0, NULL};

int luawt_WWebWidget_refresh(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_refresh_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        self->refresh();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.refresh");
    }
}

static const char* WWebWidget_setStyleClass_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* const* const luawt_WWebWidget_setStyleClass_args[] = {WWebWidget_setStyleClass_args0, NULL};

int luawt_WWebWidget_setStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setStyleClass_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        self->setStyleClass(styleClass);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setStyleClass");
    }
}

static const char* WWebWidget_setDisabled_args0[] = {luawt_typeToStr<WWebWidget>(), "bool", NULL};
static const char* const* const luawt_WWebWidget_setDisabled_args[] = {WWebWidget_setDisabled_args0, NULL};

int luawt_WWebWidget_setDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setDisabled_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool disabled = lua_toboolean(L, 2);
        self->setDisabled(disabled);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setDisabled");
    }
}

static const char* WWebWidget_setHiddenKeepsGeometry_args0[] = {luawt_typeToStr<WWebWidget>(), "bool", NULL};
static const char* const* const luawt_WWebWidget_setHiddenKeepsGeometry_args[] = {WWebWidget_setHiddenKeepsGeometry_args0, NULL};

int luawt_WWebWidget_setHiddenKeepsGeometry(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setHiddenKeepsGeometry_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool enabled = lua_toboolean(L, 2);
        self->setHiddenKeepsGeometry(enabled);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setHiddenKeepsGeometry");
    }
}

static const char* WWebWidget_isVisible_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_isVisible_args[] = {WWebWidget_isVisible_args0, NULL};

int luawt_WWebWidget_isVisible(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_isVisible_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isVisible();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.isVisible");
    }
}

static const char* WWebWidget_addStyleClass_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", NULL};
static const char* WWebWidget_addStyleClass_args1[] = {luawt_typeToStr<WWebWidget>(), "char const *", "bool", NULL};
static const char* const* const luawt_WWebWidget_addStyleClass_args[] = {WWebWidget_addStyleClass_args0, WWebWidget_addStyleClass_args1, NULL};

int luawt_WWebWidget_addStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_addStyleClass_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
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
        return luaL_error(L, "Wrong arguments for WWebWidget.addStyleClass");
    }
}

static const char* WWebWidget_setAttributeValue_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WWebWidget_setAttributeValue_args[] = {WWebWidget_setAttributeValue_args0, NULL};

int luawt_WWebWidget_setAttributeValue(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_setAttributeValue_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        char const* raw3 = lua_tostring(L, 3);
        Wt::WString value = Wt::WString(raw3);
        self->setAttributeValue(name, value);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.setAttributeValue");
    }
}

static const char* WWebWidget_callJavaScriptMember_args0[] = {luawt_typeToStr<WWebWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WWebWidget_callJavaScriptMember_args[] = {WWebWidget_callJavaScriptMember_args0, NULL};

int luawt_WWebWidget_callJavaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_callJavaScriptMember_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        char const* raw3 = lua_tostring(L, 3);
        std::string args = std::string(raw3);
        self->callJavaScriptMember(name, args);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.callJavaScriptMember");
    }
}

static const char* WWebWidget_margin_args0[] = {luawt_typeToStr<WWebWidget>(), "enum", NULL};
static const char* const* const luawt_WWebWidget_margin_args[] = {WWebWidget_margin_args0, NULL};

int luawt_WWebWidget_margin(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_margin_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        Wt::Side side = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WWebWidget.margin"
                ));
        Wt::WLength l_result = self->margin(side);
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.margin");
    }
}

static const char* WWebWidget_isDisabled_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_isDisabled_args[] = {WWebWidget_isDisabled_args0, NULL};

int luawt_WWebWidget_isDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_isDisabled_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isDisabled();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.isDisabled");
    }
}

static const char* WWebWidget_isEnabled_args0[] = {luawt_typeToStr<WWebWidget>(), NULL};
static const char* const* const luawt_WWebWidget_isEnabled_args[] = {WWebWidget_isEnabled_args0, NULL};

int luawt_WWebWidget_isEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWebWidget_isEnabled_args);
    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isEnabled();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWebWidget.isEnabled");
    }
}

static const luaL_Reg luawt_WWebWidget_methods[] = {
    METHOD(WWebWidget, setPositionScheme),
    METHOD(WWebWidget, positionScheme),
    METHOD(WWebWidget, setOffsets),
    METHOD(WWebWidget, offset),
    METHOD(WWebWidget, resize),
    METHOD(WWebWidget, width),
    METHOD(WWebWidget, height),
    METHOD(WWebWidget, setMinimumSize),
    METHOD(WWebWidget, minimumWidth),
    METHOD(WWebWidget, minimumHeight),
    METHOD(WWebWidget, setMaximumSize),
    METHOD(WWebWidget, maximumWidth),
    METHOD(WWebWidget, maximumHeight),
    METHOD(WWebWidget, setLineHeight),
    METHOD(WWebWidget, lineHeight),
    METHOD(WWebWidget, setFloatSide),
    METHOD(WWebWidget, floatSide),
    METHOD(WWebWidget, setClearSides),
    METHOD(WWebWidget, clearSides),
    METHOD(WWebWidget, setMargin),
    METHOD(WWebWidget, margin),
    METHOD(WWebWidget, setHiddenKeepsGeometry),
    METHOD(WWebWidget, hiddenKeepsGeometry),
    METHOD(WWebWidget, isHidden),
    METHOD(WWebWidget, isVisible),
    METHOD(WWebWidget, setDisabled),
    METHOD(WWebWidget, isDisabled),
    METHOD(WWebWidget, isEnabled),
    METHOD(WWebWidget, setPopup),
    METHOD(WWebWidget, isPopup),
    METHOD(WWebWidget, setInline),
    METHOD(WWebWidget, isInline),
    METHOD(WWebWidget, setStyleClass),
    METHOD(WWebWidget, styleClass),
    METHOD(WWebWidget, addStyleClass),
    METHOD(WWebWidget, removeStyleClass),
    METHOD(WWebWidget, hasStyleClass),
    METHOD(WWebWidget, setVerticalAlignment),
    METHOD(WWebWidget, verticalAlignment),
    METHOD(WWebWidget, verticalAlignmentLength),
    METHOD(WWebWidget, setToolTip),
    METHOD(WWebWidget, toolTip),
    METHOD(WWebWidget, refresh),
    METHOD(WWebWidget, setAttributeValue),
    METHOD(WWebWidget, attributeValue),
    METHOD(WWebWidget, setJavaScriptMember),
    METHOD(WWebWidget, javaScriptMember),
    METHOD(WWebWidget, callJavaScriptMember),
    METHOD(WWebWidget, load),
    METHOD(WWebWidget, loaded),
    METHOD(WWebWidget, setTabIndex),
    METHOD(WWebWidget, tabIndex),
    METHOD(WWebWidget, setId),
    METHOD(WWebWidget, find),
    METHOD(WWebWidget, findById),
    METHOD(WWebWidget, setSelectable),
    METHOD(WWebWidget, doJavaScript),
    METHOD(WWebWidget, id),
    METHOD(WWebWidget, domElementType),
    METHOD(WWebWidget, setLoadLaterWhenInvisible),
    METHOD(WWebWidget, escapeText),
    METHOD(WWebWidget, resolveRelativeUrl),
    METHOD(WWebWidget, setFormObject),
    METHOD(WWebWidget, canOptimizeUpdates),
    METHOD(WWebWidget, zIndex),
    METHOD(WWebWidget, setZIndex),
    METHOD(WWebWidget, isRendered),
    {NULL, NULL},
};

void luawt_WWebWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WWidget>();
    assert(base);
    DECLARE_CLASS(
        WWebWidget,
        L,
        0,
        0,
        luawt_WWebWidget_methods,
        base
    );
}
