#include "boost-xtime.hpp"

#include <Wt/WToolBar>
#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WSplitButton>

#include "globals.hpp"

int luawt_WToolBar_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WToolBar * result = new WToolBar(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WToolBar.make: %d", argc);
    }
}

int luawt_WToolBar_setOrientation(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WToolBar* self = luawt_checkFromLua<WToolBar>(L, 1);
        if (argc == 1) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 2));
    self->setOrientation(orientation);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WToolBar.setOrientation: %d", argc);
    }
}

int luawt_WToolBar_count(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WToolBar* self = luawt_checkFromLua<WToolBar>(L, 1);
        if (argc == 0) {
    int result = self->count();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WToolBar.count: %d", argc);
    }
}

int luawt_WToolBar_addSeparator(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WToolBar* self = luawt_checkFromLua<WToolBar>(L, 1);
        if (argc == 0) {
    self->addSeparator();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WToolBar.addSeparator: %d", argc);
    }
}

int luawt_WToolBar_setCompact(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WToolBar* self = luawt_checkFromLua<WToolBar>(L, 1);
        if (argc == 1) {
    bool compact = lua_toboolean(L, 2);
    self->setCompact(compact);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WToolBar.setCompact: %d", argc);
    }
}

int luawt_WToolBar_addButton(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WToolBar* self = luawt_checkFromLua<WToolBar>(L, 1);
        if (argc == 2) {
    Wt::WSplitButton* button =
        luawt_checkFromLua<Wt::WSplitButton>(L, 2);
    Wt::AlignmentFlag alignmentFlag = static_cast<Wt::AlignmentFlag>(lua_tointeger(L, 3));
    self->addButton(button, alignmentFlag);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WToolBar.addButton: %d", argc);
    }
}

int luawt_WToolBar_isCompact(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WToolBar* self = luawt_checkFromLua<WToolBar>(L, 1);
        if (argc == 0) {
    bool result = self->isCompact();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WToolBar.isCompact: %d", argc);
    }
}


static const luaL_Reg luawt_WToolBar_methods[] = {
    METHOD(WToolBar, setOrientation),
    METHOD(WToolBar, addButton),
    METHOD(WToolBar, addButton),
    METHOD(WToolBar, addSeparator),
    METHOD(WToolBar, count),
    METHOD(WToolBar, setCompact),
    METHOD(WToolBar, isCompact),
    {NULL, NULL},
};

void luawt_WToolBar(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WToolBar,
        L,
        wrap<luawt_WToolBar_make>::func,
        0,
        luawt_WToolBar_methods,
        base
    );
}
