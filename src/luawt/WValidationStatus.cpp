#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WContainerWidget>
#include <Wt/WValidationStatus>
#include <Wt/WFormWidget>

#include "globals.hpp"

static const char* WValidationStatus_make_args0[] = {luawt_typeToStr<Wt::WFormWidget>(), NULL};
static const char* WValidationStatus_make_args1[] = {luawt_typeToStr<Wt::WFormWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WValidationStatus_make_args2[] = {luawt_typeToStr<Wt::WFormWidget>(), luawt_typeToStr<Wt::WWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WValidationStatus_make_args3[] = {luawt_typeToStr<Wt::WFormWidget>(), luawt_typeToStr<Wt::WWidget>(), luawt_typeToStr<Wt::WWidget>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WValidationStatus_make_args4[] = {luawt_typeToStr<Wt::WFormWidget>(), luawt_typeToStr<Wt::WWidget>(), luawt_typeToStr<Wt::WWidget>(), luawt_typeToStr<Wt::WWidget>(), luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WValidationStatus_make_args[] = {WValidationStatus_make_args0, WValidationStatus_make_args1, WValidationStatus_make_args2, WValidationStatus_make_args3, WValidationStatus_make_args4, NULL};

int luawt_WValidationStatus_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WValidationStatus_make_args);
    if (index == 0) {
    Wt::WFormWidget* field =
        luawt_checkFromLua<Wt::WFormWidget>(L, 1);
    WValidationStatus * result = new WValidationStatus(field);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WFormWidget* field =
        luawt_checkFromLua<Wt::WFormWidget>(L, 1);
    Wt::WWidget* validStateWidget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    WValidationStatus * result = new WValidationStatus(field, validStateWidget);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
    Wt::WFormWidget* field =
        luawt_checkFromLua<Wt::WFormWidget>(L, 1);
    Wt::WWidget* validStateWidget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    Wt::WWidget* invalidStateWidget =
        luawt_checkFromLua<Wt::WWidget>(L, 3);
    WValidationStatus * result = new WValidationStatus(field, validStateWidget, invalidStateWidget);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 3) {
    Wt::WFormWidget* field =
        luawt_checkFromLua<Wt::WFormWidget>(L, 1);
    Wt::WWidget* validStateWidget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    Wt::WWidget* invalidStateWidget =
        luawt_checkFromLua<Wt::WWidget>(L, 3);
    Wt::WWidget* invalidEmptyStateWidget =
        luawt_checkFromLua<Wt::WWidget>(L, 4);
    WValidationStatus * result = new WValidationStatus(field, validStateWidget, invalidStateWidget, invalidEmptyStateWidget);
    luawt_toLua(L, result);
    return 1;

    } else if (index == 4) {
    Wt::WFormWidget* field =
        luawt_checkFromLua<Wt::WFormWidget>(L, 1);
    Wt::WWidget* validStateWidget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    Wt::WWidget* invalidStateWidget =
        luawt_checkFromLua<Wt::WWidget>(L, 3);
    Wt::WWidget* invalidEmptyStateWidget =
        luawt_checkFromLua<Wt::WWidget>(L, 4);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 5);
    WValidationStatus * result = new WValidationStatus(field, validStateWidget, invalidStateWidget, invalidEmptyStateWidget, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WValidationStatus.make");
    }
}

static const char* WValidationStatus_valid_args0[] = {luawt_typeToStr<WValidationStatus>(), NULL};
static const char* const* const luawt_WValidationStatus_valid_args[] = {WValidationStatus_valid_args0, NULL};

int luawt_WValidationStatus_valid(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WValidationStatus_valid_args);
    WValidationStatus* self = luawt_checkFromLua<WValidationStatus>(L, 1);
    if (index == 0) {
    bool result = self->valid();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WValidationStatus.valid");
    }
}


static const luaL_Reg luawt_WValidationStatus_methods[] = {
    METHOD(WValidationStatus, valid),
    {NULL, NULL},
};

void luawt_WValidationStatus(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WValidationStatus,
        L,
        wrap<luawt_WValidationStatus_make>::func,
        0,
        luawt_WValidationStatus_methods,
        base
    );
}
