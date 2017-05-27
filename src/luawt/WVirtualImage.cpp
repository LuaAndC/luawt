#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WVirtualImage>

#include "enums.hpp"
#include "globals.hpp"

static const char* WVirtualImage_make_args0[] = {"int", "int", "int", "int", NULL};
static const char* WVirtualImage_make_args1[] = {"int", "int", "int", "int", "int", NULL};
static const char* WVirtualImage_make_args2[] = {"int", "int", "int", "int", "int", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WVirtualImage_make_args[] = {WVirtualImage_make_args0, WVirtualImage_make_args1, WVirtualImage_make_args2, NULL};

int luawt_WVirtualImage_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_make_args);
    if (index == 0) {
        int viewPortWidth = lua_tointeger(L, 1);
        int viewPortHeight = lua_tointeger(L, 2);
        int64_t imageWidth = lua_tointeger(L, 3);
        int64_t imageHeight = lua_tointeger(L, 4);
        WVirtualImage* l_result = new WVirtualImage(viewPortWidth, viewPortHeight, imageWidth, imageHeight);
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WVirtualImage");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 1) {
        int viewPortWidth = lua_tointeger(L, 1);
        int viewPortHeight = lua_tointeger(L, 2);
        int64_t imageWidth = lua_tointeger(L, 3);
        int64_t imageHeight = lua_tointeger(L, 4);
        int gridImageSize = lua_tointeger(L, 5);
        WVirtualImage* l_result = new WVirtualImage(viewPortWidth, viewPortHeight, imageWidth, imageHeight, gridImageSize);
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WVirtualImage");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 2) {
        int viewPortWidth = lua_tointeger(L, 1);
        int viewPortHeight = lua_tointeger(L, 2);
        int64_t imageWidth = lua_tointeger(L, 3);
        int64_t imageHeight = lua_tointeger(L, 4);
        int gridImageSize = lua_tointeger(L, 5);
        Wt::WContainerWidget* parent =
            luawt_checkFromLua<Wt::WContainerWidget>(L, 6);
        WVirtualImage* l_result = new WVirtualImage(viewPortWidth, viewPortHeight, imageWidth, imageHeight, gridImageSize, parent);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.make");
    }
}

static const char* WVirtualImage_currentBottomRightY_args0[] = {luawt_typeToStr<WVirtualImage>(), NULL};
static const char* const* const luawt_WVirtualImage_currentBottomRightY_args[] = {WVirtualImage_currentBottomRightY_args0, NULL};

int luawt_WVirtualImage_currentBottomRightY(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_currentBottomRightY_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int64_t l_result = self->currentBottomRightY();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.currentBottomRightY");
    }
}

static const char* WVirtualImage_currentBottomRightX_args0[] = {luawt_typeToStr<WVirtualImage>(), NULL};
static const char* const* const luawt_WVirtualImage_currentBottomRightX_args[] = {WVirtualImage_currentBottomRightX_args0, NULL};

int luawt_WVirtualImage_currentBottomRightX(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_currentBottomRightX_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int64_t l_result = self->currentBottomRightX();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.currentBottomRightX");
    }
}

static const char* WVirtualImage_gridImageSize_args0[] = {luawt_typeToStr<WVirtualImage>(), NULL};
static const char* const* const luawt_WVirtualImage_gridImageSize_args[] = {WVirtualImage_gridImageSize_args0, NULL};

int luawt_WVirtualImage_gridImageSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_gridImageSize_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int l_result = self->gridImageSize();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.gridImageSize");
    }
}

static const char* WVirtualImage_enableDragging_args0[] = {luawt_typeToStr<WVirtualImage>(), NULL};
static const char* const* const luawt_WVirtualImage_enableDragging_args[] = {WVirtualImage_enableDragging_args0, NULL};

int luawt_WVirtualImage_enableDragging(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_enableDragging_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        self->enableDragging();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.enableDragging");
    }
}

static const char* WVirtualImage_viewPortWidth_args0[] = {luawt_typeToStr<WVirtualImage>(), NULL};
static const char* const* const luawt_WVirtualImage_viewPortWidth_args[] = {WVirtualImage_viewPortWidth_args0, NULL};

