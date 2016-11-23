#include "boost-xtime.hpp"

#include <Wt/WFileUpload>
#include <Wt/WContainerWidget>
#include <Wt/WProgressBar>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WFileUpload_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WFileUpload * result = new WFileUpload(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.make: %d", argc);
    }
}

int luawt_WFileUpload_clientFileName(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->clientFileName();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.clientFileName: %d", argc);
    }
}

int luawt_WFileUpload_contentDescription(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->contentDescription();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.contentDescription: %d", argc);
    }
}

int luawt_WFileUpload_spoolFileName(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    std::string result = self->spoolFileName();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.spoolFileName: %d", argc);
    }
}

int luawt_WFileUpload_multiple(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    bool result = self->multiple();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.multiple: %d", argc);
    }
}

int luawt_WFileUpload_setMultiple(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 1) {
    bool multiple = lua_toboolean(L, 2);
    self->setMultiple(multiple);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.setMultiple: %d", argc);
    }
}

int luawt_WFileUpload_fileTextSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    int result = self->fileTextSize();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.fileTextSize: %d", argc);
    }
}

int luawt_WFileUpload_setProgressBar(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 1) {
    Wt::WProgressBar* progressBar =
        luawt_checkFromLua<Wt::WProgressBar>(L, 2);
    self->setProgressBar(progressBar);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.setProgressBar: %d", argc);
    }
}

int luawt_WFileUpload_setFileTextSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 1) {
    int chars = lua_tointeger(L, 2);
    self->setFileTextSize(chars);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.setFileTextSize: %d", argc);
    }
}

int luawt_WFileUpload_upload(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    self->upload();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.upload: %d", argc);
    }
}

int luawt_WFileUpload_progressBar(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    Wt::WProgressBar * result = self->progressBar();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.progressBar: %d", argc);
    }
}

int luawt_WFileUpload_emptyFileName(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    bool result = self->emptyFileName();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.emptyFileName: %d", argc);
    }
}

int luawt_WFileUpload_stealSpooledFile(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    self->stealSpooledFile();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.stealSpooledFile: %d", argc);
    }
}

int luawt_WFileUpload_canUpload(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    bool result = self->canUpload();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.canUpload: %d", argc);
    }
}

int luawt_WFileUpload_isUploaded(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    bool result = self->isUploaded();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.isUploaded: %d", argc);
    }
}

int luawt_WFileUpload_setFilters(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string acceptAttributes = std::string(raw2);
    self->setFilters(acceptAttributes);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.setFilters: %d", argc);
    }
}

int luawt_WFileUpload_enableAjax(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    self->enableAjax();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.enableAjax: %d", argc);
    }
}

int luawt_WFileUpload_empty(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
        if (argc == 0) {
    bool result = self->empty();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFileUpload.empty: %d", argc);
    }
}

ADD_SIGNAL(uploaded, WFileUpload, Wt::NoClass)
ADD_SIGNAL(changed, WFileUpload, Wt::NoClass)

static const luaL_Reg luawt_WFileUpload_methods[] = {
    METHOD(WFileUpload, setMultiple),
    METHOD(WFileUpload, multiple),
    METHOD(WFileUpload, setFileTextSize),
    METHOD(WFileUpload, fileTextSize),
    METHOD(WFileUpload, spoolFileName),
    METHOD(WFileUpload, clientFileName),
    METHOD(WFileUpload, contentDescription),
    METHOD(WFileUpload, stealSpooledFile),
    METHOD(WFileUpload, empty),
    METHOD(WFileUpload, emptyFileName),
    METHOD(WFileUpload, canUpload),
    METHOD(WFileUpload, isUploaded),
    METHOD(WFileUpload, upload),
    METHOD(WFileUpload, setProgressBar),
    METHOD(WFileUpload, progressBar),
    METHOD(WFileUpload, enableAjax),
    METHOD(WFileUpload, setFilters),
    METHOD(WFileUpload, uploaded),
    METHOD(WFileUpload, changed),
    {NULL, NULL},
};

void luawt_WFileUpload(lua_State* L) {
    const char* base = luawt_typeToStr<WWebWidget>();
    assert(base);
    DECLARE_CLASS(
        WFileUpload,
        L,
        wrap<luawt_WFileUpload_make>::func,
        0,
        luawt_WFileUpload_methods,
        base
    );
}
