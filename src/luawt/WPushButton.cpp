#include "boost-xtime.hpp"

#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WPopupMenu>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WPushButton_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WPushButton * result = new WPushButton(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WPushButton * result = new WPushButton(text, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.make: %d", argc);
    }
}

int luawt_WPushButton_refresh(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.refresh: %d", argc);
    }
}

int luawt_WPushButton_ref(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    std::string result = self->ref();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.ref: %d", argc);
    }
}

int luawt_WPushButton_setFirstFocus(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    bool result = self->setFirstFocus();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.setFirstFocus: %d", argc);
    }
}

int luawt_WPushButton_setDefault(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->setDefault(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.setDefault: %d", argc);
    }
}

int luawt_WPushButton_setChecked(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    self->setChecked();
    return 0;
    
    } else     if (argc == 1) {
    bool checked = lua_toboolean(L, 2);
    self->setChecked(checked);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.setChecked: %d", argc);
    }
}

int luawt_WPushButton_setText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    bool result = self->setText(text);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.setText: %d", argc);
    }
}

int luawt_WPushButton_menu(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    Wt::WPopupMenu * result = self->menu();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.menu: %d", argc);
    }
}

int luawt_WPushButton_linkTarget(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    Wt::AnchorTarget result = self->linkTarget();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.linkTarget: %d", argc);
    }
}

int luawt_WPushButton_setMenu(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 1) {
    Wt::WPopupMenu* menu =
        luawt_checkFromLua<Wt::WPopupMenu>(L, 2);
    self->setMenu(menu);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.setMenu: %d", argc);
    }
}

int luawt_WPushButton_isChecked(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    bool result = self->isChecked();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.isChecked: %d", argc);
    }
}

int luawt_WPushButton_isCheckable(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    bool result = self->isCheckable();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.isCheckable: %d", argc);
    }
}

int luawt_WPushButton_setLinkTarget(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 1) {
    Wt::AnchorTarget target = static_cast<Wt::AnchorTarget>(lua_tointeger(L, 2));
    self->setLinkTarget(target);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.setLinkTarget: %d", argc);
    }
}

int luawt_WPushButton_setValueText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString value = Wt::WString(raw2);
    self->setValueText(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.setValueText: %d", argc);
    }
}

int luawt_WPushButton_text(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.text: %d", argc);
    }
}

int luawt_WPushButton_setUnChecked(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    self->setUnChecked();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.setUnChecked: %d", argc);
    }
}

int luawt_WPushButton_setRef(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    self->setRef(url);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.setRef: %d", argc);
    }
}

int luawt_WPushButton_textFormat(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    Wt::TextFormat result = self->textFormat();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.textFormat: %d", argc);
    }
}

int luawt_WPushButton_setCheckable(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 1) {
    bool checkable = lua_toboolean(L, 2);
    self->setCheckable(checkable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.setCheckable: %d", argc);
    }
}

int luawt_WPushButton_setTextFormat(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 1) {
    Wt::TextFormat format = static_cast<Wt::TextFormat>(lua_tointeger(L, 2));
    bool result = self->setTextFormat(format);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.setTextFormat: %d", argc);
    }
}

int luawt_WPushButton_isDefault(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    bool result = self->isDefault();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.isDefault: %d", argc);
    }
}

int luawt_WPushButton_valueText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WPushButton* self = luawt_checkFromLua<WPushButton>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->valueText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WPushButton.valueText: %d", argc);
    }
}

ADD_SIGNAL(checked, WPushButton, Wt::NoClass)
ADD_SIGNAL(unChecked, WPushButton, Wt::NoClass)
ADD_SIGNAL(changed, WPushButton, Wt::NoClass)
ADD_SIGNAL(selected, WPushButton, Wt::NoClass)
ADD_SIGNAL(blurred, WPushButton, Wt::NoClass)
ADD_SIGNAL(focussed, WPushButton, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WPushButton, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WPushButton, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WPushButton, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WPushButton, Wt::NoClass)
ADD_SIGNAL(escapePressed, WPushButton, Wt::NoClass)
ADD_SIGNAL(clicked, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WPushButton, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WPushButton, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WPushButton, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WPushButton, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WPushButton, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WPushButton, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WPushButton, Wt::WGestureEvent)

static const luaL_Reg luawt_WPushButton_methods[] = {
    METHOD(WPushButton, setDefault),
    METHOD(WPushButton, isDefault),
    METHOD(WPushButton, setCheckable),
    METHOD(WPushButton, isCheckable),
    METHOD(WPushButton, setChecked),
    METHOD(WPushButton, setChecked),
    METHOD(WPushButton, setUnChecked),
    METHOD(WPushButton, isChecked),
    METHOD(WPushButton, setText),
    METHOD(WPushButton, text),
    METHOD(WPushButton, setTextFormat),
    METHOD(WPushButton, textFormat),
    METHOD(WPushButton, setRef),
    METHOD(WPushButton, ref),
    METHOD(WPushButton, valueText),
    METHOD(WPushButton, setValueText),
    METHOD(WPushButton, setLinkTarget),
    METHOD(WPushButton, linkTarget),
    METHOD(WPushButton, setMenu),
    METHOD(WPushButton, menu),
    METHOD(WPushButton, refresh),
    METHOD(WPushButton, setFirstFocus),
    METHOD(WPushButton, checked),
    METHOD(WPushButton, unChecked),
    METHOD(WPushButton, changed),
    METHOD(WPushButton, selected),
    METHOD(WPushButton, blurred),
    METHOD(WPushButton, focussed),
    METHOD(WPushButton, keyWentDown),
    METHOD(WPushButton, keyPressed),
    METHOD(WPushButton, keyWentUp),
    METHOD(WPushButton, enterPressed),
    METHOD(WPushButton, escapePressed),
    METHOD(WPushButton, clicked),
    METHOD(WPushButton, doubleClicked),
    METHOD(WPushButton, mouseWentDown),
    METHOD(WPushButton, mouseWentUp),
    METHOD(WPushButton, mouseWentOut),
    METHOD(WPushButton, mouseWentOver),
    METHOD(WPushButton, mouseMoved),
    METHOD(WPushButton, mouseDragged),
    METHOD(WPushButton, mouseWheel),
    METHOD(WPushButton, touchStarted),
    METHOD(WPushButton, touchEnded),
    METHOD(WPushButton, touchMoved),
    METHOD(WPushButton, gestureStarted),
    METHOD(WPushButton, gestureChanged),
    METHOD(WPushButton, gestureEnded),
    {NULL, NULL},
};

void luawt_WPushButton(lua_State* L) {
    const char* base = luawt_typeToStr<WFormWidget>();
    assert(base);
    DECLARE_CLASS(
        WPushButton,
        L,
        wrap<luawt_WPushButton_make>::func,
        0,
        luawt_WPushButton_methods,
        base
    );
}
