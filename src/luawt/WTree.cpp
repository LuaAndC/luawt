#include "boost-xtime.hpp"

#include <Wt/WTree>
#include <Wt/WContainerWidget>
#include <Wt/WTreeNode>

#include "enums.hpp"
#include "globals.hpp"

static const char* WTree_make_args0[] = {NULL};
static const char* WTree_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WTree_make_args[] = {WTree_make_args0, WTree_make_args1, NULL};

int luawt_WTree_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTree_make_args);
    if (index == 0) {
    WTree * l_result = new WTree();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WTree");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTree * l_result = new WTree(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTree.make");
    }
}

static const char* WTree_clearSelection_args0[] = {luawt_typeToStr<WTree>(), NULL};
static const char* const* const luawt_WTree_clearSelection_args[] = {WTree_clearSelection_args0, NULL};

int luawt_WTree_clearSelection(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTree_clearSelection_args);
    WTree* self = luawt_checkFromLua<WTree>(L, 1);
    if (index == 0) {
    self->clearSelection();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTree.clearSelection");
    }
}

static const char* WTree_setSelectionMode_args0[] = {luawt_typeToStr<WTree>(), "enum", NULL};
static const char* const* const luawt_WTree_setSelectionMode_args[] = {WTree_setSelectionMode_args0, NULL};

int luawt_WTree_setSelectionMode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTree_setSelectionMode_args);
    WTree* self = luawt_checkFromLua<WTree>(L, 1);
    if (index == 0) {
    Wt::SelectionMode mode = static_cast<Wt::SelectionMode>(luawt_getEnum(
        L,
        luawt_enum_SelectionMode_str,
        luawt_enum_SelectionMode_val,
        2,
        "Wrong enum type in args of WTree.setSelectionMode"
    ));
    self->setSelectionMode(mode);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTree.setSelectionMode");
    }
}

static const char* WTree_treeRoot_args0[] = {luawt_typeToStr<WTree>(), NULL};
static const char* const* const luawt_WTree_treeRoot_args[] = {WTree_treeRoot_args0, NULL};

int luawt_WTree_treeRoot(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTree_treeRoot_args);
    WTree* self = luawt_checkFromLua<WTree>(L, 1);
    if (index == 0) {
    Wt::WTreeNode * l_result = self->treeRoot();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTree.treeRoot");
    }
}

static const char* WTree_setTreeRoot_args0[] = {luawt_typeToStr<WTree>(), luawt_typeToStr<Wt::WTreeNode>(), NULL};
static const char* const* const luawt_WTree_setTreeRoot_args[] = {WTree_setTreeRoot_args0, NULL};

int luawt_WTree_setTreeRoot(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTree_setTreeRoot_args);
    WTree* self = luawt_checkFromLua<WTree>(L, 1);
    if (index == 0) {
    Wt::WTreeNode* root =
        luawt_checkFromLua<Wt::WTreeNode>(L, 2);
    self->setTreeRoot(root);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTree.setTreeRoot");
    }
}

static const char* WTree_isSelected_args0[] = {luawt_typeToStr<WTree>(), luawt_typeToStr<Wt::WTreeNode>(), NULL};
static const char* const* const luawt_WTree_isSelected_args[] = {WTree_isSelected_args0, NULL};

int luawt_WTree_isSelected(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTree_isSelected_args);
    WTree* self = luawt_checkFromLua<WTree>(L, 1);
    if (index == 0) {
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 2);
    bool l_result = self->isSelected(node);
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTree.isSelected");
    }
}

static const char* WTree_selectionMode_args0[] = {luawt_typeToStr<WTree>(), NULL};
static const char* const* const luawt_WTree_selectionMode_args[] = {WTree_selectionMode_args0, NULL};

int luawt_WTree_selectionMode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTree_selectionMode_args);
    WTree* self = luawt_checkFromLua<WTree>(L, 1);
    if (index == 0) {
    Wt::SelectionMode l_result = self->selectionMode();
    luawt_returnEnum(L, luawt_enum_SelectionMode_str, luawt_enum_SelectionMode_val, l_result, "SelectionMode");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTree.selectionMode");
    }
}

static const char* WTree_select_args0[] = {luawt_typeToStr<WTree>(), luawt_typeToStr<Wt::WTreeNode>(), NULL};
static const char* WTree_select_args1[] = {luawt_typeToStr<WTree>(), luawt_typeToStr<Wt::WTreeNode>(), "bool", NULL};
static const char* const* const luawt_WTree_select_args[] = {WTree_select_args0, WTree_select_args1, NULL};

int luawt_WTree_select(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTree_select_args);
    WTree* self = luawt_checkFromLua<WTree>(L, 1);
    if (index == 0) {
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 2);
    self->select(node);
    return 0;
    
    } else if (index == 1) {
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 2);
    bool selected = lua_toboolean(L, 3);
    self->select(node, selected);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTree.select");
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
