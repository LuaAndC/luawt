#include "boost-xtime.hpp"

#include <Wt/WComboBox>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

static const char* WComboBox_make_args0[] = {NULL};
static const char* WComboBox_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WComboBox_make_args[] = {WComboBox_make_args0, WComboBox_make_args1, NULL};

int luawt_WComboBox_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_make_args);
    if (index == 0) {
    WComboBox * l_result = new WComboBox();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WComboBox");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WComboBox * l_result = new WComboBox(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.make");
    }
}

static const char* WComboBox_count_args0[] = {luawt_typeToStr<WComboBox>(), NULL};
static const char* const* const luawt_WComboBox_count_args[] = {WComboBox_count_args0, NULL};

int luawt_WComboBox_count(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_count_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    int l_result = self->count();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.count");
    }
}

static const char* WComboBox_itemText_args0[] = {luawt_typeToStr<WComboBox>(), "int", NULL};
static const char* const* const luawt_WComboBox_itemText_args[] = {WComboBox_itemText_args0, NULL};

int luawt_WComboBox_itemText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_itemText_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    Wt::WString const l_result = self->itemText(index);
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.itemText");
    }
}

static const char* WComboBox_setItemText_args0[] = {luawt_typeToStr<WComboBox>(), "int", "char const *", NULL};
static const char* const* const luawt_WComboBox_setItemText_args[] = {WComboBox_setItemText_args0, NULL};

int luawt_WComboBox_setItemText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_setItemText_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString text = Wt::WString(raw3);
    self->setItemText(index, text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.setItemText");
    }
}

static const char* WComboBox_insertItem_args0[] = {luawt_typeToStr<WComboBox>(), "int", "char const *", NULL};
static const char* const* const luawt_WComboBox_insertItem_args[] = {WComboBox_insertItem_args0, NULL};

int luawt_WComboBox_insertItem(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_insertItem_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString text = Wt::WString(raw3);
    self->insertItem(index, text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.insertItem");
    }
}

static const char* WComboBox_clear_args0[] = {luawt_typeToStr<WComboBox>(), NULL};
static const char* const* const luawt_WComboBox_clear_args[] = {WComboBox_clear_args0, NULL};

int luawt_WComboBox_clear(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_clear_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    self->clear();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.clear");
    }
}

static const char* WComboBox_addItem_args0[] = {luawt_typeToStr<WComboBox>(), "char const *", NULL};
static const char* const* const luawt_WComboBox_addItem_args[] = {WComboBox_addItem_args0, NULL};

int luawt_WComboBox_addItem(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_addItem_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->addItem(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.addItem");
    }
}

static const char* WComboBox_findText_args0[] = {luawt_typeToStr<WComboBox>(), "char const *", NULL};
static const char* WComboBox_findText_args1[] = {luawt_typeToStr<WComboBox>(), "char const *", "int", NULL};
static const char* const* const luawt_WComboBox_findText_args[] = {WComboBox_findText_args0, WComboBox_findText_args1, NULL};

int luawt_WComboBox_findText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_findText_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    int l_result = self->findText(text);
    lua_pushinteger(L, l_result);
    return 1;

    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    Wt::WFlags<Wt::MatchFlag> flags = static_cast<Wt::MatchFlag>(lua_tointeger(L, 3));
    int l_result = self->findText(text, flags);
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.findText");
    }
}

static const char* WComboBox_refresh_args0[] = {luawt_typeToStr<WComboBox>(), NULL};
static const char* const* const luawt_WComboBox_refresh_args[] = {WComboBox_refresh_args0, NULL};

int luawt_WComboBox_refresh(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_refresh_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.refresh");
    }
}

static const char* WComboBox_currentText_args0[] = {luawt_typeToStr<WComboBox>(), NULL};
static const char* const* const luawt_WComboBox_currentText_args[] = {WComboBox_currentText_args0, NULL};

int luawt_WComboBox_currentText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_currentText_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    Wt::WString const l_result = self->currentText();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.currentText");
    }
}

static const char* WComboBox_currentIndex_args0[] = {luawt_typeToStr<WComboBox>(), NULL};
static const char* const* const luawt_WComboBox_currentIndex_args[] = {WComboBox_currentIndex_args0, NULL};

int luawt_WComboBox_currentIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_currentIndex_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    int l_result = self->currentIndex();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.currentIndex");
    }
}

static const char* WComboBox_setCurrentIndex_args0[] = {luawt_typeToStr<WComboBox>(), "int", NULL};
static const char* const* const luawt_WComboBox_setCurrentIndex_args[] = {WComboBox_setCurrentIndex_args0, NULL};

int luawt_WComboBox_setCurrentIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_setCurrentIndex_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    self->setCurrentIndex(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.setCurrentIndex");
    }
}

static const char* WComboBox_removeItem_args0[] = {luawt_typeToStr<WComboBox>(), "int", NULL};
static const char* const* const luawt_WComboBox_removeItem_args[] = {WComboBox_removeItem_args0, NULL};

int luawt_WComboBox_removeItem(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_removeItem_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    self->removeItem(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.removeItem");
    }
}

static const char* WComboBox_setValueText_args0[] = {luawt_typeToStr<WComboBox>(), "char const *", NULL};
static const char* const* const luawt_WComboBox_setValueText_args[] = {WComboBox_setValueText_args0, NULL};

int luawt_WComboBox_setValueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_setValueText_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString value = Wt::WString(raw2);
    self->setValueText(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.setValueText");
    }
}

static const char* WComboBox_setModelColumn_args0[] = {luawt_typeToStr<WComboBox>(), "int", NULL};
static const char* const* const luawt_WComboBox_setModelColumn_args[] = {WComboBox_setModelColumn_args0, NULL};

int luawt_WComboBox_setModelColumn(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_setModelColumn_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    self->setModelColumn(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.setModelColumn");
    }
}

static const char* WComboBox_valueText_args0[] = {luawt_typeToStr<WComboBox>(), NULL};
static const char* const* const luawt_WComboBox_valueText_args[] = {WComboBox_valueText_args0, NULL};

int luawt_WComboBox_valueText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WComboBox_valueText_args);
    WComboBox* self = luawt_checkFromLua<WComboBox>(L, 1);
    if (index == 0) {
    Wt::WString l_result = self->valueText();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WComboBox.valueText");
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
    METHOD(WComboBox, findText),
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
