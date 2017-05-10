#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WCalendar>

#include "enums.hpp"
#include "globals.hpp"

static const char* WCalendar_make_args0[] = {NULL};
static const char* WCalendar_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WCalendar_make_args[] = {WCalendar_make_args0, WCalendar_make_args1, NULL};

int luawt_WCalendar_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_make_args);
    if (index == 0) {
    WCalendar * l_result = new WCalendar();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WCalendar");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WCalendar * l_result = new WCalendar(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.make");
    }
}

static const char* WCalendar_horizontalHeaderFormat_args0[] = {luawt_typeToStr<WCalendar>(), NULL};
static const char* const* const luawt_WCalendar_horizontalHeaderFormat_args[] = {WCalendar_horizontalHeaderFormat_args0, NULL};

int luawt_WCalendar_horizontalHeaderFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_horizontalHeaderFormat_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    Wt::WCalendar::HorizontalHeaderFormat l_result = self->horizontalHeaderFormat();
    luawt_returnEnum(L, luawt_enum_WCalendar_HorizontalHeaderFormat_str, luawt_enum_WCalendar_HorizontalHeaderFormat_val, l_result, "WCalendar::HorizontalHeaderFormat");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.horizontalHeaderFormat");
    }
}

static const char* WCalendar_browseToNextYear_args0[] = {luawt_typeToStr<WCalendar>(), NULL};
static const char* const* const luawt_WCalendar_browseToNextYear_args[] = {WCalendar_browseToNextYear_args0, NULL};

int luawt_WCalendar_browseToNextYear(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_browseToNextYear_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    self->browseToNextYear();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.browseToNextYear");
    }
}

static const char* WCalendar_setDayOfWeekLength_args0[] = {luawt_typeToStr<WCalendar>(), "int", NULL};
static const char* const* const luawt_WCalendar_setDayOfWeekLength_args[] = {WCalendar_setDayOfWeekLength_args0, NULL};

int luawt_WCalendar_setDayOfWeekLength(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_setDayOfWeekLength_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    int chars = lua_tointeger(L, 2);
    self->setDayOfWeekLength(chars);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.setDayOfWeekLength");
    }
}

static const char* WCalendar_setSelectionMode_args0[] = {luawt_typeToStr<WCalendar>(), "enum", NULL};
static const char* const* const luawt_WCalendar_setSelectionMode_args[] = {WCalendar_setSelectionMode_args0, NULL};

int luawt_WCalendar_setSelectionMode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_setSelectionMode_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    Wt::SelectionMode mode = static_cast<Wt::SelectionMode>(luawt_getEnum(
        L,
        luawt_enum_SelectionMode_str,
        luawt_enum_SelectionMode_val,
        2,
        "Wrong enum type in args of WCalendar.setSelectionMode"
    ));
    self->setSelectionMode(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.setSelectionMode");
    }
}

static const char* WCalendar_clearSelection_args0[] = {luawt_typeToStr<WCalendar>(), NULL};
static const char* const* const luawt_WCalendar_clearSelection_args[] = {WCalendar_clearSelection_args0, NULL};

int luawt_WCalendar_clearSelection(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_clearSelection_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    self->clearSelection();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.clearSelection");
    }
}

static const char* WCalendar_setHorizontalHeaderFormat_args0[] = {luawt_typeToStr<WCalendar>(), "enum", NULL};
static const char* const* const luawt_WCalendar_setHorizontalHeaderFormat_args[] = {WCalendar_setHorizontalHeaderFormat_args0, NULL};

int luawt_WCalendar_setHorizontalHeaderFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_setHorizontalHeaderFormat_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    Wt::WCalendar::HorizontalHeaderFormat format = static_cast<Wt::WCalendar::HorizontalHeaderFormat>(luawt_getEnum(
        L,
        luawt_enum_WCalendar_HorizontalHeaderFormat_str,
        luawt_enum_WCalendar_HorizontalHeaderFormat_val,
        2,
        "Wrong enum type in args of WCalendar.setHorizontalHeaderFormat"
    ));
    self->setHorizontalHeaderFormat(format);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.setHorizontalHeaderFormat");
    }
}

static const char* WCalendar_currentYear_args0[] = {luawt_typeToStr<WCalendar>(), NULL};
static const char* const* const luawt_WCalendar_currentYear_args[] = {WCalendar_currentYear_args0, NULL};

