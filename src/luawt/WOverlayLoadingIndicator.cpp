#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WOverlayLoadingIndicator>
#include <Wt/WString>

#include "globals.hpp"

static const char* WOverlayLoadingIndicator_make_args0[] = {NULL};
static const char* WOverlayLoadingIndicator_make_args1[] = {"char const *", NULL};
static const char* WOverlayLoadingIndicator_make_args2[] = {"char const *", "char const *", NULL};
static const char* WOverlayLoadingIndicator_make_args3[] = {"char const *", "char const *", "char const *", NULL};
static const char* const* const luawt_WOverlayLoadingIndicator_make_args[] = {WOverlayLoadingIndicator_make_args0, WOverlayLoadingIndicator_make_args1, WOverlayLoadingIndicator_make_args2, WOverlayLoadingIndicator_make_args3, NULL};

int luawt_WOverlayLoadingIndicator_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WOverlayLoadingIndicator_make_args);
    if (index == 0) {
    WOverlayLoadingIndicator * l_result = new WOverlayLoadingIndicator();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WOverlayLoadingIndicator");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString styleClass = Wt::WString(raw1);
    WOverlayLoadingIndicator * l_result = new WOverlayLoadingIndicator(styleClass);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WOverlayLoadingIndicator");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString styleClass = Wt::WString(raw1);
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString backgroundStyleClass = Wt::WString(raw2);
    WOverlayLoadingIndicator * l_result = new WOverlayLoadingIndicator(styleClass, backgroundStyleClass);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WOverlayLoadingIndicator");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString styleClass = Wt::WString(raw1);
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString backgroundStyleClass = Wt::WString(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString textStyleClass = Wt::WString(raw3);
    WOverlayLoadingIndicator * l_result = new WOverlayLoadingIndicator(styleClass, backgroundStyleClass, textStyleClass);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WOverlayLoadingIndicator");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WOverlayLoadingIndicator.make");
    }
}

static const char* WOverlayLoadingIndicator_widget_args0[] = {luawt_typeToStr<WOverlayLoadingIndicator>(), NULL};
static const char* const* const luawt_WOverlayLoadingIndicator_widget_args[] = {WOverlayLoadingIndicator_widget_args0, NULL};

int luawt_WOverlayLoadingIndicator_widget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WOverlayLoadingIndicator_widget_args);
    WOverlayLoadingIndicator* self = luawt_checkFromLua<WOverlayLoadingIndicator>(L, 1);
    if (index == 0) {
    Wt::WWidget * l_result = self->widget();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WOverlayLoadingIndicator.widget");
    }
}

static const char* WOverlayLoadingIndicator_setMessage_args0[] = {luawt_typeToStr<WOverlayLoadingIndicator>(), "char const *", NULL};
static const char* const* const luawt_WOverlayLoadingIndicator_setMessage_args[] = {WOverlayLoadingIndicator_setMessage_args0, NULL};

int luawt_WOverlayLoadingIndicator_setMessage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WOverlayLoadingIndicator_setMessage_args);
    WOverlayLoadingIndicator* self = luawt_checkFromLua<WOverlayLoadingIndicator>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setMessage(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WOverlayLoadingIndicator.setMessage");
    }
}

ADD_SIGNAL(scrolled, WOverlayLoadingIndicator, Wt::WScrollEvent)
ADD_SIGNAL(keyWentDown, WOverlayLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WOverlayLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WOverlayLoadingIndicator, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WOverlayLoadingIndicator, Wt::NoClass)
ADD_SIGNAL(escapePressed, WOverlayLoadingIndicator, Wt::NoClass)
ADD_SIGNAL(clicked, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WOverlayLoadingIndicator, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WOverlayLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WOverlayLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WOverlayLoadingIndicator, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WOverlayLoadingIndicator, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WOverlayLoadingIndicator, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WOverlayLoadingIndicator, Wt::WGestureEvent)

static const luaL_Reg luawt_WOverlayLoadingIndicator_methods[] = {
    METHOD(WOverlayLoadingIndicator, widget),
    METHOD(WOverlayLoadingIndicator, setMessage),
    METHOD(WOverlayLoadingIndicator, scrolled),
    METHOD(WOverlayLoadingIndicator, keyWentDown),
    METHOD(WOverlayLoadingIndicator, keyPressed),
    METHOD(WOverlayLoadingIndicator, keyWentUp),
    METHOD(WOverlayLoadingIndicator, enterPressed),
    METHOD(WOverlayLoadingIndicator, escapePressed),
    METHOD(WOverlayLoadingIndicator, clicked),
    METHOD(WOverlayLoadingIndicator, doubleClicked),
    METHOD(WOverlayLoadingIndicator, mouseWentDown),
    METHOD(WOverlayLoadingIndicator, mouseWentUp),
    METHOD(WOverlayLoadingIndicator, mouseWentOut),
    METHOD(WOverlayLoadingIndicator, mouseWentOver),
    METHOD(WOverlayLoadingIndicator, mouseMoved),
    METHOD(WOverlayLoadingIndicator, mouseDragged),
    METHOD(WOverlayLoadingIndicator, mouseWheel),
    METHOD(WOverlayLoadingIndicator, touchStarted),
    METHOD(WOverlayLoadingIndicator, touchEnded),
    METHOD(WOverlayLoadingIndicator, touchMoved),
    METHOD(WOverlayLoadingIndicator, gestureStarted),
    METHOD(WOverlayLoadingIndicator, gestureChanged),
    METHOD(WOverlayLoadingIndicator, gestureEnded),
    {NULL, NULL},
};

void luawt_WOverlayLoadingIndicator(lua_State* L) {
    const char* base = luawt_typeToStr<WContainerWidget>();
    assert(base);
    DECLARE_CLASS(
        WOverlayLoadingIndicator,
        L,
        wrap<luawt_WOverlayLoadingIndicator_make>::func,
        0,
        luawt_WOverlayLoadingIndicator_methods,
        base
    );
}
