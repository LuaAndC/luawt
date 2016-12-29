#include "boost-xtime.hpp"

#include <Wt/WContainerWidget>
#include <Wt/WTableView>

#include "globals.hpp"

int luawt_WTableView_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTableView * result = new WTableView(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTableView.make: %d", argc);
    }
}

int luawt_WTableView_pageSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
        if (argc == 0) {
    int result = self->pageSize();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTableView.pageSize: %d", argc);
    }
}

int luawt_WTableView_pageCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
        if (argc == 0) {
    int result = self->pageCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTableView.pageCount: %d", argc);
    }
}

int luawt_WTableView_scrollTo(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
        if (argc == 2) {
    int x = lua_tointeger(L, 2);
    int y = lua_tointeger(L, 3);
    self->scrollTo(x, y);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTableView.scrollTo: %d", argc);
    }
}

int luawt_WTableView_setColumnHidden(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
        if (argc == 2) {
    int column = lua_tointeger(L, 2);
    bool hidden = lua_toboolean(L, 3);
    self->setColumnHidden(column, hidden);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTableView.setColumnHidden: %d", argc);
    }
}

int luawt_WTableView_setAlternatingRowColors(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
        if (argc == 1) {
    bool enable = lua_toboolean(L, 2);
    self->setAlternatingRowColors(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTableView.setAlternatingRowColors: %d", argc);
    }
}

int luawt_WTableView_setOverflow(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
        if (argc == 1) {
    Wt::WContainerWidget::Overflow overflow = static_cast<Wt::WContainerWidget::Overflow>(lua_tointeger(L, 2));
    self->setOverflow(overflow);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTableView.setOverflow: %d", argc);
    }
}

int luawt_WTableView_setRowHeaderCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
        if (argc == 1) {
    int count = lua_tointeger(L, 2);
    self->setRowHeaderCount(count);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTableView.setRowHeaderCount: %d", argc);
    }
}

int luawt_WTableView_currentPage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
        if (argc == 0) {
    int result = self->currentPage();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTableView.currentPage: %d", argc);
    }
}

int luawt_WTableView_setCurrentPage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableView* self = luawt_checkFromLua<WTableView>(L, 1);
        if (argc == 1) {
    int page = lua_tointeger(L, 2);
    self->setCurrentPage(page);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTableView.setCurrentPage: %d", argc);
    }
}

ADD_SIGNAL(scrolled, WTableView, Wt::WScrollEvent)

static const luaL_Reg luawt_WTableView_methods[] = {
    METHOD(WTableView, setAlternatingRowColors),
    METHOD(WTableView, setColumnHidden),
    METHOD(WTableView, setRowHeaderCount),
    METHOD(WTableView, pageCount),
    METHOD(WTableView, pageSize),
    METHOD(WTableView, currentPage),
    METHOD(WTableView, setCurrentPage),
    METHOD(WTableView, scrollTo),
    METHOD(WTableView, setOverflow),
    METHOD(WTableView, scrolled),
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
