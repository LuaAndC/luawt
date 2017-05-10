#include "boost-xtime.hpp"

#include <Wt/WLength>
#include <Wt/WWidget>
#include <Wt/WContainerWidget>
#include <Wt/WFlashObject>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

static const char* WFlashObject_make_args0[] = {"char const *", NULL};
static const char* WFlashObject_make_args1[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WFlashObject_make_args[] = {WFlashObject_make_args0, WFlashObject_make_args1, NULL};

int luawt_WFlashObject_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFlashObject_make_args);
    if (index == 0) {
    char const * raw1 = lua_tostring(L, 1);
    std::string url = std::string(raw1);
    WFlashObject * l_result = new WFlashObject(url);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WFlashObject");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    char const * raw1 = lua_tostring(L, 1);
    std::string url = std::string(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WFlashObject * l_result = new WFlashObject(url, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WFlashObject.make");
    }
}

static const char* WFlashObject_setAlternativeContent_args0[] = {luawt_typeToStr<WFlashObject>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WFlashObject_setAlternativeContent_args[] = {WFlashObject_setAlternativeContent_args0, NULL};

int luawt_WFlashObject_setAlternativeContent(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFlashObject_setAlternativeContent_args);
    WFlashObject* self = luawt_checkFromLua<WFlashObject>(L, 1);
    if (index == 0) {
    Wt::WWidget* alternative =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->setAlternativeContent(alternative);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFlashObject.setAlternativeContent");
    }
}

static const char* WFlashObject_setFlashVariable_args0[] = {luawt_typeToStr<WFlashObject>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WFlashObject_setFlashVariable_args[] = {WFlashObject_setFlashVariable_args0, NULL};

int luawt_WFlashObject_setFlashVariable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFlashObject_setFlashVariable_args);
    WFlashObject* self = luawt_checkFromLua<WFlashObject>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString value = Wt::WString(raw3);
    self->setFlashVariable(name, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFlashObject.setFlashVariable");
    }
}

static const char* WFlashObject_setFlashParameter_args0[] = {luawt_typeToStr<WFlashObject>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WFlashObject_setFlashParameter_args[] = {WFlashObject_setFlashParameter_args0, NULL};

int luawt_WFlashObject_setFlashParameter(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFlashObject_setFlashParameter_args);
    WFlashObject* self = luawt_checkFromLua<WFlashObject>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString value = Wt::WString(raw3);
    self->setFlashParameter(name, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFlashObject.setFlashParameter");
    }
}

static const char* WFlashObject_resize_args0[] = {luawt_typeToStr<WFlashObject>(), "double", "double", NULL};
static const char* const* const luawt_WFlashObject_resize_args[] = {WFlashObject_resize_args0, NULL};

int luawt_WFlashObject_resize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFlashObject_resize_args);
    WFlashObject* self = luawt_checkFromLua<WFlashObject>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength width = Wt::WLength(raw2);
    double raw3 = lua_tonumber(L, 3);
    Wt::WLength height = Wt::WLength(raw3);
    self->resize(width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WFlashObject.resize");
    }
}

static const char* WFlashObject_jsFlashRef_args0[] = {luawt_typeToStr<WFlashObject>(), NULL};
static const char* const* const luawt_WFlashObject_jsFlashRef_args[] = {WFlashObject_jsFlashRef_args0, NULL};

int luawt_WFlashObject_jsFlashRef(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WFlashObject_jsFlashRef_args);
    WFlashObject* self = luawt_checkFromLua<WFlashObject>(L, 1);
    if (index == 0) {
    std::string l_result = self->jsFlashRef();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WFlashObject.jsFlashRef");
    }
}


static const luaL_Reg luawt_WFlashObject_methods[] = {
    METHOD(WFlashObject, resize),
    METHOD(WFlashObject, setFlashParameter),
    METHOD(WFlashObject, setFlashVariable),
    METHOD(WFlashObject, jsFlashRef),
    METHOD(WFlashObject, setAlternativeContent),
    {NULL, NULL},
};

void luawt_WFlashObject(lua_State* L) {
    const char* base = luawt_typeToStr<WWebWidget>();
    assert(base);
    DECLARE_CLASS(
        WFlashObject,
        L,
        wrap<luawt_WFlashObject_make>::func,
        0,
        luawt_WFlashObject_methods,
        base
    );
}
