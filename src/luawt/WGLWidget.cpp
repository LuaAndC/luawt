#include "boost-xtime.hpp"

#include <Wt/WLength>
#include <Wt/WVideo>
#include <Wt/WWidget>
#include <Wt/WImage>
#include <Wt/WContainerWidget>
#include <Wt/WGLWidget>

#include "globals.hpp"

static const char* WGLWidget_make_args0[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WGLWidget_make_args[] = {WGLWidget_make_args0, NULL};

int luawt_WGLWidget_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_make_args);
    if (index == 0) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WGLWidget * l_result = new WGLWidget(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.make");
    }
}

static const char* WGLWidget_activeTexture_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_activeTexture_args[] = {WGLWidget_activeTexture_args0, NULL};

int luawt_WGLWidget_activeTexture(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_activeTexture_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum texture = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->activeTexture(texture);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.activeTexture");
    }
}

static const char* WGLWidget_blendColor_args0[] = {luawt_typeToStr<WGLWidget>(), "double", "double", "double", "double", NULL};
static const char* const* const luawt_WGLWidget_blendColor_args[] = {WGLWidget_blendColor_args0, NULL};

int luawt_WGLWidget_blendColor(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_blendColor_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    double red = lua_tonumber(L, 2);
    double green = lua_tonumber(L, 3);
    double blue = lua_tonumber(L, 4);
    double alpha = lua_tonumber(L, 5);
    self->blendColor(red, green, blue, alpha);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.blendColor");
    }
}

static const char* WGLWidget_debugger_args0[] = {luawt_typeToStr<WGLWidget>(), NULL};
static const char* const* const luawt_WGLWidget_debugger_args[] = {WGLWidget_debugger_args0, NULL};

int luawt_WGLWidget_debugger(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_debugger_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    self->debugger();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.debugger");
    }
}

static const char* WGLWidget_stencilMaskSeparate_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", NULL};
static const char* const* const luawt_WGLWidget_stencilMaskSeparate_args[] = {WGLWidget_stencilMaskSeparate_args0, NULL};

int luawt_WGLWidget_stencilMaskSeparate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_stencilMaskSeparate_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum face = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    unsigned int mask = lua_tointeger(L, 3);
    self->stencilMaskSeparate(face, mask);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.stencilMaskSeparate");
    }
}

static const char* WGLWidget_finish_args0[] = {luawt_typeToStr<WGLWidget>(), NULL};
static const char* const* const luawt_WGLWidget_finish_args[] = {WGLWidget_finish_args0, NULL};

int luawt_WGLWidget_finish(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_finish_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    self->finish();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.finish");
    }
}

static const char* WGLWidget_blendFuncSeparate_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_blendFuncSeparate_args[] = {WGLWidget_blendFuncSeparate_args0, NULL};

int luawt_WGLWidget_blendFuncSeparate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_blendFuncSeparate_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum srcRGB = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum dstRGB = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    Wt::WGLWidget::GLenum srcAlpha = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    Wt::WGLWidget::GLenum dstAlpha = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 5));
    self->blendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.blendFuncSeparate");
    }
}

static const char* WGLWidget_stencilFuncSeparate_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_stencilFuncSeparate_args[] = {WGLWidget_stencilFuncSeparate_args0, NULL};

int luawt_WGLWidget_stencilFuncSeparate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_stencilFuncSeparate_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum face = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum func = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    int ref = lua_tointeger(L, 4);
    unsigned int mask = lua_tointeger(L, 5);
    self->stencilFuncSeparate(face, func, ref, mask);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.stencilFuncSeparate");
    }
}

static const char* WGLWidget_flush_args0[] = {luawt_typeToStr<WGLWidget>(), NULL};
static const char* const* const luawt_WGLWidget_flush_args[] = {WGLWidget_flush_args0, NULL};

int luawt_WGLWidget_flush(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_flush_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    self->flush();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.flush");
    }
}

