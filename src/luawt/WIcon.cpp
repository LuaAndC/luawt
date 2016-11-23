#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WIcon>

#include "globals.hpp"

int luawt_WIcon_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WIcon * result = new WIcon(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    char const * raw1 = lua_tostring(L, 1);
    std::string name = std::string(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WIcon * result = new WIcon(name, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WIcon.make: %d", argc);
    }
}

int luawt_WIcon_setSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WIcon* self = luawt_checkFromLua<WIcon>(L, 1);
        if (argc == 1) {
    double factor = lua_tonumber(L, 2);
    self->setSize(factor);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WIcon.setSize: %d", argc);
    }
}

int luawt_WIcon_name(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WIcon* self = luawt_checkFromLua<WIcon>(L, 1);
        if (argc == 0) {
    std::string result = self->name();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WIcon.name: %d", argc);
    }
}

int luawt_WIcon_setName(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WIcon* self = luawt_checkFromLua<WIcon>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    self->setName(name);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WIcon.setName: %d", argc);
    }
}

int luawt_WIcon_size(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WIcon* self = luawt_checkFromLua<WIcon>(L, 1);
        if (argc == 0) {
    double result = self->size();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WIcon.size: %d", argc);
    }
}

ADD_SIGNAL(keyWentDown, WIcon, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WIcon, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WIcon, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WIcon, Wt::NoClass)
ADD_SIGNAL(escapePressed, WIcon, Wt::NoClass)
ADD_SIGNAL(clicked, WIcon, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WIcon, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WIcon, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WIcon, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WIcon, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WIcon, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WIcon, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WIcon, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WIcon, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WIcon, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WIcon, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WIcon, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WIcon, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WIcon, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WIcon, Wt::WGestureEvent)

static const luaL_Reg luawt_WIcon_methods[] = {
    METHOD(WIcon, setName),
    METHOD(WIcon, name),
    METHOD(WIcon, setSize),
    METHOD(WIcon, size),
    METHOD(WIcon, keyWentDown),
    METHOD(WIcon, keyPressed),
    METHOD(WIcon, keyWentUp),
    METHOD(WIcon, enterPressed),
    METHOD(WIcon, escapePressed),
    METHOD(WIcon, clicked),
    METHOD(WIcon, doubleClicked),
    METHOD(WIcon, mouseWentDown),
    METHOD(WIcon, mouseWentUp),
    METHOD(WIcon, mouseWentOut),
    METHOD(WIcon, mouseWentOver),
    METHOD(WIcon, mouseMoved),
    METHOD(WIcon, mouseDragged),
    METHOD(WIcon, mouseWheel),
    METHOD(WIcon, touchStarted),
    METHOD(WIcon, touchEnded),
    METHOD(WIcon, touchMoved),
    METHOD(WIcon, gestureStarted),
    METHOD(WIcon, gestureChanged),
    METHOD(WIcon, gestureEnded),
    {NULL, NULL},
};

void luawt_WIcon(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WIcon,
        L,
        wrap<luawt_WIcon_make>::func,
        0,
        luawt_WIcon_methods,
        base
    );
}
