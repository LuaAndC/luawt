#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WLength>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

int luawt_WWidget_id(lua_State* L) {
    WWidget* widget = luawt_checkFromLua<WWidget>(L, -1);
    std::string id = widget->id();
    lua_pushstring(L, id.c_str());
    return 1;
}

static const char* WWidget_load_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_load_args[] = {WWidget_load_args0, NULL};

int luawt_WWidget_load(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_load_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        self->load();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.load");
    }
}

static const char* WWidget_doJavaScript_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* const* const luawt_WWidget_doJavaScript_args[] = {WWidget_doJavaScript_args0, NULL};

int luawt_WWidget_doJavaScript(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_doJavaScript_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string js = std::string(raw2);
        self->doJavaScript(js);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.doJavaScript");
    }
}

static const char* WWidget_callJavaScriptMember_args0[] = {luawt_typeToStr<WWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WWidget_callJavaScriptMember_args[] = {WWidget_callJavaScriptMember_args0, NULL};

int luawt_WWidget_callJavaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_callJavaScriptMember_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        char const* raw3 = lua_tostring(L, 3);
        std::string args = std::string(raw3);
        self->callJavaScriptMember(name, args);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.callJavaScriptMember");
    }
}

static const char* WWidget_positionAt_args0[] = {luawt_typeToStr<WWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WWidget_positionAt_args1[] = {luawt_typeToStr<WWidget>(), luawt_typeToStr<Wt::WWidget>(), "enum", NULL};
static const char* const* const luawt_WWidget_positionAt_args[] = {WWidget_positionAt_args0, WWidget_positionAt_args1, NULL};

int luawt_WWidget_positionAt(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_positionAt_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WWidget* widget =
            luawt_checkFromLua<Wt::WWidget>(L, 2);
        self->positionAt(widget);
        return 0;
    } else if (index == 1) {
        Wt::WWidget* widget =
            luawt_checkFromLua<Wt::WWidget>(L, 2);
        Wt::Orientation orientation = static_cast<Wt::Orientation>(luawt_getEnum(
                    L,
                    luawt_enum_Orientation_str,
                    luawt_enum_Orientation_val,
                    3,
                    "Wrong enum type in args of WWidget.positionAt"
                ));
        self->positionAt(widget, orientation);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.positionAt");
    }
}

static const char* WWidget_setMinimumSize_args0[] = {luawt_typeToStr<WWidget>(), "double", "double", NULL};
static const char* const* const luawt_WWidget_setMinimumSize_args[] = {WWidget_setMinimumSize_args0, NULL};

int luawt_WWidget_setMinimumSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setMinimumSize_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength width = Wt::WLength(raw2);
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength height = Wt::WLength(raw3);
        self->setMinimumSize(width, height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setMinimumSize");
    }
}

static const char* WWidget_floatSide_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_floatSide_args[] = {WWidget_floatSide_args0, NULL};

int luawt_WWidget_floatSide(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_floatSide_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::Side l_result = self->floatSide();
        luawt_returnEnum(L, luawt_enum_Side_str, luawt_enum_Side_val, l_result, "Side");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.floatSide");
    }
}

static const char* WWidget_jsRef_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_jsRef_args[] = {WWidget_jsRef_args0, NULL};

int luawt_WWidget_jsRef(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_jsRef_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        std::string l_result = self->jsRef();
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.jsRef");
    }
}

static const char* WWidget_height_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_height_args[] = {WWidget_height_args0, NULL};

int luawt_WWidget_height(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_height_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->height();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.height");
    }
}

static const char* WWidget_hiddenKeepsGeometry_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_hiddenKeepsGeometry_args[] = {WWidget_hiddenKeepsGeometry_args0, NULL};

int luawt_WWidget_hiddenKeepsGeometry(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_hiddenKeepsGeometry_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->hiddenKeepsGeometry();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.hiddenKeepsGeometry");
    }
}

static const char* WWidget_minimumHeight_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_minimumHeight_args[] = {WWidget_minimumHeight_args0, NULL};

