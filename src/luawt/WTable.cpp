#include "boost-xtime.hpp"

#include <Wt/WTable>
#include <Wt/WContainerWidget>
#include <Wt/WTableCell>

#include "globals.hpp"

int luawt_WTable_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTable * result = new WTable(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTable.make: %d", argc);
    }
}

int luawt_WTable_columnCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTable* self = luawt_checkFromLua<WTable>(L, 1);
        if (argc == 0) {
    int result = self->columnCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTable.columnCount: %d", argc);
    }
}

int luawt_WTable_setHeaderCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTable* self = luawt_checkFromLua<WTable>(L, 1);
        if (argc == 2) {
    int count = lua_tointeger(L, 2);
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 3));
    self->setHeaderCount(count, orientation);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTable.setHeaderCount: %d", argc);
    }
}

int luawt_WTable_elementAt(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTable* self = luawt_checkFromLua<WTable>(L, 1);
        if (argc == 2) {
    int row = lua_tointeger(L, 2);
    int column = lua_tointeger(L, 3);
    Wt::WTableCell * result = self->elementAt(row, column);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTable.elementAt: %d", argc);
    }
}

int luawt_WTable_moveRow(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTable* self = luawt_checkFromLua<WTable>(L, 1);
        if (argc == 2) {
    int from = lua_tointeger(L, 2);
    int to = lua_tointeger(L, 3);
    self->moveRow(from, to);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTable.moveRow: %d", argc);
    }
}

int luawt_WTable_headerCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTable* self = luawt_checkFromLua<WTable>(L, 1);
        if (argc == 1) {
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 2));
    int result = self->headerCount(orientation);
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTable.headerCount: %d", argc);
    }
}

int luawt_WTable_clear(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTable* self = luawt_checkFromLua<WTable>(L, 1);
        if (argc == 0) {
    self->clear();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTable.clear: %d", argc);
    }
}

int luawt_WTable_moveColumn(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTable* self = luawt_checkFromLua<WTable>(L, 1);
        if (argc == 2) {
    int from = lua_tointeger(L, 2);
    int to = lua_tointeger(L, 3);
    self->moveColumn(from, to);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTable.moveColumn: %d", argc);
    }
}

int luawt_WTable_rowCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTable* self = luawt_checkFromLua<WTable>(L, 1);
        if (argc == 0) {
    int result = self->rowCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTable.rowCount: %d", argc);
    }
}

int luawt_WTable_deleteRow(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTable* self = luawt_checkFromLua<WTable>(L, 1);
        if (argc == 1) {
    int row = lua_tointeger(L, 2);
    self->deleteRow(row);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTable.deleteRow: %d", argc);
    }
}

int luawt_WTable_removeCell(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTable* self = luawt_checkFromLua<WTable>(L, 1);
        if (argc == 1) {
    Wt::WTableCell* item =
        luawt_checkFromLua<Wt::WTableCell>(L, 2);
    self->removeCell(item);
    return 0;
    
    } else     if (argc == 2) {
    int row = lua_tointeger(L, 2);
    int column = lua_tointeger(L, 3);
    self->removeCell(row, column);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTable.removeCell: %d", argc);
    }
}

int luawt_WTable_deleteColumn(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTable* self = luawt_checkFromLua<WTable>(L, 1);
        if (argc == 1) {
    int column = lua_tointeger(L, 2);
    self->deleteColumn(column);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTable.deleteColumn: %d", argc);
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
