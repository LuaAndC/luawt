#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WBreak>

#include "enums.hpp"
#include "globals.hpp"

static const char* WBreak_make_args0[] = {NULL};
static const char* WBreak_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WBreak_make_args[] = {WBreak_make_args0, WBreak_make_args1, NULL};

int luawt_WBreak_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WBreak_make_args);
    if (index == 0) {
    WBreak * l_result = new WBreak();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WBreak");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WBreak * l_result = new WBreak(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WBreak.make");
    }
}


static const luaL_Reg luawt_WBreak_methods[] = {
    {NULL, NULL},
};

void luawt_WBreak(lua_State* L) {
    const char* base = luawt_typeToStr<WWebWidget>();
    assert(base);
    DECLARE_CLASS(
        WBreak,
        L,
        wrap<luawt_WBreak_make>::func,
        0,
        luawt_WBreak_methods,
        base
    );
}
