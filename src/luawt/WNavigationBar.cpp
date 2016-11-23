#include "boost-xtime.hpp"

#include <Wt/WLineEdit>
#include <Wt/WNavigationBar>
#include <Wt/WMenu>
#include <Wt/WContainerWidget>

#include "globals.hpp"

int luawt_WNavigationBar_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WNavigationBar * result = new WNavigationBar(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WNavigationBar.make: %d", argc);
    }
}

int luawt_WNavigationBar_addSearch(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WNavigationBar* self = luawt_checkFromLua<WNavigationBar>(L, 1);
        if (argc == 2) {
    Wt::WLineEdit* field =
        luawt_checkFromLua<Wt::WLineEdit>(L, 2);
    Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(lua_tointeger(L, 3));
    self->addSearch(field, alignment);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WNavigationBar.addSearch: %d", argc);
    }
}

int luawt_WNavigationBar_addMenu(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WNavigationBar* self = luawt_checkFromLua<WNavigationBar>(L, 1);
        if (argc == 2) {
    Wt::WMenu* menu =
        luawt_checkFromLua<Wt::WMenu>(L, 2);
    Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(lua_tointeger(L, 3));
    self->addMenu(menu, alignment);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WNavigationBar.addMenu: %d", argc);
    }
}

int luawt_WNavigationBar_setResponsive(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WNavigationBar* self = luawt_checkFromLua<WNavigationBar>(L, 1);
        if (argc == 1) {
    bool responsive = lua_toboolean(L, 2);
    self->setResponsive(responsive);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WNavigationBar.setResponsive: %d", argc);
    }
}

ADD_SIGNAL(keyWentDown, WNavigationBar, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WNavigationBar, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WNavigationBar, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WNavigationBar, Wt::NoClass)
ADD_SIGNAL(escapePressed, WNavigationBar, Wt::NoClass)
ADD_SIGNAL(clicked, WNavigationBar, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WNavigationBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WNavigationBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WNavigationBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WNavigationBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WNavigationBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WNavigationBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WNavigationBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WNavigationBar, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WNavigationBar, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WNavigationBar, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WNavigationBar, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WNavigationBar, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WNavigationBar, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WNavigationBar, Wt::WGestureEvent)

static const luaL_Reg luawt_WNavigationBar_methods[] = {
    METHOD(WNavigationBar, setResponsive),
    METHOD(WNavigationBar, addMenu),
    METHOD(WNavigationBar, addSearch),
    METHOD(WNavigationBar, keyWentDown),
    METHOD(WNavigationBar, keyPressed),
    METHOD(WNavigationBar, keyWentUp),
    METHOD(WNavigationBar, enterPressed),
    METHOD(WNavigationBar, escapePressed),
    METHOD(WNavigationBar, clicked),
    METHOD(WNavigationBar, doubleClicked),
    METHOD(WNavigationBar, mouseWentDown),
    METHOD(WNavigationBar, mouseWentUp),
    METHOD(WNavigationBar, mouseWentOut),
    METHOD(WNavigationBar, mouseWentOver),
    METHOD(WNavigationBar, mouseMoved),
    METHOD(WNavigationBar, mouseDragged),
    METHOD(WNavigationBar, mouseWheel),
    METHOD(WNavigationBar, touchStarted),
    METHOD(WNavigationBar, touchEnded),
    METHOD(WNavigationBar, touchMoved),
    METHOD(WNavigationBar, gestureStarted),
    METHOD(WNavigationBar, gestureChanged),
    METHOD(WNavigationBar, gestureEnded),
    {NULL, NULL},
};

void luawt_WNavigationBar(lua_State* L) {
    const char* base = luawt_typeToStr<WTemplate>();
    assert(base);
    DECLARE_CLASS(
        WNavigationBar,
        L,
        wrap<luawt_WNavigationBar_make>::func,
        0,
        luawt_WNavigationBar_methods,
        base
    );
}
