#include "boost-xtime.hpp"

#include <Wt/WString>
#include <Wt/WContainerWidget>
#include <Wt/WTextEdit>

#include "globals.hpp"

static const char* WTextEdit_make_args0[] = {NULL};
static const char* WTextEdit_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WTextEdit_make_args2[] = {"char const *", NULL};
static const char* WTextEdit_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WTextEdit_make_args[] = {WTextEdit_make_args0, WTextEdit_make_args1, WTextEdit_make_args2, WTextEdit_make_args3, NULL};

int luawt_WTextEdit_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextEdit_make_args);
    if (index == 0) {
    WTextEdit * result = new WTextEdit();
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WTextEdit");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTextEdit * result = new WTextEdit(parent);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    WTextEdit * result = new WTextEdit(text);
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WTextEdit");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WTextEdit * result = new WTextEdit(text, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextEdit.make");
    }
}

static const char* WTextEdit_setText_args0[] = {luawt_typeToStr<WTextEdit>(), "char const *", NULL};
static const char* const* const luawt_WTextEdit_setText_args[] = {WTextEdit_setText_args0, NULL};

int luawt_WTextEdit_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextEdit_setText_args);
    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTextEdit.setText");
    }
}

static const char* WTextEdit_setExtraPlugins_args0[] = {luawt_typeToStr<WTextEdit>(), "char const *", NULL};
static const char* const* const luawt_WTextEdit_setExtraPlugins_args[] = {WTextEdit_setExtraPlugins_args0, NULL};

int luawt_WTextEdit_setExtraPlugins(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextEdit_setExtraPlugins_args);
    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string plugins = std::string(raw2);
    self->setExtraPlugins(plugins);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTextEdit.setExtraPlugins");
    }
}

static const char* WTextEdit_extraPlugins_args0[] = {luawt_typeToStr<WTextEdit>(), NULL};
static const char* const* const luawt_WTextEdit_extraPlugins_args[] = {WTextEdit_extraPlugins_args0, NULL};

int luawt_WTextEdit_extraPlugins(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextEdit_extraPlugins_args);
    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
    if (index == 0) {
    std::string const result = self->extraPlugins();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextEdit.extraPlugins");
    }
}

static const char* WTextEdit_styleSheet_args0[] = {luawt_typeToStr<WTextEdit>(), NULL};
static const char* const* const luawt_WTextEdit_styleSheet_args[] = {WTextEdit_styleSheet_args0, NULL};

int luawt_WTextEdit_styleSheet(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextEdit_styleSheet_args);
    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
    if (index == 0) {
    std::string const result = self->styleSheet();
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextEdit.styleSheet");
    }
}

static const char* WTextEdit_setToolBar_args0[] = {luawt_typeToStr<WTextEdit>(), "int", "char const *", NULL};
static const char* const* const luawt_WTextEdit_setToolBar_args[] = {WTextEdit_setToolBar_args0, NULL};

int luawt_WTextEdit_setToolBar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextEdit_setToolBar_args);
    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
    if (index == 0) {
    int i = lua_tointeger(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    std::string config = std::string(raw3);
    self->setToolBar(i, config);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTextEdit.setToolBar");
    }
}

static const char* WTextEdit_setStyleSheet_args0[] = {luawt_typeToStr<WTextEdit>(), "char const *", NULL};
static const char* const* const luawt_WTextEdit_setStyleSheet_args[] = {WTextEdit_setStyleSheet_args0, NULL};

int luawt_WTextEdit_setStyleSheet(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextEdit_setStyleSheet_args);
    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string uri = std::string(raw2);
    self->setStyleSheet(uri);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTextEdit.setStyleSheet");
    }
}

static const char* WTextEdit_toolBar_args0[] = {luawt_typeToStr<WTextEdit>(), "int", NULL};
static const char* const* const luawt_WTextEdit_toolBar_args[] = {WTextEdit_toolBar_args0, NULL};

int luawt_WTextEdit_toolBar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTextEdit_toolBar_args);
    WTextEdit* self = luawt_checkFromLua<WTextEdit>(L, 1);
    if (index == 0) {
    int i = lua_tointeger(L, 2);
    std::string const result = self->toolBar(i);
    lua_pushstring(L, result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTextEdit.toolBar");
    }
}

ADD_SIGNAL(changed, WTextEdit, Wt::NoClass)
ADD_SIGNAL(selected, WTextEdit, Wt::NoClass)
ADD_SIGNAL(blurred, WTextEdit, Wt::NoClass)
ADD_SIGNAL(focussed, WTextEdit, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WTextEdit, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WTextEdit, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WTextEdit, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WTextEdit, Wt::NoClass)
ADD_SIGNAL(escapePressed, WTextEdit, Wt::NoClass)
ADD_SIGNAL(clicked, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WTextEdit, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WTextEdit, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WTextEdit, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WTextEdit, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WTextEdit, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WTextEdit, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WTextEdit, Wt::WGestureEvent)

static const luaL_Reg luawt_WTextEdit_methods[] = {
    METHOD(WTextEdit, setText),
    METHOD(WTextEdit, setStyleSheet),
    METHOD(WTextEdit, styleSheet),
    METHOD(WTextEdit, setExtraPlugins),
    METHOD(WTextEdit, extraPlugins),
    METHOD(WTextEdit, setToolBar),
    METHOD(WTextEdit, toolBar),
    METHOD(WTextEdit, changed),
    METHOD(WTextEdit, selected),
    METHOD(WTextEdit, blurred),
    METHOD(WTextEdit, focussed),
    METHOD(WTextEdit, keyWentDown),
    METHOD(WTextEdit, keyPressed),
    METHOD(WTextEdit, keyWentUp),
    METHOD(WTextEdit, enterPressed),
    METHOD(WTextEdit, escapePressed),
    METHOD(WTextEdit, clicked),
    METHOD(WTextEdit, doubleClicked),
    METHOD(WTextEdit, mouseWentDown),
    METHOD(WTextEdit, mouseWentUp),
    METHOD(WTextEdit, mouseWentOut),
    METHOD(WTextEdit, mouseWentOver),
    METHOD(WTextEdit, mouseMoved),
    METHOD(WTextEdit, mouseDragged),
    METHOD(WTextEdit, mouseWheel),
    METHOD(WTextEdit, touchStarted),
    METHOD(WTextEdit, touchEnded),
    METHOD(WTextEdit, touchMoved),
    METHOD(WTextEdit, gestureStarted),
    METHOD(WTextEdit, gestureChanged),
    METHOD(WTextEdit, gestureEnded),
    {NULL, NULL},
};

void luawt_WTextEdit(lua_State* L) {
    const char* base = luawt_typeToStr<WTextArea>();
    assert(base);
    DECLARE_CLASS(
        WTextEdit,
        L,
        wrap<luawt_WTextEdit_make>::func,
        0,
        luawt_WTextEdit_methods,
        base
    );
}
