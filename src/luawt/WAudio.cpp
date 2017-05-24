#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WAudio>

#include "enums.hpp"
#include "globals.hpp"

static const char* WAudio_make_args0[] = {NULL};
static const char* WAudio_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WAudio_make_args[] = {WAudio_make_args0, WAudio_make_args1, NULL};

int luawt_WAudio_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAudio_make_args);
    if (index == 0) {
    WAudio * l_result = new WAudio();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WAudio");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WAudio * l_result = new WAudio(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAudio.make");
    }
}

static const char* WAudio_jsAudioRef_args0[] = {luawt_typeToStr<WAudio>(), NULL};
static const char* const* const luawt_WAudio_jsAudioRef_args[] = {WAudio_jsAudioRef_args0, NULL};

int luawt_WAudio_jsAudioRef(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAudio_jsAudioRef_args);
    WAudio* self = luawt_checkFromLua<WAudio>(L, 1);
    if (index == 0) {
    std::string l_result = self->jsAudioRef();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAudio.jsAudioRef");
    }
}

ADD_SIGNAL(playbackStarted, WAudio, Wt::NoClass)
ADD_SIGNAL(playbackPaused, WAudio, Wt::NoClass)
ADD_SIGNAL(ended, WAudio, Wt::NoClass)
ADD_SIGNAL(timeUpdated, WAudio, Wt::NoClass)
ADD_SIGNAL(volumeChanged, WAudio, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WAudio, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WAudio, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WAudio, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WAudio, Wt::NoClass)
ADD_SIGNAL(escapePressed, WAudio, Wt::NoClass)
ADD_SIGNAL(clicked, WAudio, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WAudio, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WAudio, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WAudio, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WAudio, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WAudio, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WAudio, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WAudio, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WAudio, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WAudio, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WAudio, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WAudio, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WAudio, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WAudio, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WAudio, Wt::WGestureEvent)

static const luaL_Reg luawt_WAudio_methods[] = {
    METHOD(WAudio, jsAudioRef),
    METHOD(WAudio, playbackStarted),
    METHOD(WAudio, playbackPaused),
    METHOD(WAudio, ended),
    METHOD(WAudio, timeUpdated),
    METHOD(WAudio, volumeChanged),
    METHOD(WAudio, keyWentDown),
    METHOD(WAudio, keyPressed),
    METHOD(WAudio, keyWentUp),
    METHOD(WAudio, enterPressed),
    METHOD(WAudio, escapePressed),
    METHOD(WAudio, clicked),
    METHOD(WAudio, doubleClicked),
    METHOD(WAudio, mouseWentDown),
    METHOD(WAudio, mouseWentUp),
    METHOD(WAudio, mouseWentOut),
    METHOD(WAudio, mouseWentOver),
    METHOD(WAudio, mouseMoved),
    METHOD(WAudio, mouseDragged),
    METHOD(WAudio, mouseWheel),
    METHOD(WAudio, touchStarted),
    METHOD(WAudio, touchEnded),
    METHOD(WAudio, touchMoved),
    METHOD(WAudio, gestureStarted),
    METHOD(WAudio, gestureChanged),
    METHOD(WAudio, gestureEnded),
    {NULL, NULL},
};

void luawt_WAudio(lua_State* L) {
    const char* base = luawt_typeToStr<WAbstractMedia>();
    assert(base);
    DECLARE_CLASS(
        WAudio,
        L,
        wrap<luawt_WAudio_make>::func,
        0,
        luawt_WAudio_methods,
        base
    );
}
