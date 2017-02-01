#include "boost-xtime.hpp"

#include <Wt/WInteractWidget>
#include <Wt/WCalendar>
#include <Wt/WString>
#include <Wt/WLineEdit>
#include <Wt/WDatePicker>
#include <Wt/WContainerWidget>

#include "globals.hpp"

static const char* WDatePicker_make_args0[] = {NULL};
static const char* WDatePicker_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WDatePicker_make_args2[] = {luawt_typeToStr<Wt::WLineEdit>(), NULL};
static const char* WDatePicker_make_args3[] = {luawt_typeToStr<Wt::WLineEdit>(), luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WDatePicker_make_args4[] = {luawt_typeToStr<Wt::WInteractWidget>(), luawt_typeToStr<Wt::WLineEdit>(), NULL};
static const char* WDatePicker_make_args5[] = {luawt_typeToStr<Wt::WInteractWidget>(), luawt_typeToStr<Wt::WLineEdit>(), luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WDatePicker_make_args[] = {WDatePicker_make_args0, WDatePicker_make_args1, WDatePicker_make_args2, WDatePicker_make_args3, WDatePicker_make_args4, WDatePicker_make_args5, NULL};

int luawt_WDatePicker_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDatePicker_make_args);
    if (index == 0) {
    WDatePicker * l_result = new WDatePicker();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WDatePicker");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WDatePicker * l_result = new WDatePicker(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    Wt::WLineEdit* forEdit =
        luawt_checkFromLua<Wt::WLineEdit>(L, 1);
    WDatePicker * l_result = new WDatePicker(forEdit);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WDatePicker");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 3) {
    Wt::WLineEdit* forEdit =
        luawt_checkFromLua<Wt::WLineEdit>(L, 1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WDatePicker * l_result = new WDatePicker(forEdit, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 4) {
    Wt::WInteractWidget* displayWidget =
        luawt_checkFromLua<Wt::WInteractWidget>(L, 1);
    Wt::WLineEdit* forEdit =
        luawt_checkFromLua<Wt::WLineEdit>(L, 2);
    WDatePicker * l_result = new WDatePicker(displayWidget, forEdit);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WDatePicker");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 5) {
    Wt::WInteractWidget* displayWidget =
        luawt_checkFromLua<Wt::WInteractWidget>(L, 1);
    Wt::WLineEdit* forEdit =
        luawt_checkFromLua<Wt::WLineEdit>(L, 2);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 3);
    WDatePicker * l_result = new WDatePicker(displayWidget, forEdit, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDatePicker.make");
    }
}

static const char* WDatePicker_setEnabled_args0[] = {luawt_typeToStr<WDatePicker>(), "bool", NULL};
static const char* const* const luawt_WDatePicker_setEnabled_args[] = {WDatePicker_setEnabled_args0, NULL};

int luawt_WDatePicker_setEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDatePicker_setEnabled_args);
    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
    if (index == 0) {
    bool enabled = lua_toboolean(L, 2);
    self->setEnabled(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDatePicker.setEnabled");
    }
}

static const char* WDatePicker_setGlobalPopup_args0[] = {luawt_typeToStr<WDatePicker>(), "bool", NULL};
static const char* const* const luawt_WDatePicker_setGlobalPopup_args[] = {WDatePicker_setGlobalPopup_args0, NULL};

int luawt_WDatePicker_setGlobalPopup(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDatePicker_setGlobalPopup_args);
    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
    if (index == 0) {
    bool global = lua_toboolean(L, 2);
    self->setGlobalPopup(global);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDatePicker.setGlobalPopup");
    }
}

static const char* WDatePicker_format_args0[] = {luawt_typeToStr<WDatePicker>(), NULL};
static const char* const* const luawt_WDatePicker_format_args[] = {WDatePicker_format_args0, NULL};

int luawt_WDatePicker_format(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDatePicker_format_args);
    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
    if (index == 0) {
    Wt::WString const & l_result = self->format();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDatePicker.format");
    }
}

static const char* WDatePicker_setFormat_args0[] = {luawt_typeToStr<WDatePicker>(), "char const *", NULL};
static const char* const* const luawt_WDatePicker_setFormat_args[] = {WDatePicker_setFormat_args0, NULL};

int luawt_WDatePicker_setFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDatePicker_setFormat_args);
    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString format = Wt::WString(raw2);
    self->setFormat(format);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDatePicker.setFormat");
    }
}

static const char* WDatePicker_displayWidget_args0[] = {luawt_typeToStr<WDatePicker>(), NULL};
static const char* const* const luawt_WDatePicker_displayWidget_args[] = {WDatePicker_displayWidget_args0, NULL};

int luawt_WDatePicker_displayWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDatePicker_displayWidget_args);
    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
    if (index == 0) {
    Wt::WInteractWidget * l_result = self->displayWidget();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDatePicker.displayWidget");
    }
}

static const char* WDatePicker_setDisabled_args0[] = {luawt_typeToStr<WDatePicker>(), "bool", NULL};
static const char* const* const luawt_WDatePicker_setDisabled_args[] = {WDatePicker_setDisabled_args0, NULL};

int luawt_WDatePicker_setDisabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDatePicker_setDisabled_args);
    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
    if (index == 0) {
    bool disabled = lua_toboolean(L, 2);
    self->setDisabled(disabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDatePicker.setDisabled");
    }
}

static const char* WDatePicker_setPopupVisible_args0[] = {luawt_typeToStr<WDatePicker>(), "bool", NULL};
static const char* const* const luawt_WDatePicker_setPopupVisible_args[] = {WDatePicker_setPopupVisible_args0, NULL};

int luawt_WDatePicker_setPopupVisible(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDatePicker_setPopupVisible_args);
    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
    if (index == 0) {
    bool visible = lua_toboolean(L, 2);
    self->setPopupVisible(visible);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDatePicker.setPopupVisible");
    }
}

static const char* WDatePicker_calendar_args0[] = {luawt_typeToStr<WDatePicker>(), NULL};
static const char* const* const luawt_WDatePicker_calendar_args[] = {WDatePicker_calendar_args0, NULL};

int luawt_WDatePicker_calendar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDatePicker_calendar_args);
    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
    if (index == 0) {
    Wt::WCalendar * l_result = self->calendar();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDatePicker.calendar");
    }
}

static const char* WDatePicker_lineEdit_args0[] = {luawt_typeToStr<WDatePicker>(), NULL};
static const char* const* const luawt_WDatePicker_lineEdit_args[] = {WDatePicker_lineEdit_args0, NULL};

int luawt_WDatePicker_lineEdit(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDatePicker_lineEdit_args);
    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
    if (index == 0) {
    Wt::WLineEdit * l_result = self->lineEdit();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDatePicker.lineEdit");
    }
}


static const luaL_Reg luawt_WDatePicker_methods[] = {
    METHOD(WDatePicker, setFormat),
    METHOD(WDatePicker, format),
    METHOD(WDatePicker, calendar),
    METHOD(WDatePicker, lineEdit),
    METHOD(WDatePicker, displayWidget),
    METHOD(WDatePicker, setEnabled),
    METHOD(WDatePicker, setDisabled),
    METHOD(WDatePicker, setGlobalPopup),
    METHOD(WDatePicker, setPopupVisible),
    {NULL, NULL},
};

void luawt_WDatePicker(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WDatePicker,
        L,
        wrap<luawt_WDatePicker_make>::func,
        0,
        luawt_WDatePicker_methods,
        base
    );
}
