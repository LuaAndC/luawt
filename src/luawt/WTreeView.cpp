#include "boost-xtime.hpp"

#include <Wt/WTreeView>
#include <Wt/WContainerWidget>
#include <Wt/WString>

#include "globals.hpp"

int luawt_WTreeView_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTreeView * result = new WTreeView(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.make: %d", argc);
    }
}

int luawt_WTreeView_pageSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 0) {
    int result = self->pageSize();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.pageSize: %d", argc);
    }
}

int luawt_WTreeView_pageCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 0) {
    int result = self->pageCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.pageCount: %d", argc);
    }
}

int luawt_WTreeView_setColumnFormat(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 2) {
    int column = lua_tointeger(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString format = Wt::WString(raw3);
    self->setColumnFormat(column, format);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.setColumnFormat: %d", argc);
    }
}

int luawt_WTreeView_setAlternatingRowColors(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 1) {
    bool enable = lua_toboolean(L, 2);
    self->setAlternatingRowColors(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.setAlternatingRowColors: %d", argc);
    }
}

int luawt_WTreeView_rootIsDecorated(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 0) {
    bool result = self->rootIsDecorated();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.rootIsDecorated: %d", argc);
    }
}

int luawt_WTreeView_expandToDepth(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 1) {
    int depth = lua_tointeger(L, 2);
    self->expandToDepth(depth);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.expandToDepth: %d", argc);
    }
}

int luawt_WTreeView_setRootIsDecorated(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 1) {
    bool show = lua_toboolean(L, 2);
    self->setRootIsDecorated(show);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.setRootIsDecorated: %d", argc);
    }
}

int luawt_WTreeView_setRowHeaderCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 1) {
    int count = lua_tointeger(L, 2);
    self->setRowHeaderCount(count);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.setRowHeaderCount: %d", argc);
    }
}

int luawt_WTreeView_setColumnHidden(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 2) {
    int column = lua_tointeger(L, 2);
    bool hidden = lua_toboolean(L, 3);
    self->setColumnHidden(column, hidden);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.setColumnHidden: %d", argc);
    }
}

int luawt_WTreeView_currentPage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 0) {
    int result = self->currentPage();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.currentPage: %d", argc);
    }
}

int luawt_WTreeView_columnFormat(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 1) {
    int column = lua_tointeger(L, 2);
    Wt::WString result = self->columnFormat(column);
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.columnFormat: %d", argc);
    }
}

int luawt_WTreeView_setCurrentPage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeView* self = luawt_checkFromLua<WTreeView>(L, 1);
        if (argc == 1) {
    int page = lua_tointeger(L, 2);
    self->setCurrentPage(page);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeView.setCurrentPage: %d", argc);
    }
}

ADD_SIGNAL(scrolled, WTreeView, Wt::WScrollEvent)

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
    METHOD(WTreeView, scrolled),
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
