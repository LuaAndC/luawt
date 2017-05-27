#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WTemplateFormView>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

static const char* WTemplateFormView_make_args0[] = {NULL};
static const char* WTemplateFormView_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WTemplateFormView_make_args2[] = {"char const *", NULL};
static const char* WTemplateFormView_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WTemplateFormView_make_args[] = {WTemplateFormView_make_args0, WTemplateFormView_make_args1, WTemplateFormView_make_args2, WTemplateFormView_make_args3, NULL};

int luawt_WTemplateFormView_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTemplateFormView_make_args);
    if (index == 0) {
        WTemplateFormView* l_result = new WTemplateFormView();
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WTemplateFormView");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 1) {
        Wt::WContainerWidget* parent =
            luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
        WTemplateFormView* l_result = new WTemplateFormView(parent);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 2) {
        char const* raw1 = lua_tostring(L, 1);
        Wt::WString text = Wt::WString(raw1);
        WTemplateFormView* l_result = new WTemplateFormView(text);
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WTemplateFormView");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 3) {
        char const* raw1 = lua_tostring(L, 1);
        Wt::WString text = Wt::WString(raw1);
        Wt::WContainerWidget* parent =
            luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
        WTemplateFormView* l_result = new WTemplateFormView(text, parent);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTemplateFormView.make");
    }
}

ADD_SIGNAL(keyWentDown, WTemplateFormView, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WTemplateFormView, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WTemplateFormView, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WTemplateFormView, Wt::NoClass)
ADD_SIGNAL(escapePressed, WTemplateFormView, Wt::NoClass)
ADD_SIGNAL(clicked, WTemplateFormView, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WTemplateFormView, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WTemplateFormView, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WTemplateFormView, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WTemplateFormView, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WTemplateFormView, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WTemplateFormView, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WTemplateFormView, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WTemplateFormView, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WTemplateFormView, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WTemplateFormView, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WTemplateFormView, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WTemplateFormView, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WTemplateFormView, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WTemplateFormView, Wt::WGestureEvent)

static const luaL_Reg luawt_WTemplateFormView_methods[] = {
    METHOD(WTemplateFormView, keyWentDown),
    METHOD(WTemplateFormView, keyPressed),
    METHOD(WTemplateFormView, keyWentUp),
    METHOD(WTemplateFormView, enterPressed),
    METHOD(WTemplateFormView, escapePressed),
    METHOD(WTemplateFormView, clicked),
    METHOD(WTemplateFormView, doubleClicked),
    METHOD(WTemplateFormView, mouseWentDown),
    METHOD(WTemplateFormView, mouseWentUp),
    METHOD(WTemplateFormView, mouseWentOut),
    METHOD(WTemplateFormView, mouseWentOver),
    METHOD(WTemplateFormView, mouseMoved),
    METHOD(WTemplateFormView, mouseDragged),
    METHOD(WTemplateFormView, mouseWheel),
    METHOD(WTemplateFormView, touchStarted),
    METHOD(WTemplateFormView, touchEnded),
    METHOD(WTemplateFormView, touchMoved),
    METHOD(WTemplateFormView, gestureStarted),
    METHOD(WTemplateFormView, gestureChanged),
    METHOD(WTemplateFormView, gestureEnded),
    {NULL, NULL},
};

void luawt_WTemplateFormView(lua_State* L) {
    const char* base = luawt_typeToStr<WTemplate>();
    assert(base);
    DECLARE_CLASS(
        WTemplateFormView,
        L,
        wrap<luawt_WTemplateFormView_make>::func,
        0,
        luawt_WTemplateFormView_methods,
        base
    );
}
