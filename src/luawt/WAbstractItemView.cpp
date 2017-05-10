#include "boost-xtime.hpp"

#include <Wt/WLength>
#include <Wt/WAbstractItemView>

#include "enums.hpp"
#include "globals.hpp"

static const char* WAbstractItemView_sortColumn_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_sortColumn_args[] = {WAbstractItemView_sortColumn_args0, NULL};

int luawt_WAbstractItemView_sortColumn(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_sortColumn_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int l_result = self->sortColumn();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.sortColumn");
    }
}

static const char* WAbstractItemView_setRowHeight_args0[] = {luawt_typeToStr<WAbstractItemView>(), "double", NULL};
static const char* const* const luawt_WAbstractItemView_setRowHeight_args[] = {WAbstractItemView_setRowHeight_args0, NULL};

int luawt_WAbstractItemView_setRowHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setRowHeight_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength rowHeight = Wt::WLength(raw2);
    self->setRowHeight(rowHeight);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setRowHeight");
    }
}

static const char* WAbstractItemView_editOptions_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_editOptions_args[] = {WAbstractItemView_editOptions_args0, NULL};

int luawt_WAbstractItemView_editOptions(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_editOptions_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::WFlags<Wt::WAbstractItemView::EditOption> l_result = self->editOptions();
    luawt_returnEnum(L, luawt_enum_WAbstractItemView_EditOption_str, luawt_enum_WAbstractItemView_EditOption_val, l_result, "WAbstractItemView::EditOption");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.editOptions");
    }
}

static const char* WAbstractItemView_pageSize_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_pageSize_args[] = {WAbstractItemView_pageSize_args0, NULL};

int luawt_WAbstractItemView_pageSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_pageSize_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int l_result = self->pageSize();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.pageSize");
    }
}

static const char* WAbstractItemView_pageCount_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_pageCount_args[] = {WAbstractItemView_pageCount_args0, NULL};

int luawt_WAbstractItemView_pageCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_pageCount_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int l_result = self->pageCount();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.pageCount");
    }
}

static const char* WAbstractItemView_setRowHeaderCount_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", NULL};
static const char* const* const luawt_WAbstractItemView_setRowHeaderCount_args[] = {WAbstractItemView_setRowHeaderCount_args0, NULL};

int luawt_WAbstractItemView_setRowHeaderCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setRowHeaderCount_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int count = lua_tointeger(L, 2);
    self->setRowHeaderCount(count);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setRowHeaderCount");
    }
}

static const char* WAbstractItemView_columnAlignment_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", NULL};
static const char* const* const luawt_WAbstractItemView_columnAlignment_args[] = {WAbstractItemView_columnAlignment_args0, NULL};

int luawt_WAbstractItemView_columnAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_columnAlignment_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::AlignmentFlag l_result = self->columnAlignment(column);
    luawt_returnEnum(L, luawt_enum_AlignmentFlag_str, luawt_enum_AlignmentFlag_val, l_result, "AlignmentFlag");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.columnAlignment");
    }
}

static const char* WAbstractItemView_setDragEnabled_args0[] = {luawt_typeToStr<WAbstractItemView>(), "bool", NULL};
static const char* const* const luawt_WAbstractItemView_setDragEnabled_args[] = {WAbstractItemView_setDragEnabled_args0, NULL};

int luawt_WAbstractItemView_setDragEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setDragEnabled_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    bool enable = lua_toboolean(L, 2);
    self->setDragEnabled(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setDragEnabled");
    }
}

static const char* WAbstractItemView_setColumnWidth_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", "double", NULL};
static const char* const* const luawt_WAbstractItemView_setColumnWidth_args[] = {WAbstractItemView_setColumnWidth_args0, NULL};

int luawt_WAbstractItemView_setColumnWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setColumnWidth_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    double raw3 = lua_tonumber(L, 3);
    Wt::WLength width = Wt::WLength(raw3);
    self->setColumnWidth(column, width);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setColumnWidth");
    }
}

static const char* WAbstractItemView_isEditing_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_isEditing_args[] = {WAbstractItemView_isEditing_args0, NULL};

int luawt_WAbstractItemView_isEditing(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_isEditing_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    bool l_result = self->isEditing();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.isEditing");
    }
}

