#include "boost-xtime.hpp"

#include <Wt/WGoogleMap>
#include <Wt/WContainerWidget>

#include "globals.hpp"

static const char* WGoogleMap_make_args0[] = {"int", NULL};
static const char* WGoogleMap_make_args1[] = {"int", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WGoogleMap_make_args2[] = {NULL};
static const char* WGoogleMap_make_args3[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WGoogleMap_make_args[] = {WGoogleMap_make_args0, WGoogleMap_make_args1, WGoogleMap_make_args2, WGoogleMap_make_args3, NULL};

int luawt_WGoogleMap_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_make_args);
    if (index == 0) {
    Wt::WGoogleMap::ApiVersion version = static_cast<Wt::WGoogleMap::ApiVersion>(lua_tointeger(L, 1));
    WGoogleMap * result = new WGoogleMap(version);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WGoogleMap::ApiVersion version = static_cast<Wt::WGoogleMap::ApiVersion>(lua_tointeger(L, 1));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WGoogleMap * result = new WGoogleMap(version, parent);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
    WGoogleMap * result = new WGoogleMap();
    luawt_toLua(L, result);
    return 1;

    } else if (index == 3) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WGoogleMap * result = new WGoogleMap(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.make");
    }
}

static const char* WGoogleMap_enableDoubleClickZoom_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_enableDoubleClickZoom_args[] = {WGoogleMap_enableDoubleClickZoom_args0, NULL};

int luawt_WGoogleMap_enableDoubleClickZoom(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_enableDoubleClickZoom_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->enableDoubleClickZoom();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.enableDoubleClickZoom");
    }
}

static const char* WGoogleMap_zoomOut_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_zoomOut_args[] = {WGoogleMap_zoomOut_args0, NULL};

int luawt_WGoogleMap_zoomOut(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_zoomOut_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->zoomOut();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.zoomOut");
    }
}

static const char* WGoogleMap_apiVersion_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_apiVersion_args[] = {WGoogleMap_apiVersion_args0, NULL};

int luawt_WGoogleMap_apiVersion(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_apiVersion_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    Wt::WGoogleMap::ApiVersion result = self->apiVersion();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.apiVersion");
    }
}

static const char* WGoogleMap_enableScrollWheelZoom_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_enableScrollWheelZoom_args[] = {WGoogleMap_enableScrollWheelZoom_args0, NULL};

int luawt_WGoogleMap_enableScrollWheelZoom(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_enableScrollWheelZoom_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->enableScrollWheelZoom();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.enableScrollWheelZoom");
    }
}

static const char* WGoogleMap_setZoom_args0[] = {luawt_typeToStr<WGoogleMap>(), "int", NULL};
static const char* const* const luawt_WGoogleMap_setZoom_args[] = {WGoogleMap_setZoom_args0, NULL};

int luawt_WGoogleMap_setZoom(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_setZoom_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    int level = lua_tointeger(L, 2);
    self->setZoom(level);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.setZoom");
    }
}

static const char* WGoogleMap_disableDragging_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_disableDragging_args[] = {WGoogleMap_disableDragging_args0, NULL};

int luawt_WGoogleMap_disableDragging(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_disableDragging_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->disableDragging();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.disableDragging");
    }
}

static const char* WGoogleMap_enableDragging_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_enableDragging_args[] = {WGoogleMap_enableDragging_args0, NULL};

int luawt_WGoogleMap_enableDragging(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_enableDragging_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->enableDragging();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.enableDragging");
    }
}

static const char* WGoogleMap_setMapTypeControl_args0[] = {luawt_typeToStr<WGoogleMap>(), "int", NULL};
static const char* const* const luawt_WGoogleMap_setMapTypeControl_args[] = {WGoogleMap_setMapTypeControl_args0, NULL};

int luawt_WGoogleMap_setMapTypeControl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_setMapTypeControl_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    Wt::WGoogleMap::MapTypeControl type = static_cast<Wt::WGoogleMap::MapTypeControl>(lua_tointeger(L, 2));
    self->setMapTypeControl(type);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.setMapTypeControl");
    }
}

static const char* WGoogleMap_disableScrollWheelZoom_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_disableScrollWheelZoom_args[] = {WGoogleMap_disableScrollWheelZoom_args0, NULL};

int luawt_WGoogleMap_disableScrollWheelZoom(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_disableScrollWheelZoom_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->disableScrollWheelZoom();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.disableScrollWheelZoom");
    }
}

static const char* WGoogleMap_returnToSavedPosition_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_returnToSavedPosition_args[] = {WGoogleMap_returnToSavedPosition_args0, NULL};

int luawt_WGoogleMap_returnToSavedPosition(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_returnToSavedPosition_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->returnToSavedPosition();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.returnToSavedPosition");
    }
}

static const char* WGoogleMap_enableGoogleBar_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_enableGoogleBar_args[] = {WGoogleMap_enableGoogleBar_args0, NULL};

int luawt_WGoogleMap_enableGoogleBar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_enableGoogleBar_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->enableGoogleBar();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.enableGoogleBar");
    }
}

static const char* WGoogleMap_savePosition_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_savePosition_args[] = {WGoogleMap_savePosition_args0, NULL};

int luawt_WGoogleMap_savePosition(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_savePosition_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->savePosition();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.savePosition");
    }
}

static const char* WGoogleMap_checkResize_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_checkResize_args[] = {WGoogleMap_checkResize_args0, NULL};

int luawt_WGoogleMap_checkResize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_checkResize_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->checkResize();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.checkResize");
    }
}

static const char* WGoogleMap_disableGoogleBar_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_disableGoogleBar_args[] = {WGoogleMap_disableGoogleBar_args0, NULL};

int luawt_WGoogleMap_disableGoogleBar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_disableGoogleBar_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->disableGoogleBar();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.disableGoogleBar");
    }
}

static const char* WGoogleMap_disableDoubleClickZoom_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_disableDoubleClickZoom_args[] = {WGoogleMap_disableDoubleClickZoom_args0, NULL};

int luawt_WGoogleMap_disableDoubleClickZoom(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_disableDoubleClickZoom_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->disableDoubleClickZoom();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.disableDoubleClickZoom");
    }
}

static const char* WGoogleMap_zoomIn_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_zoomIn_args[] = {WGoogleMap_zoomIn_args0, NULL};

int luawt_WGoogleMap_zoomIn(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_zoomIn_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->zoomIn();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.zoomIn");
    }
}

static const char* WGoogleMap_clearOverlays_args0[] = {luawt_typeToStr<WGoogleMap>(), NULL};
static const char* const* const luawt_WGoogleMap_clearOverlays_args[] = {WGoogleMap_clearOverlays_args0, NULL};

int luawt_WGoogleMap_clearOverlays(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGoogleMap_clearOverlays_args);
    WGoogleMap* self = luawt_checkFromLua<WGoogleMap>(L, 1);
    if (index == 0) {
    self->clearOverlays();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGoogleMap.clearOverlays");
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
