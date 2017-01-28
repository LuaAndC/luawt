#include "boost-xtime.hpp"

#include <Wt/WInteractWidget>
#include <Wt/WLink>
#include <Wt/WProgressBar>
#include <Wt/WMediaPlayer>
#include <Wt/WString>
#include <Wt/WWidget>
#include <Wt/WContainerWidget>
#include <Wt/WText>

#include "globals.hpp"

static const char* WMediaPlayer_make_args0[] = {"int", NULL};
static const char* WMediaPlayer_make_args1[] = {"int", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WMediaPlayer_make_args[] = {WMediaPlayer_make_args0, WMediaPlayer_make_args1, NULL};

int luawt_WMediaPlayer_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_make_args);
    if (index == 0) {
    Wt::WMediaPlayer::MediaType mediaType = static_cast<Wt::WMediaPlayer::MediaType>(lua_tointeger(L, 1));
    WMediaPlayer * result = new WMediaPlayer(mediaType);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WMediaPlayer");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WMediaPlayer::MediaType mediaType = static_cast<Wt::WMediaPlayer::MediaType>(lua_tointeger(L, 1));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WMediaPlayer * result = new WMediaPlayer(mediaType, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.make");
    }
}

static const char* WMediaPlayer_mute_args0[] = {luawt_typeToStr<WMediaPlayer>(), "bool", NULL};
static const char* const* const luawt_WMediaPlayer_mute_args[] = {WMediaPlayer_mute_args0, NULL};

int luawt_WMediaPlayer_mute(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_mute_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    bool mute = lua_toboolean(L, 2);
    self->mute(mute);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.mute");
    }
}

static const char* WMediaPlayer_text_args0[] = {luawt_typeToStr<WMediaPlayer>(), "int", NULL};
static const char* const* const luawt_WMediaPlayer_text_args[] = {WMediaPlayer_text_args0, NULL};

int luawt_WMediaPlayer_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_text_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    Wt::WMediaPlayer::TextId id = static_cast<Wt::WMediaPlayer::TextId>(lua_tointeger(L, 2));
    Wt::WText * result = self->text(id);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.text");
    }
}

static const char* WMediaPlayer_setTitle_args0[] = {luawt_typeToStr<WMediaPlayer>(), "char const *", NULL};
static const char* const* const luawt_WMediaPlayer_setTitle_args[] = {WMediaPlayer_setTitle_args0, NULL};

int luawt_WMediaPlayer_setTitle(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_setTitle_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString title = Wt::WString(raw2);
    self->setTitle(title);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.setTitle");
    }
}

static const char* WMediaPlayer_setPlaybackRate_args0[] = {luawt_typeToStr<WMediaPlayer>(), "double", NULL};
static const char* const* const luawt_WMediaPlayer_setPlaybackRate_args[] = {WMediaPlayer_setPlaybackRate_args0, NULL};

int luawt_WMediaPlayer_setPlaybackRate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_setPlaybackRate_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    double rate = lua_tonumber(L, 2);
    self->setPlaybackRate(rate);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.setPlaybackRate");
    }
}

static const char* WMediaPlayer_setText_args0[] = {luawt_typeToStr<WMediaPlayer>(), "int", luawt_typeToStr<Wt::WText>(), NULL};
static const char* const* const luawt_WMediaPlayer_setText_args[] = {WMediaPlayer_setText_args0, NULL};

int luawt_WMediaPlayer_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_setText_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    Wt::WMediaPlayer::TextId id = static_cast<Wt::WMediaPlayer::TextId>(lua_tointeger(L, 2));
    Wt::WText* text =
        luawt_checkFromLua<Wt::WText>(L, 3);
    self->setText(id, text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.setText");
    }
}

static const char* WMediaPlayer_duration_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_duration_args[] = {WMediaPlayer_duration_args0, NULL};

int luawt_WMediaPlayer_duration(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_duration_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    double result = self->duration();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.duration");
    }
}

static const char* WMediaPlayer_seek_args0[] = {luawt_typeToStr<WMediaPlayer>(), "double", NULL};
static const char* const* const luawt_WMediaPlayer_seek_args[] = {WMediaPlayer_seek_args0, NULL};

int luawt_WMediaPlayer_seek(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_seek_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    double time = lua_tonumber(L, 2);
    self->seek(time);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.seek");
    }
}

static const char* WMediaPlayer_pause_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_pause_args[] = {WMediaPlayer_pause_args0, NULL};

int luawt_WMediaPlayer_pause(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_pause_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    self->pause();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.pause");
    }
}

