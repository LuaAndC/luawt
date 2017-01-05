#include "boost-xtime.hpp"

#include <Wt/WCompositeWidget>
#include <Wt/WWebWidget>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WCompositeWidget_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WCompositeWidget * result = new WCompositeWidget(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.make: %d", argc);
    }
}

int luawt_WCompositeWidget_load(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    self->load();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.load: %d", argc);
    }
}

int luawt_WCompositeWidget_doJavaScript(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string js = std::string(raw2);
    self->doJavaScript(js);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.doJavaScript: %d", argc);
    }
}

int luawt_WCompositeWidget_floatSide(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    Wt::Side result = self->floatSide();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.floatSide: %d", argc);
    }
}

int luawt_WCompositeWidget_styleClass(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->styleClass();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.styleClass: %d", argc);
    }
}

int luawt_WCompositeWidget_hiddenKeepsGeometry(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    bool result = self->hiddenKeepsGeometry();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.hiddenKeepsGeometry: %d", argc);
    }
}

int luawt_WCompositeWidget_loaded(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    bool result = self->loaded();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.loaded: %d", argc);
    }
}

int luawt_WCompositeWidget_id(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    std::string const result = self->id();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.id: %d", argc);
    }
}

int luawt_WCompositeWidget_isInline(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isInline();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.isInline: %d", argc);
    }
}

int luawt_WCompositeWidget_setStyleClass(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString styleClass = Wt::WString(raw2);
    self->setStyleClass(styleClass);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setStyleClass: %d", argc);
    }
}

int luawt_WCompositeWidget_isDisabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isDisabled();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.isDisabled: %d", argc);
    }
}

int luawt_WCompositeWidget_setPopup(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    bool popup = lua_toboolean(L, 2);
    self->setPopup(popup);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setPopup: %d", argc);
    }
}

int luawt_WCompositeWidget_setFloatSide(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    Wt::Side s = static_cast<Wt::Side>(lua_tointeger(L, 2));
    self->setFloatSide(s);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setFloatSide: %d", argc);
    }
}

int luawt_WCompositeWidget_propagateSetEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->propagateSetEnabled(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.propagateSetEnabled: %d", argc);
    }
}

int luawt_WCompositeWidget_verticalAlignment(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    Wt::AlignmentFlag result = self->verticalAlignment();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.verticalAlignment: %d", argc);
    }
}

int luawt_WCompositeWidget_positionScheme(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    Wt::PositionScheme result = self->positionScheme();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.positionScheme: %d", argc);
    }
}

int luawt_WCompositeWidget_tabIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    int result = self->tabIndex();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.tabIndex: %d", argc);
    }
}

int luawt_WCompositeWidget_isHidden(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isHidden();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.isHidden: %d", argc);
    }
}

int luawt_WCompositeWidget_setSelectable(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    bool selectable = lua_toboolean(L, 2);
    self->setSelectable(selectable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setSelectable: %d", argc);
    }
}

int luawt_WCompositeWidget_attributeValue(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    Wt::WString result = self->attributeValue(name);
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.attributeValue: %d", argc);
    }
}

int luawt_WCompositeWidget_setPositionScheme(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    Wt::PositionScheme scheme = static_cast<Wt::PositionScheme>(lua_tointeger(L, 2));
    self->setPositionScheme(scheme);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setPositionScheme: %d", argc);
    }
}

int luawt_WCompositeWidget_javaScriptMember(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    std::string result = self->javaScriptMember(name);
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.javaScriptMember: %d", argc);
    }
}

int luawt_WCompositeWidget_toolTip(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->toolTip();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.toolTip: %d", argc);
    }
}

int luawt_WCompositeWidget_setInline(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    bool isInline = lua_toboolean(L, 2);
    self->setInline(isInline);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setInline: %d", argc);
    }
}

int luawt_WCompositeWidget_webWidget(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    Wt::WWebWidget * result = self->webWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.webWidget: %d", argc);
    }
}

int luawt_WCompositeWidget_setId(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string id = std::string(raw2);
    self->setId(id);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setId: %d", argc);
    }
}

int luawt_WCompositeWidget_setToolTip(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(lua_tointeger(L, 3));
    self->setToolTip(text, textFormat);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setToolTip: %d", argc);
    }
}

int luawt_WCompositeWidget_isPopup(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isPopup();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.isPopup: %d", argc);
    }
}

int luawt_WCompositeWidget_removeStyleClass(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString styleClass = Wt::WString(raw2);
    bool force = lua_toboolean(L, 3);
    self->removeStyleClass(styleClass, force);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.removeStyleClass: %d", argc);
    }
}

int luawt_WCompositeWidget_refresh(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.refresh: %d", argc);
    }
}

int luawt_WCompositeWidget_setJavaScriptMember(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string value = std::string(raw3);
    self->setJavaScriptMember(name, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setJavaScriptMember: %d", argc);
    }
}

int luawt_WCompositeWidget_setDisabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    bool disabled = lua_toboolean(L, 2);
    self->setDisabled(disabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setDisabled: %d", argc);
    }
}

int luawt_WCompositeWidget_setHiddenKeepsGeometry(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->setHiddenKeepsGeometry(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setHiddenKeepsGeometry: %d", argc);
    }
}

int luawt_WCompositeWidget_isVisible(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isVisible();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.isVisible: %d", argc);
    }
}

int luawt_WCompositeWidget_addStyleClass(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString styleClass = Wt::WString(raw2);
    bool force = lua_toboolean(L, 3);
    self->addStyleClass(styleClass, force);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.addStyleClass: %d", argc);
    }
}

int luawt_WCompositeWidget_setAttributeValue(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString value = Wt::WString(raw3);
    self->setAttributeValue(name, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setAttributeValue: %d", argc);
    }
}

int luawt_WCompositeWidget_setTabIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    self->setTabIndex(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.setTabIndex: %d", argc);
    }
}

int luawt_WCompositeWidget_isEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 0) {
    bool result = self->isEnabled();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.isEnabled: %d", argc);
    }
}

int luawt_WCompositeWidget_callJavaScriptMember(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCompositeWidget* self = luawt_checkFromLua<WCompositeWidget>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string args = std::string(raw3);
    self->callJavaScriptMember(name, args);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCompositeWidget.callJavaScriptMember: %d", argc);
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