int luawt_WWidget_minimumHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_minimumHeight_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->minimumHeight();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.minimumHeight");
    }
}

static const char* WWidget_loaded_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_loaded_args[] = {WWidget_loaded_args0, NULL};

int luawt_WWidget_loaded(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_loaded_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->loaded();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.loaded");
    }
}

static const char* WWidget_setMaximumSize_args0[] = {luawt_typeToStr<WWidget>(), "double", "double", NULL};
static const char* const* const luawt_WWidget_setMaximumSize_args[] = {WWidget_setMaximumSize_args0, NULL};

int luawt_WWidget_setMaximumSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setMaximumSize_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength width = Wt::WLength(raw2);
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength height = Wt::WLength(raw3);
        self->setMaximumSize(width, height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setMaximumSize");
    }
}

static const char* WWidget_setWidth_args0[] = {luawt_typeToStr<WWidget>(), "double", NULL};
static const char* const* const luawt_WWidget_setWidth_args[] = {WWidget_setWidth_args0, NULL};

int luawt_WWidget_setWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setWidth_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength width = Wt::WLength(raw2);
        self->setWidth(width);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setWidth");
    }
}

static const char* WWidget_find_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* const* const luawt_WWidget_find_args[] = {WWidget_find_args0, NULL};

int luawt_WWidget_find(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_find_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        Wt::WWidget* l_result = self->find(name);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.find");
    }
}

static const char* WWidget_setTabIndex_args0[] = {luawt_typeToStr<WWidget>(), "int", NULL};
static const char* const* const luawt_WWidget_setTabIndex_args[] = {WWidget_setTabIndex_args0, NULL};

int luawt_WWidget_setTabIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setTabIndex_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        int index = lua_tointeger(L, 2);
        self->setTabIndex(index);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setTabIndex");
    }
}

static const char* WWidget_isInline_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_isInline_args[] = {WWidget_isInline_args0, NULL};

int luawt_WWidget_isInline(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_isInline_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isInline();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.isInline");
    }
}

static const char* WWidget_layoutSizeAware_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_layoutSizeAware_args[] = {WWidget_layoutSizeAware_args0, NULL};

int luawt_WWidget_layoutSizeAware(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_layoutSizeAware_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->layoutSizeAware();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.layoutSizeAware");
    }
}

static const char* WWidget_hide_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_hide_args[] = {WWidget_hide_args0, NULL};

int luawt_WWidget_hide(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_hide_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        self->hide();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.hide");
    }
}

static const char* WWidget_disable_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_disable_args[] = {WWidget_disable_args0, NULL};

int luawt_WWidget_disable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_disable_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        self->disable();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.disable");
    }
}

static const char* WWidget_inlineCssStyle_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_inlineCssStyle_args[] = {WWidget_inlineCssStyle_args0, NULL};

int luawt_WWidget_inlineCssStyle(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_inlineCssStyle_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        std::string l_result = self->inlineCssStyle();
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.inlineCssStyle");
    }
}

static const char* WWidget_setClearSides_args0[] = {luawt_typeToStr<WWidget>(), "enum", NULL};
static const char* const* const luawt_WWidget_setClearSides_args[] = {WWidget_setClearSides_args0, NULL};

int luawt_WWidget_setClearSides(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setClearSides_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WFlags<Wt::Side> sides = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WWidget.setClearSides"
                ));
        self->setClearSides(sides);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setClearSides");
    }
}

static const char* WWidget_isRendered_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_isRendered_args[] = {WWidget_isRendered_args0, NULL};

int luawt_WWidget_isRendered(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_isRendered_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isRendered();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.isRendered");
    }
}

static const char* WWidget_setOffsets_args0[] = {luawt_typeToStr<WWidget>(), "double", NULL};
static const char* WWidget_setOffsets_args1[] = {luawt_typeToStr<WWidget>(), "double", "enum", NULL};
static const char* const* const luawt_WWidget_setOffsets_args[] = {WWidget_setOffsets_args0, WWidget_setOffsets_args1, NULL};

