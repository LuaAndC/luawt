#include "boost-xtime.hpp"

#include <Wt/WComboBox>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WComboBox_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WComboBox * result = new WComboBox(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.make: %d", argc);
    }
}

int luawt_WComboBox_count(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 0) {
    int result = self->count();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.count: %d", argc);
    }
}

int luawt_WComboBox_itemText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    Wt::WString const result = self->itemText(index);
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.itemText: %d", argc);
    }
}

int luawt_WComboBox_setItemText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 2) {
    int index = lua_tointeger(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString text = Wt::WString(raw3);
    self->setItemText(index, text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.setItemText: %d", argc);
    }
}

int luawt_WComboBox_insertItem(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 2) {
    int index = lua_tointeger(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString text = Wt::WString(raw3);
    self->insertItem(index, text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.insertItem: %d", argc);
    }
}

int luawt_WComboBox_clear(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 0) {
    self->clear();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.clear: %d", argc);
    }
}

int luawt_WComboBox_addItem(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->addItem(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.addItem: %d", argc);
    }
}

int luawt_WComboBox_refresh(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.refresh: %d", argc);
    }
}

int luawt_WComboBox_currentText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 0) {
    Wt::WString const result = self->currentText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.currentText: %d", argc);
    }
}

int luawt_WComboBox_currentIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 0) {
    int result = self->currentIndex();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.currentIndex: %d", argc);
    }
}

int luawt_WComboBox_setCurrentIndex(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    self->setCurrentIndex(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.setCurrentIndex: %d", argc);
    }
}

int luawt_WComboBox_removeItem(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    self->removeItem(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.removeItem: %d", argc);
    }
}

int luawt_WComboBox_setValueText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString value = Wt::WString(raw2);
    self->setValueText(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.setValueText: %d", argc);
    }
}

int luawt_WComboBox_setModelColumn(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 1) {
    int index = lua_tointeger(L, 2);
    self->setModelColumn(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.setModelColumn: %d", argc);
    }
}

int luawt_WComboBox_valueText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->valueText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WComboBox.valueText: %d", argc);
    }
}

ADD_SIGNAL(changed, WComboBox, Wt::NoClass)
ADD_SIGNAL(selected, WComboBox, Wt::NoClass)
ADD_SIGNAL(blurred, WComboBox, Wt::NoClass)
ADD_SIGNAL(focussed, WComboBox, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WComboBox, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WComboBox, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WComboBox, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WComboBox, Wt::NoClass)
ADD_SIGNAL(escapePressed, WComboBox, Wt::NoClass)
ADD_SIGNAL(clicked, WComboBox, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WComboBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WComboBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WComboBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WComboBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WComboBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WComboBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WComboBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WComboBox, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WComboBox, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WComboBox, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WComboBox, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WComboBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WComboBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WComboBox, Wt::WGestureEvent)

static const luaL_Reg luawt_WComboBox_methods[] = {
    METHOD(WComboBox, addItem),
    METHOD(WComboBox, count),
    METHOD(WComboBox, currentIndex),
    METHOD(WComboBox, insertItem),
    METHOD(WComboBox, removeItem),
    METHOD(WComboBox, setCurrentIndex),
    METHOD(WComboBox, setItemText),
    METHOD(WComboBox, currentText),
    METHOD(WComboBox, itemText),
    METHOD(WComboBox, setModelColumn),
    METHOD(WComboBox, valueText),
    METHOD(WComboBox, setValueText),
    METHOD(WComboBox, refresh),
    METHOD(WComboBox, clear),
    METHOD(WComboBox, changed),
    METHOD(WComboBox, selected),
    METHOD(WComboBox, blurred),
    METHOD(WComboBox, focussed),
    METHOD(WComboBox, keyWentDown),
    METHOD(WComboBox, keyPressed),
    METHOD(WComboBox, keyWentUp),
    METHOD(WComboBox, enterPressed),
    METHOD(WComboBox, escapePressed),
    METHOD(WComboBox, clicked),
    METHOD(WComboBox, doubleClicked),
    METHOD(WComboBox, mouseWentDown),
    METHOD(WComboBox, mouseWentUp),
    METHOD(WComboBox, mouseWentOut),
    METHOD(WComboBox, mouseWentOver),
    METHOD(WComboBox, mouseMoved),
    METHOD(WComboBox, mouseDragged),
    METHOD(WComboBox, mouseWheel),
    METHOD(WComboBox, touchStarted),
    METHOD(WComboBox, touchEnded),
    METHOD(WComboBox, touchMoved),
    METHOD(WComboBox, gestureStarted),
    METHOD(WComboBox, gestureChanged),
    METHOD(WComboBox, gestureEnded),
    {NULL, NULL},
};

void luawt_WComboBox(lua_State* L) {
    const char* base = luawt_typeToStr<WFormWidget>();
    assert(base);
    DECLARE_CLASS(
        WComboBox,
        L,
        wrap<luawt_WComboBox_make>::func,
        0,
        luawt_WComboBox_methods,
        base
    );
}
