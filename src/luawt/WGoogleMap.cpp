#include "boost-xtime.hpp"

#include <Wt/WGoogleMap>
#include <Wt/WContainerWidget>

#include "globals.hpp"

int luawt_WGoogleMap_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WGoogleMap * result = new WGoogleMap(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    Wt::WGoogleMap::ApiVersion version = static_cast<Wt::WGoogleMap::ApiVersion>(lua_tointeger(L, 1));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WGoogleMap * result = new WGoogleMap(version, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.make: %d", argc);
    }
}

int luawt_WGoogleMap_enableDoubleClickZoom(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->enableDoubleClickZoom();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.enableDoubleClickZoom: %d", argc);
    }
}

int luawt_WGoogleMap_zoomOut(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->zoomOut();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.zoomOut: %d", argc);
    }
}

int luawt_WGoogleMap_apiVersion(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    Wt::WGoogleMap::ApiVersion result = self->apiVersion();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.apiVersion: %d", argc);
    }
}

int luawt_WGoogleMap_enableScrollWheelZoom(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->enableScrollWheelZoom();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.enableScrollWheelZoom: %d", argc);
    }
}

int luawt_WGoogleMap_setZoom(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 1) {
    int level = lua_tointeger(L, 2);
    self->setZoom(level);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.setZoom: %d", argc);
    }
}

int luawt_WGoogleMap_disableDragging(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->disableDragging();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.disableDragging: %d", argc);
    }
}

int luawt_WGoogleMap_enableDragging(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->enableDragging();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.enableDragging: %d", argc);
    }
}

int luawt_WGoogleMap_setMapTypeControl(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 1) {
    Wt::WGoogleMap::MapTypeControl type = static_cast<Wt::WGoogleMap::MapTypeControl>(lua_tointeger(L, 2));
    self->setMapTypeControl(type);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.setMapTypeControl: %d", argc);
    }
}

int luawt_WGoogleMap_disableScrollWheelZoom(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->disableScrollWheelZoom();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.disableScrollWheelZoom: %d", argc);
    }
}

int luawt_WGoogleMap_returnToSavedPosition(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->returnToSavedPosition();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.returnToSavedPosition: %d", argc);
    }
}

int luawt_WGoogleMap_enableGoogleBar(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->enableGoogleBar();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.enableGoogleBar: %d", argc);
    }
}

int luawt_WGoogleMap_savePosition(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->savePosition();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.savePosition: %d", argc);
    }
}

int luawt_WGoogleMap_checkResize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->checkResize();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.checkResize: %d", argc);
    }
}

int luawt_WGoogleMap_disableGoogleBar(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->disableGoogleBar();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.disableGoogleBar: %d", argc);
    }
}

int luawt_WGoogleMap_disableDoubleClickZoom(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->disableDoubleClickZoom();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.disableDoubleClickZoom: %d", argc);
    }
}

int luawt_WGoogleMap_zoomIn(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->zoomIn();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.zoomIn: %d", argc);
    }
}

int luawt_WGoogleMap_clearOverlays(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
        if (argc == 0) {
    self->clearOverlays();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGoogleMap.clearOverlays: %d", argc);
    }
}


static const luaL_Reg luawt_WGoogleMap_methods[] = {
    METHOD(WGoogleMap, clearOverlays),
    METHOD(WGoogleMap, setZoom),
    METHOD(WGoogleMap, zoomIn),
    METHOD(WGoogleMap, zoomOut),
    METHOD(WGoogleMap, savePosition),
    METHOD(WGoogleMap, returnToSavedPosition),
    METHOD(WGoogleMap, checkResize),
    METHOD(WGoogleMap, enableDragging),
    METHOD(WGoogleMap, disableDragging),
    METHOD(WGoogleMap, enableDoubleClickZoom),
    METHOD(WGoogleMap, disableDoubleClickZoom),
    METHOD(WGoogleMap, enableGoogleBar),
    METHOD(WGoogleMap, disableGoogleBar),
    METHOD(WGoogleMap, enableScrollWheelZoom),
    METHOD(WGoogleMap, disableScrollWheelZoom),
    METHOD(WGoogleMap, setMapTypeControl),
    METHOD(WGoogleMap, apiVersion),
    {NULL, NULL},
};

void luawt_WGoogleMap(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WGoogleMap,
        L,
        wrap<luawt_WGoogleMap_make>::func,
        0,
        luawt_WGoogleMap_methods,
        base
    );
}
