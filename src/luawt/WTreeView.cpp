#include "boost-xtime.hpp"

#include <Wt/WTreeView>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

static const char* WTreeView_make_args0[] = {NULL};
static const char* WTreeView_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WTreeView_make_args[] = {WTreeView_make_args0, WTreeView_make_args1, NULL};

int luawt_WTreeView_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_make_args);
    if (index == 0) {
    WTreeView * result = new WTreeView();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WTreeView");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTreeView * result = new WTreeView(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.make");
    }
}

static const char* WTreeView_pageSize_args0[] = {luawt_typeToStr<WTreeView>(), NULL};
static const char* const* const luawt_WTreeView_pageSize_args[] = {WTreeView_pageSize_args0, NULL};

int luawt_WTreeView_pageSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_pageSize_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    int result = self->pageSize();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.pageSize");
    }
}

static const char* WTreeView_pageCount_args0[] = {luawt_typeToStr<WTreeView>(), NULL};
static const char* const* const luawt_WTreeView_pageCount_args[] = {WTreeView_pageCount_args0, NULL};

int luawt_WTreeView_pageCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_pageCount_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    int result = self->pageCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.pageCount");
    }
}

static const char* WTreeView_setColumnFormat_args0[] = {luawt_typeToStr<WTreeView>(), "int", "char const *", NULL};
static const char* const* const luawt_WTreeView_setColumnFormat_args[] = {WTreeView_setColumnFormat_args0, NULL};

int luawt_WTreeView_setColumnFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_setColumnFormat_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString format = Wt::WString(raw3);
    self->setColumnFormat(column, format);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.setColumnFormat");
    }
}

static const char* WTreeView_setAlternatingRowColors_args0[] = {luawt_typeToStr<WTreeView>(), "bool", NULL};
static const char* const* const luawt_WTreeView_setAlternatingRowColors_args[] = {WTreeView_setAlternatingRowColors_args0, NULL};

int luawt_WTreeView_setAlternatingRowColors(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_setAlternatingRowColors_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    bool enable = lua_toboolean(L, 2);
    self->setAlternatingRowColors(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.setAlternatingRowColors");
    }
}

static const char* WTreeView_rootIsDecorated_args0[] = {luawt_typeToStr<WTreeView>(), NULL};
static const char* const* const luawt_WTreeView_rootIsDecorated_args[] = {WTreeView_rootIsDecorated_args0, NULL};

int luawt_WTreeView_rootIsDecorated(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_rootIsDecorated_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    bool result = self->rootIsDecorated();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.rootIsDecorated");
    }
}

static const char* WTreeView_expandToDepth_args0[] = {luawt_typeToStr<WTreeView>(), "int", NULL};
static const char* const* const luawt_WTreeView_expandToDepth_args[] = {WTreeView_expandToDepth_args0, NULL};

int luawt_WTreeView_expandToDepth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_expandToDepth_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    int depth = lua_tointeger(L, 2);
    self->expandToDepth(depth);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.expandToDepth");
    }
}

static const char* WTreeView_setRootIsDecorated_args0[] = {luawt_typeToStr<WTreeView>(), "bool", NULL};
static const char* const* const luawt_WTreeView_setRootIsDecorated_args[] = {WTreeView_setRootIsDecorated_args0, NULL};

int luawt_WTreeView_setRootIsDecorated(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_setRootIsDecorated_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    bool show = lua_toboolean(L, 2);
    self->setRootIsDecorated(show);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.setRootIsDecorated");
    }
}

static const char* WTreeView_setRowHeaderCount_args0[] = {luawt_typeToStr<WTreeView>(), "int", NULL};
static const char* const* const luawt_WTreeView_setRowHeaderCount_args[] = {WTreeView_setRowHeaderCount_args0, NULL};

int luawt_WTreeView_setRowHeaderCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_setRowHeaderCount_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    int count = lua_tointeger(L, 2);
    self->setRowHeaderCount(count);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.setRowHeaderCount");
    }
}

static const char* WTreeView_setColumnHidden_args0[] = {luawt_typeToStr<WTreeView>(), "int", "bool", NULL};
static const char* const* const luawt_WTreeView_setColumnHidden_args[] = {WTreeView_setColumnHidden_args0, NULL};

int luawt_WTreeView_setColumnHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_setColumnHidden_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    bool hidden = lua_toboolean(L, 3);
    self->setColumnHidden(column, hidden);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.setColumnHidden");
    }
}

static const char* WTreeView_currentPage_args0[] = {luawt_typeToStr<WTreeView>(), NULL};
static const char* const* const luawt_WTreeView_currentPage_args[] = {WTreeView_currentPage_args0, NULL};

int luawt_WTreeView_currentPage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_currentPage_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    int result = self->currentPage();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.currentPage");
    }
}

static const char* WTreeView_columnFormat_args0[] = {luawt_typeToStr<WTreeView>(), "int", NULL};
static const char* const* const luawt_WTreeView_columnFormat_args[] = {WTreeView_columnFormat_args0, NULL};

int luawt_WTreeView_columnFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_columnFormat_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::WString result = self->columnFormat(column);
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.columnFormat");
    }
}

static const char* WTreeView_setCurrentPage_args0[] = {luawt_typeToStr<WTreeView>(), "int", NULL};
static const char* const* const luawt_WTreeView_setCurrentPage_args[] = {WTreeView_setCurrentPage_args0, NULL};

int luawt_WTreeView_setCurrentPage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeView_setCurrentPage_args);
    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
    if (index == 0) {
    int page = lua_tointeger(L, 2);
    self->setCurrentPage(page);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeView.setCurrentPage");
    }
}


static const luaL_Reg luawt_WTreeView_methods[] = {
    METHOD(WTreeView, setColumnFormat),
    METHOD(WTreeView, columnFormat),
    METHOD(WTreeView, expandToDepth),
    METHOD(WTreeView, setRootIsDecorated),
    METHOD(WTreeView, rootIsDecorated),
    METHOD(WTreeView, setAlternatingRowColors),
    METHOD(WTreeView, setColumnHidden),
    METHOD(WTreeView, setRowHeaderCount),
    METHOD(WTreeView, pageCount),
    METHOD(WTreeView, pageSize),
    METHOD(WTreeView, currentPage),
    METHOD(WTreeView, setCurrentPage),
    {NULL, NULL},
};

void luawt_WTreeView(lua_State* L) {
    const char* base = luawt_typeToStr<WAbstractItemView>();
    assert(base);
    DECLARE_CLASS(
        WTreeView,
        L,
        wrap<luawt_WTreeView_make>::func,
        0,
        luawt_WTreeView_methods,
        base
    );
}
