#include "boost-xtime.hpp"

#include <Wt/WProgressBar>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WProgressBar_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WProgressBar * result = new WProgressBar(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WProgressBar.make: %d", argc);
    }
}

int luawt_WProgressBar_setMaximum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
        if (argc == 1) {
    double maximum = lua_tonumber(L, 2);
    self->setMaximum(maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WProgressBar.setMaximum: %d", argc);
    }
}

int luawt_WProgressBar_setValue(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
        if (argc == 1) {
    double value = lua_tonumber(L, 2);
    self->setValue(value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WProgressBar.setValue: %d", argc);
    }
}

int luawt_WProgressBar_format(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->format();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WProgressBar.format: %d", argc);
    }
}

int luawt_WProgressBar_setFormat(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString format = Wt::WString(raw2);
    self->setFormat(format);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WProgressBar.setFormat: %d", argc);
    }
}

int luawt_WProgressBar_text(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
        if (argc == 0) {
    Wt::WString result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WProgressBar.text: %d", argc);
    }
}

int luawt_WProgressBar_maximum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
        if (argc == 0) {
    double result = self->maximum();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WProgressBar.maximum: %d", argc);
    }
}

int luawt_WProgressBar_value(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
        if (argc == 0) {
    double result = self->value();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WProgressBar.value: %d", argc);
    }
}

int luawt_WProgressBar_minimum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
        if (argc == 0) {
    double result = self->minimum();
    lua_pushnumber(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WProgressBar.minimum: %d", argc);
    }
}

int luawt_WProgressBar_setMinimum(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
        if (argc == 1) {
    double minimum = lua_tonumber(L, 2);
    self->setMinimum(minimum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WProgressBar.setMinimum: %d", argc);
    }
}

int luawt_WProgressBar_setRange(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WProgressBar* self = luawt_checkFromLua<WProgressBar>(L, 1);
        if (argc == 2) {
    double minimum = lua_tonumber(L, 2);
    double maximum = lua_tonumber(L, 3);
    self->setRange(minimum, maximum);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WProgressBar.setRange: %d", argc);
    }
}

ADD_SIGNAL(keyWentDown, WProgressBar, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WProgressBar, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WProgressBar, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WProgressBar, Wt::NoClass)
ADD_SIGNAL(escapePressed, WProgressBar, Wt::NoClass)
ADD_SIGNAL(clicked, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WProgressBar, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WProgressBar, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WProgressBar, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WProgressBar, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WProgressBar, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WProgressBar, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WProgressBar, Wt::WGestureEvent)

static const luaL_Reg luawt_WProgressBar_methods[] = {
    METHOD(WProgressBar, setMinimum),
    METHOD(WProgressBar, minimum),
    METHOD(WProgressBar, setMaximum),
    METHOD(WProgressBar, maximum),
    METHOD(WProgressBar, setRange),
    METHOD(WProgressBar, setValue),
    METHOD(WProgressBar, value),
    METHOD(WProgressBar, setFormat),
    METHOD(WProgressBar, format),
    METHOD(WProgressBar, text),
    METHOD(WProgressBar, keyWentDown),
    METHOD(WProgressBar, keyPressed),
    METHOD(WProgressBar, keyWentUp),
    METHOD(WProgressBar, enterPressed),
    METHOD(WProgressBar, escapePressed),
    METHOD(WProgressBar, clicked),
    METHOD(WProgressBar, doubleClicked),
    METHOD(WProgressBar, mouseWentDown),
    METHOD(WProgressBar, mouseWentUp),
    METHOD(WProgressBar, mouseWentOut),
    METHOD(WProgressBar, mouseWentOver),
    METHOD(WProgressBar, mouseMoved),
    METHOD(WProgressBar, mouseDragged),
    METHOD(WProgressBar, mouseWheel),
    METHOD(WProgressBar, touchStarted),
    METHOD(WProgressBar, touchEnded),
    METHOD(WProgressBar, touchMoved),
    METHOD(WProgressBar, gestureStarted),
    METHOD(WProgressBar, gestureChanged),
    METHOD(WProgressBar, gestureEnded),
    {NULL, NULL},
};

void luawt_WProgressBar(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WProgressBar,
        L,
        wrap<luawt_WProgressBar_make>::func,
        0,
        luawt_WProgressBar_methods,
        base
    );
}
