#include "boost-xtime.hpp"

#include <Wt/WFileUpload>
#include <Wt/WContainerWidget>
#include <Wt/WProgressBar>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

static const char* WFileUpload_make_args0[] = {NULL};
static const char* WFileUpload_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WFileUpload_make_args[] = {WFileUpload_make_args0, WFileUpload_make_args1, NULL};

int luawt_WFileUpload_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_make_args);
    if (index == 0) {
        WFileUpload* l_result = new WFileUpload();
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WFileUpload");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 1) {
        Wt::WContainerWidget* parent =
            luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
        WFileUpload* l_result = new WFileUpload(parent);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.make");
    }
}

static const char* WFileUpload_clientFileName_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_clientFileName_args[] = {WFileUpload_clientFileName_args0, NULL};

int luawt_WFileUpload_clientFileName(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_clientFileName_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        Wt::WString l_result = self->clientFileName();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.clientFileName");
    }
}

static const char* WFileUpload_contentDescription_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_contentDescription_args[] = {WFileUpload_contentDescription_args0, NULL};

int luawt_WFileUpload_contentDescription(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_contentDescription_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        Wt::WString l_result = self->contentDescription();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.contentDescription");
    }
}

static const char* WFileUpload_spoolFileName_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_spoolFileName_args[] = {WFileUpload_spoolFileName_args0, NULL};

int luawt_WFileUpload_spoolFileName(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_spoolFileName_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        std::string l_result = self->spoolFileName();
        lua_pushstring(L, l_result.c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.spoolFileName");
    }
}

static const char* WFileUpload_multiple_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_multiple_args[] = {WFileUpload_multiple_args0, NULL};

int luawt_WFileUpload_multiple(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_multiple_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        bool l_result = self->multiple();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.multiple");
    }
}

static const char* WFileUpload_setMultiple_args0[] = {luawt_typeToStr<WFileUpload>(), "bool", NULL};
static const char* const* const luawt_WFileUpload_setMultiple_args[] = {WFileUpload_setMultiple_args0, NULL};

int luawt_WFileUpload_setMultiple(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_setMultiple_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        bool multiple = lua_toboolean(L, 2);
        self->setMultiple(multiple);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.setMultiple");
    }
}

static const char* WFileUpload_fileTextSize_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_fileTextSize_args[] = {WFileUpload_fileTextSize_args0, NULL};

int luawt_WFileUpload_fileTextSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_fileTextSize_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        int l_result = self->fileTextSize();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.fileTextSize");
    }
}

static const char* WFileUpload_setProgressBar_args0[] = {luawt_typeToStr<WFileUpload>(), luawt_typeToStr<Wt::WProgressBar>(), NULL};
static const char* const* const luawt_WFileUpload_setProgressBar_args[] = {WFileUpload_setProgressBar_args0, NULL};

int luawt_WFileUpload_setProgressBar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_setProgressBar_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        Wt::WProgressBar* progressBar =
            luawt_checkFromLua<Wt::WProgressBar>(L, 2);
        self->setProgressBar(progressBar);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.setProgressBar");
    }
}

static const char* WFileUpload_setFileTextSize_args0[] = {luawt_typeToStr<WFileUpload>(), "int", NULL};
static const char* const* const luawt_WFileUpload_setFileTextSize_args[] = {WFileUpload_setFileTextSize_args0, NULL};

int luawt_WFileUpload_setFileTextSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_setFileTextSize_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        int chars = lua_tointeger(L, 2);
        self->setFileTextSize(chars);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.setFileTextSize");
    }
}

static const char* WFileUpload_upload_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_upload_args[] = {WFileUpload_upload_args0, NULL};

int luawt_WFileUpload_upload(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_upload_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        self->upload();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.upload");
    }
}

static const char* WFileUpload_progressBar_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_progressBar_args[] = {WFileUpload_progressBar_args0, NULL};

int luawt_WFileUpload_progressBar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_progressBar_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        Wt::WProgressBar* l_result = self->progressBar();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.progressBar");
    }
}

static const char* WFileUpload_emptyFileName_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_emptyFileName_args[] = {WFileUpload_emptyFileName_args0, NULL};

int luawt_WFileUpload_emptyFileName(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_emptyFileName_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        bool l_result = self->emptyFileName();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.emptyFileName");
    }
}

static const char* WFileUpload_stealSpooledFile_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_stealSpooledFile_args[] = {WFileUpload_stealSpooledFile_args0, NULL};

int luawt_WFileUpload_stealSpooledFile(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_stealSpooledFile_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        self->stealSpooledFile();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.stealSpooledFile");
    }
}

static const char* WFileUpload_canUpload_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_canUpload_args[] = {WFileUpload_canUpload_args0, NULL};

int luawt_WFileUpload_canUpload(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_canUpload_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        bool l_result = self->canUpload();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.canUpload");
    }
}

static const char* WFileUpload_isUploaded_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_isUploaded_args[] = {WFileUpload_isUploaded_args0, NULL};

int luawt_WFileUpload_isUploaded(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_isUploaded_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        bool l_result = self->isUploaded();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.isUploaded");
    }
}

static const char* WFileUpload_enableAjax_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_enableAjax_args[] = {WFileUpload_enableAjax_args0, NULL};

int luawt_WFileUpload_enableAjax(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_enableAjax_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        self->enableAjax();
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.enableAjax");
    }
}

static const char* WFileUpload_empty_args0[] = {luawt_typeToStr<WFileUpload>(), NULL};
static const char* const* const luawt_WFileUpload_empty_args[] = {WFileUpload_empty_args0, NULL};

int luawt_WFileUpload_empty(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFileUpload_empty_args);
    WFileUpload* self = luawt_checkFromLua<WFileUpload>(L, 1);
    if (index == 0) {
        bool l_result = self->empty();
        lua_pushboolean(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WFileUpload.empty");
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
