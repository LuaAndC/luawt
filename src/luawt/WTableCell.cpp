#include "boost-xtime.hpp"

#include <Wt/WTable>
#include <Wt/WTableCell>

#include "enums.hpp"
#include "globals.hpp"

static const char* WTableCell_rowSpan_args0[] = {luawt_typeToStr<WTableCell>(), NULL};
static const char* const* const luawt_WTableCell_rowSpan_args[] = {WTableCell_rowSpan_args0, NULL};

int luawt_WTableCell_rowSpan(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableCell_rowSpan_args);
    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
    if (index == 0) {
        int l_result = self->rowSpan();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTableCell.rowSpan");
    }
}

static const char* WTableCell_column_args0[] = {luawt_typeToStr<WTableCell>(), NULL};
static const char* const* const luawt_WTableCell_column_args[] = {WTableCell_column_args0, NULL};

int luawt_WTableCell_column(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableCell_column_args);
    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
    if (index == 0) {
        int l_result = self->column();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTableCell.column");
    }
}

static const char* WTableCell_setRowSpan_args0[] = {luawt_typeToStr<WTableCell>(), "int", NULL};
static const char* const* const luawt_WTableCell_setRowSpan_args[] = {WTableCell_setRowSpan_args0, NULL};

int luawt_WTableCell_setRowSpan(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableCell_setRowSpan_args);
    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
    if (index == 0) {
        int rowSpan = lua_tointeger(L, 2);
        self->setRowSpan(rowSpan);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTableCell.setRowSpan");
    }
}

static const char* WTableCell_setColumnSpan_args0[] = {luawt_typeToStr<WTableCell>(), "int", NULL};
static const char* const* const luawt_WTableCell_setColumnSpan_args[] = {WTableCell_setColumnSpan_args0, NULL};

int luawt_WTableCell_setColumnSpan(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableCell_setColumnSpan_args);
    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
    if (index == 0) {
        int colSpan = lua_tointeger(L, 2);
        self->setColumnSpan(colSpan);
        return 0;
    } else {
        return luaL_error(L, "Wrong arguments for WTableCell.setColumnSpan");
    }
}

static const char* WTableCell_columnSpan_args0[] = {luawt_typeToStr<WTableCell>(), NULL};
static const char* const* const luawt_WTableCell_columnSpan_args[] = {WTableCell_columnSpan_args0, NULL};

int luawt_WTableCell_columnSpan(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableCell_columnSpan_args);
    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
    if (index == 0) {
        int l_result = self->columnSpan();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTableCell.columnSpan");
    }
}

static const char* WTableCell_table_args0[] = {luawt_typeToStr<WTableCell>(), NULL};
static const char* const* const luawt_WTableCell_table_args[] = {WTableCell_table_args0, NULL};

int luawt_WTableCell_table(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableCell_table_args);
    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
    if (index == 0) {
        Wt::WTable* l_result = self->table();
        luawt_toLua(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTableCell.table");
    }
}

static const char* WTableCell_row_args0[] = {luawt_typeToStr<WTableCell>(), NULL};
static const char* const* const luawt_WTableCell_row_args[] = {WTableCell_row_args0, NULL};

int luawt_WTableCell_row(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTableCell_row_args);
    WTableCell* self = luawt_checkFromLua<WTableCell>(L, 1);
    if (index == 0) {
        int l_result = self->row();
        lua_pushinteger(L, l_result);
        return 1;
    } else {
        return luaL_error(L, "Wrong arguments for WTableCell.row");
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
        0,
        0,
        luawt_WTableCell_methods,
        base
    );
}
