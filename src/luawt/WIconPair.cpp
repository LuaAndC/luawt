#include "boost-xtime.hpp"

#include <Wt/WImage>
#include <Wt/WContainerWidget>
#include <Wt/WIconPair>

#include "globals.hpp"

int luawt_WIconPair_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 4) {
    char const * raw1 = lua_tostring(L, 1);
    std::string icon1URL = std::string(raw1);
    char const * raw2 = lua_tostring(L, 2);
    std::string icon2URL = std::string(raw2);
    bool clickIsSwitch = lua_toboolean(L, 3);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 4);
    WIconPair * result = new WIconPair(icon1URL, icon2URL, clickIsSwitch, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WIconPair.make: %d", argc);
    }
}

int luawt_WIconPair_icon1(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
        if (argc == 0) {
    Wt::WImage * result = self->icon1();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WIconPair.icon1: %d", argc);
    }
}

int luawt_WIconPair_icon2(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
        if (argc == 0) {
    Wt::WImage * result = self->icon2();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WIconPair.icon2: %d", argc);
    }
}

int luawt_WIconPair_showIcon1(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
        if (argc == 0) {
    self->showIcon1();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WIconPair.showIcon1: %d", argc);
    }
}

int luawt_WIconPair_showIcon2(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
        if (argc == 0) {
    self->showIcon2();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WIconPair.showIcon2: %d", argc);
    }
}

int luawt_WIconPair_state(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
        if (argc == 0) {
    int result = self->state();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WIconPair.state: %d", argc);
    }
}

int luawt_WIconPair_setState(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
        if (argc == 1) {
    int num = lua_tointeger(L, 2);
    self->setState(num);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WIconPair.setState: %d", argc);
    }
}

ADD_SIGNAL(icon1Clicked, WIconPair, Wt::WMouseEvent)
ADD_SIGNAL(icon2Clicked, WIconPair, Wt::WMouseEvent)

static const luaL_Reg luawt_WIconPair_methods[] = {
    METHOD(WIconPair, setState),
    METHOD(WIconPair, state),
    METHOD(WIconPair, icon1),
    METHOD(WIconPair, icon2),
    METHOD(WIconPair, showIcon1),
    METHOD(WIconPair, showIcon2),
    METHOD(WIconPair, icon1Clicked),
    METHOD(WIconPair, icon2Clicked),
    {NULL, NULL},
};

void luawt_WIconPair(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WIconPair,
        L,
        wrap<luawt_WIconPair_make>::func,
        0,
        luawt_WIconPair_methods,
        base
    );
}
