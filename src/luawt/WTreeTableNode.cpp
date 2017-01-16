#include "boost-xtime.hpp"

#include <Wt/WTreeNode>
#include <Wt/WString>
#include <Wt/WWidget>
#include <Wt/WIconPair>
#include <Wt/WTreeTableNode>
#include <Wt/WTreeTable>

#include "globals.hpp"

static const char* WTreeTableNode_make_args0[] = {"char const *", NULL};
static const char* WTreeTableNode_make_args1[] = {"char const *", luawt_typeToStr<Wt::WIconPair>(), NULL};
static const char* WTreeTableNode_make_args2[] = {"char const *", luawt_typeToStr<Wt::WIconPair>(), luawt_typeToStr<Wt::WTreeTableNode>(), NULL};
static const char* const* const luawt_WTreeTableNode_make_args[] = {WTreeTableNode_make_args0, WTreeTableNode_make_args1, WTreeTableNode_make_args2, NULL};

int luawt_WTreeTableNode_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTableNode_make_args);
    if (index == 0) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString labelText = Wt::WString(raw1);
    WTreeTableNode * result = new WTreeTableNode(labelText);
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WTreeTableNode");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 1) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString labelText = Wt::WString(raw1);
    Wt::WIconPair* labelIcon =
        luawt_checkFromLua<Wt::WIconPair>(L, 2);
    WTreeTableNode * result = new WTreeTableNode(labelText, labelIcon);
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WTreeTableNode");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString labelText = Wt::WString(raw1);
    Wt::WIconPair* labelIcon =
        luawt_checkFromLua<Wt::WIconPair>(L, 2);
    Wt::WTreeTableNode* parentNode =
        luawt_checkFromLua<Wt::WTreeTableNode>(L, 3);
    WTreeTableNode * result = new WTreeTableNode(labelText, labelIcon, parentNode);
    luawt_Application* app = luawt_Application::instance();
    if (!app) {
        delete result;
        throw std::logic_error("No WApplication when creating WTreeTableNode");
    }
    app->root()->addWidget(result);
    
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeTableNode.make");
    }
}

static const char* WTreeTableNode_insertChildNode_args0[] = {luawt_typeToStr<WTreeTableNode>(), "int", luawt_typeToStr<Wt::WTreeNode>(), NULL};
static const char* const* const luawt_WTreeTableNode_insertChildNode_args[] = {WTreeTableNode_insertChildNode_args0, NULL};

int luawt_WTreeTableNode_insertChildNode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTableNode_insertChildNode_args);
    WTreeTableNode* self = luawt_checkFromLua<WTreeTableNode>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 3);
    self->insertChildNode(index, node);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeTableNode.insertChildNode");
    }
}

static const char* WTreeTableNode_table_args0[] = {luawt_typeToStr<WTreeTableNode>(), NULL};
static const char* const* const luawt_WTreeTableNode_table_args[] = {WTreeTableNode_table_args0, NULL};

int luawt_WTreeTableNode_table(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTableNode_table_args);
    WTreeTableNode* self = luawt_checkFromLua<WTreeTableNode>(L, 1);
    if (index == 0) {
    Wt::WTreeTable * result = self->table();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeTableNode.table");
    }
}

static const char* WTreeTableNode_setColumnWidget_args0[] = {luawt_typeToStr<WTreeTableNode>(), "int", luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_WTreeTableNode_setColumnWidget_args[] = {WTreeTableNode_setColumnWidget_args0, NULL};

int luawt_WTreeTableNode_setColumnWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTableNode_setColumnWidget_args);
    WTreeTableNode* self = luawt_checkFromLua<WTreeTableNode>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::WWidget* item =
        luawt_checkFromLua<Wt::WWidget>(L, 3);
    self->setColumnWidget(column, item);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeTableNode.setColumnWidget");
    }
}

static const char* WTreeTableNode_columnWidget_args0[] = {luawt_typeToStr<WTreeTableNode>(), "int", NULL};
static const char* const* const luawt_WTreeTableNode_columnWidget_args[] = {WTreeTableNode_columnWidget_args0, NULL};

int luawt_WTreeTableNode_columnWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeTableNode_columnWidget_args);
    WTreeTableNode* self = luawt_checkFromLua<WTreeTableNode>(L, 1);
    if (index == 0) {
    int column = lua_tointeger(L, 2);
    Wt::WWidget * result = self->columnWidget(column);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeTableNode.columnWidget");
    }
}

ADD_SIGNAL(expanded, WTreeTableNode, Wt::WMouseEvent)
ADD_SIGNAL(collapsed, WTreeTableNode, Wt::WMouseEvent)

static const luaL_Reg luawt_WTreeTableNode_methods[] = {
    METHOD(WTreeTableNode, setColumnWidget),
    METHOD(WTreeTableNode, columnWidget),
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