int luawt_WWidget_setOffsets(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setOffsets_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
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
                    "Wrong enum type in args of WWidget.setOffsets"
                ));
        self->setOffsets(offset, sides);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setOffsets");
    }
}

static const char* WWidget_styleClass_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_styleClass_args[] = {WWidget_styleClass_args0, NULL};

int luawt_WWidget_styleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_styleClass_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WString l_result = self->styleClass();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.styleClass");
    }
}

static const char* WWidget_tr_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* const* const luawt_WWidget_tr_args[] = {WWidget_tr_args0, NULL};

int luawt_WWidget_tr(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_tr_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string key = std::string(raw2);
        Wt::WString l_result = self->tr(key);
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.tr");
    }
}

static const char* WWidget_setPopup_args0[] = {luawt_typeToStr<WWidget>(), "bool", NULL};
static const char* const* const luawt_WWidget_setPopup_args[] = {WWidget_setPopup_args0, NULL};

int luawt_WWidget_setPopup(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setPopup_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool popup = lua_toboolean(L, 2);
        self->setPopup(popup);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setPopup");
    }
}

static const char* WWidget_setFloatSide_args0[] = {luawt_typeToStr<WWidget>(), "enum", NULL};
static const char* const* const luawt_WWidget_setFloatSide_args[] = {WWidget_setFloatSide_args0, NULL};

int luawt_WWidget_setFloatSide(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setFloatSide_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::Side s = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WWidget.setFloatSide"
                ));
        self->setFloatSide(s);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setFloatSide");
    }
}

static const char* WWidget_width_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_width_args[] = {WWidget_width_args0, NULL};

int luawt_WWidget_width(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_width_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->width();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.width");
    }
}

static const char* WWidget_verticalAlignment_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_verticalAlignment_args[] = {WWidget_verticalAlignment_args0, NULL};

int luawt_WWidget_verticalAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_verticalAlignment_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::AlignmentFlag l_result = self->verticalAlignment();
        luawt_returnEnum(L, luawt_enum_AlignmentFlag_str, luawt_enum_AlignmentFlag_val, l_result, "AlignmentFlag");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.verticalAlignment");
    }
}

static const char* WWidget_resize_args0[] = {luawt_typeToStr<WWidget>(), "double", "double", NULL};
static const char* const* const luawt_WWidget_resize_args[] = {WWidget_resize_args0, NULL};

int luawt_WWidget_resize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_resize_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength width = Wt::WLength(raw2);
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength height = Wt::WLength(raw3);
        self->resize(width, height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.resize");
    }
}

static const char* WWidget_positionScheme_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_positionScheme_args[] = {WWidget_positionScheme_args0, NULL};

int luawt_WWidget_positionScheme(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_positionScheme_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::PositionScheme l_result = self->positionScheme();
        luawt_returnEnum(L, luawt_enum_PositionScheme_str, luawt_enum_PositionScheme_val, l_result, "PositionScheme");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.positionScheme");
    }
}

static const char* WWidget_show_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_show_args[] = {WWidget_show_args0, NULL};

int luawt_WWidget_show(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_show_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        self->show();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.show");
    }
}

static const char* WWidget_lineHeight_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_lineHeight_args[] = {WWidget_lineHeight_args0, NULL};

int luawt_WWidget_lineHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_lineHeight_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->lineHeight();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.lineHeight");
    }
}

static const char* WWidget_tabIndex_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_tabIndex_args[] = {WWidget_tabIndex_args0, NULL};

int luawt_WWidget_tabIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_tabIndex_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        int l_result = self->tabIndex();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.tabIndex");
    }
}

static const char* WWidget_isHidden_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_isHidden_args[] = {WWidget_isHidden_args0, NULL};

int luawt_WWidget_isHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_isHidden_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isHidden();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.isHidden");
    }
}

static const char* WWidget_setSelectable_args0[] = {luawt_typeToStr<WWidget>(), "bool", NULL};
static const char* const* const luawt_WWidget_setSelectable_args[] = {WWidget_setSelectable_args0, NULL};

