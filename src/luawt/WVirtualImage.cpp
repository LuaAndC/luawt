#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WVirtualImage>

#include "globals.hpp"

int luawt_WVirtualImage_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 6) {
    int viewPortWidth = lua_tointeger(L, 1);
    int viewPortHeight = lua_tointeger(L, 2);
    int64_t imageWidth = lua_tointeger(L, 3);
    int64_t imageHeight = lua_tointeger(L, 4);
    int gridImageSize = lua_tointeger(L, 5);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 6);
    WVirtualImage * result = new WVirtualImage(viewPortWidth, viewPortHeight, imageWidth, imageHeight, gridImageSize, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.make: %d", argc);
    }
}

int luawt_WVirtualImage_currentBottomRightY(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 0) {
    int64_t result = self->currentBottomRightY();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.currentBottomRightY: %d", argc);
    }
}

int luawt_WVirtualImage_currentBottomRightX(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 0) {
    int64_t result = self->currentBottomRightX();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.currentBottomRightX: %d", argc);
    }
}

int luawt_WVirtualImage_gridImageSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 0) {
    int result = self->gridImageSize();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.gridImageSize: %d", argc);
    }
}

int luawt_WVirtualImage_enableDragging(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 0) {
    self->enableDragging();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.enableDragging: %d", argc);
    }
}

int luawt_WVirtualImage_viewPortWidth(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 0) {
    int result = self->viewPortWidth();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.viewPortWidth: %d", argc);
    }
}

int luawt_WVirtualImage_redrawAll(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 0) {
    self->redrawAll();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.redrawAll: %d", argc);
    }
}

int luawt_WVirtualImage_scrollTo(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 2) {
    int64_t x = lua_tointeger(L, 2);
    int64_t y = lua_tointeger(L, 3);
    self->scrollTo(x, y);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.scrollTo: %d", argc);
    }
}

int luawt_WVirtualImage_imageHeight(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 0) {
    int64_t result = self->imageHeight();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.imageHeight: %d", argc);
    }
}

int luawt_WVirtualImage_imageWidth(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 0) {
    int64_t result = self->imageWidth();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.imageWidth: %d", argc);
    }
}

int luawt_WVirtualImage_currentTopLeftX(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 0) {
    int64_t result = self->currentTopLeftX();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.currentTopLeftX: %d", argc);
    }
}

int luawt_WVirtualImage_currentTopLeftY(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 0) {
    int64_t result = self->currentTopLeftY();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.currentTopLeftY: %d", argc);
    }
}

int luawt_WVirtualImage_resizeImage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 2) {
    int64_t w = lua_tointeger(L, 2);
    int64_t h = lua_tointeger(L, 3);
    self->resizeImage(w, h);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.resizeImage: %d", argc);
    }
}

int luawt_WVirtualImage_scroll(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 2) {
    int64_t dx = lua_tointeger(L, 2);
    int64_t dy = lua_tointeger(L, 3);
    self->scroll(dx, dy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.scroll: %d", argc);
    }
}

int luawt_WVirtualImage_viewPortHeight(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
        if (argc == 0) {
    int result = self->viewPortHeight();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WVirtualImage.viewPortHeight: %d", argc);
    }
}


static const luaL_Reg luawt_WVirtualImage_methods[] = {
    METHOD(WVirtualImage, redrawAll),
    METHOD(WVirtualImage, enableDragging),
    METHOD(WVirtualImage, scroll),
    METHOD(WVirtualImage, scrollTo),
    METHOD(WVirtualImage, imageWidth),
    METHOD(WVirtualImage, imageHeight),
    METHOD(WVirtualImage, resizeImage),
    METHOD(WVirtualImage, viewPortWidth),
    METHOD(WVirtualImage, viewPortHeight),
    METHOD(WVirtualImage, gridImageSize),
    METHOD(WVirtualImage, currentTopLeftX),
    METHOD(WVirtualImage, currentTopLeftY),
    METHOD(WVirtualImage, currentBottomRightX),
    METHOD(WVirtualImage, currentBottomRightY),
    {NULL, NULL},
};

void luawt_WVirtualImage(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WVirtualImage,
        L,
        wrap<luawt_WVirtualImage_make>::func,
        0,
        luawt_WVirtualImage_methods,
        base
    );
}
