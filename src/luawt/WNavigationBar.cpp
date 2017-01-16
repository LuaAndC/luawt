#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WLineEdit>
#include <Wt/WNavigationBar>
#include <Wt/WMenu>
#include <Wt/WContainerWidget>

#include "globals.hpp"

static const char* WNavigationBar_make_args0[] = {NULL};
static const char* WNavigationBar_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WNavigationBar_make_args[] = {WNavigationBar_make_args0, WNavigationBar_make_args1, NULL};

int luawt_WNavigationBar_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WNavigationBar_make_args);
    if (index == 0) {
    WNavigationBar * result = new WNavigationBar();
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WNavigationBar");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WNavigationBar * result = new WNavigationBar(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WNavigationBar.make");
    }
}

static const char* WNavigationBar_addSearch_args0[] = {luawt_typeToStr<WNavigationBar>(), luawt_typeToStr<Wt::WLineEdit>(), NULL};
static const char* WNavigationBar_addSearch_args1[] = {luawt_typeToStr<WNavigationBar>(), luawt_typeToStr<Wt::WLineEdit>(), "int", NULL};
static const char* const* const luawt_WNavigationBar_addSearch_args[] = {WNavigationBar_addSearch_args0, WNavigationBar_addSearch_args1, NULL};

int luawt_WNavigationBar_addSearch(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WNavigationBar_addSearch_args);
    WNavigationBar* self = luawt_checkFromLua<WNavigationBar>(L, 1);
    if (index == 0) {
    Wt::WLineEdit* field =
        luawt_checkFromLua<Wt::WLineEdit>(L, 2);
    self->addSearch(field);
    return 0;
    
    } else if (index == 1) {
    Wt::WLineEdit* field =
        luawt_checkFromLua<Wt::WLineEdit>(L, 2);
    Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(lua_tointeger(L, 3));
    self->addSearch(field, alignment);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WNavigationBar.addSearch");
    }
}

static const char* WNavigationBar_addWidget_args0[] = {luawt_typeToStr<WNavigationBar>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WNavigationBar_addWidget_args1[] = {luawt_typeToStr<WNavigationBar>(), luawt_typeToStr<Wt::WWidget>(), "int", NULL};
static const char* const* const luawt_WNavigationBar_addWidget_args[] = {WNavigationBar_addWidget_args0, WNavigationBar_addWidget_args1, NULL};

int luawt_WNavigationBar_addWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WNavigationBar_addWidget_args);
    WNavigationBar* self = luawt_checkFromLua<WNavigationBar>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->addWidget(widget);
    return 0;
    
    } else if (index == 1) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(lua_tointeger(L, 3));
    self->addWidget(widget, alignment);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WNavigationBar.addWidget");
    }
}

static const char* WNavigationBar_addMenu_args0[] = {luawt_typeToStr<WNavigationBar>(), luawt_typeToStr<Wt::WMenu>(), NULL};
static const char* WNavigationBar_addMenu_args1[] = {luawt_typeToStr<WNavigationBar>(), luawt_typeToStr<Wt::WMenu>(), "int", NULL};
static const char* const* const luawt_WNavigationBar_addMenu_args[] = {WNavigationBar_addMenu_args0, WNavigationBar_addMenu_args1, NULL};

int luawt_WNavigationBar_addMenu(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WNavigationBar_addMenu_args);
    WNavigationBar* self = luawt_checkFromLua<WNavigationBar>(L, 1);
    if (index == 0) {
    Wt::WMenu* menu =
        luawt_checkFromLua<Wt::WMenu>(L, 2);
    self->addMenu(menu);
    return 0;
    
    } else if (index == 1) {
    Wt::WMenu* menu =
        luawt_checkFromLua<Wt::WMenu>(L, 2);
    Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(lua_tointeger(L, 3));
    self->addMenu(menu, alignment);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WNavigationBar.addMenu");
    }
}

static const char* WNavigationBar_addFormField_args0[] = {luawt_typeToStr<WNavigationBar>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WNavigationBar_addFormField_args1[] = {luawt_typeToStr<WNavigationBar>(), luawt_typeToStr<Wt::WWidget>(), "int", NULL};
static const char* const* const luawt_WNavigationBar_addFormField_args[] = {WNavigationBar_addFormField_args0, WNavigationBar_addFormField_args1, NULL};

int luawt_WNavigationBar_addFormField(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WNavigationBar_addFormField_args);
    WNavigationBar* self = luawt_checkFromLua<WNavigationBar>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->addFormField(widget);
    return 0;
    
    } else if (index == 1) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(lua_tointeger(L, 3));
    self->addFormField(widget, alignment);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WNavigationBar.addFormField");
    }
}

static const char* WNavigationBar_setResponsive_args0[] = {luawt_typeToStr<WNavigationBar>(), "bool", NULL};
static const char* const* const luawt_WNavigationBar_setResponsive_args[] = {WNavigationBar_setResponsive_args0, NULL};

int luawt_WNavigationBar_setResponsive(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WNavigationBar_setResponsive_args);
    WNavigationBar* self = luawt_checkFromLua<WNavigationBar>(L, 1);
    if (index == 0) {
    bool responsive = lua_toboolean(L, 2);
    self->setResponsive(responsive);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WNavigationBar.setResponsive");
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
    METHOD(WNavigationBar, addFormField),
    METHOD(WNavigationBar, addSearch),
    METHOD(WNavigationBar, addWidget),
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
