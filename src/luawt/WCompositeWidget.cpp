#include "boost-xtime.hpp"

#include <Wt/WCompositeWidget>
#include <Wt/WWebWidget>
#include <Wt/WContainerWidget>
#include <Wt/WWidget>
#include <Wt/WString>

#include "globals.hpp"

static const char* WCompositeWidget_make_args0[] = {NULL};
static const char* WCompositeWidget_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WCompositeWidget_make_args2[] = {luawt_typeToStr<Wt::WWidget>(), luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_make_args[] = {WCompositeWidget_make_args0, WCompositeWidget_make_args1, WCompositeWidget_make_args2, NULL};

int luawt_WCompositeWidget_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_make_args);
    if (index == 0) {
    WCompositeWidget * result = new WCompositeWidget();
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WCompositeWidget");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WCompositeWidget * result = new WCompositeWidget(parent);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
    Wt::WWidget* implementation =
        luawt_checkFromLua<Wt::WWidget>(L, 1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WCompositeWidget * result = new WCompositeWidget(implementation, parent);
    luawt_toLua(L, result);
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
    char const * raw2 = lua_tostring(L, 2);
    std::string js = std::string(raw2);
    self->doJavaScript(js);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.doJavaScript");
    }
}

static const char* WCompositeWidget_floatSide_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_floatSide_args[] = {WCompositeWidget_floatSide_args0, NULL};

int luawt_WCompositeWidget_floatSide(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_floatSide_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    Wt::Side result = self->floatSide();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.floatSide");
    }
}

static const char* WCompositeWidget_find_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_find_args[] = {WCompositeWidget_find_args0, NULL};

int luawt_WCompositeWidget_find(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_find_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    Wt::WWidget * result = self->find(name);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.find");
    }
}

static const char* WCompositeWidget_styleClass_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_styleClass_args[] = {WCompositeWidget_styleClass_args0, NULL};

int luawt_WCompositeWidget_styleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_styleClass_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    Wt::WString result = self->styleClass();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.styleClass");
    }
}

static const char* WCompositeWidget_hiddenKeepsGeometry_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_hiddenKeepsGeometry_args[] = {WCompositeWidget_hiddenKeepsGeometry_args0, NULL};

int luawt_WCompositeWidget_hiddenKeepsGeometry(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_hiddenKeepsGeometry_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    bool result = self->hiddenKeepsGeometry();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.hiddenKeepsGeometry");
    }
}

static const char* WCompositeWidget_loaded_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_loaded_args[] = {WCompositeWidget_loaded_args0, NULL};

int luawt_WCompositeWidget_loaded(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_loaded_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    bool result = self->loaded();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.loaded");
    }
}

static const char* WCompositeWidget_id_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_id_args[] = {WCompositeWidget_id_args0, NULL};

int luawt_WCompositeWidget_id(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_id_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    std::string const result = self->id();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.id");
    }
}

static const char* WCompositeWidget_isInline_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_isInline_args[] = {WCompositeWidget_isInline_args0, NULL};

int luawt_WCompositeWidget_isInline(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_isInline_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    bool result = self->isInline();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.isInline");
    }
}

static const char* WCompositeWidget_setStyleClass_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_setStyleClass_args[] = {WCompositeWidget_setStyleClass_args0, NULL};

int luawt_WCompositeWidget_setStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setStyleClass_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString styleClass = Wt::WString(raw2);
    self->setStyleClass(styleClass);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setStyleClass");
    }
}

static const char* WCompositeWidget_isDisabled_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_isDisabled_args[] = {WCompositeWidget_isDisabled_args0, NULL};

int luawt_WCompositeWidget_isDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_isDisabled_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    bool result = self->isDisabled();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.isDisabled");
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

static const char* WCompositeWidget_setFloatSide_args0[] = {luawt_typeToStr<WCompositeWidget>(), "int", NULL};
static const char* const* const luawt_WCompositeWidget_setFloatSide_args[] = {WCompositeWidget_setFloatSide_args0, NULL};

int luawt_WCompositeWidget_setFloatSide(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setFloatSide_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    Wt::Side s = static_cast<Wt::Side>(lua_tointeger(L, 2));
    self->setFloatSide(s);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setFloatSide");
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

static const char* WCompositeWidget_verticalAlignment_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_verticalAlignment_args[] = {WCompositeWidget_verticalAlignment_args0, NULL};

int luawt_WCompositeWidget_verticalAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_verticalAlignment_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    Wt::AlignmentFlag result = self->verticalAlignment();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.verticalAlignment");
    }
}

static const char* WCompositeWidget_positionScheme_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_positionScheme_args[] = {WCompositeWidget_positionScheme_args0, NULL};

int luawt_WCompositeWidget_positionScheme(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_positionScheme_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    Wt::PositionScheme result = self->positionScheme();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.positionScheme");
    }
}

static const char* WCompositeWidget_tabIndex_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_tabIndex_args[] = {WCompositeWidget_tabIndex_args0, NULL};

int luawt_WCompositeWidget_tabIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_tabIndex_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    int result = self->tabIndex();
    lua_pushinteger(L, result);
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
    bool result = self->isHidden();
    lua_pushboolean(L, result);
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

static const char* WCompositeWidget_attributeValue_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_attributeValue_args[] = {WCompositeWidget_attributeValue_args0, NULL};