static const char* WGLWidget_pixelStorei_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", NULL};
static const char* const* const luawt_WGLWidget_pixelStorei_args[] = {WGLWidget_pixelStorei_args0, NULL};

int luawt_WGLWidget_pixelStorei(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_pixelStorei_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum pname = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int param = lua_tointeger(L, 3);
    self->pixelStorei(pname, param);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.pixelStorei");
    }
}

static const char* WGLWidget_blendEquation_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_blendEquation_args[] = {WGLWidget_blendEquation_args0, NULL};

int luawt_WGLWidget_blendEquation(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_blendEquation_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->blendEquation(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.blendEquation");
    }
}

static const char* WGLWidget_clearStencil_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_clearStencil_args[] = {WGLWidget_clearStencil_args0, NULL};

int luawt_WGLWidget_clearStencil(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_clearStencil_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    int s = lua_tointeger(L, 2);
    self->clearStencil(s);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.clearStencil");
    }
}

static const char* WGLWidget_injectJS_args0[] = {luawt_typeToStr<WGLWidget>(), "char const *", NULL};
static const char* const* const luawt_WGLWidget_injectJS_args[] = {WGLWidget_injectJS_args0, NULL};

int luawt_WGLWidget_injectJS(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_injectJS_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string jsString = std::string(raw2);
    self->injectJS(jsString);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.injectJS");
    }
}

static const char* WGLWidget_stencilOpSeparate_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_stencilOpSeparate_args[] = {WGLWidget_stencilOpSeparate_args0, NULL};

int luawt_WGLWidget_stencilOpSeparate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_stencilOpSeparate_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum face = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum fail = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    Wt::WGLWidget::GLenum zfail = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    Wt::WGLWidget::GLenum zpass = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 5));
    self->stencilOpSeparate(face, fail, zfail, zpass);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.stencilOpSeparate");
    }
}

static const char* WGLWidget_hint_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", NULL};
static const char* const* const luawt_WGLWidget_hint_args[] = {WGLWidget_hint_args0, NULL};

int luawt_WGLWidget_hint(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_hint_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    self->hint(target, mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.hint");
    }
}

static const char* WGLWidget_colorMask_args0[] = {luawt_typeToStr<WGLWidget>(), "bool", "bool", "bool", "bool", NULL};
static const char* const* const luawt_WGLWidget_colorMask_args[] = {WGLWidget_colorMask_args0, NULL};

int luawt_WGLWidget_colorMask(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_colorMask_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    bool red = lua_toboolean(L, 2);
    bool green = lua_toboolean(L, 3);
    bool blue = lua_toboolean(L, 4);
    bool alpha = lua_toboolean(L, 5);
    self->colorMask(red, green, blue, alpha);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.colorMask");
    }
}

static const char* WGLWidget_clearColor_args0[] = {luawt_typeToStr<WGLWidget>(), "double", "double", "double", "double", NULL};
static const char* const* const luawt_WGLWidget_clearColor_args[] = {WGLWidget_clearColor_args0, NULL};

int luawt_WGLWidget_clearColor(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_clearColor_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    double r = lua_tonumber(L, 2);
    double g = lua_tonumber(L, 3);
    double b = lua_tonumber(L, 4);
    double a = lua_tonumber(L, 5);
    self->clearColor(r, g, b, a);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.clearColor");
    }
}

static const char* WGLWidget_depthRange_args0[] = {luawt_typeToStr<WGLWidget>(), "double", "double", NULL};
static const char* const* const luawt_WGLWidget_depthRange_args[] = {WGLWidget_depthRange_args0, NULL};

int luawt_WGLWidget_depthRange(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_depthRange_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    double zNear = lua_tonumber(L, 2);
    double zFar = lua_tonumber(L, 3);
    self->depthRange(zNear, zFar);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.depthRange");
    }
}

