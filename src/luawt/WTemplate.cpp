#include "boost-xtime.hpp"

#include <Wt/WTemplate>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

static const char* WTemplate_make_args0[] = {NULL};
static const char* WTemplate_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WTemplate_make_args2[] = {"char const *", NULL};
static const char* WTemplate_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WTemplate_make_args[] = {WTemplate_make_args0, WTemplate_make_args1, WTemplate_make_args2, WTemplate_make_args3, NULL};

int luawt_WTemplate_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTemplate_make_args);
    if (index == 0) {
    WTemplate * result = new WTemplate();
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTemplate * result = new WTemplate(parent);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    WTemplate * result = new WTemplate(text);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WTemplate * result = new WTemplate(text, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTemplate.make");
    }
}

static const char* WTemplate_setTemplateText_args0[] = {luawt_typeToStr<WTemplate>(), "char const *", NULL};
static const char* WTemplate_setTemplateText_args1[] = {luawt_typeToStr<WTemplate>(), "char const *", "int", NULL};
static const char* const* const luawt_WTemplate_setTemplateText_args[] = {WTemplate_setTemplateText_args0, WTemplate_setTemplateText_args1, NULL};

int luawt_WTemplate_setTemplateText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTemplate_setTemplateText_args);
    WTemplate* self = luawt_checkFromLua<WTemplate>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setTemplateText(text);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(lua_tointeger(L, 3));
    self->setTemplateText(text, textFormat);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTemplate.setTemplateText");
    }
}

static const char* WTemplate_hasInternalPathEncoding_args0[] = {luawt_typeToStr<WTemplate>(), NULL};
static const char* const* const luawt_WTemplate_hasInternalPathEncoding_args[] = {WTemplate_hasInternalPathEncoding_args0, NULL};

int luawt_WTemplate_hasInternalPathEncoding(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTemplate_hasInternalPathEncoding_args);
    WTemplate* self = luawt_checkFromLua<WTemplate>(L, 1);
    if (index == 0) {
    bool result = self->hasInternalPathEncoding();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTemplate.hasInternalPathEncoding");
    }
}

static const char* WTemplate_templateText_args0[] = {luawt_typeToStr<WTemplate>(), NULL};
static const char* const* const luawt_WTemplate_templateText_args[] = {WTemplate_templateText_args0, NULL};

int luawt_WTemplate_templateText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTemplate_templateText_args);
    WTemplate* self = luawt_checkFromLua<WTemplate>(L, 1);
    if (index == 0) {
    Wt::WString const & result = self->templateText();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTemplate.templateText");
    }
}

static const char* WTemplate_clear_args0[] = {luawt_typeToStr<WTemplate>(), NULL};
static const char* const* const luawt_WTemplate_clear_args[] = {WTemplate_clear_args0, NULL};

int luawt_WTemplate_clear(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTemplate_clear_args);
    WTemplate* self = luawt_checkFromLua<WTemplate>(L, 1);
    if (index == 0) {
    self->clear();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTemplate.clear");
    }
}

static const char* WTemplate_bindString_args0[] = {luawt_typeToStr<WTemplate>(), "char const *", "char const *", NULL};
static const char* WTemplate_bindString_args1[] = {luawt_typeToStr<WTemplate>(), "char const *", "char const *", "int", NULL};
static const char* const* const luawt_WTemplate_bindString_args[] = {WTemplate_bindString_args0, WTemplate_bindString_args1, NULL};

int luawt_WTemplate_bindString(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTemplate_bindString_args);
    WTemplate* self = luawt_checkFromLua<WTemplate>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string varName = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString value = Wt::WString(raw3);
    self->bindString(varName, value);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string varName = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString value = Wt::WString(raw3);
    Wt::TextFormat textFormat = static_cast<Wt::TextFormat>(lua_tointeger(L, 4));
    self->bindString(varName, value, textFormat);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTemplate.bindString");
    }
}

static const char* WTemplate_refresh_args0[] = {luawt_typeToStr<WTemplate>(), NULL};
static const char* const* const luawt_WTemplate_refresh_args[] = {WTemplate_refresh_args0, NULL};

int luawt_WTemplate_refresh(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTemplate_refresh_args);
    WTemplate* self = luawt_checkFromLua<WTemplate>(L, 1);
    if (index == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTemplate.refresh");
    }
}

static const char* WTemplate_setInternalPathEncoding_args0[] = {luawt_typeToStr<WTemplate>(), "bool", NULL};
static const char* const* const luawt_WTemplate_setInternalPathEncoding_args[] = {WTemplate_setInternalPathEncoding_args0, NULL};

int luawt_WTemplate_setInternalPathEncoding(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTemplate_setInternalPathEncoding_args);
    WTemplate* self = luawt_checkFromLua<WTemplate>(L, 1);
    if (index == 0) {
    bool enabled = lua_toboolean(L, 2);
    self->setInternalPathEncoding(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTemplate.setInternalPathEncoding");
    }
}

static const char* WTemplate_bindInt_args0[] = {luawt_typeToStr<WTemplate>(), "char const *", "int", NULL};
static const char* const* const luawt_WTemplate_bindInt_args[] = {WTemplate_bindInt_args0, NULL};

int luawt_WTemplate_bindInt(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTemplate_bindInt_args);
    WTemplate* self = luawt_checkFromLua<WTemplate>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string varName = std::string(raw2);
    int value = lua_tointeger(L, 3);
    self->bindInt(varName, value);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTemplate.bindInt");
    }
}

ADD_SIGNAL(keyWentDown, WTemplate, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WTemplate, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WTemplate, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WTemplate, Wt::NoClass)
ADD_SIGNAL(escapePressed, WTemplate, Wt::NoClass)
ADD_SIGNAL(clicked, WTemplate, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WTemplate, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WTemplate, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WTemplate, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WTemplate, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WTemplate, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WTemplate, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WTemplate, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WTemplate, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WTemplate, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WTemplate, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WTemplate, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WTemplate, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WTemplate, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WTemplate, Wt::WGestureEvent)

static const luaL_Reg luawt_WTemplate_methods[] = {
    METHOD(WTemplate, templateText),
    METHOD(WTemplate, setTemplateText),
    METHOD(WTemplate, bindString),
    METHOD(WTemplate, bindInt),
    METHOD(WTemplate, clear),
    METHOD(WTemplate, setInternalPathEncoding),
    METHOD(WTemplate, hasInternalPathEncoding),
    METHOD(WTemplate, refresh),
    METHOD(WTemplate, keyWentDown),
    METHOD(WTemplate, keyPressed),
    METHOD(WTemplate, keyWentUp),
    METHOD(WTemplate, enterPressed),
    METHOD(WTemplate, escapePressed),
    METHOD(WTemplate, clicked),
    METHOD(WTemplate, doubleClicked),
    METHOD(WTemplate, mouseWentDown),
    METHOD(WTemplate, mouseWentUp),
    METHOD(WTemplate, mouseWentOut),
    METHOD(WTemplate, mouseWentOver),
    METHOD(WTemplate, mouseMoved),
    METHOD(WTemplate, mouseDragged),
    METHOD(WTemplate, mouseWheel),
    METHOD(WTemplate, touchStarted),
    METHOD(WTemplate, touchEnded),
    METHOD(WTemplate, touchMoved),
    METHOD(WTemplate, gestureStarted),
    METHOD(WTemplate, gestureChanged),
    METHOD(WTemplate, gestureEnded),
    {NULL, NULL},
};

void luawt_WTemplate(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WTemplate,
        L,
        wrap<luawt_WTemplate_make>::func,
        0,
        luawt_WTemplate_methods,
        base
    );
}