int luawt_WCalendar_currentYear(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_currentYear_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    int l_result = self->currentYear();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.currentYear");
    }
}

static const char* WCalendar_setSingleClickSelect_args0[] = {luawt_typeToStr<WCalendar>(), "bool", NULL};
static const char* const* const luawt_WCalendar_setSingleClickSelect_args[] = {WCalendar_setSingleClickSelect_args0, NULL};

int luawt_WCalendar_setSingleClickSelect(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_setSingleClickSelect_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    bool single = lua_toboolean(L, 2);
    self->setSingleClickSelect(single);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.setSingleClickSelect");
    }
}

static const char* WCalendar_browseToPreviousYear_args0[] = {luawt_typeToStr<WCalendar>(), NULL};
static const char* const* const luawt_WCalendar_browseToPreviousYear_args[] = {WCalendar_browseToPreviousYear_args0, NULL};

int luawt_WCalendar_browseToPreviousYear(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_browseToPreviousYear_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    self->browseToPreviousYear();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.browseToPreviousYear");
    }
}

static const char* WCalendar_setFirstDayOfWeek_args0[] = {luawt_typeToStr<WCalendar>(), "int", NULL};
static const char* const* const luawt_WCalendar_setFirstDayOfWeek_args[] = {WCalendar_setFirstDayOfWeek_args0, NULL};

int luawt_WCalendar_setFirstDayOfWeek(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_setFirstDayOfWeek_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    int dayOfWeek = lua_tointeger(L, 2);
    self->setFirstDayOfWeek(dayOfWeek);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.setFirstDayOfWeek");
    }
}

static const char* WCalendar_browseToPreviousMonth_args0[] = {luawt_typeToStr<WCalendar>(), NULL};
static const char* const* const luawt_WCalendar_browseToPreviousMonth_args[] = {WCalendar_browseToPreviousMonth_args0, NULL};

int luawt_WCalendar_browseToPreviousMonth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_browseToPreviousMonth_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    self->browseToPreviousMonth();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.browseToPreviousMonth");
    }
}

static const char* WCalendar_browseToNextMonth_args0[] = {luawt_typeToStr<WCalendar>(), NULL};
static const char* const* const luawt_WCalendar_browseToNextMonth_args[] = {WCalendar_browseToNextMonth_args0, NULL};

int luawt_WCalendar_browseToNextMonth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_browseToNextMonth_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    self->browseToNextMonth();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.browseToNextMonth");
    }
}

static const char* WCalendar_currentMonth_args0[] = {luawt_typeToStr<WCalendar>(), NULL};
static const char* const* const luawt_WCalendar_currentMonth_args[] = {WCalendar_currentMonth_args0, NULL};

int luawt_WCalendar_currentMonth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_currentMonth_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    int l_result = self->currentMonth();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.currentMonth");
    }
}

static const char* WCalendar_setMultipleSelection_args0[] = {luawt_typeToStr<WCalendar>(), "bool", NULL};
static const char* const* const luawt_WCalendar_setMultipleSelection_args[] = {WCalendar_setMultipleSelection_args0, NULL};

int luawt_WCalendar_setMultipleSelection(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WCalendar_setMultipleSelection_args);
    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
    if (index == 0) {
    bool multiple = lua_toboolean(L, 2);
    self->setMultipleSelection(multiple);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WCalendar.setMultipleSelection");
    }
}


static const luaL_Reg luawt_WCalendar_methods[] = {
    METHOD(WCalendar, setSelectionMode),
    METHOD(WCalendar, browseToPreviousYear),
    METHOD(WCalendar, browseToPreviousMonth),
    METHOD(WCalendar, browseToNextYear),
    METHOD(WCalendar, browseToNextMonth),
    METHOD(WCalendar, currentMonth),
    METHOD(WCalendar, currentYear),
    METHOD(WCalendar, clearSelection),
    METHOD(WCalendar, setHorizontalHeaderFormat),
    METHOD(WCalendar, horizontalHeaderFormat),
    METHOD(WCalendar, setFirstDayOfWeek),
    METHOD(WCalendar, setMultipleSelection),
    METHOD(WCalendar, setSingleClickSelect),
    METHOD(WCalendar, setDayOfWeekLength),
    {NULL, NULL},
};

void luawt_WCalendar(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WCalendar,
        L,
        wrap<luawt_WCalendar_make>::func,
        0,
        luawt_WCalendar_methods,
        base
    );
}