static const char* WGLWidget_enableClientErrorChecks_args0[] = {luawt_typeToStr<WGLWidget>(), NULL};
static const char* WGLWidget_enableClientErrorChecks_args1[] = {luawt_typeToStr<WGLWidget>(), "bool", NULL};
static const char* const* const luawt_WGLWidget_enableClientErrorChecks_args[] = {WGLWidget_enableClientErrorChecks_args0, WGLWidget_enableClientErrorChecks_args1, NULL};

int luawt_WGLWidget_enableClientErrorChecks(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_enableClientErrorChecks_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    self->enableClientErrorChecks();
    return 0;
    
    } else if (index == 1) {
    bool enable = lua_toboolean(L, 2);
    self->enableClientErrorChecks(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.enableClientErrorChecks");
    }
}

static const char* WGLWidget_generateMipmap_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_generateMipmap_args[] = {WGLWidget_generateMipmap_args0, NULL};

int luawt_WGLWidget_generateMipmap(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_generateMipmap_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->generateMipmap(target);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.generateMipmap");
    }
}

static const char* WGLWidget_texImage2D_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", "int", "int", "int", NULL};
static const char* WGLWidget_texImage2D_args1[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", "int", luawt_typeToStr<Wt::WImage>(), NULL};
static const char* WGLWidget_texImage2D_args2[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", "int", luawt_typeToStr<Wt::WVideo>(), NULL};
static const char* WGLWidget_texImage2D_args3[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", "int", "char const *", NULL};
static const char* const* const luawt_WGLWidget_texImage2D_args[] = {WGLWidget_texImage2D_args0, WGLWidget_texImage2D_args1, WGLWidget_texImage2D_args2, WGLWidget_texImage2D_args3, NULL};

int luawt_WGLWidget_texImage2D(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_texImage2D_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int level = lua_tointeger(L, 3);
    Wt::WGLWidget::GLenum internalformat = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    unsigned int width = lua_tointeger(L, 5);
    unsigned int height = lua_tointeger(L, 6);
    int border = lua_tointeger(L, 7);
    Wt::WGLWidget::GLenum format = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 8));
    self->texImage2D(target, level, internalformat, width, height, border, format);
    return 0;
    
    } else if (index == 1) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int level = lua_tointeger(L, 3);
    Wt::WGLWidget::GLenum internalformat = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    Wt::WGLWidget::GLenum format = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 5));
    Wt::WGLWidget::GLenum type = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 6));
    Wt::WImage* image =
        luawt_checkFromLua<Wt::WImage>(L, 7);
    self->texImage2D(target, level, internalformat, format, type, image);
    return 0;
    
    } else if (index == 2) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int level = lua_tointeger(L, 3);
    Wt::WGLWidget::GLenum internalformat = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    Wt::WGLWidget::GLenum format = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 5));
    Wt::WGLWidget::GLenum type = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 6));
    Wt::WVideo* video =
        luawt_checkFromLua<Wt::WVideo>(L, 7);
    self->texImage2D(target, level, internalformat, format, type, video);
    return 0;
    
    } else if (index == 3) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int level = lua_tointeger(L, 3);
    Wt::WGLWidget::GLenum internalformat = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    Wt::WGLWidget::GLenum format = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 5));
    Wt::WGLWidget::GLenum type = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 6));
    char const * raw7 = lua_tostring(L, 7);
    std::string texture = std::string(raw7);
    self->texImage2D(target, level, internalformat, format, type, texture);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.texImage2D");
    }
}

static const char* WGLWidget_viewport_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_viewport_args[] = {WGLWidget_viewport_args0, NULL};

int luawt_WGLWidget_viewport(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_viewport_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    int x = lua_tointeger(L, 2);
    int y = lua_tointeger(L, 3);
    unsigned int width = lua_tointeger(L, 4);
    unsigned int height = lua_tointeger(L, 5);
    self->viewport(x, y, width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.viewport");
    }
}

