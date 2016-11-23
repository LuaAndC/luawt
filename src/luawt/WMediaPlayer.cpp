#include "boost-xtime.hpp"

#include <Wt/WInteractWidget>
#include <Wt/WProgressBar>
#include <Wt/WMediaPlayer>
#include <Wt/WString>
#include <Wt/WContainerWidget>
#include <Wt/WText>

#include "globals.hpp"

int luawt_WMediaPlayer_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 2) {
    Wt::WMediaPlayer::MediaType mediaType = static_cast<Wt::WMediaPlayer::MediaType>(lua_tointeger(L, 1));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WMediaPlayer * result = new WMediaPlayer(mediaType, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.make: %d", argc);
    }
}

int luawt_WMediaPlayer_mute(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 1) {
    bool mute = lua_toboolean(L, 2);
    self->mute(mute);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.mute: %d", argc);
    }
}

int luawt_WMediaPlayer_text(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 1) {
    Wt::WMediaPlayer::TextId id = static_cast<Wt::WMediaPlayer::TextId>(lua_tointeger(L, 2));
    Wt::WText * result = self->text(id);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.text: %d", argc);
    }
}

int luawt_WMediaPlayer_setTitle(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString title = Wt::WString(raw2);
    self->setTitle(title);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.setTitle: %d", argc);
    }
}

int luawt_WMediaPlayer_setPlaybackRate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 1) {
    double rate = lua_tonumber(L, 2);
    self->setPlaybackRate(rate);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.setPlaybackRate: %d", argc);
    }
}

int luawt_WMediaPlayer_setText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 2) {
    Wt::WMediaPlayer::TextId id = static_cast<Wt::WMediaPlayer::TextId>(lua_tointeger(L, 2));
    Wt::WText* text =
        luawt_checkFromLua<Wt::WText>(L, 3);
    self->setText(id, text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.setText: %d", argc);
    }
}

int luawt_WMediaPlayer_duration(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    double result = self->duration();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.duration: %d", argc);
    }
}

int luawt_WMediaPlayer_seek(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 1) {
    double time = lua_tonumber(L, 2);
    self->seek(time);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.seek: %d", argc);
    }
}

int luawt_WMediaPlayer_pause(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    self->pause();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.pause: %d", argc);
    }
}

int luawt_WMediaPlayer_button(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 1) {
    Wt::WMediaPlayer::ButtonControlId id = static_cast<Wt::WMediaPlayer::ButtonControlId>(lua_tointeger(L, 2));
    Wt::WInteractWidget * result = self->button(id);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.button: %d", argc);
    }
}

int luawt_WMediaPlayer_jsPlayerRef(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    std::string result = self->jsPlayerRef();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.jsPlayerRef: %d", argc);
    }
}

int luawt_WMediaPlayer_playing(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    bool result = self->playing();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.playing: %d", argc);
    }
}

int luawt_WMediaPlayer_videoWidth(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    int result = self->videoWidth();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.videoWidth: %d", argc);
    }
}

int luawt_WMediaPlayer_setVolume(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 1) {
    double volume = lua_tonumber(L, 2);
    self->setVolume(volume);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.setVolume: %d", argc);
    }
}

int luawt_WMediaPlayer_play(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    self->play();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.play: %d", argc);
    }
}

int luawt_WMediaPlayer_setButton(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 2) {
    Wt::WMediaPlayer::ButtonControlId id = static_cast<Wt::WMediaPlayer::ButtonControlId>(lua_tointeger(L, 2));
    Wt::WInteractWidget* btn =
        luawt_checkFromLua<Wt::WInteractWidget>(L, 3);
    self->setButton(id, btn);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.setButton: %d", argc);
    }
}

int luawt_WMediaPlayer_stop(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    self->stop();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.stop: %d", argc);
    }
}

int luawt_WMediaPlayer_progressBar(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 1) {
    Wt::WMediaPlayer::BarControlId id = static_cast<Wt::WMediaPlayer::BarControlId>(lua_tointeger(L, 2));
    Wt::WProgressBar * result = self->progressBar(id);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.progressBar: %d", argc);
    }
}

int luawt_WMediaPlayer_volume(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    double result = self->volume();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.volume: %d", argc);
    }
}

int luawt_WMediaPlayer_videoHeight(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    int result = self->videoHeight();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.videoHeight: %d", argc);
    }
}

int luawt_WMediaPlayer_readyState(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    Wt::WMediaPlayer::ReadyState result = self->readyState();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.readyState: %d", argc);
    }
}

int luawt_WMediaPlayer_currentTime(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    double result = self->currentTime();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.currentTime: %d", argc);
    }
}

int luawt_WMediaPlayer_setProgressBar(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 2) {
    Wt::WMediaPlayer::BarControlId id = static_cast<Wt::WMediaPlayer::BarControlId>(lua_tointeger(L, 2));
    Wt::WProgressBar* progressBar =
        luawt_checkFromLua<Wt::WProgressBar>(L, 3);
    self->setProgressBar(id, progressBar);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.setProgressBar: %d", argc);
    }
}

int luawt_WMediaPlayer_playbackRate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    double result = self->playbackRate();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.playbackRate: %d", argc);
    }
}

int luawt_WMediaPlayer_clearSources(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 0) {
    self->clearSources();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.clearSources: %d", argc);
    }
}

int luawt_WMediaPlayer_setVideoSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
        if (argc == 2) {
    int width = lua_tointeger(L, 2);
    int height = lua_tointeger(L, 3);
    self->setVideoSize(width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WMediaPlayer.setVideoSize: %d", argc);
    }
}


static const luaL_Reg luawt_WMediaPlayer_methods[] = {
    METHOD(WMediaPlayer, setVideoSize),
    METHOD(WMediaPlayer, videoWidth),
    METHOD(WMediaPlayer, videoHeight),
    METHOD(WMediaPlayer, setTitle),
    METHOD(WMediaPlayer, clearSources),
    METHOD(WMediaPlayer, setButton),
    METHOD(WMediaPlayer, button),
    METHOD(WMediaPlayer, setProgressBar),
    METHOD(WMediaPlayer, progressBar),
    METHOD(WMediaPlayer, setText),
    METHOD(WMediaPlayer, text),
    METHOD(WMediaPlayer, pause),
    METHOD(WMediaPlayer, play),
    METHOD(WMediaPlayer, stop),
    METHOD(WMediaPlayer, seek),
    METHOD(WMediaPlayer, setPlaybackRate),
    METHOD(WMediaPlayer, setVolume),
    METHOD(WMediaPlayer, volume),
    METHOD(WMediaPlayer, mute),
    METHOD(WMediaPlayer, playing),
    METHOD(WMediaPlayer, readyState),
    METHOD(WMediaPlayer, duration),
    METHOD(WMediaPlayer, currentTime),
    METHOD(WMediaPlayer, playbackRate),
    METHOD(WMediaPlayer, jsPlayerRef),
    {NULL, NULL},
};

void luawt_WMediaPlayer(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WMediaPlayer,
        L,
        wrap<luawt_WMediaPlayer_make>::func,
        0,
        luawt_WMediaPlayer_methods,
        base
    );
}
