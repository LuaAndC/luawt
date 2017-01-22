#include "boost-xtime.hpp"

#include <Wt/WTable>
#include <Wt/WContainerWidget>
#include <Wt/WTableCell>

#include "globals.hpp"

static const char* WTable_make_args0[] = {NULL};
static const char* WTable_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WTable_make_args[] = {WTable_make_args0, WTable_make_args1, NULL};

int luawt_WTable_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_make_args);
    if (index == 0) {
    WTable * result = new WTable();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WTable");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTable * result = new WTable(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTable.make");
    }
}

static const char* WTable_columnCount_args0[] = {luawt_typeToStr<WTable>(), NULL};
static const char* const* const luawt_WTable_columnCount_args[] = {WTable_columnCount_args0, NULL};

int luawt_WTable_columnCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_columnCount_args);
    WTable* self = luawt_checkFromLua<WTable>(L, 1);
    if (index == 0) {
    int result = self->columnCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTable.columnCount");
    }
}

static const char* WTable_setHeaderCount_args0[] = {luawt_typeToStr<WTable>(), "int", NULL};
static const char* WTable_setHeaderCount_args1[] = {luawt_typeToStr<WTable>(), "int", "int", NULL};
static const char* const* const luawt_WTable_setHeaderCount_args[] = {WTable_setHeaderCount_args0, WTable_setHeaderCount_args1, NULL};

int luawt_WTable_setHeaderCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_setHeaderCount_args);
    WTable* self = luawt_checkFromLua<WTable>(L, 1);
    if (index == 0) {
    int count = lua_tointeger(L, 2);
    self->setHeaderCount(count);
    return 0;
    
    } else if (index == 1) {
    int count = lua_tointeger(L, 2);
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 3));
    self->setHeaderCount(count, orientation);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTable.setHeaderCount");
    }
}

static const char* WTable_elementAt_args0[] = {luawt_typeToStr<WTable>(), "int", "int", NULL};
static const char* const* const luawt_WTable_elementAt_args[] = {WTable_elementAt_args0, NULL};

int luawt_WTable_elementAt(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_elementAt_args);
    WTable* self = luawt_checkFromLua<WTable>(L, 1);
    if (index == 0) {
    int row = lua_tointeger(L, 2);
    int column = lua_tointeger(L, 3);
    Wt::WTableCell * result = self->elementAt(row, column);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTable.elementAt");
    }
}

static const char* WTable_moveRow_args0[] = {luawt_typeToStr<WTable>(), "int", "int", NULL};
static const char* const* const luawt_WTable_moveRow_args[] = {WTable_moveRow_args0, NULL};

int luawt_WTable_moveRow(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_moveRow_args);
    WTable* self = luawt_checkFromLua<WTable>(L, 1);
    if (index == 0) {
    int from = lua_tointeger(L, 2);
    int to = lua_tointeger(L, 3);
    self->moveRow(from, to);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTable.moveRow");
    }
}

static const char* WTable_headerCount_args0[] = {luawt_typeToStr<WTable>(), NULL};
static const char* WTable_headerCount_args1[] = {luawt_typeToStr<WTable>(), "int", NULL};
static const char* const* const luawt_WTable_headerCount_args[] = {WTable_headerCount_args0, WTable_headerCount_args1, NULL};

int luawt_WTable_headerCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_headerCount_args);
    WTable* self = luawt_checkFromLua<WTable>(L, 1);
    if (index == 0) {
    int result = self->headerCount();
    lua_pushinteger(L, result);
    return 1;

    } else if (index == 1) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 2));
    int result = self->headerCount(orientation);
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTable.headerCount");
    }
}

static const char* WTable_clear_args0[] = {luawt_typeToStr<WTable>(), NULL};
static const char* const* const luawt_WTable_clear_args[] = {WTable_clear_args0, NULL};

int luawt_WTable_clear(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_clear_args);
    WTable* self = luawt_checkFromLua<WTable>(L, 1);
    if (index == 0) {
    self->clear();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTable.clear");
    }
}

static const char* WTable_moveColumn_args0[] = {luawt_typeToStr<WTable>(), "int", "int", NULL};
static const char* const* const luawt_WTable_moveColumn_args[] = {WTable_moveColumn_args0, NULL};

int luawt_WTable_moveColumn(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_moveColumn_args);
    WTable* self = luawt_checkFromLua<WTable>(L, 1);
    if (index == 0) {
    int from = lua_tointeger(L, 2);
    int to = lua_tointeger(L, 3);
    self->moveColumn(from, to);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTable.moveColumn");
    }
}

