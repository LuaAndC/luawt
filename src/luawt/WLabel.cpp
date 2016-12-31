#include "boost-xtime.hpp"

#include <Wt/WImage>
#include <Wt/WLabel>
#include <Wt/WContainerWidget>
#include <Wt/WFormWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WLabel_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WLabel * result = new WLabel(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    Wt::WImage* image =
        luawt_checkFromLua<Wt::WImage>(L, 1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WLabel * result = new WLabel(image, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLabel.make: %d", argc);
    }
}

int luawt_WLabel_buddy(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
        if (argc == 0) {
    Wt::WFormWidget * result = self->buddy();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLabel.buddy: %d", argc);
    }
}

int luawt_WLabel_setImage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
        if (argc == 2) {
    Wt::WImage* image =
        luawt_checkFromLua<Wt::WImage>(L, 2);
    Wt::Side side = static_cast<Wt::Side>(lua_tointeger(L, 3));
    self->setImage(image, side);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WLabel.setImage: %d", argc);
    }
}

int luawt_WLabel_setBuddy(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
        if (argc == 1) {
    Wt::WFormWidget* buddy =
        luawt_checkFromLua<Wt::WFormWidget>(L, 2);
    self->setBuddy(buddy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WLabel.setBuddy: %d", argc);
    }
}

int luawt_WLabel_text(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLabel.text: %d", argc);
    }
}

int luawt_WLabel_setText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WLabel.setText: %d", argc);
    }
}

int luawt_WLabel_wordWrap(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
        if (argc == 0) {
    bool result = self->wordWrap();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLabel.wordWrap: %d", argc);
    }
}

int luawt_WLabel_setWordWrap(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
        if (argc == 1) {
    bool wordWrap = lua_toboolean(L, 2);
    self->setWordWrap(wordWrap);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WLabel.setWordWrap: %d", argc);
    }
}

int luawt_WLabel_image(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WLabel* self = luawt_checkFromLua<WLabel>(L, 1);
        if (argc == 0) {
    Wt::WImage * result = self->image();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WLabel.image: %d", argc);
    }
}

ADD_SIGNAL(keyWentDown, WLabel, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WLabel, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WLabel, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WLabel, Wt::NoClass)
ADD_SIGNAL(escapePressed, WLabel, Wt::NoClass)
ADD_SIGNAL(clicked, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WLabel, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WLabel, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WLabel, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WLabel, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WLabel, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WLabel, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WLabel, Wt::WGestureEvent)

static const luaL_Reg luawt_WLabel_methods[] = {
    METHOD(WLabel, buddy),
    METHOD(WLabel, setBuddy),
    METHOD(WLabel, setText),
    METHOD(WLabel, text),
    METHOD(WLabel, setImage),
    METHOD(WLabel, image),
    METHOD(WLabel, setWordWrap),
    METHOD(WLabel, wordWrap),
    METHOD(WLabel, keyWentDown),
    METHOD(WLabel, keyPressed),
    METHOD(WLabel, keyWentUp),
    METHOD(WLabel, enterPressed),
    METHOD(WLabel, escapePressed),
    METHOD(WLabel, clicked),
    METHOD(WLabel, doubleClicked),
    METHOD(WLabel, mouseWentDown),
    METHOD(WLabel, mouseWentUp),
    METHOD(WLabel, mouseWentOut),
    METHOD(WLabel, mouseWentOver),
    METHOD(WLabel, mouseMoved),
    METHOD(WLabel, mouseDragged),
    METHOD(WLabel, mouseWheel),
    METHOD(WLabel, touchStarted),
    METHOD(WLabel, touchEnded),
    METHOD(WLabel, touchMoved),
    METHOD(WLabel, gestureStarted),
    METHOD(WLabel, gestureChanged),
    METHOD(WLabel, gestureEnded),
    {NULL, NULL},
};

void luawt_WLabel(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WLabel,
        L,
        wrap<luawt_WLabel_make>::func,
        0,
        luawt_WLabel_methods,
        base
    );
}
