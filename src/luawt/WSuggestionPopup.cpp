#include "boost-xtime.hpp"

#include <Wt/WString>
#include <Wt/WFormWidget>
#include <Wt/WSuggestionPopup>

#include "enums.hpp"
#include "globals.hpp"

static const char* WSuggestionPopup_setGlobalPopup_args0[] = {luawt_typeToStr<WSuggestionPopup>(), "bool", NULL};
static const char* const* const luawt_WSuggestionPopup_setGlobalPopup_args[] = {WSuggestionPopup_setGlobalPopup_args0, NULL};

int luawt_WSuggestionPopup_setGlobalPopup(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSuggestionPopup_setGlobalPopup_args);
    WSuggestionPopup* self = luawt_checkFromLua<WSuggestionPopup>(L, 1);
    if (index == 0) {
    bool global = lua_toboolean(L, 2);
    self->setGlobalPopup(global);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSuggestionPopup.setGlobalPopup");
    }
}

static const char* WSuggestionPopup_addSuggestion_args0[] = {luawt_typeToStr<WSuggestionPopup>(), "char const *", NULL};
static const char* WSuggestionPopup_addSuggestion_args1[] = {luawt_typeToStr<WSuggestionPopup>(), "char const *", "char const *", NULL};
static const char* const* const luawt_WSuggestionPopup_addSuggestion_args[] = {WSuggestionPopup_addSuggestion_args0, WSuggestionPopup_addSuggestion_args1, NULL};

int luawt_WSuggestionPopup_addSuggestion(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSuggestionPopup_addSuggestion_args);
    WSuggestionPopup* self = luawt_checkFromLua<WSuggestionPopup>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString suggestionText = Wt::WString(raw2);
    self->addSuggestion(suggestionText);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString suggestionText = Wt::WString(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString suggestionValue = Wt::WString(raw3);
    self->addSuggestion(suggestionText, suggestionValue);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSuggestionPopup.addSuggestion");
    }
}

static const char* WSuggestionPopup_forEdit_args0[] = {luawt_typeToStr<WSuggestionPopup>(), luawt_typeToStr<Wt::WFormWidget>(), NULL};
static const char* WSuggestionPopup_forEdit_args1[] = {luawt_typeToStr<WSuggestionPopup>(), luawt_typeToStr<Wt::WFormWidget>(), "enum", NULL};
static const char* const* const luawt_WSuggestionPopup_forEdit_args[] = {WSuggestionPopup_forEdit_args0, WSuggestionPopup_forEdit_args1, NULL};

int luawt_WSuggestionPopup_forEdit(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSuggestionPopup_forEdit_args);
    WSuggestionPopup* self = luawt_checkFromLua<WSuggestionPopup>(L, 1);
    if (index == 0) {
    Wt::WFormWidget* edit =
        luawt_checkFromLua<Wt::WFormWidget>(L, 2);
    self->forEdit(edit);
    return 0;
    
    } else if (index == 1) {
    Wt::WFormWidget* edit =
        luawt_checkFromLua<Wt::WFormWidget>(L, 2);
    Wt::WFlags<Wt::WSuggestionPopup::PopupTrigger> popupTriggers = static_cast<Wt::WSuggestionPopup::PopupTrigger>(luawt_getEnum(
        L,
        luawt_enum_WSuggestionPopup_PopupTrigger_str,
        luawt_enum_WSuggestionPopup_PopupTrigger_val,
        3,
        "Wrong enum type in args of WSuggestionPopup.forEdit"
    ));
    self->forEdit(edit, popupTriggers);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSuggestionPopup.forEdit");
    }
}

static const char* WSuggestionPopup_clearSuggestions_args0[] = {luawt_typeToStr<WSuggestionPopup>(), NULL};
static const char* const* const luawt_WSuggestionPopup_clearSuggestions_args[] = {WSuggestionPopup_clearSuggestions_args0, NULL};

int luawt_WSuggestionPopup_clearSuggestions(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSuggestionPopup_clearSuggestions_args);
    WSuggestionPopup* self = luawt_checkFromLua<WSuggestionPopup>(L, 1);
    if (index == 0) {
    self->clearSuggestions();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSuggestionPopup.clearSuggestions");
    }
}

static const char* WSuggestionPopup_showAt_args0[] = {luawt_typeToStr<WSuggestionPopup>(), luawt_typeToStr<Wt::WFormWidget>(), NULL};
static const char* const* const luawt_WSuggestionPopup_showAt_args[] = {WSuggestionPopup_showAt_args0, NULL};

int luawt_WSuggestionPopup_showAt(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSuggestionPopup_showAt_args);
    WSuggestionPopup* self = luawt_checkFromLua<WSuggestionPopup>(L, 1);
    if (index == 0) {
    Wt::WFormWidget* edit =
        luawt_checkFromLua<Wt::WFormWidget>(L, 2);
    self->showAt(edit);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSuggestionPopup.showAt");
    }
}

