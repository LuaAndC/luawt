#include "boost-xtime.hpp"

#include <Wt/WImage>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WImage_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WImage * result = new WImage(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WImage.make: %d", argc);
    }
}

int luawt_WImage_alternateText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WImage* self = luawt_checkFromLua<WImage>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->alternateText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WImage.alternateText: %d", argc);
    }
}

int luawt_WImage_setImageRef(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WImage* self = luawt_checkFromLua<WImage>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    self->setImageRef(url);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WImage.setImageRef: %d", argc);
    }
}

int luawt_WImage_imageRef(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WImage* self = luawt_checkFromLua<WImage>(L, 1);
        if (argc == 0) {
    std::string const result = self->imageRef();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WImage.imageRef: %d", argc);
    }
}

int luawt_WImage_setAlternateText(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WImage* self = luawt_checkFromLua<WImage>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setAlternateText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WImage.setAlternateText: %d", argc);
    }
}

ADD_SIGNAL(imageLoaded, WImage, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WImage, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WImage, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WImage, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WImage, Wt::NoClass)
ADD_SIGNAL(escapePressed, WImage, Wt::NoClass)
ADD_SIGNAL(clicked, WImage, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WImage, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WImage, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WImage, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WImage, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WImage, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WImage, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WImage, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WImage, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WImage, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WImage, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WImage, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WImage, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WImage, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WImage, Wt::WGestureEvent)

static const luaL_Reg luawt_WImage_methods[] = {
    METHOD(WImage, setAlternateText),
    METHOD(WImage, alternateText),
    METHOD(WImage, setImageRef),
    METHOD(WImage, imageRef),
    METHOD(WImage, imageLoaded),
    METHOD(WImage, keyWentDown),
    METHOD(WImage, keyPressed),
    METHOD(WImage, keyWentUp),
    METHOD(WImage, enterPressed),
    METHOD(WImage, escapePressed),
    METHOD(WImage, clicked),
    METHOD(WImage, doubleClicked),
    METHOD(WImage, mouseWentDown),
    METHOD(WImage, mouseWentUp),
    METHOD(WImage, mouseWentOut),
    METHOD(WImage, mouseWentOver),
    METHOD(WImage, mouseMoved),
    METHOD(WImage, mouseDragged),
    METHOD(WImage, mouseWheel),
    METHOD(WImage, touchStarted),
    METHOD(WImage, touchEnded),
    METHOD(WImage, touchMoved),
    METHOD(WImage, gestureStarted),
    METHOD(WImage, gestureChanged),
    METHOD(WImage, gestureEnded),
    {NULL, NULL},
};

void luawt_WImage(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WImage,
        L,
        wrap<luawt_WImage_make>::func,
        0,
        luawt_WImage_methods,
        base
    );
}