int luawt_WWidget_setSelectable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setSelectable_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool selectable = lua_toboolean(L, 2);
        self->setSelectable(selectable);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setSelectable");
    }
}

static const char* WWidget_hasStyleClass_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* const* const luawt_WWidget_hasStyleClass_args[] = {WWidget_hasStyleClass_args0, NULL};

int luawt_WWidget_hasStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_hasStyleClass_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        bool l_result = self->hasStyleClass(styleClass);
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.hasStyleClass");
    }
}

static const char* WWidget_enable_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_enable_args[] = {WWidget_enable_args0, NULL};

int luawt_WWidget_enable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_enable_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        self->enable();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.enable");
    }
}

static const char* WWidget_minimumWidth_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_minimumWidth_args[] = {WWidget_minimumWidth_args0, NULL};

int luawt_WWidget_minimumWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_minimumWidth_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->minimumWidth();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.minimumWidth");
    }
}

static const char* WWidget_attributeValue_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* const* const luawt_WWidget_attributeValue_args[] = {WWidget_attributeValue_args0, NULL};

int luawt_WWidget_attributeValue(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_attributeValue_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        Wt::WString l_result = self->attributeValue(name);
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.attributeValue");
    }
}

static const char* WWidget_parent_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_parent_args[] = {WWidget_parent_args0, NULL};

int luawt_WWidget_parent(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_parent_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WWidget* l_result = self->parent();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.parent");
    }
}

static const char* WWidget_stopAcceptDrops_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* const* const luawt_WWidget_stopAcceptDrops_args[] = {WWidget_stopAcceptDrops_args0, NULL};

int luawt_WWidget_stopAcceptDrops(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_stopAcceptDrops_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string mimeType = std::string(raw2);
        self->stopAcceptDrops(mimeType);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.stopAcceptDrops");
    }
}

static const char* WWidget_setPositionScheme_args0[] = {luawt_typeToStr<WWidget>(), "enum", NULL};
static const char* const* const luawt_WWidget_setPositionScheme_args[] = {WWidget_setPositionScheme_args0, NULL};

int luawt_WWidget_setPositionScheme(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setPositionScheme_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::PositionScheme scheme = static_cast<Wt::PositionScheme>(luawt_getEnum(
                    L,
                    luawt_enum_PositionScheme_str,
                    luawt_enum_PositionScheme_val,
                    2,
                    "Wrong enum type in args of WWidget.setPositionScheme"
                ));
        self->setPositionScheme(scheme);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setPositionScheme");
    }
}

static const char* WWidget_maximumHeight_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_maximumHeight_args[] = {WWidget_maximumHeight_args0, NULL};

int luawt_WWidget_maximumHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_maximumHeight_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->maximumHeight();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.maximumHeight");
    }
}

static const char* WWidget_javaScriptMember_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* const* const luawt_WWidget_javaScriptMember_args[] = {WWidget_javaScriptMember_args0, NULL};

int luawt_WWidget_javaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_javaScriptMember_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        std::string l_result = self->javaScriptMember(name);
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.javaScriptMember");
    }
}

static const char* WWidget_verticalAlignmentLength_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_verticalAlignmentLength_args[] = {WWidget_verticalAlignmentLength_args0, NULL};

int luawt_WWidget_verticalAlignmentLength(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_verticalAlignmentLength_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->verticalAlignmentLength();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.verticalAlignmentLength");
    }
}

static const char* WWidget_toolTip_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_toolTip_args[] = {WWidget_toolTip_args0, NULL};

int luawt_WWidget_toolTip(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_toolTip_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WString const& l_result = self->toolTip();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.toolTip");
    }
}