int luawt_WVirtualImage_viewPortWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_viewPortWidth_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int l_result = self->viewPortWidth();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.viewPortWidth");
    }
}

static const char* WVirtualImage_redrawAll_args0[] = {luawt_typeToStr<WVirtualImage>(), NULL};
static const char* const* const luawt_WVirtualImage_redrawAll_args[] = {WVirtualImage_redrawAll_args0, NULL};

int luawt_WVirtualImage_redrawAll(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_redrawAll_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        self->redrawAll();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.redrawAll");
    }
}

static const char* WVirtualImage_scrollTo_args0[] = {luawt_typeToStr<WVirtualImage>(), "int", "int", NULL};
static const char* const* const luawt_WVirtualImage_scrollTo_args[] = {WVirtualImage_scrollTo_args0, NULL};

int luawt_WVirtualImage_scrollTo(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_scrollTo_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int64_t x = lua_tointeger(L, 2);
        int64_t y = lua_tointeger(L, 3);
        self->scrollTo(x, y);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.scrollTo");
    }
}

static const char* WVirtualImage_imageHeight_args0[] = {luawt_typeToStr<WVirtualImage>(), NULL};
static const char* const* const luawt_WVirtualImage_imageHeight_args[] = {WVirtualImage_imageHeight_args0, NULL};

int luawt_WVirtualImage_imageHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_imageHeight_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int64_t l_result = self->imageHeight();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.imageHeight");
    }
}

static const char* WVirtualImage_imageWidth_args0[] = {luawt_typeToStr<WVirtualImage>(), NULL};
static const char* const* const luawt_WVirtualImage_imageWidth_args[] = {WVirtualImage_imageWidth_args0, NULL};

int luawt_WVirtualImage_imageWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_imageWidth_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int64_t l_result = self->imageWidth();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.imageWidth");
    }
}

static const char* WVirtualImage_currentTopLeftX_args0[] = {luawt_typeToStr<WVirtualImage>(), NULL};
static const char* const* const luawt_WVirtualImage_currentTopLeftX_args[] = {WVirtualImage_currentTopLeftX_args0, NULL};

int luawt_WVirtualImage_currentTopLeftX(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_currentTopLeftX_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int64_t l_result = self->currentTopLeftX();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.currentTopLeftX");
    }
}

static const char* WVirtualImage_currentTopLeftY_args0[] = {luawt_typeToStr<WVirtualImage>(), NULL};
static const char* const* const luawt_WVirtualImage_currentTopLeftY_args[] = {WVirtualImage_currentTopLeftY_args0, NULL};

int luawt_WVirtualImage_currentTopLeftY(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_currentTopLeftY_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int64_t l_result = self->currentTopLeftY();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.currentTopLeftY");
    }
}

static const char* WVirtualImage_resizeImage_args0[] = {luawt_typeToStr<WVirtualImage>(), "int", "int", NULL};
static const char* const* const luawt_WVirtualImage_resizeImage_args[] = {WVirtualImage_resizeImage_args0, NULL};

int luawt_WVirtualImage_resizeImage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_resizeImage_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int64_t w = lua_tointeger(L, 2);
        int64_t h = lua_tointeger(L, 3);
        self->resizeImage(w, h);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.resizeImage");
    }
}

static const char* WVirtualImage_scroll_args0[] = {luawt_typeToStr<WVirtualImage>(), "int", "int", NULL};
static const char* const* const luawt_WVirtualImage_scroll_args[] = {WVirtualImage_scroll_args0, NULL};

int luawt_WVirtualImage_scroll(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_scroll_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int64_t dx = lua_tointeger(L, 2);
        int64_t dy = lua_tointeger(L, 3);
        self->scroll(dx, dy);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.scroll");
    }
}

static const char* WVirtualImage_viewPortHeight_args0[] = {luawt_typeToStr<WVirtualImage>(), NULL};
static const char* const* const luawt_WVirtualImage_viewPortHeight_args[] = {WVirtualImage_viewPortHeight_args0, NULL};

int luawt_WVirtualImage_viewPortHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WVirtualImage_viewPortHeight_args);
    WVirtualImage* self = luawt_checkFromLua<WVirtualImage>(L, 1);
    if (index == 0) {
        int l_result = self->viewPortHeight();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WVirtualImage.viewPortHeight");
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