static const char* WAbstractItemView_setColumn1Fixed_args0[] = {luawt_typeToStr<WAbstractItemView>(), "bool", NULL};
static const char* const* const luawt_WAbstractItemView_setColumn1Fixed_args[] = {WAbstractItemView_setColumn1Fixed_args0, NULL};

int luawt_WAbstractItemView_setColumn1Fixed(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setColumn1Fixed_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    bool enable = lua_toboolean(L, 2);
    self->setColumn1Fixed(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setColumn1Fixed");
    }
}

static const char* WAbstractItemView_setSelectionBehavior_args0[] = {luawt_typeToStr<WAbstractItemView>(), "enum", NULL};
static const char* const* const luawt_WAbstractItemView_setSelectionBehavior_args[] = {WAbstractItemView_setSelectionBehavior_args0, NULL};

int luawt_WAbstractItemView_setSelectionBehavior(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setSelectionBehavior_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::SelectionBehavior behavior = static_cast<Wt::SelectionBehavior>(luawt_getEnum(
        L,
        luawt_enum_SelectionBehavior_str,
        luawt_enum_SelectionBehavior_val,
        2,
        "Wrong enum type in args of WAbstractItemView.setSelectionBehavior"
    ));
    self->setSelectionBehavior(behavior);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setSelectionBehavior");
    }
}

static const char* WAbstractItemView_setHeaderWordWrap_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", "bool", NULL};
static const char* const* const luawt_WAbstractItemView_setHeaderWordWrap_args[] = {WAbstractItemView_setHeaderWordWrap_args0, NULL};

int luawt_WAbstractItemView_setHeaderWordWrap(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setHeaderWordWrap_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    bool enabled = lua_toboolean(L, 3);
    self->setHeaderWordWrap(column, enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setHeaderWordWrap");
    }
}

static const char* WAbstractItemView_setEditOptions_args0[] = {luawt_typeToStr<WAbstractItemView>(), "enum", NULL};
static const char* const* const luawt_WAbstractItemView_setEditOptions_args[] = {WAbstractItemView_setEditOptions_args0, NULL};

int luawt_WAbstractItemView_setEditOptions(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setEditOptions_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::WFlags<Wt::WAbstractItemView::EditOption> options = static_cast<Wt::WAbstractItemView::EditOption>(luawt_getEnum(
        L,
        luawt_enum_WAbstractItemView_EditOption_str,
        luawt_enum_WAbstractItemView_EditOption_val,
        2,
        "Wrong enum type in args of WAbstractItemView.setEditOptions"
    ));
    self->setEditOptions(options);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setEditOptions");
    }
}

static const char* WAbstractItemView_hideColumn_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", NULL};
static const char* const* const luawt_WAbstractItemView_hideColumn_args[] = {WAbstractItemView_hideColumn_args0, NULL};

int luawt_WAbstractItemView_hideColumn(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_hideColumn_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    self->hideColumn(column);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.hideColumn");
    }
}

static const char* WAbstractItemView_headerAlignment_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", NULL};
static const char* const* const luawt_WAbstractItemView_headerAlignment_args[] = {WAbstractItemView_headerAlignment_args0, NULL};

int luawt_WAbstractItemView_headerAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_headerAlignment_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::AlignmentFlag l_result = self->headerAlignment(column);
    luawt_returnEnum(L, luawt_enum_AlignmentFlag_str, luawt_enum_AlignmentFlag_val, l_result, "AlignmentFlag");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.headerAlignment");
    }
}

static const char* WAbstractItemView_setColumnHidden_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", "bool", NULL};
static const char* const* const luawt_WAbstractItemView_setColumnHidden_args[] = {WAbstractItemView_setColumnHidden_args0, NULL};

int luawt_WAbstractItemView_setColumnHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setColumnHidden_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    bool hide = lua_toboolean(L, 3);
    self->setColumnHidden(column, hide);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setColumnHidden");
    }
}

static const char* WAbstractItemView_setAlternatingRowColors_args0[] = {luawt_typeToStr<WAbstractItemView>(), "bool", NULL};
static const char* const* const luawt_WAbstractItemView_setAlternatingRowColors_args[] = {WAbstractItemView_setAlternatingRowColors_args0, NULL};

int luawt_WAbstractItemView_setAlternatingRowColors(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setAlternatingRowColors_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    bool enable = lua_toboolean(L, 2);
    self->setAlternatingRowColors(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setAlternatingRowColors");
    }
}

