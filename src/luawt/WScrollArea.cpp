#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WScrollArea>

#include "globals.hpp"

int luawt_WScrollArea_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WScrollArea * result = new WScrollArea(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WScrollArea.make: %d", argc);
    }
}

int luawt_WScrollArea_setVerticalScrollBarPolicy(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
        if (argc == 1) {
    Wt::WScrollArea::ScrollBarPolicy scrollBarPolicy = static_cast<Wt::WScrollArea::ScrollBarPolicy>(lua_tointeger(L, 2));
    self->setVerticalScrollBarPolicy(scrollBarPolicy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WScrollArea.setVerticalScrollBarPolicy: %d", argc);
    }
}

int luawt_WScrollArea_horizontalScrollBarPolicy(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
        if (argc == 0) {
    Wt::WScrollArea::ScrollBarPolicy result = self->horizontalScrollBarPolicy();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WScrollArea.horizontalScrollBarPolicy: %d", argc);
    }
}

int luawt_WScrollArea_setScrollBarPolicy(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
        if (argc == 1) {
    Wt::WScrollArea::ScrollBarPolicy scrollBarPolicy = static_cast<Wt::WScrollArea::ScrollBarPolicy>(lua_tointeger(L, 2));
    self->setScrollBarPolicy(scrollBarPolicy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WScrollArea.setScrollBarPolicy: %d", argc);
    }
}

int luawt_WScrollArea_setHorizontalScrollBarPolicy(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
        if (argc == 1) {
    Wt::WScrollArea::ScrollBarPolicy scrollBarPolicy = static_cast<Wt::WScrollArea::ScrollBarPolicy>(lua_tointeger(L, 2));
    self->setHorizontalScrollBarPolicy(scrollBarPolicy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WScrollArea.setHorizontalScrollBarPolicy: %d", argc);
    }
}

int luawt_WScrollArea_verticalScrollBarPolicy(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WScrollArea* self = luawt_checkFromLua<WScrollArea>(L, 1);
        if (argc == 0) {
    Wt::WScrollArea::ScrollBarPolicy result = self->verticalScrollBarPolicy();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WScrollArea.verticalScrollBarPolicy: %d", argc);
    }
}


static const luaL_Reg luawt_WScrollArea_methods[] = {
    METHOD(WScrollArea, setScrollBarPolicy),
    METHOD(WScrollArea, setHorizontalScrollBarPolicy),
    METHOD(WScrollArea, setVerticalScrollBarPolicy),
    METHOD(WScrollArea, horizontalScrollBarPolicy),
    METHOD(WScrollArea, verticalScrollBarPolicy),
    {NULL, NULL},
};

void luawt_WScrollArea(lua_State* L) {
    const char* base = luawt_typeToStr<WWebWidget>();
    assert(base);
    DECLARE_CLASS(
        WScrollArea,
        L,
        wrap<luawt_WScrollArea_make>::func,
        0,
        luawt_WScrollArea_methods,
        base
    );
}
