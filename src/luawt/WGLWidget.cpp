#include "boost-xtime.hpp"

#include <Wt/WImage>
#include <Wt/WContainerWidget>
#include <Wt/WGLWidget>

#include "globals.hpp"

int luawt_WGLWidget_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WGLWidget * result = new WGLWidget(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.make: %d", argc);
    }
}

int luawt_WGLWidget_activeTexture(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    Wt::WGLWidget::GLenum texture = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->activeTexture(texture);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.activeTexture: %d", argc);
    }
}

int luawt_WGLWidget_blendColor(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 4) {
    double red = lua_tonumber(L, 2);
    double green = lua_tonumber(L, 3);
    double blue = lua_tonumber(L, 4);
    double alpha = lua_tonumber(L, 5);
    self->blendColor(red, green, blue, alpha);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.blendColor: %d", argc);
    }
}

int luawt_WGLWidget_debugger(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 0) {
    self->debugger();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.debugger: %d", argc);
    }
}

int luawt_WGLWidget_stencilMaskSeparate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 2) {
    Wt::WGLWidget::GLenum face = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    unsigned int mask = lua_tointeger(L, 3);
    self->stencilMaskSeparate(face, mask);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.stencilMaskSeparate: %d", argc);
    }
}

int luawt_WGLWidget_enable(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    Wt::WGLWidget::GLenum cap = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->enable(cap);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.enable: %d", argc);
    }
}

int luawt_WGLWidget_blendFuncSeparate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 4) {
    Wt::WGLWidget::GLenum srcRGB = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum dstRGB = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    Wt::WGLWidget::GLenum srcAlpha = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    Wt::WGLWidget::GLenum dstAlpha = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 5));
    self->blendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.blendFuncSeparate: %d", argc);
    }
}

int luawt_WGLWidget_stencilFuncSeparate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 4) {
    Wt::WGLWidget::GLenum face = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum func = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    int ref = lua_tointeger(L, 4);
    unsigned int mask = lua_tointeger(L, 5);
    self->stencilFuncSeparate(face, func, ref, mask);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.stencilFuncSeparate: %d", argc);
    }
}

int luawt_WGLWidget_flush(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 0) {
    self->flush();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.flush: %d", argc);
    }
}

int luawt_WGLWidget_pixelStorei(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 2) {
    Wt::WGLWidget::GLenum pname = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int param = lua_tointeger(L, 3);
    self->pixelStorei(pname, param);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.pixelStorei: %d", argc);
    }
}

int luawt_WGLWidget_blendEquation(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->blendEquation(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.blendEquation: %d", argc);
    }
}

int luawt_WGLWidget_clearStencil(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    int s = lua_tointeger(L, 2);
    self->clearStencil(s);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.clearStencil: %d", argc);
    }
}

int luawt_WGLWidget_stencilOpSeparate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 4) {
    Wt::WGLWidget::GLenum face = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum fail = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    Wt::WGLWidget::GLenum zfail = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    Wt::WGLWidget::GLenum zpass = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 5));
    self->stencilOpSeparate(face, fail, zfail, zpass);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.stencilOpSeparate: %d", argc);
    }
}

int luawt_WGLWidget_hint(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 2) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    self->hint(target, mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.hint: %d", argc);
    }
}

int luawt_WGLWidget_colorMask(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 4) {
    bool red = lua_toboolean(L, 2);
    bool green = lua_toboolean(L, 3);
    bool blue = lua_toboolean(L, 4);
    bool alpha = lua_toboolean(L, 5);
    self->colorMask(red, green, blue, alpha);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.colorMask: %d", argc);
    }
}

int luawt_WGLWidget_drawArrays(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 3) {
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int first = lua_tointeger(L, 3);
    unsigned int count = lua_tointeger(L, 4);
    self->drawArrays(mode, first, count);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.drawArrays: %d", argc);
    }
}

int luawt_WGLWidget_depthRange(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 2) {
    double zNear = lua_tonumber(L, 2);
    double zFar = lua_tonumber(L, 3);
    self->depthRange(zNear, zFar);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.depthRange: %d", argc);
    }
}

int luawt_WGLWidget_generateMipmap(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->generateMipmap(target);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.generateMipmap: %d", argc);
    }
}

int luawt_WGLWidget_polygonOffset(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 2) {
    double factor = lua_tonumber(L, 2);
    double units = lua_tonumber(L, 3);
    self->polygonOffset(factor, units);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.polygonOffset: %d", argc);
    }
}

int luawt_WGLWidget_stencilFunc(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 3) {
    Wt::WGLWidget::GLenum func = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    int ref = lua_tointeger(L, 3);
    unsigned int mask = lua_tointeger(L, 4);
    self->stencilFunc(func, ref, mask);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.stencilFunc: %d", argc);
    }
}

int luawt_WGLWidget_blendEquationSeparate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 2) {
    Wt::WGLWidget::GLenum modeRGB = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum modeAlpha = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    self->blendEquationSeparate(modeRGB, modeAlpha);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.blendEquationSeparate: %d", argc);
    }
}

