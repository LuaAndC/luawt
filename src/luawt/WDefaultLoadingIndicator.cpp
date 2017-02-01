#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WDefaultLoadingIndicator>
#include <Wt/WString>

#include "globals.hpp"

static const char* WDefaultLoadingIndicator_make_args0[] = {NULL};
static const char* const* const luawt_WDefaultLoadingIndicator_make_args[] = {WDefaultLoadingIndicator_make_args0, NULL};

int luawt_WDefaultLoadingIndicator_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDefaultLoadingIndicator_make_args);
    if (index == 0) {
    WDefaultLoadingIndicator * l_result = new WDefaultLoadingIndicator();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WDefaultLoadingIndicator");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDefaultLoadingIndicator.make");
    }
}

static const char* WDefaultLoadingIndicator_widget_args0[] = {luawt_typeToStr<WDefaultLoadingIndicator>(), NULL};
static const char* const* const luawt_WDefaultLoadingIndicator_widget_args[] = {WDefaultLoadingIndicator_widget_args0, NULL};

int luawt_WDefaultLoadingIndicator_widget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDefaultLoadingIndicator_widget_args);
    WDefaultLoadingIndicator* self = luawt_checkFromLua<WDefaultLoadingIndicator>(L, 1);
    if (index == 0) {
    Wt::WWidget * l_result = self->widget();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDefaultLoadingIndicator.widget");
    }
}

static const char* WDefaultLoadingIndicator_setMessage_args0[] = {luawt_typeToStr<WDefaultLoadingIndicator>(), "char const *", NULL};
static const char* const* const luawt_WDefaultLoadingIndicator_setMessage_args[] = {WDefaultLoadingIndicator_setMessage_args0, NULL};

int luawt_WDefaultLoadingIndicator_setMessage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDefaultLoadingIndicator_setMessage_args);
    WDefaultLoadingIndicator* self = luawt_checkFromLua<WDefaultLoadingIndicator>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setMessage(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDefaultLoadingIndicator.setMessage");
    }
}

ADD_SIGNAL(keyWentDown, WDefaultLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WDefaultLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WDefaultLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WDefaultLoadingIndicator, Wt::NoClass)
ADD_SIGNAL(escapePressed, WDefaultLoadingIndicator, Wt::NoClass)
ADD_SIGNAL(clicked, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WDefaultLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WDefaultLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WDefaultLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WDefaultLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WDefaultLoadingIndicator, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WDefaultLoadingIndicator, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WDefaultLoadingIndicator, Wt::WGestureEvent)

static const luaL_Reg luawt_WDefaultLoadingIndicator_methods[] = {
    METHOD(WDefaultLoadingIndicator, widget),
    METHOD(WDefaultLoadingIndicator, setMessage),
    METHOD(WDefaultLoadingIndicator, keyWentDown),
    METHOD(WDefaultLoadingIndicator, keyPressed),
    METHOD(WDefaultLoadingIndicator, keyWentUp),
    METHOD(WDefaultLoadingIndicator, enterPressed),
    METHOD(WDefaultLoadingIndicator, escapePressed),
    METHOD(WDefaultLoadingIndicator, clicked),
    METHOD(WDefaultLoadingIndicator, doubleClicked),
    METHOD(WDefaultLoadingIndicator, mouseWentDown),
    METHOD(WDefaultLoadingIndicator, mouseWentUp),
    METHOD(WDefaultLoadingIndicator, mouseWentOut),
    METHOD(WDefaultLoadingIndicator, mouseWentOver),
    METHOD(WDefaultLoadingIndicator, mouseMoved),
    METHOD(WDefaultLoadingIndicator, mouseDragged),
    METHOD(WDefaultLoadingIndicator, mouseWheel),
    METHOD(WDefaultLoadingIndicator, touchStarted),
    METHOD(WDefaultLoadingIndicator, touchEnded),
    METHOD(WDefaultLoadingIndicator, touchMoved),
    METHOD(WDefaultLoadingIndicator, gestureStarted),
    METHOD(WDefaultLoadingIndicator, gestureChanged),
    METHOD(WDefaultLoadingIndicator, gestureEnded),
    {NULL, NULL},
};

void luawt_WDefaultLoadingIndicator(lua_State* L) {
    const char* base = luawt_typeToStr<WText>();
    assert(base);
    DECLARE_CLASS(
        WDefaultLoadingIndicator,
        L,
        wrap<luawt_WDefaultLoadingIndicator_make>::func,
        0,
        luawt_WDefaultLoadingIndicator_methods,
        base
    );
}
