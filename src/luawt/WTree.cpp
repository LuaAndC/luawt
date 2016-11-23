#include "boost-xtime.hpp"

#include <Wt/WTree>
#include <Wt/WContainerWidget>
#include <Wt/WTreeNode>

#include "globals.hpp"

int luawt_WTree_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTree * result = new WTree(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTree.make: %d", argc);
    }
}

int luawt_WTree_clearSelection(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTree* self = luawt_checkFromLua<WTree>(L, 1);
        if (argc == 0) {
    self->clearSelection();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTree.clearSelection: %d", argc);
    }
}

int luawt_WTree_setSelectionMode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTree* self = luawt_checkFromLua<WTree>(L, 1);
        if (argc == 1) {
    Wt::SelectionMode mode = static_cast<Wt::SelectionMode>(lua_tointeger(L, 2));
    self->setSelectionMode(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTree.setSelectionMode: %d", argc);
    }
}

int luawt_WTree_treeRoot(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTree* self = luawt_checkFromLua<WTree>(L, 1);
        if (argc == 0) {
    Wt::WTreeNode * result = self->treeRoot();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTree.treeRoot: %d", argc);
    }
}

int luawt_WTree_setTreeRoot(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTree* self = luawt_checkFromLua<WTree>(L, 1);
        if (argc == 1) {
    Wt::WTreeNode* root =
        luawt_checkFromLua<Wt::WTreeNode>(L, 2);
    self->setTreeRoot(root);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTree.setTreeRoot: %d", argc);
    }
}

int luawt_WTree_isSelected(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTree* self = luawt_checkFromLua<WTree>(L, 1);
        if (argc == 1) {
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 2);
    bool result = self->isSelected(node);
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTree.isSelected: %d", argc);
    }
}

int luawt_WTree_selectionMode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTree* self = luawt_checkFromLua<WTree>(L, 1);
        if (argc == 0) {
    Wt::SelectionMode result = self->selectionMode();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTree.selectionMode: %d", argc);
    }
}

int luawt_WTree_select(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTree* self = luawt_checkFromLua<WTree>(L, 1);
        if (argc == 2) {
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 2);
    bool selected = lua_toboolean(L, 3);
    self->select(node, selected);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTree.select: %d", argc);
    }
}


static const luaL_Reg luawt_WTree_methods[] = {
    METHOD(WTree, setTreeRoot),
    METHOD(WTree, treeRoot),
    METHOD(WTree, setSelectionMode),
    METHOD(WTree, selectionMode),
    METHOD(WTree, select),
    METHOD(WTree, isSelected),
    METHOD(WTree, clearSelection),
    {NULL, NULL},
};

void luawt_WTree(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WTree,
        L,
        wrap<luawt_WTree_make>::func,
        0,
        luawt_WTree_methods,
        base
    );
}
