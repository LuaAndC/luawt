#include "boost-xtime.hpp"

#include <Wt/WWebWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WWebWidget_load(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    self->load();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.load: %d", argc);
    }
}

int luawt_WWebWidget_setZIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    int zIndex = lua_tointeger(L, 2);
    self->setZIndex(zIndex);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setZIndex: %d", argc);
    }
}

int luawt_WWebWidget_doJavaScript(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string javascript = std::string(raw2);
    self->doJavaScript(javascript);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.doJavaScript: %d", argc);
    }
}

int luawt_WWebWidget_setFormObject(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    bool how = lua_toboolean(L, 2);
    self->setFormObject(how);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setFormObject: %d", argc);
    }
}

int luawt_WWebWidget_floatSide(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    Wt::Side result = self->floatSide();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.floatSide: %d", argc);
    }
}

int luawt_WWebWidget_resolveRelativeUrl(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    std::string result = self->resolveRelativeUrl(url);
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.resolveRelativeUrl: %d", argc);
    }
}

int luawt_WWebWidget_styleClass(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->styleClass();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.styleClass: %d", argc);
    }
}

int luawt_WWebWidget_hiddenKeepsGeometry(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    bool result = self->hiddenKeepsGeometry();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.hiddenKeepsGeometry: %d", argc);
    }
}

int luawt_WWebWidget_loaded(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    bool result = self->loaded();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.loaded: %d", argc);
    }
}

int luawt_WWebWidget_id(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    std::string const result = self->id();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.id: %d", argc);
    }
}

int luawt_WWebWidget_isInline(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isInline();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.isInline: %d", argc);
    }
}

int luawt_WWebWidget_canOptimizeUpdates(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    bool result = self->canOptimizeUpdates();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.canOptimizeUpdates: %d", argc);
    }
}

int luawt_WWebWidget_setStyleClass(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString styleClass = Wt::WString(raw2);
    self->setStyleClass(styleClass);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setStyleClass: %d", argc);
    }
}

int luawt_WWebWidget_isRendered(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isRendered();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.isRendered: %d", argc);
    }
}

int luawt_WWebWidget_isDisabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isDisabled();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.isDisabled: %d", argc);
    }
}

int luawt_WWebWidget_setPopup(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    bool popup = lua_toboolean(L, 2);
    self->setPopup(popup);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setPopup: %d", argc);
    }
}

int luawt_WWebWidget_setFloatSide(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    Wt::Side s = static_cast<Wt::Side>(lua_tointeger(L, 2));
    self->setFloatSide(s);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setFloatSide: %d", argc);
    }
}

int luawt_WWebWidget_verticalAlignment(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    Wt::AlignmentFlag result = self->verticalAlignment();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.verticalAlignment: %d", argc);
    }
}

int luawt_WWebWidget_positionScheme(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    Wt::PositionScheme result = self->positionScheme();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.positionScheme: %d", argc);
    }
}

int luawt_WWebWidget_tabIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    int result = self->tabIndex();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.tabIndex: %d", argc);
    }
}

int luawt_WWebWidget_isHidden(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isHidden();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.isHidden: %d", argc);
    }
}

int luawt_WWebWidget_setSelectable(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    bool selectable = lua_toboolean(L, 2);
    self->setSelectable(selectable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setSelectable: %d", argc);
    }
}

int luawt_WWebWidget_attributeValue(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    Wt::WString result = self->attributeValue(name);
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.attributeValue: %d", argc);
    }
}

int luawt_WWebWidget_setPositionScheme(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    Wt::PositionScheme scheme = static_cast<Wt::PositionScheme>(lua_tointeger(L, 2));
    self->setPositionScheme(scheme);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setPositionScheme: %d", argc);
    }
}

int luawt_WWebWidget_domElementType(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    Wt::DomElementType result = self->domElementType();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.domElementType: %d", argc);
    }
}

int luawt_WWebWidget_javaScriptMember(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    std::string result = self->javaScriptMember(name);
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.javaScriptMember: %d", argc);
    }
}

int luawt_WWebWidget_toolTip(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->toolTip();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.toolTip: %d", argc);
    }
}

int luawt_WWebWidget_zIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    int result = self->zIndex();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.zIndex: %d", argc);
    }
}

int luawt_WWebWidget_setLoadLaterWhenInvisible(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    bool arg0 = lua_toboolean(L, 2);
    self->setLoadLaterWhenInvisible(arg0);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setLoadLaterWhenInvisible: %d", argc);
    }
}

int luawt_WWebWidget_setInline(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    bool isInline = lua_toboolean(L, 2);
    self->setInline(isInline);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setInline: %d", argc);
    }
}

int luawt_WWebWidget_setId(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string id = std::string(raw2);
    self->setId(id);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setId: %d", argc);
    }
}

int luawt_WWebWidget_setToolTip(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(lua_tointeger(L, 3));
    self->setToolTip(text, textFormat);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setToolTip: %d", argc);
    }
}

int luawt_WWebWidget_escapeText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    bool newlinesToo = lua_toboolean(L, 3);
    Wt::WString result = self->escapeText(text, newlinesToo);
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.escapeText: %d", argc);
    }
}

int luawt_WWebWidget_isPopup(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isPopup();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.isPopup: %d", argc);
    }
}

int luawt_WWebWidget_removeStyleClass(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString styleClass = Wt::WString(raw2);
    bool force = lua_toboolean(L, 3);
    self->removeStyleClass(styleClass, force);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.removeStyleClass: %d", argc);
    }
}

int luawt_WWebWidget_refresh(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.refresh: %d", argc);
    }
}

int luawt_WWebWidget_setJavaScriptMember(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string value = std::string(raw3);
    self->setJavaScriptMember(name, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setJavaScriptMember: %d", argc);
    }
}

int luawt_WWebWidget_setDisabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    bool disabled = lua_toboolean(L, 2);
    self->setDisabled(disabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setDisabled: %d", argc);
    }
}

int luawt_WWebWidget_setHiddenKeepsGeometry(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->setHiddenKeepsGeometry(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setHiddenKeepsGeometry: %d", argc);
    }
}

int luawt_WWebWidget_isVisible(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isVisible();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.isVisible: %d", argc);
    }
}

int luawt_WWebWidget_addStyleClass(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString styleClass = Wt::WString(raw2);
    bool force = lua_toboolean(L, 3);
    self->addStyleClass(styleClass, force);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.addStyleClass: %d", argc);
    }
}

int luawt_WWebWidget_setAttributeValue(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString value = Wt::WString(raw3);
    self->setAttributeValue(name, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setAttributeValue: %d", argc);
    }
}

int luawt_WWebWidget_setTabIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    self->setTabIndex(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.setTabIndex: %d", argc);
    }
}

int luawt_WWebWidget_isEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isEnabled();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.isEnabled: %d", argc);
    }
}

int luawt_WWebWidget_callJavaScriptMember(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WWebWidget* self = luawt_checkFromLua<WWebWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string args = std::string(raw3);
    self->callJavaScriptMember(name, args);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WWebWidget.callJavaScriptMember: %d", argc);
    }
}


static const luaL_Reg luawt_WWebWidget_methods[] = {
    METHOD(WWebWidget, setPositionScheme),
    METHOD(WWebWidget, positionScheme),
    METHOD(WWebWidget, setFloatSide),
    METHOD(WWebWidget, floatSide),
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
    METHOD(WWebWidget, verticalAlignment),
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