static const char* WGLWidget_polygonOffset_args0[] = {luawt_typeToStr<WGLWidget>(), "double", "double", NULL};
static const char* const* const luawt_WGLWidget_polygonOffset_args[] = {WGLWidget_polygonOffset_args0, NULL};

int luawt_WGLWidget_polygonOffset(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_polygonOffset_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    double factor = lua_tonumber(L, 2);
    double units = lua_tonumber(L, 3);
    self->polygonOffset(factor, units);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.polygonOffset");
    }
}

static const char* WGLWidget_stencilFunc_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_stencilFunc_args[] = {WGLWidget_stencilFunc_args0, NULL};

int luawt_WGLWidget_stencilFunc(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_stencilFunc_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum func = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int ref = lua_tointeger(L, 3);
    unsigned int mask = lua_tointeger(L, 4);
    self->stencilFunc(func, ref, mask);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.stencilFunc");
    }
}

static const char* WGLWidget_blendEquationSeparate_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", NULL};
static const char* const* const luawt_WGLWidget_blendEquationSeparate_args[] = {WGLWidget_blendEquationSeparate_args0, NULL};

int luawt_WGLWidget_blendEquationSeparate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_blendEquationSeparate_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum modeRGB = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum modeAlpha = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    self->blendEquationSeparate(modeRGB, modeAlpha);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.blendEquationSeparate");
    }
}

static const char* WGLWidget_repaintGL_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_repaintGL_args[] = {WGLWidget_repaintGL_args0, NULL};

int luawt_WGLWidget_repaintGL(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_repaintGL_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WFlags<Wt::WGLWidget::ClientSideRenderer> which = static_cast<Wt::WGLWidget::ClientSideRenderer>(lua_tointeger(L, 2));
    self->repaintGL(which);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.repaintGL");
    }
}

static const char* WGLWidget_sampleCoverage_args0[] = {luawt_typeToStr<WGLWidget>(), "double", "bool", NULL};
static const char* const* const luawt_WGLWidget_sampleCoverage_args[] = {WGLWidget_sampleCoverage_args0, NULL};

int luawt_WGLWidget_sampleCoverage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_sampleCoverage_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    double value = lua_tonumber(L, 2);
    bool invert = lua_toboolean(L, 3);
    self->sampleCoverage(value, invert);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.sampleCoverage");
    }
}

static const char* WGLWidget_stencilMask_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_stencilMask_args[] = {WGLWidget_stencilMask_args0, NULL};

int luawt_WGLWidget_stencilMask(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_stencilMask_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    unsigned int mask = lua_tointeger(L, 2);
    self->stencilMask(mask);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.stencilMask");
    }
}

static const char* WGLWidget_blendFunc_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", NULL};
static const char* const* const luawt_WGLWidget_blendFunc_args[] = {WGLWidget_blendFunc_args0, NULL};

int luawt_WGLWidget_blendFunc(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_blendFunc_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum sfactor = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum dfactor = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    self->blendFunc(sfactor, dfactor);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.blendFunc");
    }
}

static const char* WGLWidget_enable_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_enable_args[] = {WGLWidget_enable_args0, NULL};

int luawt_WGLWidget_enable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_enable_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum cap = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->enable(cap);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.enable");
    }
}

static const char* WGLWidget_depthFunc_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_depthFunc_args[] = {WGLWidget_depthFunc_args0, NULL};

int luawt_WGLWidget_depthFunc(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_depthFunc_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum func = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->depthFunc(func);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.depthFunc");
    }
}

static const char* WGLWidget_drawElements_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_drawElements_args[] = {WGLWidget_drawElements_args0, NULL};

int luawt_WGLWidget_drawElements(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_drawElements_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    unsigned int count = lua_tointeger(L, 3);
    Wt::WGLWidget::GLenum type = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    unsigned int offset = lua_tointeger(L, 5);
    self->drawElements(mode, count, type, offset);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.drawElements");
    }
}