static const char* WMediaPlayer_addSource_args0[] = {luawt_typeToStr<WMediaPlayer>(), "int", "char const *", NULL};
static const char* const* const luawt_WMediaPlayer_addSource_args[] = {WMediaPlayer_addSource_args0, NULL};

int luawt_WMediaPlayer_addSource(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_addSource_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    Wt::WMediaPlayer::Encoding encoding = static_cast<Wt::WMediaPlayer::Encoding>(lua_tointeger(L, 2));
    char const * raw3 = lua_tostring(L, 3);
    Wt::WLink link = Wt::WLink(raw3);
    self->addSource(encoding, link);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.addSource");
    }
}

static const char* WMediaPlayer_button_args0[] = {luawt_typeToStr<WMediaPlayer>(), "int", NULL};
static const char* const* const luawt_WMediaPlayer_button_args[] = {WMediaPlayer_button_args0, NULL};

int luawt_WMediaPlayer_button(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_button_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    Wt::WMediaPlayer::ButtonControlId id = static_cast<Wt::WMediaPlayer::ButtonControlId>(lua_tointeger(L, 2));
    Wt::WInteractWidget * result = self->button(id);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.button");
    }
}

static const char* WMediaPlayer_jsPlayerRef_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_jsPlayerRef_args[] = {WMediaPlayer_jsPlayerRef_args0, NULL};

int luawt_WMediaPlayer_jsPlayerRef(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_jsPlayerRef_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    std::string result = self->jsPlayerRef();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.jsPlayerRef");
    }
}

static const char* WMediaPlayer_playing_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_playing_args[] = {WMediaPlayer_playing_args0, NULL};

int luawt_WMediaPlayer_playing(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_playing_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    bool result = self->playing();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.playing");
    }
}

static const char* WMediaPlayer_videoWidth_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_videoWidth_args[] = {WMediaPlayer_videoWidth_args0, NULL};

int luawt_WMediaPlayer_videoWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_videoWidth_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    int result = self->videoWidth();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.videoWidth");
    }
}

static const char* WMediaPlayer_setVolume_args0[] = {luawt_typeToStr<WMediaPlayer>(), "double", NULL};
static const char* const* const luawt_WMediaPlayer_setVolume_args[] = {WMediaPlayer_setVolume_args0, NULL};

int luawt_WMediaPlayer_setVolume(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_setVolume_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    double volume = lua_tonumber(L, 2);
    self->setVolume(volume);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.setVolume");
    }
}

static const char* WMediaPlayer_play_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_play_args[] = {WMediaPlayer_play_args0, NULL};

int luawt_WMediaPlayer_play(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_play_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    self->play();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.play");
    }
}

static const char* WMediaPlayer_controlsWidget_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_controlsWidget_args[] = {WMediaPlayer_controlsWidget_args0, NULL};

int luawt_WMediaPlayer_controlsWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_controlsWidget_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    Wt::WWidget * result = self->controlsWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.controlsWidget");
    }
}

static const char* WMediaPlayer_setButton_args0[] = {luawt_typeToStr<WMediaPlayer>(), "int", luawt_typeToStr<Wt::WInteractWidget>(), NULL};
static const char* const* const luawt_WMediaPlayer_setButton_args[] = {WMediaPlayer_setButton_args0, NULL};

int luawt_WMediaPlayer_setButton(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_setButton_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    Wt::WMediaPlayer::ButtonControlId id = static_cast<Wt::WMediaPlayer::ButtonControlId>(lua_tointeger(L, 2));
    Wt::WInteractWidget* btn =
        luawt_checkFromLua<Wt::WInteractWidget>(L, 3);
    self->setButton(id, btn);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.setButton");
    }
}

static const char* WMediaPlayer_stop_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_stop_args[] = {WMediaPlayer_stop_args0, NULL};

int luawt_WMediaPlayer_stop(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_stop_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    self->stop();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.stop");
    }
}

static const char* WMediaPlayer_progressBar_args0[] = {luawt_typeToStr<WMediaPlayer>(), "int", NULL};
static const char* const* const luawt_WMediaPlayer_progressBar_args[] = {WMediaPlayer_progressBar_args0, NULL};

int luawt_WMediaPlayer_progressBar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_progressBar_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    Wt::WMediaPlayer::BarControlId id = static_cast<Wt::WMediaPlayer::BarControlId>(lua_tointeger(L, 2));
    Wt::WProgressBar * result = self->progressBar(id);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.progressBar");
    }
}

static const char* WMediaPlayer_volume_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_volume_args[] = {WMediaPlayer_volume_args0, NULL};

