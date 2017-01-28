#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WAbstractMedia>
#include <Wt/WLink>

#include "globals.hpp"

static const char* WAbstractMedia_play_args0[] = {luawt_typeToStr<WAbstractMedia>(), NULL};
static const char* const* const luawt_WAbstractMedia_play_args[] = {WAbstractMedia_play_args0, NULL};

int luawt_WAbstractMedia_play(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractMedia_play_args);
    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
    if (index == 0) {
    self->play();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractMedia.play");
    }
}

static const char* WAbstractMedia_pause_args0[] = {luawt_typeToStr<WAbstractMedia>(), NULL};
static const char* const* const luawt_WAbstractMedia_pause_args[] = {WAbstractMedia_pause_args0, NULL};

int luawt_WAbstractMedia_pause(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractMedia_pause_args);
    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
    if (index == 0) {
    self->pause();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractMedia.pause");
    }
}

static const char* WAbstractMedia_addSource_args0[] = {luawt_typeToStr<WAbstractMedia>(), "char const *", NULL};
static const char* WAbstractMedia_addSource_args1[] = {luawt_typeToStr<WAbstractMedia>(), "char const *", "char const *", NULL};
static const char* WAbstractMedia_addSource_args2[] = {luawt_typeToStr<WAbstractMedia>(), "char const *", "char const *", "char const *", NULL};
static const char* const* const luawt_WAbstractMedia_addSource_args[] = {WAbstractMedia_addSource_args0, WAbstractMedia_addSource_args1, WAbstractMedia_addSource_args2, NULL};

int luawt_WAbstractMedia_addSource(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractMedia_addSource_args);
    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WLink source = Wt::WLink(raw2);
    self->addSource(source);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WLink source = Wt::WLink(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string type = std::string(raw3);
    self->addSource(source, type);
    return 0;
    
    } else if (index == 2) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WLink source = Wt::WLink(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string type = std::string(raw3);
    char const * raw4 = lua_tostring(L, 4);
    std::string media = std::string(raw4);
    self->addSource(source, type, media);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractMedia.addSource");
    }
}

static const char* WAbstractMedia_readyState_args0[] = {luawt_typeToStr<WAbstractMedia>(), NULL};
static const char* const* const luawt_WAbstractMedia_readyState_args[] = {WAbstractMedia_readyState_args0, NULL};

int luawt_WAbstractMedia_readyState(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractMedia_readyState_args);
    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
    if (index == 0) {
    Wt::WAbstractMedia::ReadyState result = self->readyState();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractMedia.readyState");
    }
}

static const char* WAbstractMedia_clearSources_args0[] = {luawt_typeToStr<WAbstractMedia>(), NULL};
static const char* const* const luawt_WAbstractMedia_clearSources_args[] = {WAbstractMedia_clearSources_args0, NULL};

int luawt_WAbstractMedia_clearSources(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractMedia_clearSources_args);
    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
    if (index == 0) {
    self->clearSources();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractMedia.clearSources");
    }
}

static const char* WAbstractMedia_jsMediaRef_args0[] = {luawt_typeToStr<WAbstractMedia>(), NULL};
static const char* const* const luawt_WAbstractMedia_jsMediaRef_args[] = {WAbstractMedia_jsMediaRef_args0, NULL};

int luawt_WAbstractMedia_jsMediaRef(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractMedia_jsMediaRef_args);
    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
    if (index == 0) {
    std::string result = self->jsMediaRef();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractMedia.jsMediaRef");
    }
}

static const char* WAbstractMedia_setPreloadMode_args0[] = {luawt_typeToStr<WAbstractMedia>(), "int", NULL};
static const char* const* const luawt_WAbstractMedia_setPreloadMode_args[] = {WAbstractMedia_setPreloadMode_args0, NULL};

int luawt_WAbstractMedia_setPreloadMode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractMedia_setPreloadMode_args);
    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
    if (index == 0) {
    Wt::WAbstractMedia::PreloadMode mode = static_cast<Wt::WAbstractMedia::PreloadMode>(lua_tointeger(L, 2));
    self->setPreloadMode(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractMedia.setPreloadMode");
    }
}

static const char* WAbstractMedia_setAlternativeContent_args0[] = {luawt_typeToStr<WAbstractMedia>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WAbstractMedia_setAlternativeContent_args[] = {WAbstractMedia_setAlternativeContent_args0, NULL};

int luawt_WAbstractMedia_setAlternativeContent(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractMedia_setAlternativeContent_args);
    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
    if (index == 0) {
    Wt::WWidget* alternative =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->setAlternativeContent(alternative);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractMedia.setAlternativeContent");
    }
}

static const char* WAbstractMedia_playing_args0[] = {luawt_typeToStr<WAbstractMedia>(), NULL};
static const char* const* const luawt_WAbstractMedia_playing_args[] = {WAbstractMedia_playing_args0, NULL};

int luawt_WAbstractMedia_playing(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractMedia_playing_args);
    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
    if (index == 0) {
    bool result = self->playing();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractMedia.playing");
    }
}

static const char* WAbstractMedia_preloadMode_args0[] = {luawt_typeToStr<WAbstractMedia>(), NULL};
static const char* const* const luawt_WAbstractMedia_preloadMode_args[] = {WAbstractMedia_preloadMode_args0, NULL};

int luawt_WAbstractMedia_preloadMode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractMedia_preloadMode_args);
    WAbstractMedia* self = luawt_checkFromLua<WAbstractMedia>(L, 1);
    if (index == 0) {
    Wt::WAbstractMedia::PreloadMode result = self->preloadMode();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractMedia.preloadMode");
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
    METHOD(WAbstractMedia, addSource),
    METHOD(WAbstractMedia, setAlternativeContent),
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