static const char* WAbstractItemView_isColumnHidden_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", NULL};
static const char* const* const luawt_WAbstractItemView_isColumnHidden_args[] = {WAbstractItemView_isColumnHidden_args0, NULL};

int luawt_WAbstractItemView_isColumnHidden(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_isColumnHidden_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    bool l_result = self->isColumnHidden(column);
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.isColumnHidden");
    }
}

static const char* WAbstractItemView_sortOrder_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_sortOrder_args[] = {WAbstractItemView_sortOrder_args0, NULL};

int luawt_WAbstractItemView_sortOrder(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_sortOrder_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::SortOrder l_result = self->sortOrder();
    luawt_returnEnum(L, luawt_enum_SortOrder_str, luawt_enum_SortOrder_val, l_result, "SortOrder");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.sortOrder");
    }
}

static const char* WAbstractItemView_rowHeaderCount_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_rowHeaderCount_args[] = {WAbstractItemView_rowHeaderCount_args0, NULL};

int luawt_WAbstractItemView_rowHeaderCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_rowHeaderCount_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int l_result = self->rowHeaderCount();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.rowHeaderCount");
    }
}

static const char* WAbstractItemView_setColumnAlignment_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", "enum", NULL};
static const char* const* const luawt_WAbstractItemView_setColumnAlignment_args[] = {WAbstractItemView_setColumnAlignment_args0, NULL};

int luawt_WAbstractItemView_setColumnAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setColumnAlignment_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::AlignmentFlag alignment = static_cast<Wt::AlignmentFlag>(luawt_getEnum(
        L,
        luawt_enum_AlignmentFlag_str,
        luawt_enum_AlignmentFlag_val,
        3,
        "Wrong enum type in args of WAbstractItemView.setColumnAlignment"
    ));
    self->setColumnAlignment(column, alignment);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setColumnAlignment");
    }
}

static const char* WAbstractItemView_currentPage_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_currentPage_args[] = {WAbstractItemView_currentPage_args0, NULL};

int luawt_WAbstractItemView_currentPage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_currentPage_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int l_result = self->currentPage();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.currentPage");
    }
}

static const char* WAbstractItemView_headerHeight_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_headerHeight_args[] = {WAbstractItemView_headerHeight_args0, NULL};

int luawt_WAbstractItemView_headerHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_headerHeight_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::WLength const & l_result = self->headerHeight();
    lua_pushnumber(L, l_result.value());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.headerHeight");
    }
}

static const char* WAbstractItemView_showColumn_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", NULL};
static const char* const* const luawt_WAbstractItemView_showColumn_args[] = {WAbstractItemView_showColumn_args0, NULL};

int luawt_WAbstractItemView_showColumn(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_showColumn_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    self->showColumn(column);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.showColumn");
    }
}

static const char* WAbstractItemView_verticalHeaderAlignment_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", NULL};
static const char* const* const luawt_WAbstractItemView_verticalHeaderAlignment_args[] = {WAbstractItemView_verticalHeaderAlignment_args0, NULL};

int luawt_WAbstractItemView_verticalHeaderAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_verticalHeaderAlignment_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::AlignmentFlag l_result = self->verticalHeaderAlignment(column);
    luawt_returnEnum(L, luawt_enum_AlignmentFlag_str, luawt_enum_AlignmentFlag_val, l_result, "AlignmentFlag");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.verticalHeaderAlignment");
    }
}

static const char* WAbstractItemView_isSortingEnabled_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* WAbstractItemView_isSortingEnabled_args1[] = {luawt_typeToStr<WAbstractItemView>(), "int", NULL};
static const char* const* const luawt_WAbstractItemView_isSortingEnabled_args[] = {WAbstractItemView_isSortingEnabled_args0, WAbstractItemView_isSortingEnabled_args1, NULL};

int luawt_WAbstractItemView_isSortingEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_isSortingEnabled_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    bool l_result = self->isSortingEnabled();
    lua_pushboolean(L, l_result);
    return 1;

    } else if (index == 1) {
    int column = lua_tointeger(L, 2);
    bool l_result = self->isSortingEnabled(column);
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.isSortingEnabled");
    }
}

static const char* WAbstractItemView_alternatingRowColors_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_alternatingRowColors_args[] = {WAbstractItemView_alternatingRowColors_args0, NULL};