static const char* WGLWidget_depthMask_args0[] = {luawt_typeToStr<WGLWidget>(), "bool", NULL};
static const char* const* const luawt_WGLWidget_depthMask_args[] = {WGLWidget_depthMask_args0, NULL};

int luawt_WGLWidget_depthMask(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_depthMask_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    bool flag = lua_toboolean(L, 2);
    self->depthMask(flag);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.depthMask");
    }
}

static const char* WGLWidget_stencilOp_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_stencilOp_args[] = {WGLWidget_stencilOp_args0, NULL};

int luawt_WGLWidget_stencilOp(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_stencilOp_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum fail = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum zfail = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    Wt::WGLWidget::GLenum zpass = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    self->stencilOp(fail, zfail, zpass);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.stencilOp");
    }
}

static const char* WGLWidget_copyTexImage2D_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", "int", "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_copyTexImage2D_args[] = {WGLWidget_copyTexImage2D_args0, NULL};

int luawt_WGLWidget_copyTexImage2D(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_copyTexImage2D_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int level = lua_tointeger(L, 3);
    Wt::WGLWidget::GLenum internalformat = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    int x = lua_tointeger(L, 5);
    int y = lua_tointeger(L, 6);
    unsigned int width = lua_tointeger(L, 7);
    unsigned int height = lua_tointeger(L, 8);
    int border = lua_tointeger(L, 9);
    self->copyTexImage2D(target, level, internalformat, x, y, width, height, border);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.copyTexImage2D");
    }
}

static const char* WGLWidget_disable_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_disable_args[] = {WGLWidget_disable_args0, NULL};

int luawt_WGLWidget_disable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_disable_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum cap = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->disable(cap);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.disable");
    }
}

static const char* WGLWidget_setAlternativeContent_args0[] = {luawt_typeToStr<WGLWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WGLWidget_setAlternativeContent_args[] = {WGLWidget_setAlternativeContent_args0, NULL};

int luawt_WGLWidget_setAlternativeContent(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_setAlternativeContent_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WWidget* alternative =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->setAlternativeContent(alternative);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.setAlternativeContent");
    }
}

static const char* WGLWidget_clearDepth_args0[] = {luawt_typeToStr<WGLWidget>(), "double", NULL};
static const char* const* const luawt_WGLWidget_clearDepth_args[] = {WGLWidget_clearDepth_args0, NULL};

int luawt_WGLWidget_clearDepth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_clearDepth_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    double depth = lua_tonumber(L, 2);
    self->clearDepth(depth);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.clearDepth");
    }
}

static const char* WGLWidget_resize_args0[] = {luawt_typeToStr<WGLWidget>(), "double", "double", NULL};
static const char* const* const luawt_WGLWidget_resize_args[] = {WGLWidget_resize_args0, NULL};

int luawt_WGLWidget_resize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_resize_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength width = Wt::WLength(raw2);
    double raw3 = lua_tonumber(L, 3);
    Wt::WLength height = Wt::WLength(raw3);
    self->resize(width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.resize");
    }
}

static const char* WGLWidget_clear_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_clear_args[] = {WGLWidget_clear_args0, NULL};

int luawt_WGLWidget_clear(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_clear_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WFlags<Wt::WGLWidget::GLenum> mask = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->clear(mask);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.clear");
    }
}

static const char* WGLWidget_scissor_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_scissor_args[] = {WGLWidget_scissor_args0, NULL};

int luawt_WGLWidget_scissor(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_scissor_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    int x = lua_tointeger(L, 2);
    int y = lua_tointeger(L, 3);
    unsigned int width = lua_tointeger(L, 4);
    unsigned int height = lua_tointeger(L, 5);
    self->scissor(x, y, width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.scissor");
    }
}

static const char* WGLWidget_frontFace_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_frontFace_args[] = {WGLWidget_frontFace_args0, NULL};

