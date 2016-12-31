#include "boost-xtime.hpp"

#include <Wt/WSlider>
#include <Wt/WContainerWidget>

#include "globals.hpp"

int luawt_WSlider_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WSlider * result = new WSlider(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 1));
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WSlider * result = new WSlider(orientation, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.make: %d", argc);
    }
}

int luawt_WSlider_setOrientation(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
        if (argc == 1) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 2));
    self->setOrientation(orientation);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.setOrientation: %d", argc);
    }
}

int luawt_WSlider_setMaximum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
        if (argc == 1) {
    int maximum = lua_tointeger(L, 2);
    self->setMaximum(maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.setMaximum: %d", argc);
    }
}

int luawt_WSlider_setValue(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
        if (argc == 1) {
    int value = lua_tointeger(L, 2);
    self->setValue(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.setValue: %d", argc);
    }
}

int luawt_WSlider_orientation(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
        if (argc == 0) {
    Wt::Orientation result = self->orientation();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.orientation: %d", argc);
    }
}

int luawt_WSlider_maximum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
        if (argc == 0) {
    int result = self->maximum();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.maximum: %d", argc);
    }
}

int luawt_WSlider_value(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
        if (argc == 0) {
    int result = self->value();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.value: %d", argc);
    }
}

int luawt_WSlider_minimum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
        if (argc == 0) {
    int result = self->minimum();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.minimum: %d", argc);
    }
}

int luawt_WSlider_setRange(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
        if (argc == 2) {
    int minimum = lua_tointeger(L, 2);
    int maximum = lua_tointeger(L, 3);
    self->setRange(minimum, maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.setRange: %d", argc);
    }
}

int luawt_WSlider_tickInterval(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
        if (argc == 0) {
    int result = self->tickInterval();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.tickInterval: %d", argc);
    }
}

int luawt_WSlider_setMinimum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
        if (argc == 1) {
    int minimum = lua_tointeger(L, 2);
    self->setMinimum(minimum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.setMinimum: %d", argc);
    }
}

int luawt_WSlider_setTickInterval(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WSlider* self = luawt_checkFromLua<WSlider>(L, 1);
        if (argc == 1) {
    int tickInterval = lua_tointeger(L, 2);
    self->setTickInterval(tickInterval);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WSlider.setTickInterval: %d", argc);
    }
}

ADD_SIGNAL(changed, WSlider, Wt::NoClass)
ADD_SIGNAL(selected, WSlider, Wt::NoClass)
ADD_SIGNAL(blurred, WSlider, Wt::NoClass)
ADD_SIGNAL(focussed, WSlider, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WSlider, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WSlider, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WSlider, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WSlider, Wt::NoClass)
ADD_SIGNAL(escapePressed, WSlider, Wt::NoClass)
ADD_SIGNAL(clicked, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WSlider, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WSlider, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WSlider, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WSlider, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WSlider, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WSlider, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WSlider, Wt::WGestureEvent)

static const luaL_Reg luawt_WSlider_methods[] = {
    METHOD(WSlider, setOrientation),
    METHOD(WSlider, orientation),
    METHOD(WSlider, setTickInterval),
    METHOD(WSlider, tickInterval),
    METHOD(WSlider, setValue),
    METHOD(WSlider, value),
    METHOD(WSlider, setMaximum),
    METHOD(WSlider, maximum),
    METHOD(WSlider, setMinimum),
    METHOD(WSlider, minimum),
    METHOD(WSlider, setRange),
    METHOD(WSlider, changed),
    METHOD(WSlider, selected),
    METHOD(WSlider, blurred),
    METHOD(WSlider, focussed),
    METHOD(WSlider, keyWentDown),
    METHOD(WSlider, keyPressed),
    METHOD(WSlider, keyWentUp),
    METHOD(WSlider, enterPressed),
    METHOD(WSlider, escapePressed),
    METHOD(WSlider, clicked),
    METHOD(WSlider, doubleClicked),
    METHOD(WSlider, mouseWentDown),
    METHOD(WSlider, mouseWentUp),
    METHOD(WSlider, mouseWentOut),
    METHOD(WSlider, mouseWentOver),
    METHOD(WSlider, mouseMoved),
    METHOD(WSlider, mouseDragged),
    METHOD(WSlider, mouseWheel),
    METHOD(WSlider, touchStarted),
    METHOD(WSlider, touchEnded),
    METHOD(WSlider, touchMoved),
    METHOD(WSlider, gestureStarted),
    METHOD(WSlider, gestureChanged),
    METHOD(WSlider, gestureEnded),
    {NULL, NULL},
};

void luawt_WSlider(lua_State* L) {
    const char* base = luawt_typeToStr<WFormWidget>();
    assert(base);
    DECLARE_CLASS(
        WSlider,
        L,
        wrap<luawt_WSlider_make>::func,
        0,
        luawt_WSlider_methods,
        base
    );
}