int luawt_WAbstractItemView_alternatingRowColors(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_alternatingRowColors_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    bool l_result = self->alternatingRowColors();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.alternatingRowColors");
    }
}

static const char* WAbstractItemView_closeEditors_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* WAbstractItemView_closeEditors_args1[] = {luawt_typeToStr<WAbstractItemView>(), "bool", NULL};
static const char* const* const luawt_WAbstractItemView_closeEditors_args[] = {WAbstractItemView_closeEditors_args0, WAbstractItemView_closeEditors_args1, NULL};

int luawt_WAbstractItemView_closeEditors(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_closeEditors_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    self->closeEditors();
    return 0;
    
    } else if (index == 1) {
    bool saveData = lua_toboolean(L, 2);
    self->closeEditors(saveData);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.closeEditors");
    }
}

static const char* WAbstractItemView_editTriggers_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_editTriggers_args[] = {WAbstractItemView_editTriggers_args0, NULL};

int luawt_WAbstractItemView_editTriggers(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_editTriggers_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::WFlags<Wt::WAbstractItemView::EditTrigger> l_result = self->editTriggers();
    luawt_returnEnum(L, luawt_enum_WAbstractItemView_EditTrigger_str, luawt_enum_WAbstractItemView_EditTrigger_val, l_result, "WAbstractItemView::EditTrigger");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.editTriggers");
    }
}

static const char* WAbstractItemView_setHeaderAlignment_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", "enum", NULL};
static const char* const* const luawt_WAbstractItemView_setHeaderAlignment_args[] = {WAbstractItemView_setHeaderAlignment_args0, NULL};

int luawt_WAbstractItemView_setHeaderAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setHeaderAlignment_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::WFlags<Wt::AlignmentFlag> alignment = static_cast<Wt::AlignmentFlag>(luawt_getEnum(
        L,
        luawt_enum_AlignmentFlag_str,
        luawt_enum_AlignmentFlag_val,
        3,
        "Wrong enum type in args of WAbstractItemView.setHeaderAlignment"
    ));
    self->setHeaderAlignment(column, alignment);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setHeaderAlignment");
    }
}

static const char* WAbstractItemView_setHeaderHeight_args0[] = {luawt_typeToStr<WAbstractItemView>(), "double", NULL};
static const char* WAbstractItemView_setHeaderHeight_args1[] = {luawt_typeToStr<WAbstractItemView>(), "double", "bool", NULL};
static const char* const* const luawt_WAbstractItemView_setHeaderHeight_args[] = {WAbstractItemView_setHeaderHeight_args0, WAbstractItemView_setHeaderHeight_args1, NULL};

int luawt_WAbstractItemView_setHeaderHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setHeaderHeight_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength height = Wt::WLength(raw2);
    self->setHeaderHeight(height);
    return 0;
    
    } else if (index == 1) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength height = Wt::WLength(raw2);
    bool multiLine = lua_toboolean(L, 3);
    self->setHeaderHeight(height, multiLine);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setHeaderHeight");
    }
}

static const char* WAbstractItemView_selectionMode_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_selectionMode_args[] = {WAbstractItemView_selectionMode_args0, NULL};

int luawt_WAbstractItemView_selectionMode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_selectionMode_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::SelectionMode l_result = self->selectionMode();
    luawt_returnEnum(L, luawt_enum_SelectionMode_str, luawt_enum_SelectionMode_val, l_result, "SelectionMode");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.selectionMode");
    }
}

static const char* WAbstractItemView_setCurrentPage_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", NULL};
static const char* const* const luawt_WAbstractItemView_setCurrentPage_args[] = {WAbstractItemView_setCurrentPage_args0, NULL};

int luawt_WAbstractItemView_setCurrentPage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setCurrentPage_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int page = lua_tointeger(L, 2);
    self->setCurrentPage(page);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setCurrentPage");
    }
}

static const char* WAbstractItemView_column1Fixed_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_column1Fixed_args[] = {WAbstractItemView_column1Fixed_args0, NULL};

int luawt_WAbstractItemView_column1Fixed(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_column1Fixed_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    bool l_result = self->column1Fixed();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.column1Fixed");
    }
}

static const char* WAbstractItemView_setEditTriggers_args0[] = {luawt_typeToStr<WAbstractItemView>(), "enum", NULL};
static const char* const* const luawt_WAbstractItemView_setEditTriggers_args[] = {WAbstractItemView_setEditTriggers_args0, NULL};

