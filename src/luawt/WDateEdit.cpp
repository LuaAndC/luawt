#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WCalendar>
#include <Wt/WDateEdit>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

static const char* WDateEdit_make_args0[] = {NULL};
static const char* WDateEdit_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WDateEdit_make_args[] = {WDateEdit_make_args0, WDateEdit_make_args1, NULL};

int luawt_WDateEdit_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDateEdit_make_args);
    if (index == 0) {
        WDateEdit* l_result = new WDateEdit();
        MyApplication* app = MyApplication::instance();
        if (!app) {
            delete l_result;
            throw std::logic_error("No WApplication when creating WDateEdit");
        }
        app->root()->addWidget(l_result);
        luawt_toLua(L, l_result);
        return 1;
    } else if (index == 1) {
        Wt::WContainerWidget* parent =
            luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
        WDateEdit* l_result = new WDateEdit(parent);
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WDateEdit.make");
    }
}

static const char* WDateEdit_setFormat_args0[] = {luawt_typeToStr<WDateEdit>(), "char const *", NULL};
static const char* const* const luawt_WDateEdit_setFormat_args[] = {WDateEdit_setFormat_args0, NULL};

int luawt_WDateEdit_setFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDateEdit_setFormat_args);
    WDateEdit* self = luawt_checkFromLua<WDateEdit>(L, 1);
    if (index == 0) {
        char const* raw2 = lua_tostring(L, 2);
        Wt::WString format = Wt::WString(raw2);
        self->setFormat(format);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WDateEdit.setFormat");
    }
}

static const char* WDateEdit_calendar_args0[] = {luawt_typeToStr<WDateEdit>(), NULL};
static const char* const* const luawt_WDateEdit_calendar_args[] = {WDateEdit_calendar_args0, NULL};

int luawt_WDateEdit_calendar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDateEdit_calendar_args);
    WDateEdit* self = luawt_checkFromLua<WDateEdit>(L, 1);
    if (index == 0) {
        Wt::WCalendar* l_result = self->calendar();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WDateEdit.calendar");
    }
}

static const char* WDateEdit_format_args0[] = {luawt_typeToStr<WDateEdit>(), NULL};
static const char* const* const luawt_WDateEdit_format_args[] = {WDateEdit_format_args0, NULL};

int luawt_WDateEdit_format(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDateEdit_format_args);
    WDateEdit* self = luawt_checkFromLua<WDateEdit>(L, 1);
    if (index == 0) {
        Wt::WString l_result = self->format();
        lua_pushstring(L, l_result.toUTF8().c_str());
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WDateEdit.format");
    }
}

ADD_SIGNAL(changed, WDateEdit, Wt::NoClass)
ADD_SIGNAL(selected, WDateEdit, Wt::NoClass)
ADD_SIGNAL(blurred, WDateEdit, Wt::NoClass)
ADD_SIGNAL(focussed, WDateEdit, Wt::NoClass)
ADD_SIGNAL(keyWentDown, WDateEdit, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WDateEdit, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WDateEdit, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WDateEdit, Wt::NoClass)
ADD_SIGNAL(escapePressed, WDateEdit, Wt::NoClass)
ADD_SIGNAL(clicked, WDateEdit, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WDateEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WDateEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WDateEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WDateEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WDateEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WDateEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WDateEdit, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WDateEdit, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WDateEdit, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WDateEdit, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WDateEdit, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WDateEdit, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WDateEdit, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WDateEdit, Wt::WGestureEvent)

static const luaL_Reg luawt_WDateEdit_methods[] = {
    METHOD(WDateEdit, setFormat),
    METHOD(WDateEdit, format),
    METHOD(WDateEdit, calendar),
    METHOD(WDateEdit, changed),
    METHOD(WDateEdit, selected),
    METHOD(WDateEdit, blurred),
    METHOD(WDateEdit, focussed),
    METHOD(WDateEdit, keyWentDown),
    METHOD(WDateEdit, keyPressed),
    METHOD(WDateEdit, keyWentUp),
    METHOD(WDateEdit, enterPressed),
    METHOD(WDateEdit, escapePressed),
    METHOD(WDateEdit, clicked),
    METHOD(WDateEdit, doubleClicked),
    METHOD(WDateEdit, mouseWentDown),
    METHOD(WDateEdit, mouseWentUp),
    METHOD(WDateEdit, mouseWentOut),
    METHOD(WDateEdit, mouseWentOver),
    METHOD(WDateEdit, mouseMoved),
    METHOD(WDateEdit, mouseDragged),
    METHOD(WDateEdit, mouseWheel),
    METHOD(WDateEdit, touchStarted),
    METHOD(WDateEdit, touchEnded),
    METHOD(WDateEdit, touchMoved),
    METHOD(WDateEdit, gestureStarted),
    METHOD(WDateEdit, gestureChanged),
    METHOD(WDateEdit, gestureEnded),
    {NULL, NULL},
};

void luawt_WDateEdit(lua_State* L) {
    const char* base = luawt_typeToStr<WLineEdit>();
    assert(base);
    DECLARE_CLASS(
        WDateEdit,
        L,
        wrap<luawt_WDateEdit_make>::func,
        0,
        luawt_WDateEdit_methods,
        base
    );
}
