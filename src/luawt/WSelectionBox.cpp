#include "boost-xtime.hpp"

#include <Wt/WSelectionBox>
#include <Wt/WContainerWidget>

#include "globals.hpp"

int luawt_WSelectionBox_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WSelectionBox * result = new WSelectionBox(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSelectionBox.make: %d", argc);
    }
}

int luawt_WSelectionBox_clearSelection(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSelectionBox* self = luawt_checkFromLua<WSelectionBox>(L, 1);
        if (argc == 0) {
    self->clearSelection();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WSelectionBox.clearSelection: %d", argc);
    }
}

int luawt_WSelectionBox_selectionMode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSelectionBox* self = luawt_checkFromLua<WSelectionBox>(L, 1);
        if (argc == 0) {
    Wt::SelectionMode result = self->selectionMode();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSelectionBox.selectionMode: %d", argc);
    }
}

int luawt_WSelectionBox_verticalSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSelectionBox* self = luawt_checkFromLua<WSelectionBox>(L, 1);
        if (argc == 0) {
    int result = self->verticalSize();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSelectionBox.verticalSize: %d", argc);
    }
}

int luawt_WSelectionBox_setVerticalSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSelectionBox* self = luawt_checkFromLua<WSelectionBox>(L, 1);
        if (argc == 1) {
    int items = lua_tointeger(L, 2);
    self->setVerticalSize(items);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WSelectionBox.setVerticalSize: %d", argc);
    }
}

int luawt_WSelectionBox_setSelectionMode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSelectionBox* self = luawt_checkFromLua<WSelectionBox>(L, 1);
        if (argc == 1) {
    Wt::SelectionMode mode = static_cast<Wt::SelectionMode>(lua_tointeger(L, 2));
    self->setSelectionMode(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WSelectionBox.setSelectionMode: %d", argc);
    }
}

ADD_SIGNAL(changed, WSelectionBox, Wt::NoClass)
ADD_SIGNAL(selected, WSelectionBox, Wt::NoClass)
ADD_SIGNAL(blurred, WSelectionBox, Wt::NoClass)
ADD_SIGNAL(focussed, WSelectionBox, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WSelectionBox, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WSelectionBox, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WSelectionBox, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WSelectionBox, Wt::NoClass)
ADD_SIGNAL(escapePressed, WSelectionBox, Wt::NoClass)
ADD_SIGNAL(clicked, WSelectionBox, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WSelectionBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WSelectionBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WSelectionBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WSelectionBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WSelectionBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WSelectionBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WSelectionBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WSelectionBox, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WSelectionBox, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WSelectionBox, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WSelectionBox, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WSelectionBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WSelectionBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WSelectionBox, Wt::WGestureEvent)

static const luaL_Reg luawt_WSelectionBox_methods[] = {
    METHOD(WSelectionBox, verticalSize),
    METHOD(WSelectionBox, setVerticalSize),
    METHOD(WSelectionBox, setSelectionMode),
    METHOD(WSelectionBox, selectionMode),
    METHOD(WSelectionBox, clearSelection),
    METHOD(WSelectionBox, changed),
    METHOD(WSelectionBox, selected),
    METHOD(WSelectionBox, blurred),
    METHOD(WSelectionBox, focussed),
    METHOD(WSelectionBox, keyWentDown),
    METHOD(WSelectionBox, keyPressed),
    METHOD(WSelectionBox, keyWentUp),
    METHOD(WSelectionBox, enterPressed),
    METHOD(WSelectionBox, escapePressed),
    METHOD(WSelectionBox, clicked),
    METHOD(WSelectionBox, doubleClicked),
    METHOD(WSelectionBox, mouseWentDown),
    METHOD(WSelectionBox, mouseWentUp),
    METHOD(WSelectionBox, mouseWentOut),
    METHOD(WSelectionBox, mouseWentOver),
    METHOD(WSelectionBox, mouseMoved),
    METHOD(WSelectionBox, mouseDragged),
    METHOD(WSelectionBox, mouseWheel),
    METHOD(WSelectionBox, touchStarted),
    METHOD(WSelectionBox, touchEnded),
    METHOD(WSelectionBox, touchMoved),
    METHOD(WSelectionBox, gestureStarted),
    METHOD(WSelectionBox, gestureChanged),
    METHOD(WSelectionBox, gestureEnded),
    {NULL, NULL},
};

void luawt_WSelectionBox(lua_State* L) {
    const char* base = luawt_typeToStr<WComboBox>();
    assert(base);
    DECLARE_CLASS(
        WSelectionBox,
        L,
        wrap<luawt_WSelectionBox_make>::func,
        0,
        luawt_WSelectionBox_methods,
        base
    );
}