int luawt_WGLWidget_texImage2D(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 6) {
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
        return luaL_error(L, "Wrong arguments number for WGLWidget.texImage2D: %d", argc);
    }
}

int luawt_WGLWidget_sampleCoverage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 2) {
    double value = lua_tonumber(L, 2);
    bool invert = lua_toboolean(L, 3);
    self->sampleCoverage(value, invert);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.sampleCoverage: %d", argc);
    }
}

int luawt_WGLWidget_stencilMask(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    unsigned int mask = lua_tointeger(L, 2);
    self->stencilMask(mask);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.stencilMask: %d", argc);
    }
}

int luawt_WGLWidget_blendFunc(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 2) {
    Wt::WGLWidget::GLenum sfactor = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum dfactor = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    self->blendFunc(sfactor, dfactor);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.blendFunc: %d", argc);
    }
}

int luawt_WGLWidget_finish(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 0) {
    self->finish();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.finish: %d", argc);
    }
}

int luawt_WGLWidget_depthFunc(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    Wt::WGLWidget::GLenum func = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->depthFunc(func);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.depthFunc: %d", argc);
    }
}

int luawt_WGLWidget_drawElements(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 4) {
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    unsigned int count = lua_tointeger(L, 3);
    Wt::WGLWidget::GLenum type = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    unsigned int offset = lua_tointeger(L, 5);
    self->drawElements(mode, count, type, offset);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.drawElements: %d", argc);
    }
}

int luawt_WGLWidget_depthMask(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    bool flag = lua_toboolean(L, 2);
    self->depthMask(flag);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.depthMask: %d", argc);
    }
}

int luawt_WGLWidget_stencilOp(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 3) {
    Wt::WGLWidget::GLenum fail = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum zfail = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    Wt::WGLWidget::GLenum zpass = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    self->stencilOp(fail, zfail, zpass);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.stencilOp: %d", argc);
    }
}

int luawt_WGLWidget_copyTexImage2D(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 8) {
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
        return luaL_error(L, "Wrong arguments number for WGLWidget.copyTexImage2D: %d", argc);
    }
}

int luawt_WGLWidget_disable(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    Wt::WGLWidget::GLenum cap = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->disable(cap);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.disable: %d", argc);
    }
}

int luawt_WGLWidget_clearDepth(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    double depth = lua_tonumber(L, 2);
    self->clearDepth(depth);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.clearDepth: %d", argc);
    }
}

int luawt_WGLWidget_viewport(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 4) {
    int x = lua_tointeger(L, 2);
    int y = lua_tointeger(L, 3);
    unsigned int width = lua_tointeger(L, 4);
    unsigned int height = lua_tointeger(L, 5);
    self->viewport(x, y, width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.viewport: %d", argc);
    }
}

int luawt_WGLWidget_scissor(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 4) {
    int x = lua_tointeger(L, 2);
    int y = lua_tointeger(L, 3);
    unsigned int width = lua_tointeger(L, 4);
    unsigned int height = lua_tointeger(L, 5);
    self->scissor(x, y, width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.scissor: %d", argc);
    }
}

int luawt_WGLWidget_frontFace(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->frontFace(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.frontFace: %d", argc);
    }
}

int luawt_WGLWidget_cullFace(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    Wt::WGLWidget::GLenum mode = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    self->cullFace(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.cullFace: %d", argc);
    }
}

int luawt_WGLWidget_texParameteri(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 3) {
    Wt::WGLWidget::GLenum target = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 2));
    Wt::WGLWidget::GLenum pname = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 3));
    Wt::WGLWidget::GLenum param = static_cast<Wt::WGLWidget::GLenum>(lua_tointeger(L, 4));
    self->texParameteri(target, pname, param);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.texParameteri: %d", argc);
    }
}

int luawt_WGLWidget_lineWidth(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 1) {
    double width = lua_tonumber(L, 2);
    self->lineWidth(width);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.lineWidth: %d", argc);
    }
}

int luawt_WGLWidget_copyTexSubImage2D(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 8) {
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
        return luaL_error(L, "Wrong arguments number for WGLWidget.copyTexSubImage2D: %d", argc);
    }
}

int luawt_WGLWidget_clearColor(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGLWidget* self = luawt_checkFromLua<WGLWidget>(L, 1);
        if (argc == 4) {
    double r = lua_tonumber(L, 2);
    double g = lua_tonumber(L, 3);
    double b = lua_tonumber(L, 4);
    double a = lua_tonumber(L, 5);
    self->clearColor(r, g, b, a);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGLWidget.clearColor: %d", argc);
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
    METHOD(WGLWidget, debugger),
    METHOD(WGLWidget, activeTexture),
    METHOD(WGLWidget, blendColor),
    METHOD(WGLWidget, blendEquation),
    METHOD(WGLWidget, blendEquationSeparate),
    METHOD(WGLWidget, blendFunc),
    METHOD(WGLWidget, blendFuncSeparate),
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
    METHOD(WGLWidget, texParameteri),
    METHOD(WGLWidget, viewport),
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
