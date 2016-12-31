#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WFlashObject>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WFlashObject_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 2) {
    char const * raw1 = lua_tostring(L, 1);
    std::string url = std::string(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WFlashObject * result = new WFlashObject(url, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFlashObject.make: %d", argc);
    }
}

int luawt_WFlashObject_setFlashVariable(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFlashObject* self = luawt_checkFromLua<WFlashObject>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString value = Wt::WString(raw3);
    self->setFlashVariable(name, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFlashObject.setFlashVariable: %d", argc);
    }
}

int luawt_WFlashObject_jsFlashRef(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFlashObject* self = luawt_checkFromLua<WFlashObject>(L, 1);
        if (argc == 0) {
    std::string result = self->jsFlashRef();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WFlashObject.jsFlashRef: %d", argc);
    }
}

int luawt_WFlashObject_setFlashParameter(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WFlashObject* self = luawt_checkFromLua<WFlashObject>(L, 1);
        if (argc == 2) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString value = Wt::WString(raw3);
    self->setFlashParameter(name, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WFlashObject.setFlashParameter: %d", argc);
    }
}


static const luaL_Reg luawt_WFlashObject_methods[] = {
    METHOD(WFlashObject, setFlashParameter),
    METHOD(WFlashObject, setFlashVariable),
    METHOD(WFlashObject, jsFlashRef),
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