static const char* WWidget_acceptDrops_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* WWidget_acceptDrops_args1[] = {luawt_typeToStr<WWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WWidget_acceptDrops_args[] = {WWidget_acceptDrops_args0, WWidget_acceptDrops_args1, NULL};

int luawt_WWidget_acceptDrops(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_acceptDrops_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string mimeType = std::string(raw2);
        self->acceptDrops(mimeType);
        return 0;
    } else if (index == 1) {
        char const* raw2 = lua_tostring(L, 2);
        std::string mimeType = std::string(raw2);
        char const* raw3 = lua_tostring(L, 3);
        Wt::WString hoverStyleClass = Wt::WString(raw3);
        self->acceptDrops(mimeType, hoverStyleClass);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.acceptDrops");
    }
}

static const char* WWidget_setVerticalAlignment_args0[] = {luawt_typeToStr<WWidget>(), "enum", NULL};
static const char* WWidget_setVerticalAlignment_args1[] = {luawt_typeToStr<WWidget>(), "enum", "double", NULL};
static const char* const* const luawt_WWidget_setVerticalAlignment_args[] = {WWidget_setVerticalAlignment_args0, WWidget_setVerticalAlignment_args1, NULL};

int luawt_WWidget_setVerticalAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setVerticalAlignment_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(luawt_getEnum(
                    L,
                    luawt_enum_AlignmentFlag_str,
                    luawt_enum_AlignmentFlag_val,
                    2,
                    "Wrong enum type in args of WWidget.setVerticalAlignment"
                ));
        self->setVerticalAlignment(alignment);
        return 0;
    } else if (index == 1) {
        Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(luawt_getEnum(
                    L,
                    luawt_enum_AlignmentFlag_str,
                    luawt_enum_AlignmentFlag_val,
                    2,
                    "Wrong enum type in args of WWidget.setVerticalAlignment"
                ));
        double raw3 = lua_tonumber(L, 3);
        Wt::WLength length = Wt::WLength(raw3);
        self->setVerticalAlignment(alignment, length);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setVerticalAlignment");
    }
}

static const char* WWidget_setMargin_args0[] = {luawt_typeToStr<WWidget>(), "double", NULL};
static const char* WWidget_setMargin_args1[] = {luawt_typeToStr<WWidget>(), "double", "enum", NULL};
static const char* const* const luawt_WWidget_setMargin_args[] = {WWidget_setMargin_args0, WWidget_setMargin_args1, NULL};

int luawt_WWidget_setMargin(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setMargin_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
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
                    "Wrong enum type in args of WWidget.setMargin"
                ));
        self->setMargin(margin, sides);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setMargin");
    }
}

static const char* WWidget_setInline_args0[] = {luawt_typeToStr<WWidget>(), "bool", NULL};
static const char* const* const luawt_WWidget_setInline_args[] = {WWidget_setInline_args0, NULL};

int luawt_WWidget_setInline(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setInline_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool inlined = lua_toboolean(L, 2);
        self->setInline(inlined);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setInline");
    }
}

static const char* WWidget_offset_args0[] = {luawt_typeToStr<WWidget>(), "enum", NULL};
static const char* const* const luawt_WWidget_offset_args[] = {WWidget_offset_args0, NULL};

int luawt_WWidget_offset(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_offset_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::Side side = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WWidget.offset"
                ));
        Wt::WLength l_result = self->offset(side);
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.offset");
    }
}

static const char* WWidget_clearSides_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_clearSides_args[] = {WWidget_clearSides_args0, NULL};

int luawt_WWidget_clearSides(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_clearSides_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WFlags<Wt::Side> l_result = self->clearSides();
        luawt_returnEnum(L, luawt_enum_Side_str, luawt_enum_Side_val, l_result, "Side");
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.clearSides");
    }
}

static const char* WWidget_setId_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* const* const luawt_WWidget_setId_args[] = {WWidget_setId_args0, NULL};

int luawt_WWidget_setId(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setId_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string id = std::string(raw2);
        self->setId(id);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setId");
    }
}

static const char* WWidget_setLineHeight_args0[] = {luawt_typeToStr<WWidget>(), "double", NULL};
static const char* const* const luawt_WWidget_setLineHeight_args[] = {WWidget_setLineHeight_args0, NULL};

