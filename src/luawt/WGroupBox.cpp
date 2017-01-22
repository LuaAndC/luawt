#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WGroupBox>
#include <Wt/WString>

#include "globals.hpp"

static const char* WGroupBox_make_args0[] = {NULL};
static const char* WGroupBox_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WGroupBox_make_args2[] = {"char const *", NULL};
static const char* WGroupBox_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WGroupBox_make_args[] = {WGroupBox_make_args0, WGroupBox_make_args1, WGroupBox_make_args2, WGroupBox_make_args3, NULL};

int luawt_WGroupBox_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGroupBox_make_args);
    if (index == 0) {
    WGroupBox * result = new WGroupBox();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WGroupBox");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WGroupBox * result = new WGroupBox(parent);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString title = Wt::WString(raw1);
    WGroupBox * result = new WGroupBox(title);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WGroupBox");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString title = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WGroupBox * result = new WGroupBox(title, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WGroupBox.make");
    }
}

static const char* WGroupBox_setTitle_args0[] = {luawt_typeToStr<WGroupBox>(), "char const *", NULL};
static const char* const* const luawt_WGroupBox_setTitle_args[] = {WGroupBox_setTitle_args0, NULL};

int luawt_WGroupBox_setTitle(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGroupBox_setTitle_args);
    WGroupBox* self = luawt_checkFromLua<WGroupBox>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString title = Wt::WString(raw2);
    self->setTitle(title);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGroupBox.setTitle");
    }
}

static const char* WGroupBox_refresh_args0[] = {luawt_typeToStr<WGroupBox>(), NULL};
static const char* const* const luawt_WGroupBox_refresh_args[] = {WGroupBox_refresh_args0, NULL};

int luawt_WGroupBox_refresh(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGroupBox_refresh_args);
    WGroupBox* self = luawt_checkFromLua<WGroupBox>(L, 1);
    if (index == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WGroupBox.refresh");
    }
}

static const char* WGroupBox_title_args0[] = {luawt_typeToStr<WGroupBox>(), NULL};
static const char* const* const luawt_WGroupBox_title_args[] = {WGroupBox_title_args0, NULL};

int luawt_WGroupBox_title(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WGroupBox_title_args);
    WGroupBox* self = luawt_checkFromLua<WGroupBox>(L, 1);
    if (index == 0) {
    Wt::WString const & result = self->title();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WGroupBox.title");
    }
}

ADD_SIGNAL(scrolled, WGroupBox, Wt::WScrollEvent)
ADD_SIGNAL(keyWentDown, WGroupBox, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WGroupBox, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WGroupBox, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WGroupBox, Wt::NoClass)
ADD_SIGNAL(escapePressed, WGroupBox, Wt::NoClass)
ADD_SIGNAL(clicked, WGroupBox, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WGroupBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WGroupBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WGroupBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WGroupBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WGroupBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WGroupBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WGroupBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WGroupBox, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WGroupBox, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WGroupBox, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WGroupBox, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WGroupBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WGroupBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WGroupBox, Wt::WGestureEvent)

static const luaL_Reg luawt_WGroupBox_methods[] = {
    METHOD(WGroupBox, title),
    METHOD(WGroupBox, setTitle),
    METHOD(WGroupBox, refresh),
    METHOD(WGroupBox, scrolled),
    METHOD(WGroupBox, keyWentDown),
    METHOD(WGroupBox, keyPressed),
    METHOD(WGroupBox, keyWentUp),
    METHOD(WGroupBox, enterPressed),
    METHOD(WGroupBox, escapePressed),
    METHOD(WGroupBox, clicked),
    METHOD(WGroupBox, doubleClicked),
    METHOD(WGroupBox, mouseWentDown),
    METHOD(WGroupBox, mouseWentUp),
    METHOD(WGroupBox, mouseWentOut),
    METHOD(WGroupBox, mouseWentOver),
    METHOD(WGroupBox, mouseMoved),
    METHOD(WGroupBox, mouseDragged),
    METHOD(WGroupBox, mouseWheel),
    METHOD(WGroupBox, touchStarted),
    METHOD(WGroupBox, touchEnded),
    METHOD(WGroupBox, touchMoved),
    METHOD(WGroupBox, gestureStarted),
    METHOD(WGroupBox, gestureChanged),
    METHOD(WGroupBox, gestureEnded),
    {NULL, NULL},
};

void luawt_WGroupBox(lua_State* L) {
    const char* base = luawt_typeToStr<WContainerWidget>();
    assert(base);
    DECLARE_CLASS(
        WGroupBox,
        L,
        wrap<luawt_WGroupBox_make>::func,
        0,
        luawt_WGroupBox_methods,
        base
    );
}