static const char* WTable_rowCount_args0[] = {luawt_typeToStr<WTable>(), NULL};
static const char* const* const luawt_WTable_rowCount_args[] = {WTable_rowCount_args0, NULL};

int luawt_WTable_rowCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_rowCount_args);
    WTable* self = luawt_checkFromLua<WTable>(L, 1);
    if (index == 0) {
    int result = self->rowCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTable.rowCount");
    }
}

static const char* WTable_deleteRow_args0[] = {luawt_typeToStr<WTable>(), "int", NULL};
static const char* const* const luawt_WTable_deleteRow_args[] = {WTable_deleteRow_args0, NULL};

int luawt_WTable_deleteRow(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_deleteRow_args);
    WTable* self = luawt_checkFromLua<WTable>(L, 1);
    if (index == 0) {
    int row = lua_tointeger(L, 2);
    self->deleteRow(row);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTable.deleteRow");
    }
}

static const char* WTable_removeCell_args0[] = {luawt_typeToStr<WTable>(), luawt_typeToStr<Wt::WTableCell>(), NULL};
static const char* WTable_removeCell_args1[] = {luawt_typeToStr<WTable>(), "int", "int", NULL};
static const char* const* const luawt_WTable_removeCell_args[] = {WTable_removeCell_args0, WTable_removeCell_args1, NULL};

int luawt_WTable_removeCell(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_removeCell_args);
    WTable* self = luawt_checkFromLua<WTable>(L, 1);
    if (index == 0) {
    Wt::WTableCell* item =
        luawt_checkFromLua<Wt::WTableCell>(L, 2);
    self->removeCell(item);
    return 0;
    
    } else if (index == 1) {
    int row = lua_tointeger(L, 2);
    int column = lua_tointeger(L, 3);
    self->removeCell(row, column);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTable.removeCell");
    }
}

static const char* WTable_deleteColumn_args0[] = {luawt_typeToStr<WTable>(), "int", NULL};
static const char* const* const luawt_WTable_deleteColumn_args[] = {WTable_deleteColumn_args0, NULL};

int luawt_WTable_deleteColumn(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTable_deleteColumn_args);
    WTable* self = luawt_checkFromLua<WTable>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    self->deleteColumn(column);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTable.deleteColumn");
    }
}

ADD_SIGNAL(keyWentDown, WTable, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WTable, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WTable, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WTable, Wt::NoClass)
ADD_SIGNAL(escapePressed, WTable, Wt::NoClass)
ADD_SIGNAL(clicked, WTable, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WTable, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WTable, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WTable, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WTable, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WTable, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WTable, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WTable, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WTable, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WTable, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WTable, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WTable, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WTable, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WTable, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WTable, Wt::WGestureEvent)

static const luaL_Reg luawt_WTable_methods[] = {
    METHOD(WTable, elementAt),
    METHOD(WTable, removeCell),
    METHOD(WTable, removeCell),
    METHOD(WTable, deleteRow),
    METHOD(WTable, deleteColumn),
    METHOD(WTable, clear),
    METHOD(WTable, rowCount),
    METHOD(WTable, columnCount),
    METHOD(WTable, setHeaderCount),
    METHOD(WTable, headerCount),
    METHOD(WTable, moveRow),
    METHOD(WTable, moveColumn),
    METHOD(WTable, keyWentDown),
    METHOD(WTable, keyPressed),
    METHOD(WTable, keyWentUp),
    METHOD(WTable, enterPressed),
    METHOD(WTable, escapePressed),
    METHOD(WTable, clicked),
    METHOD(WTable, doubleClicked),
    METHOD(WTable, mouseWentDown),
    METHOD(WTable, mouseWentUp),
    METHOD(WTable, mouseWentOut),
    METHOD(WTable, mouseWentOver),
    METHOD(WTable, mouseMoved),
    METHOD(WTable, mouseDragged),
    METHOD(WTable, mouseWheel),
    METHOD(WTable, touchStarted),
    METHOD(WTable, touchEnded),
    METHOD(WTable, touchMoved),
    METHOD(WTable, gestureStarted),
    METHOD(WTable, gestureChanged),
    METHOD(WTable, gestureEnded),
    {NULL, NULL},
};

void luawt_WTable(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WTable,
        L,
        wrap<luawt_WTable_make>::func,
        0,
        luawt_WTable_methods,
        base
    );
}
