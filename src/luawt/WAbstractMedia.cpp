#include "boost-xtime.hpp"

#include <Wt/WAbstractMedia>

#include "globals.hpp"

int luawt_WAbstractMedia_play(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
        if (argc == 0) {
    self->play();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractMedia.play: %d", argc);
    }
}

int luawt_WAbstractMedia_pause(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
        if (argc == 0) {
    self->pause();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractMedia.pause: %d", argc);
    }
}

int luawt_WAbstractMedia_readyState(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
        if (argc == 0) {
    Wt::WAbstractMedia::ReadyState result = self->readyState();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractMedia.readyState: %d", argc);
    }
}

int luawt_WAbstractMedia_preloadMode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
        if (argc == 0) {
    Wt::WAbstractMedia::PreloadMode result = self->preloadMode();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractMedia.preloadMode: %d", argc);
    }
}

int luawt_WAbstractMedia_jsMediaRef(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
        if (argc == 0) {
    std::string result = self->jsMediaRef();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractMedia.jsMediaRef: %d", argc);
    }
}

int luawt_WAbstractMedia_setPreloadMode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
        if (argc == 1) {
    Wt::WAbstractMedia::PreloadMode mode = static_cast<Wt::WAbstractMedia::PreloadMode>(lua_tointeger(L, 2));
    self->setPreloadMode(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractMedia.setPreloadMode: %d", argc);
    }
}

int luawt_WAbstractMedia_clearSources(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
        if (argc == 0) {
    self->clearSources();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractMedia.clearSources: %d", argc);
    }
}

int luawt_WAbstractMedia_playing(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
        if (argc == 0) {
    bool result = self->playing();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractMedia.playing: %d", argc);
    }
}

ADD_SIGNAL(playbackStarted, WAbstractMedia, Wt::NoClass)
ADD_SIGNAL(playbackPaused, WAbstractMedia, Wt::NoClass)
ADD_SIGNAL(ended, WAbstractMedia, Wt::NoClass)
ADD_SIGNAL(timeUpdated, WAbstractMedia, Wt::NoClass)
ADD_SIGNAL(volumeChanged, WAbstractMedia, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WAbstractMedia, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WAbstractMedia, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WAbstractMedia, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WAbstractMedia, Wt::NoClass)
ADD_SIGNAL(escapePressed, WAbstractMedia, Wt::NoClass)
ADD_SIGNAL(clicked, WAbstractMedia, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WAbstractMedia, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WAbstractMedia, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WAbstractMedia, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WAbstractMedia, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WAbstractMedia, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WAbstractMedia, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WAbstractMedia, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WAbstractMedia, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WAbstractMedia, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WAbstractMedia, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WAbstractMedia, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WAbstractMedia, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WAbstractMedia, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WAbstractMedia, Wt::WGestureEvent)

static const luaL_Reg luawt_WAbstractMedia_methods[] = {
    METHOD(WAbstractMedia, setPreloadMode),
    METHOD(WAbstractMedia, preloadMode),
    METHOD(WAbstractMedia, clearSources),
    METHOD(WAbstractMedia, play),
    METHOD(WAbstractMedia, pause),
    METHOD(WAbstractMedia, playing),
    METHOD(WAbstractMedia, readyState),
    METHOD(WAbstractMedia, jsMediaRef),
    METHOD(WAbstractMedia, playbackStarted),
    METHOD(WAbstractMedia, playbackPaused),
    METHOD(WAbstractMedia, ended),
    METHOD(WAbstractMedia, timeUpdated),
    METHOD(WAbstractMedia, volumeChanged),
    METHOD(WAbstractMedia, keyWentDown),
    METHOD(WAbstractMedia, keyPressed),
    METHOD(WAbstractMedia, keyWentUp),
    METHOD(WAbstractMedia, enterPressed),
    METHOD(WAbstractMedia, escapePressed),
    METHOD(WAbstractMedia, clicked),
    METHOD(WAbstractMedia, doubleClicked),
    METHOD(WAbstractMedia, mouseWentDown),
    METHOD(WAbstractMedia, mouseWentUp),
    METHOD(WAbstractMedia, mouseWentOut),
    METHOD(WAbstractMedia, mouseWentOver),
    METHOD(WAbstractMedia, mouseMoved),
    METHOD(WAbstractMedia, mouseDragged),
    METHOD(WAbstractMedia, mouseWheel),
    METHOD(WAbstractMedia, touchStarted),
    METHOD(WAbstractMedia, touchEnded),
    METHOD(WAbstractMedia, touchMoved),
    METHOD(WAbstractMedia, gestureStarted),
    METHOD(WAbstractMedia, gestureChanged),
    METHOD(WAbstractMedia, gestureEnded),
    {NULL, NULL},
};

void luawt_WAbstractMedia(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WAbstractMedia,
        L,
        0,
        0,
        luawt_WAbstractMedia_methods,
        base
    );
}