int luawt_WGLWidget_frontFace(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_frontFace_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->frontFace(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.frontFace");
    }
}

static const char* WGLWidget_bufferData_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_bufferData_args[] = {WGLWidget_bufferData_args0, NULL};

int luawt_WGLWidget_bufferData(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_bufferData_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int size = lua_tointeger(L, 3);
    Wt::WGLWidget::GLenum usage = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    self->bufferData(target, size, usage);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.bufferData");
    }
}

static const char* WGLWidget_renderbufferStorage_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_renderbufferStorage_args[] = {WGLWidget_renderbufferStorage_args0, NULL};

int luawt_WGLWidget_renderbufferStorage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_renderbufferStorage_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum internalformat = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    unsigned int width = lua_tointeger(L, 4);
    unsigned int height = lua_tointeger(L, 5);
    self->renderbufferStorage(target, internalformat, width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.renderbufferStorage");
    }
}

static const char* WGLWidget_cullFace_args0[] = {luawt_typeToStr<WGLWidget>(), "int", NULL};
static const char* const* const luawt_WGLWidget_cullFace_args[] = {WGLWidget_cullFace_args0, NULL};

int luawt_WGLWidget_cullFace(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_cullFace_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->cullFace(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.cullFace");
    }
}

static const char* WGLWidget_texParameteri_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_texParameteri_args[] = {WGLWidget_texParameteri_args0, NULL};

int luawt_WGLWidget_texParameteri(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_texParameteri_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum pname = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    Wt::WGLWidget::GLenum param = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    self->texParameteri(target, pname, param);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.texParameteri");
    }
}

static const char* WGLWidget_lineWidth_args0[] = {luawt_typeToStr<WGLWidget>(), "double", NULL};
static const char* const* const luawt_WGLWidget_lineWidth_args[] = {WGLWidget_lineWidth_args0, NULL};

int luawt_WGLWidget_lineWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_lineWidth_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    double width = lua_tonumber(L, 2);
    self->lineWidth(width);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.lineWidth");
    }
}

static const char* WGLWidget_copyTexSubImage2D_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", "int", "int", "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_copyTexSubImage2D_args[] = {WGLWidget_copyTexSubImage2D_args0, NULL};

int luawt_WGLWidget_copyTexSubImage2D(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_copyTexSubImage2D_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int level = lua_tointeger(L, 3);
    int xoffset = lua_tointeger(L, 4);
    int yoffset = lua_tointeger(L, 5);
    int x = lua_tointeger(L, 6);
    int y = lua_tointeger(L, 7);
    unsigned int width = lua_tointeger(L, 8);
    unsigned int height = lua_tointeger(L, 9);
    self->copyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.copyTexSubImage2D");
    }
}

static const char* WGLWidget_drawArrays_args0[] = {luawt_typeToStr<WGLWidget>(), "int", "int", "int", NULL};
static const char* const* const luawt_WGLWidget_drawArrays_args[] = {WGLWidget_drawArrays_args0, NULL};

int luawt_WGLWidget_drawArrays(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGLWidget_drawArrays_args);
    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
    if (index == 0) {
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int first = lua_tointeger(L, 3);
    unsigned int count = lua_tointeger(L, 4);
    self->drawArrays(mode, first, count);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGLWidget.drawArrays");
    }
}

ADD_SIGNAL(keyWentDown, WGLWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WGLWidget, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WGLWidget, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WGLWidget, Wt::NoClass)
ADD_SIGNAL(escapePressed, WGLWidget, Wt::NoClass)
ADD_SIGNAL(clicked, WGLWidget, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WGLWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WGLWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WGLWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WGLWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WGLWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WGLWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WGLWidget, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WGLWidget, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WGLWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WGLWidget, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WGLWidget, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WGLWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WGLWidget, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WGLWidget, Wt::WGestureEvent)