static const char* WSuggestionPopup_removeEdit_args0[] = {luawt_typeToStr<WSuggestionPopup>(), luawt_typeToStr<Wt::WFormWidget>(), NULL};
static const char* const* const luawt_WSuggestionPopup_removeEdit_args[] = {WSuggestionPopup_removeEdit_args0, NULL};

int luawt_WSuggestionPopup_removeEdit(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSuggestionPopup_removeEdit_args);
    WSuggestionPopup* self = luawt_checkFromLua<WSuggestionPopup>(L, 1);
    if (index == 0) {
    Wt::WFormWidget* edit =
        luawt_checkFromLua<Wt::WFormWidget>(L, 2);
    self->removeEdit(edit);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSuggestionPopup.removeEdit");
    }
}

static const char* WSuggestionPopup_setFilterLength_args0[] = {luawt_typeToStr<WSuggestionPopup>(), "int", NULL};
static const char* const* const luawt_WSuggestionPopup_setFilterLength_args[] = {WSuggestionPopup_setFilterLength_args0, NULL};

int luawt_WSuggestionPopup_setFilterLength(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSuggestionPopup_setFilterLength_args);
    WSuggestionPopup* self = luawt_checkFromLua<WSuggestionPopup>(L, 1);
    if (index == 0) {
    int count = lua_tointeger(L, 2);
    self->setFilterLength(count);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSuggestionPopup.setFilterLength");
    }
}

static const char* WSuggestionPopup_filterLength_args0[] = {luawt_typeToStr<WSuggestionPopup>(), NULL};
static const char* const* const luawt_WSuggestionPopup_filterLength_args[] = {WSuggestionPopup_filterLength_args0, NULL};

int luawt_WSuggestionPopup_filterLength(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSuggestionPopup_filterLength_args);
    WSuggestionPopup* self = luawt_checkFromLua<WSuggestionPopup>(L, 1);
    if (index == 0) {
    int l_result = self->filterLength();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSuggestionPopup.filterLength");
    }
}

static const char* WSuggestionPopup_setModelColumn_args0[] = {luawt_typeToStr<WSuggestionPopup>(), "int", NULL};
static const char* const* const luawt_WSuggestionPopup_setModelColumn_args[] = {WSuggestionPopup_setModelColumn_args0, NULL};

int luawt_WSuggestionPopup_setModelColumn(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSuggestionPopup_setModelColumn_args);
    WSuggestionPopup* self = luawt_checkFromLua<WSuggestionPopup>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    self->setModelColumn(index);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSuggestionPopup.setModelColumn");
    }
}

static const char* WSuggestionPopup_defaultIndex_args0[] = {luawt_typeToStr<WSuggestionPopup>(), NULL};
static const char* const* const luawt_WSuggestionPopup_defaultIndex_args[] = {WSuggestionPopup_defaultIndex_args0, NULL};

int luawt_WSuggestionPopup_defaultIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSuggestionPopup_defaultIndex_args);
    WSuggestionPopup* self = luawt_checkFromLua<WSuggestionPopup>(L, 1);
    if (index == 0) {
    int l_result = self->defaultIndex();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WSuggestionPopup.defaultIndex");
    }
}

static const char* WSuggestionPopup_setDefaultIndex_args0[] = {luawt_typeToStr<WSuggestionPopup>(), "int", NULL};
static const char* const* const luawt_WSuggestionPopup_setDefaultIndex_args[] = {WSuggestionPopup_setDefaultIndex_args0, NULL};

int luawt_WSuggestionPopup_setDefaultIndex(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WSuggestionPopup_setDefaultIndex_args);
    WSuggestionPopup* self = luawt_checkFromLua<WSuggestionPopup>(L, 1);
    if (index == 0) {
    int row = lua_tointeger(L, 2);
    self->setDefaultIndex(row);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WSuggestionPopup.setDefaultIndex");
    }
}


static const luaL_Reg luawt_WSuggestionPopup_methods[] = {
    METHOD(WSuggestionPopup, forEdit),
    METHOD(WSuggestionPopup, removeEdit),
    METHOD(WSuggestionPopup, showAt),
    METHOD(WSuggestionPopup, clearSuggestions),
    METHOD(WSuggestionPopup, addSuggestion),
    METHOD(WSuggestionPopup, setModelColumn),
    METHOD(WSuggestionPopup, setDefaultIndex),
    METHOD(WSuggestionPopup, defaultIndex),
    METHOD(WSuggestionPopup, setFilterLength),
    METHOD(WSuggestionPopup, filterLength),
    METHOD(WSuggestionPopup, setGlobalPopup),
    {NULL, NULL},
};

void luawt_WSuggestionPopup(lua_State* L) {
    const char* base = luawt_typeToStr<WPopupWidget>();
    assert(base);
    DECLARE_CLASS(
        WSuggestionPopup,
        L,
        0,
        0,
        luawt_WSuggestionPopup_methods,
        base
    );
}
