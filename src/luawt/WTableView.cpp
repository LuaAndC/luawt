#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WTableView>

#include "globals.hpp"

static const char* WTableView_make_args0[] = {NULL};
static const char* WTableView_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WTableView_make_args[] = {WTableView_make_args0, WTableView_make_args1, NULL};

int luawt_WTableView_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableView_make_args);
    if (index == 0) {
    WTableView * result = new WTableView();
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTableView * result = new WTableView(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTableView.make");
    }
}

static const char* WTableView_pageSize_args0[] = {luawt_typeToStr<WTableView>(), NULL};
static const char* const* const luawt_WTableView_pageSize_args[] = {WTableView_pageSize_args0, NULL};

int luawt_WTableView_pageSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableView_pageSize_args);
    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
    if (index == 0) {
    int result = self->pageSize();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTableView.pageSize");
    }
}

static const char* WTableView_pageCount_args0[] = {luawt_typeToStr<WTableView>(), NULL};
static const char* const* const luawt_WTableView_pageCount_args[] = {WTableView_pageCount_args0, NULL};

int luawt_WTableView_pageCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableView_pageCount_args);
    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
    if (index == 0) {
    int result = self->pageCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTableView.pageCount");
    }
}

static const char* WTableView_setColumnHidden_args0[] = {luawt_typeToStr<WTableView>(), "int", "bool", NULL};
static const char* const* const luawt_WTableView_setColumnHidden_args[] = {WTableView_setColumnHidden_args0, NULL};

int luawt_WTableView_setColumnHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableView_setColumnHidden_args);
    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    bool hidden = lua_toboolean(L, 3);
    self->setColumnHidden(column, hidden);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTableView.setColumnHidden");
    }
}

static const char* WTableView_setAlternatingRowColors_args0[] = {luawt_typeToStr<WTableView>(), "bool", NULL};
static const char* const* const luawt_WTableView_setAlternatingRowColors_args[] = {WTableView_setAlternatingRowColors_args0, NULL};

int luawt_WTableView_setAlternatingRowColors(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableView_setAlternatingRowColors_args);
    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
    if (index == 0) {
    bool enable = lua_toboolean(L, 2);
    self->setAlternatingRowColors(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTableView.setAlternatingRowColors");
    }
}

static const char* WTableView_setRowHeaderCount_args0[] = {luawt_typeToStr<WTableView>(), "int", NULL};
static const char* const* const luawt_WTableView_setRowHeaderCount_args[] = {WTableView_setRowHeaderCount_args0, NULL};

int luawt_WTableView_setRowHeaderCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableView_setRowHeaderCount_args);
    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
    if (index == 0) {
    int count = lua_tointeger(L, 2);
    self->setRowHeaderCount(count);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTableView.setRowHeaderCount");
    }
}

static const char* WTableView_currentPage_args0[] = {luawt_typeToStr<WTableView>(), NULL};
static const char* const* const luawt_WTableView_currentPage_args[] = {WTableView_currentPage_args0, NULL};

int luawt_WTableView_currentPage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableView_currentPage_args);
    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
    if (index == 0) {
    int result = self->currentPage();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTableView.currentPage");
    }
}

static const char* WTableView_setCurrentPage_args0[] = {luawt_typeToStr<WTableView>(), "int", NULL};
static const char* const* const luawt_WTableView_setCurrentPage_args[] = {WTableView_setCurrentPage_args0, NULL};

int luawt_WTableView_setCurrentPage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableView_setCurrentPage_args);
    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
    if (index == 0) {
    int page = lua_tointeger(L, 2);
    self->setCurrentPage(page);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTableView.setCurrentPage");
    }
}


static const luaL_Reg luawt_WTableView_methods[] = {
    METHOD(WTableView, setAlternatingRowColors),
    METHOD(WTableView, setColumnHidden),
    METHOD(WTableView, setRowHeaderCount),
    METHOD(WTableView, pageCount),
    METHOD(WTableView, pageSize),
    METHOD(WTableView, currentPage),
    METHOD(WTableView, setCurrentPage),
    {NULL, NULL},
};

void luawt_WTableView(lua_State* L) {
    const char* base = luawt_typeToStr<WAbstractItemView>();
    assert(base);
    DECLARE_CLASS(
        WTableView,
        L,
        wrap<luawt_WTableView_make>::func,
        0,
        luawt_WTableView_methods,
        base
    );
}
