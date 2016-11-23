#include "boost-xtime.hpp"

#include <Wt/WTreeTableNode>
#include <Wt/WString>
#include <Wt/WIconPair>
#include <Wt/WTreeNode>
#include <Wt/WTreeTable>

#include "globals.hpp"

int luawt_WTreeTableNode_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString labelText = Wt::WString(raw1);
    Wt::WIconPair* labelIcon =
        luawt_checkFromLua<Wt::WIconPair>(L, 2);
    Wt::WTreeTableNode* parentNode =
        luawt_checkFromLua<Wt::WTreeTableNode>(L, 3);
    WTreeTableNode * result = new WTreeTableNode(labelText, labelIcon, parentNode);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeTableNode.make: %d", argc);
    }
}

int luawt_WTreeTableNode_insertChildNode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeTableNode* self = luawt_checkFromLua<WTreeTableNode>(L, 1);
        if (argc == 2) {
    int index = lua_tointeger(L, 2);
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 3);
    self->insertChildNode(index, node);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeTableNode.insertChildNode: %d", argc);
    }
}

int luawt_WTreeTableNode_table(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeTableNode* self = luawt_checkFromLua<WTreeTableNode>(L, 1);
        if (argc == 0) {
    Wt::WTreeTable * result = self->table();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeTableNode.table: %d", argc);
    }
}

ADD_SIGNAL(expanded, WTreeTableNode, Wt::WMouseEvent)
ADD_SIGNAL(collapsed, WTreeTableNode, Wt::WMouseEvent)

static const luaL_Reg luawt_WTreeTableNode_methods[] = {
    METHOD(WTreeTableNode, table),
    METHOD(WTreeTableNode, insertChildNode),
    METHOD(WTreeTableNode, expanded),
    METHOD(WTreeTableNode, collapsed),
    {NULL, NULL},
};

void luawt_WTreeTableNode(lua_State* L) {
    const char* base = luawt_typeToStr<WTreeNode>();
    assert(base);
    DECLARE_CLASS(
        WTreeTableNode,
        L,
        wrap<luawt_WTreeTableNode_make>::func,
        0,
        luawt_WTreeTableNode_methods,
        base
    );
}
