#include "boost-xtime.hpp"

#include <Wt/WString>
#include <Wt/WTree>
#include <Wt/WTreeTable>
#include <Wt/WTreeTableNode>
#include <Wt/WContainerWidget>
#include <Wt/WText>

#include "globals.hpp"

int luawt_WTreeTable_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTreeTable * result = new WTreeTable(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeTable.make: %d", argc);
    }
}

int luawt_WTreeTable_columnCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
        if (argc == 0) {
    int result = self->columnCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeTable.columnCount: %d", argc);
    }
}

int luawt_WTreeTable_treeRoot(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
        if (argc == 0) {
    Wt::WTreeTableNode * result = self->treeRoot();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeTable.treeRoot: %d", argc);
    }
}

int luawt_WTreeTable_setTreeRoot(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
        if (argc == 2) {
    Wt::WTreeTableNode* root =
        luawt_checkFromLua<Wt::WTreeTableNode>(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString header = Wt::WString(raw3);
    self->setTreeRoot(root, header);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeTable.setTreeRoot: %d", argc);
    }
}

int luawt_WTreeTable_tree(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
        if (argc == 0) {
    Wt::WTree * result = self->tree();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeTable.tree: %d", argc);
    }
}

int luawt_WTreeTable_setTree(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
        if (argc == 2) {
    Wt::WTree* tree =
        luawt_checkFromLua<Wt::WTree>(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString header = Wt::WString(raw3);
    self->setTree(tree, header);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeTable.setTree: %d", argc);
    }
}

int luawt_WTreeTable_header(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
        if (argc == 1) {
    int column = lua_tointeger(L, 2);
    Wt::WText * result = self->header(column);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeTable.header: %d", argc);
    }
}


static const luaL_Reg luawt_WTreeTable_methods[] = {
    METHOD(WTreeTable, columnCount),
    METHOD(WTreeTable, setTreeRoot),
    METHOD(WTreeTable, treeRoot),
    METHOD(WTreeTable, setTree),
    METHOD(WTreeTable, tree),
    METHOD(WTreeTable, header),
    {NULL, NULL},
};

void luawt_WTreeTable(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WTreeTable,
        L,
        wrap<luawt_WTreeTable_make>::func,
        0,
        luawt_WTreeTable_methods,
        base
    );
}