int luawt_WCompositeWidget_attributeValue(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_attributeValue_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    Wt::WString result = self->attributeValue(name);
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.attributeValue");
    }
}

static const char* WCompositeWidget_setPositionScheme_args0[] = {luawt_typeToStr<WCompositeWidget>(), "int", NULL};
static const char* const* const luawt_WCompositeWidget_setPositionScheme_args[] = {WCompositeWidget_setPositionScheme_args0, NULL};

int luawt_WCompositeWidget_setPositionScheme(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setPositionScheme_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    Wt::PositionScheme scheme = static_cast<Wt::PositionScheme>(lua_tointeger(L, 2));
    self->setPositionScheme(scheme);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setPositionScheme");
    }
}

static const char* WCompositeWidget_javaScriptMember_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_javaScriptMember_args[] = {WCompositeWidget_javaScriptMember_args0, NULL};

int luawt_WCompositeWidget_javaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_javaScriptMember_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    std::string result = self->javaScriptMember(name);
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.javaScriptMember");
    }
}

static const char* WCompositeWidget_toolTip_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_toolTip_args[] = {WCompositeWidget_toolTip_args0, NULL};

int luawt_WCompositeWidget_toolTip(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_toolTip_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    Wt::WString const & result = self->toolTip();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.toolTip");
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

static const char* WCompositeWidget_webWidget_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_webWidget_args[] = {WCompositeWidget_webWidget_args0, NULL};

int luawt_WCompositeWidget_webWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_webWidget_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    Wt::WWebWidget * result = self->webWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.webWidget");
    }
}

static const char* WCompositeWidget_setId_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_setId_args[] = {WCompositeWidget_setId_args0, NULL};

int luawt_WCompositeWidget_setId(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setId_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string id = std::string(raw2);
    self->setId(id);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setId");
    }
}

static const char* WCompositeWidget_hasStyleClass_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_hasStyleClass_args[] = {WCompositeWidget_hasStyleClass_args0, NULL};

int luawt_WCompositeWidget_hasStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_hasStyleClass_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString styleClass = Wt::WString(raw2);
    bool result = self->hasStyleClass(styleClass);
    lua_pushboolean(L, result);
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
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    Wt::WWidget * result = self->findById(name);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.findById");
    }
}

static const char* WCompositeWidget_setToolTip_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* WCompositeWidget_setToolTip_args1[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", "int", NULL};
static const char* const* const luawt_WCompositeWidget_setToolTip_args[] = {WCompositeWidget_setToolTip_args0, WCompositeWidget_setToolTip_args1, NULL};

int luawt_WCompositeWidget_setToolTip(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setToolTip_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setToolTip(text);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(lua_tointeger(L, 3));
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
    bool result = self->isPopup();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.isPopup");
    }
}

static const char* WCompositeWidget_removeStyleClass_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", NULL};
static const char* WCompositeWidget_removeStyleClass_args1[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", "bool", NULL};
static const char* const* const luawt_WCompositeWidget_removeStyleClass_args[] = {WCompositeWidget_removeStyleClass_args0, WCompositeWidget_removeStyleClass_args1, NULL};

int luawt_WCompositeWidget_removeStyleClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_removeStyleClass_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString styleClass = Wt::WString(raw2);
    self->removeStyleClass(styleClass);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
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

static const char* WCompositeWidget_setJavaScriptMember_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_setJavaScriptMember_args[] = {WCompositeWidget_setJavaScriptMember_args0, NULL};

int luawt_WCompositeWidget_setJavaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_setJavaScriptMember_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string value = std::string(raw3);
    self->setJavaScriptMember(name, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setJavaScriptMember");
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
    bool result = self->isVisible();
    lua_pushboolean(L, result);
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
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString styleClass = Wt::WString(raw2);
    self->addStyleClass(styleClass);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
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
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString value = Wt::WString(raw3);
    self->setAttributeValue(name, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.setAttributeValue");
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

static const char* WCompositeWidget_isEnabled_args0[] = {luawt_typeToStr<WCompositeWidget>(), NULL};
static const char* const* const luawt_WCompositeWidget_isEnabled_args[] = {WCompositeWidget_isEnabled_args0, NULL};

int luawt_WCompositeWidget_isEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_isEnabled_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    bool result = self->isEnabled();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.isEnabled");
    }
}

static const char* WCompositeWidget_callJavaScriptMember_args0[] = {luawt_typeToStr<WCompositeWidget>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WCompositeWidget_callJavaScriptMember_args[] = {WCompositeWidget_callJavaScriptMember_args0, NULL};

int luawt_WCompositeWidget_callJavaScriptMember(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCompositeWidget_callJavaScriptMember_args);
    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string args = std::string(raw3);
    self->callJavaScriptMember(name, args);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCompositeWidget.callJavaScriptMember");
    }
}


static const luaL_Reg luawt_WCompositeWidget_methods[] = {
    METHOD(WCompositeWidget, id),
    METHOD(WCompositeWidget, setPositionScheme),
    METHOD(WCompositeWidget, positionScheme),
    METHOD(WCompositeWidget, setFloatSide),
    METHOD(WCompositeWidget, floatSide),
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
    METHOD(WCompositeWidget, verticalAlignment),
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