int luawt_WWidget_setLineHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setLineHeight_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength height = Wt::WLength(raw2);
        self->setLineHeight(height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setLineHeight");
    }
}

static const char* WWidget_setHeight_args0[] = {luawt_typeToStr<WWidget>(), "double", NULL};
static const char* const* const luawt_WWidget_setHeight_args[] = {WWidget_setHeight_args0, NULL};

int luawt_WWidget_setHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setHeight_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        double raw2 = lua_tonumber(L, 2);
        Wt::WLength height = Wt::WLength(raw2);
        self->setHeight(height);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setHeight");
    }
}

static const char* WWidget_findById_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* const* const luawt_WWidget_findById_args[] = {WWidget_findById_args0, NULL};

int luawt_WWidget_findById(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_findById_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string id = std::string(raw2);
        Wt::WWidget* l_result = self->findById(id);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.findById");
    }
}

static const char* WWidget_maximumWidth_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_maximumWidth_args[] = {WWidget_maximumWidth_args0, NULL};

int luawt_WWidget_maximumWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_maximumWidth_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WLength l_result = self->maximumWidth();
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.maximumWidth");
    }
}

static const char* WWidget_setToolTip_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* WWidget_setToolTip_args1[] = {luawt_typeToStr<WWidget>(), "char const *", "enum", NULL};
static const char* const* const luawt_WWidget_setToolTip_args[] = {WWidget_setToolTip_args0, WWidget_setToolTip_args1, NULL};

int luawt_WWidget_setToolTip(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setToolTip_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
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
                    "Wrong enum type in args of WWidget.setToolTip"
                ));
        self->setToolTip(text, textFormat);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setToolTip");
    }
}

static const char* WWidget_isPopup_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_isPopup_args[] = {WWidget_isPopup_args0, NULL};

int luawt_WWidget_isPopup(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_isPopup_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isPopup();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.isPopup");
    }
}

static const char* WWidget_setJavaScriptMember_args0[] = {luawt_typeToStr<WWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WWidget_setJavaScriptMember_args[] = {WWidget_setJavaScriptMember_args0, NULL};

int luawt_WWidget_setJavaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setJavaScriptMember_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        char const* raw3 = lua_tostring(L, 3);
        std::string value = std::string(raw3);
        self->setJavaScriptMember(name, value);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setJavaScriptMember");
    }
}

static const char* WWidget_removeStyleClass_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* WWidget_removeStyleClass_args1[] = {luawt_typeToStr<WWidget>(), "char const *", "bool", NULL};
static const char* const* const luawt_WWidget_removeStyleClass_args[] = {WWidget_removeStyleClass_args0, WWidget_removeStyleClass_args1, NULL};

int luawt_WWidget_removeStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_removeStyleClass_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
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
        return luaL_error(L, "Wrong arguments for WWidget.removeStyleClass");
    }
}

static const char* WWidget_refresh_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_refresh_args[] = {WWidget_refresh_args0, NULL};

int luawt_WWidget_refresh(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_refresh_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        self->refresh();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.refresh");
    }
}

static const char* WWidget_setTabOrder_args0[] = {luawt_typeToStr<WWidget>(), luawt_typeToStr<Wt::WWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WWidget_setTabOrder_args[] = {WWidget_setTabOrder_args0, NULL};

int luawt_WWidget_setTabOrder(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setTabOrder_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::WWidget* first =
            luawt_checkFromLua<Wt::WWidget>(L, 2);
        Wt::WWidget* second =
            luawt_checkFromLua<Wt::WWidget>(L, 3);
        self->setTabOrder(first, second);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setTabOrder");
    }
}

static const char* WWidget_setStyleClass_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* const* const luawt_WWidget_setStyleClass_args[] = {WWidget_setStyleClass_args0, NULL};

int luawt_WWidget_setStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setStyleClass_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        self->setStyleClass(styleClass);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setStyleClass");
    }
}

static const char* WWidget_setDisabled_args0[] = {luawt_typeToStr<WWidget>(), "bool", NULL};
static const char* const* const luawt_WWidget_setDisabled_args[] = {WWidget_setDisabled_args0, NULL};

