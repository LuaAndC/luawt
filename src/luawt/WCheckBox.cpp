#include "boost-xtime.hpp"

#include <Wt/WCheckBox>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WCheckBox_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WCheckBox * result = new WCheckBox(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WCheckBox * result = new WCheckBox(text, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCheckBox.make: %d", argc);
    }
}

int luawt_WCheckBox_setCheckState(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCheckBox* self = luawt_checkFromLua<WCheckBox>(L, 1);
        if (argc == 1) {
    Wt::CheckState state = static_cast<Wt::CheckState>(lua_tointeger(L, 2));
    self->setCheckState(state);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCheckBox.setCheckState: %d", argc);
    }
}

int luawt_WCheckBox_isTristate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCheckBox* self = luawt_checkFromLua<WCheckBox>(L, 1);
        if (argc == 0) {
    bool result = self->isTristate();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCheckBox.isTristate: %d", argc);
    }
}

int luawt_WCheckBox_setTristate(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCheckBox* self = luawt_checkFromLua<WCheckBox>(L, 1);
        if (argc == 1) {
    bool tristate = lua_toboolean(L, 2);
    self->setTristate(tristate);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WCheckBox.setTristate: %d", argc);
    }
}

int luawt_WCheckBox_checkState(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WCheckBox* self = luawt_checkFromLua<WCheckBox>(L, 1);
        if (argc == 0) {
    Wt::CheckState result = self->checkState();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WCheckBox.checkState: %d", argc);
    }
}

ADD_SIGNAL(checked, WCheckBox, Wt::NoClass)
ADD_SIGNAL(unChecked, WCheckBox, Wt::NoClass)
ADD_SIGNAL(changed, WCheckBox, Wt::NoClass)
ADD_SIGNAL(selected, WCheckBox, Wt::NoClass)
ADD_SIGNAL(blurred, WCheckBox, Wt::NoClass)
ADD_SIGNAL(focussed, WCheckBox, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WCheckBox, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WCheckBox, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WCheckBox, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WCheckBox, Wt::NoClass)
ADD_SIGNAL(escapePressed, WCheckBox, Wt::NoClass)
ADD_SIGNAL(clicked, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WCheckBox, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WCheckBox, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WCheckBox, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WCheckBox, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WCheckBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WCheckBox, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WCheckBox, Wt::WGestureEvent)

static const luaL_Reg luawt_WCheckBox_methods[] = {
    METHOD(WCheckBox, setTristate),
    METHOD(WCheckBox, isTristate),
    METHOD(WCheckBox, setCheckState),
    METHOD(WCheckBox, checkState),
    METHOD(WCheckBox, checked),
    METHOD(WCheckBox, unChecked),
    METHOD(WCheckBox, changed),
    METHOD(WCheckBox, selected),
    METHOD(WCheckBox, blurred),
    METHOD(WCheckBox, focussed),
    METHOD(WCheckBox, keyWentDown),
    METHOD(WCheckBox, keyPressed),
    METHOD(WCheckBox, keyWentUp),
    METHOD(WCheckBox, enterPressed),
    METHOD(WCheckBox, escapePressed),
    METHOD(WCheckBox, clicked),
    METHOD(WCheckBox, doubleClicked),
    METHOD(WCheckBox, mouseWentDown),
    METHOD(WCheckBox, mouseWentUp),
    METHOD(WCheckBox, mouseWentOut),
    METHOD(WCheckBox, mouseWentOver),
    METHOD(WCheckBox, mouseMoved),
    METHOD(WCheckBox, mouseDragged),
    METHOD(WCheckBox, mouseWheel),
    METHOD(WCheckBox, touchStarted),
    METHOD(WCheckBox, touchEnded),
    METHOD(WCheckBox, touchMoved),
    METHOD(WCheckBox, gestureStarted),
    METHOD(WCheckBox, gestureChanged),
    METHOD(WCheckBox, gestureEnded),
    {NULL, NULL},
};

void luawt_WCheckBox(lua_State* L) {
    const char* base = luawt_typeToStr<WAbstractToggleButton>();
    assert(base);
    DECLARE_CLASS(
        WCheckBox,
        L,
        wrap<luawt_WCheckBox_make>::func,
        0,
        luawt_WCheckBox_methods,
        base
    );
}