int luawt_WMediaPlayer_volume(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_volume_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    double result = self->volume();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.volume");
    }
}

static const char* WMediaPlayer_videoHeight_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_videoHeight_args[] = {WMediaPlayer_videoHeight_args0, NULL};

int luawt_WMediaPlayer_videoHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_videoHeight_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    int result = self->videoHeight();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.videoHeight");
    }
}

static const char* WMediaPlayer_readyState_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_readyState_args[] = {WMediaPlayer_readyState_args0, NULL};

int luawt_WMediaPlayer_readyState(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_readyState_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    Wt::WMediaPlayer::ReadyState result = self->readyState();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.readyState");
    }
}

static const char* WMediaPlayer_currentTime_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_currentTime_args[] = {WMediaPlayer_currentTime_args0, NULL};

int luawt_WMediaPlayer_currentTime(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_currentTime_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    double result = self->currentTime();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.currentTime");
    }
}

static const char* WMediaPlayer_setProgressBar_args0[] = {luawt_typeToStr<WMediaPlayer>(), "int", luawt_typeToStr<Wt::WProgressBar>(), NULL};
static const char* const* const luawt_WMediaPlayer_setProgressBar_args[] = {WMediaPlayer_setProgressBar_args0, NULL};

int luawt_WMediaPlayer_setProgressBar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_setProgressBar_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    Wt::WMediaPlayer::BarControlId id = static_cast<Wt::WMediaPlayer::BarControlId>(lua_tointeger(L, 2));
    Wt::WProgressBar* progressBar =
        luawt_checkFromLua<Wt::WProgressBar>(L, 3);
    self->setProgressBar(id, progressBar);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.setProgressBar");
    }
}

static const char* WMediaPlayer_playbackRate_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_playbackRate_args[] = {WMediaPlayer_playbackRate_args0, NULL};

int luawt_WMediaPlayer_playbackRate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_playbackRate_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    double result = self->playbackRate();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.playbackRate");
    }
}

static const char* WMediaPlayer_clearSources_args0[] = {luawt_typeToStr<WMediaPlayer>(), NULL};
static const char* const* const luawt_WMediaPlayer_clearSources_args[] = {WMediaPlayer_clearSources_args0, NULL};

int luawt_WMediaPlayer_clearSources(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_clearSources_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    self->clearSources();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.clearSources");
    }
}

static const char* WMediaPlayer_getSource_args0[] = {luawt_typeToStr<WMediaPlayer>(), "int", NULL};
static const char* const* const luawt_WMediaPlayer_getSource_args[] = {WMediaPlayer_getSource_args0, NULL};

int luawt_WMediaPlayer_getSource(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_getSource_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    Wt::WMediaPlayer::Encoding encoding = static_cast<Wt::WMediaPlayer::Encoding>(lua_tointeger(L, 2));
    Wt::WLink result = self->getSource(encoding);
    lua_pushstring(L, result.url().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.getSource");
    }
}

static const char* WMediaPlayer_setControlsWidget_args0[] = {luawt_typeToStr<WMediaPlayer>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WMediaPlayer_setControlsWidget_args[] = {WMediaPlayer_setControlsWidget_args0, NULL};

int luawt_WMediaPlayer_setControlsWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_setControlsWidget_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    Wt::WWidget* controls =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->setControlsWidget(controls);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.setControlsWidget");
    }
}

static const char* WMediaPlayer_setVideoSize_args0[] = {luawt_typeToStr<WMediaPlayer>(), "int", "int", NULL};
static const char* const* const luawt_WMediaPlayer_setVideoSize_args[] = {WMediaPlayer_setVideoSize_args0, NULL};

int luawt_WMediaPlayer_setVideoSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WMediaPlayer_setVideoSize_args);
    WMediaPlayer* self = luawt_checkFromLua<WMediaPlayer>(L, 1);
    if (index == 0) {
    int width = lua_tointeger(L, 2);
    int height = lua_tointeger(L, 3);
    self->setVideoSize(width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WMediaPlayer.setVideoSize");
    }
}


static const luaL_Reg luawt_WMediaPlayer_methods[] = {
    METHOD(WMediaPlayer, setVideoSize),
    METHOD(WMediaPlayer, videoWidth),
    METHOD(WMediaPlayer, videoHeight),
    METHOD(WMediaPlayer, setControlsWidget),
    METHOD(WMediaPlayer, controlsWidget),
    METHOD(WMediaPlayer, setTitle),
    METHOD(WMediaPlayer, addSource),
    METHOD(WMediaPlayer, getSource),
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
