#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WRadioButton>
#include <Wt/WString>

#include "globals.hpp"

static const char* WRadioButton_make_args0[] = {NULL};
static const char* WRadioButton_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WRadioButton_make_args2[] = {"char const *", NULL};
static const char* WRadioButton_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WRadioButton_make_args[] = {WRadioButton_make_args0, WRadioButton_make_args1, WRadioButton_make_args2, WRadioButton_make_args3, NULL};

int luawt_WRadioButton_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WRadioButton_make_args);
    if (index == 0) {
    WRadioButton * l_result = new WRadioButton();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WRadioButton");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WRadioButton * l_result = new WRadioButton(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    WRadioButton * l_result = new WRadioButton(text);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WRadioButton");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString text = Wt::WString(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WRadioButton * l_result = new WRadioButton(text, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WRadioButton.make");
    }
}

ADD_SIGNAL(checked, WRadioButton, Wt::NoClass)
ADD_SIGNAL(unChecked, WRadioButton, Wt::NoClass)
ADD_SIGNAL(changed, WRadioButton, Wt::NoClass)
ADD_SIGNAL(selected, WRadioButton, Wt::NoClass)
ADD_SIGNAL(blurred, WRadioButton, Wt::NoClass)
ADD_SIGNAL(focussed, WRadioButton, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WRadioButton, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WRadioButton, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WRadioButton, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WRadioButton, Wt::NoClass)
ADD_SIGNAL(escapePressed, WRadioButton, Wt::NoClass)
ADD_SIGNAL(clicked, WRadioButton, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WRadioButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WRadioButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WRadioButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WRadioButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WRadioButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WRadioButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WRadioButton, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WRadioButton, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WRadioButton, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WRadioButton, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WRadioButton, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WRadioButton, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WRadioButton, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WRadioButton, Wt::WGestureEvent)

static const luaL_Reg luawt_WRadioButton_methods[] = {
    METHOD(WRadioButton, checked),
    METHOD(WRadioButton, unChecked),
    METHOD(WRadioButton, changed),
    METHOD(WRadioButton, selected),
    METHOD(WRadioButton, blurred),
    METHOD(WRadioButton, focussed),
    METHOD(WRadioButton, keyWentDown),
    METHOD(WRadioButton, keyPressed),
    METHOD(WRadioButton, keyWentUp),
    METHOD(WRadioButton, enterPressed),
    METHOD(WRadioButton, escapePressed),
    METHOD(WRadioButton, clicked),
    METHOD(WRadioButton, doubleClicked),
    METHOD(WRadioButton, mouseWentDown),
    METHOD(WRadioButton, mouseWentUp),
    METHOD(WRadioButton, mouseWentOut),
    METHOD(WRadioButton, mouseWentOver),
    METHOD(WRadioButton, mouseMoved),
    METHOD(WRadioButton, mouseDragged),
    METHOD(WRadioButton, mouseWheel),
    METHOD(WRadioButton, touchStarted),
    METHOD(WRadioButton, touchEnded),
    METHOD(WRadioButton, touchMoved),
    METHOD(WRadioButton, gestureStarted),
    METHOD(WRadioButton, gestureChanged),
    METHOD(WRadioButton, gestureEnded),
    {NULL, NULL},
};

void luawt_WRadioButton(lua_State* L) {
    const char* base = luawt_typeToStr<WAbstractToggleButton>();
    assert(base);
    DECLARE_CLASS(
        WRadioButton,
        L,
        wrap<luawt_WRadioButton_make>::func,
        0,
        luawt_WRadioButton_methods,
        base
    );
}
