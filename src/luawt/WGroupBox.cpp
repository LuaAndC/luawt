#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WGroupBox>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WGroupBox_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WGroupBox * result = new WGroupBox(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString title = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WGroupBox * result = new WGroupBox(title, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WGroupBox.make: %d", argc);
    }
}

int luawt_WGroupBox_setTitle(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGroupBox* self = luawt_checkFromLua<WGroupBox>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString title = Wt::WString(raw2);
    self->setTitle(title);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGroupBox.setTitle: %d", argc);
    }
}

int luawt_WGroupBox_refresh(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGroupBox* self = luawt_checkFromLua<WGroupBox>(L, 1);
        if (argc == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WGroupBox.refresh: %d", argc);
    }
}

int luawt_WGroupBox_title(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WGroupBox* self = luawt_checkFromLua<WGroupBox>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->title();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WGroupBox.title: %d", argc);
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
