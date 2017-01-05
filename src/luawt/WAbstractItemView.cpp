#include "boost-xtime.hpp"

#include <Wt/WAbstractItemView>

#include "globals.hpp"

int luawt_WAbstractItemView_sortColumn(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    int result = self->sortColumn();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.sortColumn: %d", argc);
    }
}

int luawt_WAbstractItemView_pageSize(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    int result = self->pageSize();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.pageSize: %d", argc);
    }
}

int luawt_WAbstractItemView_pageCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    int result = self->pageCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.pageCount: %d", argc);
    }
}

int luawt_WAbstractItemView_setRowHeaderCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    int count = lua_tointeger(L, 2);
    self->setRowHeaderCount(count);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setRowHeaderCount: %d", argc);
    }
}

int luawt_WAbstractItemView_columnAlignment(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    int column = lua_tointeger(L, 2);
    Wt::AlignmentFlag result = self->columnAlignment(column);
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.columnAlignment: %d", argc);
    }
}

int luawt_WAbstractItemView_setDragEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    bool enable = lua_toboolean(L, 2);
    self->setDragEnabled(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setDragEnabled: %d", argc);
    }
}

int luawt_WAbstractItemView_isEditing(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    bool result = self->isEditing();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.isEditing: %d", argc);
    }
}

int luawt_WAbstractItemView_setSelectionBehavior(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    Wt::SelectionBehavior behavior = static_cast<Wt::SelectionBehavior>(lua_tointeger(L, 2));
    self->setSelectionBehavior(behavior);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setSelectionBehavior: %d", argc);
    }
}

int luawt_WAbstractItemView_hideColumn(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    int column = lua_tointeger(L, 2);
    self->hideColumn(column);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.hideColumn: %d", argc);
    }
}

int luawt_WAbstractItemView_headerAlignment(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    int column = lua_tointeger(L, 2);
    Wt::AlignmentFlag result = self->headerAlignment(column);
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.headerAlignment: %d", argc);
    }
}

int luawt_WAbstractItemView_setColumnHidden(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 2) {
    int column = lua_tointeger(L, 2);
    bool hide = lua_toboolean(L, 3);
    self->setColumnHidden(column, hide);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setColumnHidden: %d", argc);
    }
}

int luawt_WAbstractItemView_setAlternatingRowColors(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    bool enable = lua_toboolean(L, 2);
    self->setAlternatingRowColors(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setAlternatingRowColors: %d", argc);
    }
}

int luawt_WAbstractItemView_isColumnHidden(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    int column = lua_tointeger(L, 2);
    bool result = self->isColumnHidden(column);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.isColumnHidden: %d", argc);
    }
}

int luawt_WAbstractItemView_sortOrder(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    Wt::SortOrder result = self->sortOrder();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.sortOrder: %d", argc);
    }
}

int luawt_WAbstractItemView_rowHeaderCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    int result = self->rowHeaderCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.rowHeaderCount: %d", argc);
    }
}

int luawt_WAbstractItemView_setColumnAlignment(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 2) {
    int column = lua_tointeger(L, 2);
    Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(lua_tointeger(L, 3));
    self->setColumnAlignment(column, alignment);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setColumnAlignment: %d", argc);
    }
}

int luawt_WAbstractItemView_currentPage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    int result = self->currentPage();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.currentPage: %d", argc);
    }
}

int luawt_WAbstractItemView_showColumn(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    int column = lua_tointeger(L, 2);
    self->showColumn(column);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.showColumn: %d", argc);
    }
}

int luawt_WAbstractItemView_isSortingEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    bool result = self->isSortingEnabled();
    lua_pushboolean(L, result);
    return 1;

    } else     if (argc == 1) {
    int column = lua_tointeger(L, 2);
    bool result = self->isSortingEnabled(column);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.isSortingEnabled: %d", argc);
    }
}

int luawt_WAbstractItemView_alternatingRowColors(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    bool result = self->alternatingRowColors();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.alternatingRowColors: %d", argc);
    }
}

int luawt_WAbstractItemView_closeEditors(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    bool saveData = lua_toboolean(L, 2);
    self->closeEditors(saveData);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.closeEditors: %d", argc);
    }
}

int luawt_WAbstractItemView_setColumn1Fixed(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    bool enable = lua_toboolean(L, 2);
    self->setColumn1Fixed(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setColumn1Fixed: %d", argc);
    }
}

int luawt_WAbstractItemView_selectionMode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    Wt::SelectionMode result = self->selectionMode();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.selectionMode: %d", argc);
    }
}

