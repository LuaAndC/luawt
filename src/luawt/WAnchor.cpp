#include "boost-xtime.hpp"

#include <Wt/WImage>
#include <Wt/WAnchor>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WAnchor_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WAnchor * result = new WAnchor(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.make: %d", argc);
    }
}

int luawt_WAnchor_target(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
        if (argc == 0) {
    Wt::AnchorTarget result = self->target();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.target: %d", argc);
    }
}

int luawt_WAnchor_setImage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
        if (argc == 1) {
    Wt::WImage* image =
        luawt_checkFromLua<Wt::WImage>(L, 2);
    self->setImage(image);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.setImage: %d", argc);
    }
}

int luawt_WAnchor_text(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->text();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.text: %d", argc);
    }
}

int luawt_WAnchor_setText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.setText: %d", argc);
    }
}

int luawt_WAnchor_setRefInternalPath(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string path = std::string(raw2);
    self->setRefInternalPath(path);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.setRefInternalPath: %d", argc);
    }
}

int luawt_WAnchor_setTarget(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
        if (argc == 1) {
    Wt::AnchorTarget target = static_cast<Wt::AnchorTarget>(lua_tointeger(L, 2));
    self->setTarget(target);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.setTarget: %d", argc);
    }
}

int luawt_WAnchor_wordWrap(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
        if (argc == 0) {
    bool result = self->wordWrap();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.wordWrap: %d", argc);
    }
}

int luawt_WAnchor_setWordWrap(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
        if (argc == 1) {
    bool wordWrap = lua_toboolean(L, 2);
    self->setWordWrap(wordWrap);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.setWordWrap: %d", argc);
    }
}

int luawt_WAnchor_setRef(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    self->setRef(url);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.setRef: %d", argc);
    }
}

// TODO: find out what's the problem with ref() method.
/* int luawt_WAnchor_ref(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
        if (argc == 0) {
    std::string const & result = self->ref();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.ref: %d", argc);
    }
} */

int luawt_WAnchor_image(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
        if (argc == 0) {
    Wt::WImage * result = self->image();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAnchor.image: %d", argc);
    }
}

ADD_SIGNAL(scrolled, WAnchor, Wt::WScrollEvent)
ADD_SIGNAL(keyWentDown, WAnchor, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WAnchor, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WAnchor, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WAnchor, Wt::NoClass)
ADD_SIGNAL(escapePressed, WAnchor, Wt::NoClass)
ADD_SIGNAL(clicked, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WAnchor, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WAnchor, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WAnchor, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WAnchor, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WAnchor, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WAnchor, Wt::WGestureEvent)

static const luaL_Reg luawt_WAnchor_methods[] = {
    METHOD(WAnchor, setRef),
    METHOD(WAnchor, setRefInternalPath),
    //METHOD(WAnchor, ref),
    METHOD(WAnchor, setText),
    METHOD(WAnchor, text),
    METHOD(WAnchor, setWordWrap),
    METHOD(WAnchor, wordWrap),
    METHOD(WAnchor, setImage),
    METHOD(WAnchor, image),
    METHOD(WAnchor, setTarget),
    METHOD(WAnchor, target),
    METHOD(WAnchor, scrolled),
    METHOD(WAnchor, keyWentDown),
    METHOD(WAnchor, keyPressed),
    METHOD(WAnchor, keyWentUp),
    METHOD(WAnchor, enterPressed),
    METHOD(WAnchor, escapePressed),
    METHOD(WAnchor, clicked),
    METHOD(WAnchor, doubleClicked),
    METHOD(WAnchor, mouseWentDown),
    METHOD(WAnchor, mouseWentUp),
    METHOD(WAnchor, mouseWentOut),
    METHOD(WAnchor, mouseWentOver),
    METHOD(WAnchor, mouseMoved),
    METHOD(WAnchor, mouseDragged),
    METHOD(WAnchor, mouseWheel),
    METHOD(WAnchor, touchStarted),
    METHOD(WAnchor, touchEnded),
    METHOD(WAnchor, touchMoved),
    METHOD(WAnchor, gestureStarted),
    METHOD(WAnchor, gestureChanged),
    METHOD(WAnchor, gestureEnded),
    {NULL, NULL},
};

void luawt_WAnchor(lua_State* L) {
    const char* base = luawt_typeToStr<WContainerWidget>();
    assert(base);
    DECLARE_CLASS(
        WAnchor,
        L,
        wrap<luawt_WAnchor_make>::func,
        0,
        luawt_WAnchor_methods,
        base
    );
}