int luawt_WWidget_setDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setDisabled_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool disabled = lua_toboolean(L, 2);
        self->setDisabled(disabled);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setDisabled");
    }
}

static const char* WWidget_setHiddenKeepsGeometry_args0[] = {luawt_typeToStr<WWidget>(), "bool", NULL};
static const char* const* const luawt_WWidget_setHiddenKeepsGeometry_args[] = {WWidget_setHiddenKeepsGeometry_args0, NULL};

int luawt_WWidget_setHiddenKeepsGeometry(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setHiddenKeepsGeometry_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool enabled = lua_toboolean(L, 2);
        self->setHiddenKeepsGeometry(enabled);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setHiddenKeepsGeometry");
    }
}

static const char* WWidget_isVisible_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_isVisible_args[] = {WWidget_isVisible_args0, NULL};

int luawt_WWidget_isVisible(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_isVisible_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isVisible();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.isVisible");
    }
}

static const char* WWidget_addStyleClass_args0[] = {luawt_typeToStr<WWidget>(), "char const *", NULL};
static const char* WWidget_addStyleClass_args1[] = {luawt_typeToStr<WWidget>(), "char const *", "bool", NULL};
static const char* const* const luawt_WWidget_addStyleClass_args[] = {WWidget_addStyleClass_args0, WWidget_addStyleClass_args1, NULL};

int luawt_WWidget_addStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_addStyleClass_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
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
        return luaL_error(L, "Wrong arguments for WWidget.addStyleClass");
    }
}

static const char* WWidget_setAttributeValue_args0[] = {luawt_typeToStr<WWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WWidget_setAttributeValue_args[] = {WWidget_setAttributeValue_args0, NULL};

int luawt_WWidget_setAttributeValue(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_setAttributeValue_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        std::string name = std::string(raw2);
        char const* raw3 = lua_tostring(L, 3);
        Wt::WString value = Wt::WString(raw3);
        self->setAttributeValue(name, value);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.setAttributeValue");
    }
}

static const char* WWidget_toggleStyleClass_args0[] = {luawt_typeToStr<WWidget>(), "char const *", "bool", NULL};
static const char* WWidget_toggleStyleClass_args1[] = {luawt_typeToStr<WWidget>(), "char const *", "bool", "bool", NULL};
static const char* const* const luawt_WWidget_toggleStyleClass_args[] = {WWidget_toggleStyleClass_args0, WWidget_toggleStyleClass_args1, NULL};

int luawt_WWidget_toggleStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_toggleStyleClass_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        bool add = lua_toboolean(L, 3);
        self->toggleStyleClass(styleClass, add);
        return 0;
    } else if (index == 1) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString styleClass = Wt::WString(raw2);
        bool add = lua_toboolean(L, 3);
        bool force = lua_toboolean(L, 4);
        self->toggleStyleClass(styleClass, add, force);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.toggleStyleClass");
    }
}

static const char* WWidget_margin_args0[] = {luawt_typeToStr<WWidget>(), "enum", NULL};
static const char* const* const luawt_WWidget_margin_args[] = {WWidget_margin_args0, NULL};

int luawt_WWidget_margin(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_margin_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        Wt::Side side = static_cast<Wt::Side>(luawt_getEnum(
                    L,
                    luawt_enum_Side_str,
                    luawt_enum_Side_val,
                    2,
                    "Wrong enum type in args of WWidget.margin"
                ));
        Wt::WLength l_result = self->margin(side);
        lua_pushnumber(L, l_result.value());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.margin");
    }
}

static const char* WWidget_isDisabled_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_isDisabled_args[] = {WWidget_isDisabled_args0, NULL};

int luawt_WWidget_isDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_isDisabled_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isDisabled();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.isDisabled");
    }
}

static const char* WWidget_isEnabled_args0[] = {luawt_typeToStr<WWidget>(), NULL};
static const char* const* const luawt_WWidget_isEnabled_args[] = {WWidget_isEnabled_args0, NULL};