int luawt_WAbstractItemView_setEditTriggers(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setEditTriggers_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::WFlags<Wt::WAbstractItemView::EditTrigger> editTriggers = static_cast<Wt::WAbstractItemView::EditTrigger>(luawt_getEnum(
        L,
        luawt_enum_WAbstractItemView_EditTrigger_str,
        luawt_enum_WAbstractItemView_EditTrigger_val,
        2,
        "Wrong enum type in args of WAbstractItemView.setEditTriggers"
    ));
    self->setEditTriggers(editTriggers);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setEditTriggers");
    }
}

static const char* WAbstractItemView_horizontalHeaderAlignment_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", NULL};
static const char* const* const luawt_WAbstractItemView_horizontalHeaderAlignment_args[] = {WAbstractItemView_horizontalHeaderAlignment_args0, NULL};

int luawt_WAbstractItemView_horizontalHeaderAlignment(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_horizontalHeaderAlignment_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::AlignmentFlag l_result = self->horizontalHeaderAlignment(column);
    luawt_returnEnum(L, luawt_enum_AlignmentFlag_str, luawt_enum_AlignmentFlag_val, l_result, "AlignmentFlag");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.horizontalHeaderAlignment");
    }
}

static const char* WAbstractItemView_rowHeight_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_rowHeight_args[] = {WAbstractItemView_rowHeight_args0, NULL};

int luawt_WAbstractItemView_rowHeight(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_rowHeight_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::WLength const & l_result = self->rowHeight();
    lua_pushnumber(L, l_result.value());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.rowHeight");
    }
}

static const char* WAbstractItemView_setSelectionMode_args0[] = {luawt_typeToStr<WAbstractItemView>(), "enum", NULL};
static const char* const* const luawt_WAbstractItemView_setSelectionMode_args[] = {WAbstractItemView_setSelectionMode_args0, NULL};

int luawt_WAbstractItemView_setSelectionMode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setSelectionMode_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::SelectionMode mode = static_cast<Wt::SelectionMode>(luawt_getEnum(
        L,
        luawt_enum_SelectionMode_str,
        luawt_enum_SelectionMode_val,
        2,
        "Wrong enum type in args of WAbstractItemView.setSelectionMode"
    ));
    self->setSelectionMode(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setSelectionMode");
    }
}

static const char* WAbstractItemView_columnWidth_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", NULL};
static const char* const* const luawt_WAbstractItemView_columnWidth_args[] = {WAbstractItemView_columnWidth_args0, NULL};

int luawt_WAbstractItemView_columnWidth(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_columnWidth_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::WLength l_result = self->columnWidth(column);
    lua_pushnumber(L, l_result.value());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.columnWidth");
    }
}

static const char* WAbstractItemView_validateEditors_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_validateEditors_args[] = {WAbstractItemView_validateEditors_args0, NULL};

int luawt_WAbstractItemView_validateEditors(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_validateEditors_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::WValidator::State l_result = self->validateEditors();
    luawt_returnEnum(L, luawt_enum_WValidator_State_str, luawt_enum_WValidator_State_val, l_result, "WValidator::State");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.validateEditors");
    }
}

static const char* WAbstractItemView_sortByColumn_args0[] = {luawt_typeToStr<WAbstractItemView>(), "int", "enum", NULL};
static const char* const* const luawt_WAbstractItemView_sortByColumn_args[] = {WAbstractItemView_sortByColumn_args0, NULL};

int luawt_WAbstractItemView_sortByColumn(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_sortByColumn_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::SortOrder order = static_cast<Wt::SortOrder>(luawt_getEnum(
        L,
        luawt_enum_SortOrder_str,
        luawt_enum_SortOrder_val,
        3,
        "Wrong enum type in args of WAbstractItemView.sortByColumn"
    ));
    self->sortByColumn(column, order);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.sortByColumn");
    }
}

static const char* WAbstractItemView_setSortingEnabled_args0[] = {luawt_typeToStr<WAbstractItemView>(), "bool", NULL};
static const char* WAbstractItemView_setSortingEnabled_args1[] = {luawt_typeToStr<WAbstractItemView>(), "int", "bool", NULL};
static const char* const* const luawt_WAbstractItemView_setSortingEnabled_args[] = {WAbstractItemView_setSortingEnabled_args0, WAbstractItemView_setSortingEnabled_args1, NULL};

