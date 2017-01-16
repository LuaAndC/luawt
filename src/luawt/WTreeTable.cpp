#include "boost-xtime.hpp"

#include <Wt/WString>
#include <Wt/WWidget>
#include <Wt/WTree>
#include <Wt/WTreeTable>
#include <Wt/WTreeTableNode>
#include <Wt/WContainerWidget>
#include <Wt/WText>

#include "globals.hpp"

static const char* WTreeTable_make_args0[] = {NULL};
static const char* WTreeTable_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WTreeTable_make_args[] = {WTreeTable_make_args0, WTreeTable_make_args1, NULL};

int luawt_WTreeTable_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTable_make_args);
    if (index == 0) {
    WTreeTable * result = new WTreeTable();
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WTreeTable");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WTreeTable * result = new WTreeTable(parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeTable.make");
    }
}

static const char* WTreeTable_columnCount_args0[] = {luawt_typeToStr<WTreeTable>(), NULL};
static const char* const* const luawt_WTreeTable_columnCount_args[] = {WTreeTable_columnCount_args0, NULL};

int luawt_WTreeTable_columnCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTable_columnCount_args);
    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
    if (index == 0) {
    int result = self->columnCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeTable.columnCount");
    }
}

static const char* WTreeTable_treeRoot_args0[] = {luawt_typeToStr<WTreeTable>(), NULL};
static const char* const* const luawt_WTreeTable_treeRoot_args[] = {WTreeTable_treeRoot_args0, NULL};

int luawt_WTreeTable_treeRoot(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTable_treeRoot_args);
    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
    if (index == 0) {
    Wt::WTreeTableNode * result = self->treeRoot();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeTable.treeRoot");
    }
}

static const char* WTreeTable_setTreeRoot_args0[] = {luawt_typeToStr<WTreeTable>(), luawt_typeToStr<Wt::WTreeTableNode>(), "char const *", NULL};
static const char* const* const luawt_WTreeTable_setTreeRoot_args[] = {WTreeTable_setTreeRoot_args0, NULL};

int luawt_WTreeTable_setTreeRoot(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTable_setTreeRoot_args);
    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
    if (index == 0) {
    Wt::WTreeTableNode* root =
        luawt_checkFromLua<Wt::WTreeTableNode>(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString header = Wt::WString(raw3);
    self->setTreeRoot(root, header);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeTable.setTreeRoot");
    }
}

static const char* WTreeTable_tree_args0[] = {luawt_typeToStr<WTreeTable>(), NULL};
static const char* const* const luawt_WTreeTable_tree_args[] = {WTreeTable_tree_args0, NULL};

int luawt_WTreeTable_tree(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTable_tree_args);
    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
    if (index == 0) {
    Wt::WTree * result = self->tree();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeTable.tree");
    }
}

static const char* WTreeTable_setTree_args0[] = {luawt_typeToStr<WTreeTable>(), luawt_typeToStr<Wt::WTree>(), "char const *", NULL};
static const char* const* const luawt_WTreeTable_setTree_args[] = {WTreeTable_setTree_args0, NULL};

int luawt_WTreeTable_setTree(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTable_setTree_args);
    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
    if (index == 0) {
    Wt::WTree* tree =
        luawt_checkFromLua<Wt::WTree>(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString header = Wt::WString(raw3);
    self->setTree(tree, header);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeTable.setTree");
    }
}

static const char* WTreeTable_header_args0[] = {luawt_typeToStr<WTreeTable>(), "int", NULL};
static const char* const* const luawt_WTreeTable_header_args[] = {WTreeTable_header_args0, NULL};

int luawt_WTreeTable_header(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTable_header_args);
    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::WText * result = self->header(column);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeTable.header");
    }
}

static const char* WTreeTable_headerWidget_args0[] = {luawt_typeToStr<WTreeTable>(), NULL};
static const char* const* const luawt_WTreeTable_headerWidget_args[] = {WTreeTable_headerWidget_args0, NULL};

int luawt_WTreeTable_headerWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTable_headerWidget_args);
    WTreeTable* self = luawt_checkFromLua<WTreeTable>(L, 1);
    if (index == 0) {
    Wt::WWidget * result = self->headerWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeTable.headerWidget");
    }
}


static const luaL_Reg luawt_WTreeTable_methods[] = {
    METHOD(WTreeTable, columnCount),
    METHOD(WTreeTable, setTreeRoot),
    METHOD(WTreeTable, treeRoot),
    METHOD(WTreeTable, setTree),
    METHOD(WTreeTable, tree),
    METHOD(WTreeTable, header),
    METHOD(WTreeTable, headerWidget),
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
