#include "boost-xtime.hpp"

#include <Wt/WImage>
#include <Wt/WContainerWidget>
#include <Wt/WIconPair>

#include "globals.hpp"

static const char* WIconPair_make_args0[] = {"char const *", "char const *", NULL};
static const char* WIconPair_make_args1[] = {"char const *", "char const *", "bool", NULL};
static const char* WIconPair_make_args2[] = {"char const *", "char const *", "bool", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WIconPair_make_args[] = {WIconPair_make_args0, WIconPair_make_args1, WIconPair_make_args2, NULL};

int luawt_WIconPair_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WIconPair_make_args);
    if (index == 0) {
    char const * raw1 = lua_tostring(L, 1);
    std::string icon1URL = std::string(raw1);
    char const * raw2 = lua_tostring(L, 2);
    std::string icon2URL = std::string(raw2);
    WIconPair * result = new WIconPair(icon1URL, icon2URL);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    char const * raw1 = lua_tostring(L, 1);
    std::string icon1URL = std::string(raw1);
    char const * raw2 = lua_tostring(L, 2);
    std::string icon2URL = std::string(raw2);
    bool clickIsSwitch = lua_toboolean(L, 3);
    WIconPair * result = new WIconPair(icon1URL, icon2URL, clickIsSwitch);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
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
        return luaL_error(L, "Wrong arguments for WIconPair.make");
    }
}

static const char* WIconPair_icon1_args0[] = {luawt_typeToStr<WIconPair>(), NULL};
static const char* const* const luawt_WIconPair_icon1_args[] = {WIconPair_icon1_args0, NULL};

int luawt_WIconPair_icon1(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WIconPair_icon1_args);
    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
    if (index == 0) {
    Wt::WImage * result = self->icon1();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WIconPair.icon1");
    }
}

static const char* WIconPair_icon2_args0[] = {luawt_typeToStr<WIconPair>(), NULL};
static const char* const* const luawt_WIconPair_icon2_args[] = {WIconPair_icon2_args0, NULL};

int luawt_WIconPair_icon2(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WIconPair_icon2_args);
    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
    if (index == 0) {
    Wt::WImage * result = self->icon2();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WIconPair.icon2");
    }
}

static const char* WIconPair_showIcon1_args0[] = {luawt_typeToStr<WIconPair>(), NULL};
static const char* const* const luawt_WIconPair_showIcon1_args[] = {WIconPair_showIcon1_args0, NULL};

int luawt_WIconPair_showIcon1(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WIconPair_showIcon1_args);
    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
    if (index == 0) {
    self->showIcon1();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WIconPair.showIcon1");
    }
}

static const char* WIconPair_showIcon2_args0[] = {luawt_typeToStr<WIconPair>(), NULL};
static const char* const* const luawt_WIconPair_showIcon2_args[] = {WIconPair_showIcon2_args0, NULL};

int luawt_WIconPair_showIcon2(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WIconPair_showIcon2_args);
    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
    if (index == 0) {
    self->showIcon2();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WIconPair.showIcon2");
    }
}

static const char* WIconPair_state_args0[] = {luawt_typeToStr<WIconPair>(), NULL};
static const char* const* const luawt_WIconPair_state_args[] = {WIconPair_state_args0, NULL};

int luawt_WIconPair_state(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WIconPair_state_args);
    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
    if (index == 0) {
    int result = self->state();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WIconPair.state");
    }
}

static const char* WIconPair_setState_args0[] = {luawt_typeToStr<WIconPair>(), "int", NULL};
static const char* const* const luawt_WIconPair_setState_args[] = {WIconPair_setState_args0, NULL};

int luawt_WIconPair_setState(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WIconPair_setState_args);
    WIconPair* self = luawt_checkFromLua<WIconPair>(L, 1);
    if (index == 0) {
    int num = lua_tointeger(L, 2);
    self->setState(num);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WIconPair.setState");
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
