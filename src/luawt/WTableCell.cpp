#include "boost-xtime.hpp"

#include <Wt/WTable>
#include <Wt/WTableCell>

#include "globals.hpp"

int luawt_WTableCell_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 0) {
    WTableCell * result = new WTableCell();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTableCell.make: %d", argc);
    }
}

int luawt_WTableCell_rowSpan(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
        if (argc == 0) {
    int result = self->rowSpan();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTableCell.rowSpan: %d", argc);
    }
}

int luawt_WTableCell_column(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
        if (argc == 0) {
    int result = self->column();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTableCell.column: %d", argc);
    }
}

int luawt_WTableCell_setRowSpan(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
        if (argc == 1) {
    int rowSpan = lua_tointeger(L, 2);
    self->setRowSpan(rowSpan);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTableCell.setRowSpan: %d", argc);
    }
}

int luawt_WTableCell_setColumnSpan(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
        if (argc == 1) {
    int colSpan = lua_tointeger(L, 2);
    self->setColumnSpan(colSpan);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTableCell.setColumnSpan: %d", argc);
    }
}

int luawt_WTableCell_columnSpan(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
        if (argc == 0) {
    int result = self->columnSpan();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTableCell.columnSpan: %d", argc);
    }
}

int luawt_WTableCell_isVisible(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
        if (argc == 0) {
    bool result = self->isVisible();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTableCell.isVisible: %d", argc);
    }
}

int luawt_WTableCell_table(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
        if (argc == 0) {
    Wt::WTable * result = self->table();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTableCell.table: %d", argc);
    }
}

int luawt_WTableCell_row(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
        if (argc == 0) {
    int result = self->row();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTableCell.row: %d", argc);
    }
}

ADD_SIGNAL(scrolled, WTableCell, Wt::WScrollEvent)
ADD_SIGNAL(keyWentDown, WTableCell, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WTableCell, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WTableCell, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WTableCell, Wt::NoClass)
ADD_SIGNAL(escapePressed, WTableCell, Wt::NoClass)
ADD_SIGNAL(clicked, WTableCell, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WTableCell, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WTableCell, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WTableCell, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WTableCell, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WTableCell, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WTableCell, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WTableCell, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WTableCell, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WTableCell, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WTableCell, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WTableCell, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WTableCell, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WTableCell, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WTableCell, Wt::WGestureEvent)

static const luaL_Reg luawt_WTableCell_methods[] = {
    METHOD(WTableCell, setRowSpan),
    METHOD(WTableCell, rowSpan),
    METHOD(WTableCell, setColumnSpan),
    METHOD(WTableCell, columnSpan),
    METHOD(WTableCell, row),
    METHOD(WTableCell, column),
    METHOD(WTableCell, table),
    METHOD(WTableCell, isVisible),
    METHOD(WTableCell, scrolled),
    METHOD(WTableCell, keyWentDown),
    METHOD(WTableCell, keyPressed),
    METHOD(WTableCell, keyWentUp),
    METHOD(WTableCell, enterPressed),
    METHOD(WTableCell, escapePressed),
    METHOD(WTableCell, clicked),
    METHOD(WTableCell, doubleClicked),
    METHOD(WTableCell, mouseWentDown),
    METHOD(WTableCell, mouseWentUp),
    METHOD(WTableCell, mouseWentOut),
    METHOD(WTableCell, mouseWentOver),
    METHOD(WTableCell, mouseMoved),
    METHOD(WTableCell, mouseDragged),
    METHOD(WTableCell, mouseWheel),
    METHOD(WTableCell, touchStarted),
    METHOD(WTableCell, touchEnded),
    METHOD(WTableCell, touchMoved),
    METHOD(WTableCell, gestureStarted),
    METHOD(WTableCell, gestureChanged),
    METHOD(WTableCell, gestureEnded),
    {NULL, NULL},
};

void luawt_WTableCell(lua_State* L) {
    const char* base = luawt_typeToStr<WContainerWidget>();
    assert(base);
    DECLARE_CLASS(
        WTableCell,
        L,
        wrap<luawt_WTableCell_make>::func,
        0,
        luawt_WTableCell_methods,
        base
    );
}