int luawt_WWidget_isEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WWidget_isEnabled_args);
    WWidget* self = luawt_checkFromLua<WWidget>(L, 1);
    if (index == 0) {
        bool l_result = self->isEnabled();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WWidget.isEnabled");
    }
}

static const luaL_Reg luawt_WWidget_methods[] = {
    METHOD(WWidget, id),
    METHOD(WWidget, parent),
    METHOD(WWidget, setPositionScheme),
    METHOD(WWidget, positionScheme),
    METHOD(WWidget, setOffsets),
    METHOD(WWidget, offset),
    METHOD(WWidget, resize),
    METHOD(WWidget, width),
    METHOD(WWidget, setWidth),
    METHOD(WWidget, height),
    METHOD(WWidget, setHeight),
    METHOD(WWidget, setMinimumSize),
    METHOD(WWidget, minimumWidth),
    METHOD(WWidget, minimumHeight),
    METHOD(WWidget, setMaximumSize),
    METHOD(WWidget, maximumWidth),
    METHOD(WWidget, maximumHeight),
    METHOD(WWidget, positionAt),
    METHOD(WWidget, setLineHeight),
    METHOD(WWidget, lineHeight),
    METHOD(WWidget, setFloatSide),
    METHOD(WWidget, floatSide),
    METHOD(WWidget, setClearSides),
    METHOD(WWidget, clearSides),
    METHOD(WWidget, setMargin),
    METHOD(WWidget, margin),
    METHOD(WWidget, setHiddenKeepsGeometry),
    METHOD(WWidget, hiddenKeepsGeometry),
    METHOD(WWidget, isHidden),
    METHOD(WWidget, isVisible),
    METHOD(WWidget, setDisabled),
    METHOD(WWidget, isDisabled),
    METHOD(WWidget, isEnabled),
    METHOD(WWidget, setPopup),
    METHOD(WWidget, isPopup),
    METHOD(WWidget, setInline),
    METHOD(WWidget, isInline),
    METHOD(WWidget, setStyleClass),
    METHOD(WWidget, styleClass),
    METHOD(WWidget, addStyleClass),
    METHOD(WWidget, removeStyleClass),
    METHOD(WWidget, toggleStyleClass),
    METHOD(WWidget, hasStyleClass),
    METHOD(WWidget, setVerticalAlignment),
    METHOD(WWidget, verticalAlignment),
    METHOD(WWidget, verticalAlignmentLength),
    METHOD(WWidget, setToolTip),
    METHOD(WWidget, toolTip),
    METHOD(WWidget, refresh),
    METHOD(WWidget, jsRef),
    METHOD(WWidget, setAttributeValue),
    METHOD(WWidget, attributeValue),
    METHOD(WWidget, setJavaScriptMember),
    METHOD(WWidget, javaScriptMember),
    METHOD(WWidget, callJavaScriptMember),
    METHOD(WWidget, tr),
    METHOD(WWidget, load),
    METHOD(WWidget, loaded),
    METHOD(WWidget, setTabIndex),
    METHOD(WWidget, tabIndex),
    METHOD(WWidget, acceptDrops),
    METHOD(WWidget, stopAcceptDrops),
    METHOD(WWidget, setId),
    METHOD(WWidget, find),
    METHOD(WWidget, findById),
    METHOD(WWidget, setSelectable),
    METHOD(WWidget, doJavaScript),
    METHOD(WWidget, isRendered),
    METHOD(WWidget, inlineCssStyle),
    METHOD(WWidget, hide),
    METHOD(WWidget, show),
    METHOD(WWidget, enable),
    METHOD(WWidget, disable),
    METHOD(WWidget, layoutSizeAware),
    METHOD(WWidget, setTabOrder),
    {NULL, NULL},
};

void luawt_WWidget(lua_State* L) {
    DECLARE_CLASS(
        WWidget,
        L,
        0,
        0,
        luawt_WWidget_methods,
        0
    );
}