int luawt_WAbstractItemView_setCurrentPage(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    int page = lua_tointeger(L, 2);
    self->setCurrentPage(page);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setCurrentPage: %d", argc);
    }
}

int luawt_WAbstractItemView_column1Fixed(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    bool result = self->column1Fixed();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.column1Fixed: %d", argc);
    }
}

int luawt_WAbstractItemView_setSelectionMode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    Wt::SelectionMode mode = static_cast<Wt::SelectionMode>(lua_tointeger(L, 2));
    self->setSelectionMode(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setSelectionMode: %d", argc);
    }
}

int luawt_WAbstractItemView_validateEditors(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    Wt::WValidator::State result = self->validateEditors();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.validateEditors: %d", argc);
    }
}

int luawt_WAbstractItemView_sortByColumn(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 2) {
    int column = lua_tointeger(L, 2);
    Wt::SortOrder order = static_cast<Wt::SortOrder>(lua_tointeger(L, 3));
    self->sortByColumn(column, order);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.sortByColumn: %d", argc);
    }
}

int luawt_WAbstractItemView_setSortingEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->setSortingEnabled(enabled);
    return 0;
    
    } else     if (argc == 2) {
    int column = lua_tointeger(L, 2);
    bool enabled = lua_toboolean(L, 3);
    self->setSortingEnabled(column, enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setSortingEnabled: %d", argc);
    }
}

int luawt_WAbstractItemView_setDropsEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    bool enable = lua_toboolean(L, 2);
    self->setDropsEnabled(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setDropsEnabled: %d", argc);
    }
}

int luawt_WAbstractItemView_isColumnResizeEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    bool result = self->isColumnResizeEnabled();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.isColumnResizeEnabled: %d", argc);
    }
}

int luawt_WAbstractItemView_selectionBehavior(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 0) {
    Wt::SelectionBehavior result = self->selectionBehavior();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.selectionBehavior: %d", argc);
    }
}

int luawt_WAbstractItemView_setColumnResizeEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->setColumnResizeEnabled(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WAbstractItemView.setColumnResizeEnabled: %d", argc);
    }
}


static const luaL_Reg luawt_WAbstractItemView_methods[] = {
    METHOD(WAbstractItemView, setColumnAlignment),
    METHOD(WAbstractItemView, columnAlignment),
    METHOD(WAbstractItemView, headerAlignment),
    METHOD(WAbstractItemView, setAlternatingRowColors),
    METHOD(WAbstractItemView, alternatingRowColors),
    METHOD(WAbstractItemView, sortByColumn),
    METHOD(WAbstractItemView, sortColumn),
    METHOD(WAbstractItemView, sortOrder),
    METHOD(WAbstractItemView, setSortingEnabled),
    METHOD(WAbstractItemView, setSortingEnabled),
    METHOD(WAbstractItemView, isSortingEnabled),
    METHOD(WAbstractItemView, isSortingEnabled),
    METHOD(WAbstractItemView, setColumnResizeEnabled),
    METHOD(WAbstractItemView, isColumnResizeEnabled),
    METHOD(WAbstractItemView, setSelectionBehavior),
    METHOD(WAbstractItemView, selectionBehavior),
    METHOD(WAbstractItemView, setSelectionMode),
    METHOD(WAbstractItemView, selectionMode),
    METHOD(WAbstractItemView, setDragEnabled),
    METHOD(WAbstractItemView, setDropsEnabled),
    METHOD(WAbstractItemView, setColumnHidden),
    METHOD(WAbstractItemView, isColumnHidden),
    METHOD(WAbstractItemView, hideColumn),
    METHOD(WAbstractItemView, showColumn),
    METHOD(WAbstractItemView, pageCount),
    METHOD(WAbstractItemView, pageSize),
    METHOD(WAbstractItemView, currentPage),
    METHOD(WAbstractItemView, setCurrentPage),
    METHOD(WAbstractItemView, closeEditors),
    METHOD(WAbstractItemView, validateEditors),
    METHOD(WAbstractItemView, isEditing),
    METHOD(WAbstractItemView, setRowHeaderCount),
    METHOD(WAbstractItemView, rowHeaderCount),
    METHOD(WAbstractItemView, setColumn1Fixed),
    METHOD(WAbstractItemView, column1Fixed),
    {NULL, NULL},
};

void luawt_WAbstractItemView(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WAbstractItemView,
        L,
        0,
        0,
        luawt_WAbstractItemView_methods,
        base
    );
}
