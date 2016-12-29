#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WCalendar>

#include "globals.hpp"

int luawt_WCalendar_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WCalendar * result = new WCalendar(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.make: %d", argc);
    }
}

int luawt_WCalendar_horizontalHeaderFormat(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 0) {
    Wt::WCalendar::HorizontalHeaderFormat result = self->horizontalHeaderFormat();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.horizontalHeaderFormat: %d", argc);
    }
}

int luawt_WCalendar_browseToNextYear(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 0) {
    self->browseToNextYear();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.browseToNextYear: %d", argc);
    }
}

int luawt_WCalendar_setDayOfWeekLength(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 1) {
    int chars = lua_tointeger(L, 2);
    self->setDayOfWeekLength(chars);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.setDayOfWeekLength: %d", argc);
    }
}

int luawt_WCalendar_setSelectionMode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 1) {
    Wt::SelectionMode mode = static_cast<Wt::SelectionMode>(lua_tointeger(L, 2));
    self->setSelectionMode(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.setSelectionMode: %d", argc);
    }
}

int luawt_WCalendar_clearSelection(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 0) {
    self->clearSelection();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.clearSelection: %d", argc);
    }
}

int luawt_WCalendar_setHorizontalHeaderFormat(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 1) {
    Wt::WCalendar::HorizontalHeaderFormat format = static_cast<Wt::WCalendar::HorizontalHeaderFormat>(lua_tointeger(L, 2));
    self->setHorizontalHeaderFormat(format);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.setHorizontalHeaderFormat: %d", argc);
    }
}

int luawt_WCalendar_currentYear(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 0) {
    int result = self->currentYear();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.currentYear: %d", argc);
    }
}

int luawt_WCalendar_setSingleClickSelect(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 1) {
    bool single = lua_toboolean(L, 2);
    self->setSingleClickSelect(single);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.setSingleClickSelect: %d", argc);
    }
}

int luawt_WCalendar_browseToPreviousYear(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 0) {
    self->browseToPreviousYear();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.browseToPreviousYear: %d", argc);
    }
}

int luawt_WCalendar_setFirstDayOfWeek(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 1) {
    int dayOfWeek = lua_tointeger(L, 2);
    self->setFirstDayOfWeek(dayOfWeek);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.setFirstDayOfWeek: %d", argc);
    }
}

int luawt_WCalendar_browseToPreviousMonth(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 0) {
    self->browseToPreviousMonth();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.browseToPreviousMonth: %d", argc);
    }
}

int luawt_WCalendar_browseToNextMonth(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 0) {
    self->browseToNextMonth();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.browseToNextMonth: %d", argc);
    }
}

int luawt_WCalendar_currentMonth(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 0) {
    int result = self->currentMonth();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.currentMonth: %d", argc);
    }
}

int luawt_WCalendar_setMultipleSelection(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCalendar* self = luawt_checkFromLua<WCalendar>(L, 1);
        if (argc == 1) {
    bool multiple = lua_toboolean(L, 2);
    self->setMultipleSelection(multiple);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCalendar.setMultipleSelection: %d", argc);
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