static const luaL_Reg luawt_WGLWidget_methods[] = {
    METHOD(WGLWidget, repaintGL),
    METHOD(WGLWidget, resize),
    METHOD(WGLWidget, debugger),
    METHOD(WGLWidget, activeTexture),
    METHOD(WGLWidget, blendColor),
    METHOD(WGLWidget, blendEquation),
    METHOD(WGLWidget, blendEquationSeparate),
    METHOD(WGLWidget, blendFunc),
    METHOD(WGLWidget, blendFuncSeparate),
    METHOD(WGLWidget, bufferData),
    METHOD(WGLWidget, clear),
    METHOD(WGLWidget, clearColor),
    METHOD(WGLWidget, clearDepth),
    METHOD(WGLWidget, clearStencil),
    METHOD(WGLWidget, colorMask),
    METHOD(WGLWidget, copyTexImage2D),
    METHOD(WGLWidget, copyTexSubImage2D),
    METHOD(WGLWidget, cullFace),
    METHOD(WGLWidget, depthFunc),
    METHOD(WGLWidget, depthMask),
    METHOD(WGLWidget, depthRange),
    METHOD(WGLWidget, disable),
    METHOD(WGLWidget, drawArrays),
    METHOD(WGLWidget, drawElements),
    METHOD(WGLWidget, enable),
    METHOD(WGLWidget, finish),
    METHOD(WGLWidget, flush),
    METHOD(WGLWidget, frontFace),
    METHOD(WGLWidget, generateMipmap),
    METHOD(WGLWidget, hint),
    METHOD(WGLWidget, lineWidth),
    METHOD(WGLWidget, pixelStorei),
    METHOD(WGLWidget, polygonOffset),
    METHOD(WGLWidget, renderbufferStorage),
    METHOD(WGLWidget, sampleCoverage),
    METHOD(WGLWidget, scissor),
    METHOD(WGLWidget, stencilFunc),
    METHOD(WGLWidget, stencilFuncSeparate),
    METHOD(WGLWidget, stencilMask),
    METHOD(WGLWidget, stencilMaskSeparate),
    METHOD(WGLWidget, stencilOp),
    METHOD(WGLWidget, stencilOpSeparate),
    METHOD(WGLWidget, texImage2D),
    METHOD(WGLWidget, texImage2D),
    METHOD(WGLWidget, texImage2D),
    METHOD(WGLWidget, texImage2D),
    METHOD(WGLWidget, texParameteri),
    METHOD(WGLWidget, viewport),
    METHOD(WGLWidget, setAlternativeContent),
    METHOD(WGLWidget, enableClientErrorChecks),
    METHOD(WGLWidget, injectJS),
    METHOD(WGLWidget, keyWentDown),
    METHOD(WGLWidget, keyPressed),
    METHOD(WGLWidget, keyWentUp),
    METHOD(WGLWidget, enterPressed),
    METHOD(WGLWidget, escapePressed),
    METHOD(WGLWidget, clicked),
    METHOD(WGLWidget, doubleClicked),
    METHOD(WGLWidget, mouseWentDown),
    METHOD(WGLWidget, mouseWentUp),
    METHOD(WGLWidget, mouseWentOut),
    METHOD(WGLWidget, mouseWentOver),
    METHOD(WGLWidget, mouseMoved),
    METHOD(WGLWidget, mouseDragged),
    METHOD(WGLWidget, mouseWheel),
    METHOD(WGLWidget, touchStarted),
    METHOD(WGLWidget, touchEnded),
    METHOD(WGLWidget, touchMoved),
    METHOD(WGLWidget, gestureStarted),
    METHOD(WGLWidget, gestureChanged),
    METHOD(WGLWidget, gestureEnded),
    {NULL, NULL},
};

void luawt_WGLWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WGLWidget,
        L,
        wrap<luawt_WGLWidget_make>::func,
        0,
        luawt_WGLWidget_methods,
        base
    );
}