int luawt_WAbstractItemView_setSortingEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setSortingEnabled_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    bool enabled = lua_toboolean(L, 2);
    self->setSortingEnabled(enabled);
    return 0;
    
    } else if (index == 1) {
    int column = lua_tointeger(L, 2);
    bool enabled = lua_toboolean(L, 3);
    self->setSortingEnabled(column, enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setSortingEnabled");
    }
}

static const char* WAbstractItemView_setDropsEnabled_args0[] = {luawt_typeToStr<WAbstractItemView>(), "bool", NULL};
static const char* const* const luawt_WAbstractItemView_setDropsEnabled_args[] = {WAbstractItemView_setDropsEnabled_args0, NULL};

int luawt_WAbstractItemView_setDropsEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setDropsEnabled_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    bool enable = lua_toboolean(L, 2);
    self->setDropsEnabled(enable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setDropsEnabled");
    }
}

static const char* WAbstractItemView_isColumnResizeEnabled_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_isColumnResizeEnabled_args[] = {WAbstractItemView_isColumnResizeEnabled_args0, NULL};

int luawt_WAbstractItemView_isColumnResizeEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_isColumnResizeEnabled_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    bool l_result = self->isColumnResizeEnabled();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.isColumnResizeEnabled");
    }
}

static const char* WAbstractItemView_selectionBehavior_args0[] = {luawt_typeToStr<WAbstractItemView>(), NULL};
static const char* const* const luawt_WAbstractItemView_selectionBehavior_args[] = {WAbstractItemView_selectionBehavior_args0, NULL};

int luawt_WAbstractItemView_selectionBehavior(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_selectionBehavior_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    Wt::SelectionBehavior l_result = self->selectionBehavior();
    luawt_returnEnum(L, luawt_enum_SelectionBehavior_str, luawt_enum_SelectionBehavior_val, l_result, "SelectionBehavior");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.selectionBehavior");
    }
}

static const char* WAbstractItemView_setColumnResizeEnabled_args0[] = {luawt_typeToStr<WAbstractItemView>(), "bool", NULL};
static const char* const* const luawt_WAbstractItemView_setColumnResizeEnabled_args[] = {WAbstractItemView_setColumnResizeEnabled_args0, NULL};

int luawt_WAbstractItemView_setColumnResizeEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAbstractItemView_setColumnResizeEnabled_args);
    WAbstractItemView* self = luawt_checkFromLua<WAbstractItemView>(L, 1);
    if (index == 0) {
    bool enabled = lua_toboolean(L, 2);
    self->setColumnResizeEnabled(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAbstractItemView.setColumnResizeEnabled");
    }
}


static const luaL_Reg luawt_WAbstractItemView_methods[] = {
    METHOD(WAbstractItemView, setColumnAlignment),
    METHOD(WAbstractItemView, columnAlignment),
    METHOD(WAbstractItemView, setHeaderAlignment),
    METHOD(WAbstractItemView, headerAlignment),
    METHOD(WAbstractItemView, horizontalHeaderAlignment),
    METHOD(WAbstractItemView, verticalHeaderAlignment),
    METHOD(WAbstractItemView, setHeaderWordWrap),
    //METHOD(WAbstractItemView, headerWordWrap),
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
    METHOD(WAbstractItemView, setRowHeight),
    METHOD(WAbstractItemView, rowHeight),
    METHOD(WAbstractItemView, setColumnWidth),
    METHOD(WAbstractItemView, columnWidth),
    METHOD(WAbstractItemView, setColumnHidden),
    METHOD(WAbstractItemView, isColumnHidden),
    METHOD(WAbstractItemView, hideColumn),
    METHOD(WAbstractItemView, showColumn),
    METHOD(WAbstractItemView, setHeaderHeight),
    METHOD(WAbstractItemView, setHeaderHeight),
    METHOD(WAbstractItemView, headerHeight),
    METHOD(WAbstractItemView, pageCount),
    METHOD(WAbstractItemView, pageSize),
    METHOD(WAbstractItemView, currentPage),
    METHOD(WAbstractItemView, setCurrentPage),
    METHOD(WAbstractItemView, setEditTriggers),
    METHOD(WAbstractItemView, editTriggers),
    METHOD(WAbstractItemView, setEditOptions),
    METHOD(WAbstractItemView, editOptions),
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
