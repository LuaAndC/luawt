#include "boost-xtime.hpp"

#include <Wt/WTree>
#include <Wt/WString>
#include <Wt/WIconPair>
#include <Wt/WTreeNode>
#include <Wt/WText>

#include "globals.hpp"

static const char* WTreeNode_make_args0[] = {"char const *", NULL};
static const char* WTreeNode_make_args1[] = {"char const *", luawt_typeToStr<Wt::WIconPair>(), NULL};
static const char* WTreeNode_make_args2[] = {"char const *", luawt_typeToStr<Wt::WIconPair>(), luawt_typeToStr<Wt::WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_make_args[] = {WTreeNode_make_args0, WTreeNode_make_args1, WTreeNode_make_args2, NULL};

int luawt_WTreeNode_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_make_args);
    if (index == 0) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString labelText = Wt::WString(raw1);
    WTreeNode * l_result = new WTreeNode(labelText);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WTreeNode");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString labelText = Wt::WString(raw1);
    Wt::WIconPair* labelIcon =
        luawt_checkFromLua<Wt::WIconPair>(L, 2);
    WTreeNode * l_result = new WTreeNode(labelText, labelIcon);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WTreeNode");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString labelText = Wt::WString(raw1);
    Wt::WIconPair* labelIcon =
        luawt_checkFromLua<Wt::WIconPair>(L, 2);
    Wt::WTreeNode* parentNode =
        luawt_checkFromLua<Wt::WTreeNode>(L, 3);
    WTreeNode * l_result = new WTreeNode(labelText, labelIcon, parentNode);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WTreeNode");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.make");
    }
}

static const char* WTreeNode_setChildrenDecorated_args0[] = {luawt_typeToStr<WTreeNode>(), "bool", NULL};
static const char* const* const luawt_WTreeNode_setChildrenDecorated_args[] = {WTreeNode_setChildrenDecorated_args0, NULL};

int luawt_WTreeNode_setChildrenDecorated(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_setChildrenDecorated_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    bool decorated = lua_toboolean(L, 2);
    self->setChildrenDecorated(decorated);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.setChildrenDecorated");
    }
}

static const char* WTreeNode_isSelectable_args0[] = {luawt_typeToStr<WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_isSelectable_args[] = {WTreeNode_isSelectable_args0, NULL};

int luawt_WTreeNode_isSelectable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_isSelectable_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    bool l_result = self->isSelectable();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.isSelectable");
    }
}

static const char* WTreeNode_addChildNode_args0[] = {luawt_typeToStr<WTreeNode>(), luawt_typeToStr<Wt::WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_addChildNode_args[] = {WTreeNode_addChildNode_args0, NULL};

int luawt_WTreeNode_addChildNode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_addChildNode_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 2);
    self->addChildNode(node);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.addChildNode");
    }
}

static const char* WTreeNode_setChildCountPolicy_args0[] = {luawt_typeToStr<WTreeNode>(), "int", NULL};
static const char* const* const luawt_WTreeNode_setChildCountPolicy_args[] = {WTreeNode_setChildCountPolicy_args0, NULL};

int luawt_WTreeNode_setChildCountPolicy(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_setChildCountPolicy_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    Wt::WTreeNode::ChildCountPolicy policy = static_cast<Wt::WTreeNode::ChildCountPolicy>(lua_tointeger(L, 2));
    self->setChildCountPolicy(policy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.setChildCountPolicy");
    }
}

static const char* WTreeNode_hasParent_args0[] = {luawt_typeToStr<WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_hasParent_args[] = {WTreeNode_hasParent_args0, NULL};

int luawt_WTreeNode_hasParent(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_hasParent_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    bool l_result = self->hasParent();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.hasParent");
    }
}

static const char* WTreeNode_label_args0[] = {luawt_typeToStr<WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_label_args[] = {WTreeNode_label_args0, NULL};

int luawt_WTreeNode_label(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_label_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    Wt::WText * l_result = self->label();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.label");
    }
}

static const char* WTreeNode_removeChildNode_args0[] = {luawt_typeToStr<WTreeNode>(), luawt_typeToStr<Wt::WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_removeChildNode_args[] = {WTreeNode_removeChildNode_args0, NULL};

int luawt_WTreeNode_removeChildNode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_removeChildNode_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 2);
    self->removeChildNode(node);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.removeChildNode");
    }
}

static const char* WTreeNode_setNodeVisible_args0[] = {luawt_typeToStr<WTreeNode>(), "bool", NULL};
static const char* const* const luawt_WTreeNode_setNodeVisible_args[] = {WTreeNode_setNodeVisible_args0, NULL};

int luawt_WTreeNode_setNodeVisible(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_setNodeVisible_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    bool visible = lua_toboolean(L, 2);
    self->setNodeVisible(visible);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.setNodeVisible");
    }
}

static const char* WTreeNode_childCountPolicy_args0[] = {luawt_typeToStr<WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_childCountPolicy_args[] = {WTreeNode_childCountPolicy_args0, NULL};

int luawt_WTreeNode_childCountPolicy(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_childCountPolicy_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    Wt::WTreeNode::ChildCountPolicy l_result = self->childCountPolicy();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.childCountPolicy");
    }
}

static const char* WTreeNode_insertChildNode_args0[] = {luawt_typeToStr<WTreeNode>(), "int", luawt_typeToStr<Wt::WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_insertChildNode_args[] = {WTreeNode_insertChildNode_args0, NULL};

int luawt_WTreeNode_insertChildNode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_insertChildNode_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    int index = lua_tointeger(L, 2);
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 3);
    self->insertChildNode(index, node);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.insertChildNode");
    }
}

static const char* WTreeNode_setSelectable_args0[] = {luawt_typeToStr<WTreeNode>(), "bool", NULL};
static const char* const* const luawt_WTreeNode_setSelectable_args[] = {WTreeNode_setSelectable_args0, NULL};

int luawt_WTreeNode_setSelectable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_setSelectable_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    bool selectable = lua_toboolean(L, 2);
    self->setSelectable(selectable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.setSelectable");
    }
}

static const char* WTreeNode_collapse_args0[] = {luawt_typeToStr<WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_collapse_args[] = {WTreeNode_collapse_args0, NULL};

int luawt_WTreeNode_collapse(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_collapse_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    self->collapse();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.collapse");
    }
}

static const char* WTreeNode_labelIcon_args0[] = {luawt_typeToStr<WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_labelIcon_args[] = {WTreeNode_labelIcon_args0, NULL};

int luawt_WTreeNode_labelIcon(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_labelIcon_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    Wt::WIconPair * l_result = self->labelIcon();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.labelIcon");
    }
}

static const char* WTreeNode_displayedChildCount_args0[] = {luawt_typeToStr<WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_displayedChildCount_args[] = {WTreeNode_displayedChildCount_args0, NULL};

int luawt_WTreeNode_displayedChildCount(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_displayedChildCount_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    int l_result = self->displayedChildCount();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.displayedChildCount");
    }
}

static const char* WTreeNode_setInteractive_args0[] = {luawt_typeToStr<WTreeNode>(), "bool", NULL};
static const char* const* const luawt_WTreeNode_setInteractive_args[] = {WTreeNode_setInteractive_args0, NULL};

int luawt_WTreeNode_setInteractive(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_setInteractive_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    bool interactive = lua_toboolean(L, 2);
    self->setInteractive(interactive);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.setInteractive");
    }
}

static const char* WTreeNode_expand_args0[] = {luawt_typeToStr<WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_expand_args[] = {WTreeNode_expand_args0, NULL};

int luawt_WTreeNode_expand(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_expand_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    self->expand();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.expand");
    }
}

static const char* WTreeNode_setLoadPolicy_args0[] = {luawt_typeToStr<WTreeNode>(), "int", NULL};
static const char* const* const luawt_WTreeNode_setLoadPolicy_args[] = {WTreeNode_setLoadPolicy_args0, NULL};

int luawt_WTreeNode_setLoadPolicy(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_setLoadPolicy_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    Wt::WTreeNode::LoadPolicy loadPolicy = static_cast<Wt::WTreeNode::LoadPolicy>(lua_tointeger(L, 2));
    self->setLoadPolicy(loadPolicy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.setLoadPolicy");
    }
}

static const char* WTreeNode_isExpanded_args0[] = {luawt_typeToStr<WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_isExpanded_args[] = {WTreeNode_isExpanded_args0, NULL};

int luawt_WTreeNode_isExpanded(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_isExpanded_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    bool l_result = self->isExpanded();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.isExpanded");
    }
}

static const char* WTreeNode_setImagePack_args0[] = {luawt_typeToStr<WTreeNode>(), "char const *", NULL};
static const char* const* const luawt_WTreeNode_setImagePack_args[] = {WTreeNode_setImagePack_args0, NULL};

int luawt_WTreeNode_setImagePack(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_setImagePack_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    self->setImagePack(url);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.setImagePack");
    }
}

static const char* WTreeNode_tree_args0[] = {luawt_typeToStr<WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_tree_args[] = {WTreeNode_tree_args0, NULL};

int luawt_WTreeNode_tree(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_tree_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    Wt::WTree * l_result = self->tree();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.tree");
    }
}

static const char* WTreeNode_parentNode_args0[] = {luawt_typeToStr<WTreeNode>(), NULL};
static const char* const* const luawt_WTreeNode_parentNode_args[] = {WTreeNode_parentNode_args0, NULL};

int luawt_WTreeNode_parentNode(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_parentNode_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    Wt::WTreeNode * l_result = self->parentNode();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.parentNode");
    }
}

static const char* WTreeNode_setLabelIcon_args0[] = {luawt_typeToStr<WTreeNode>(), luawt_typeToStr<Wt::WIconPair>(), NULL};
static const char* const* const luawt_WTreeNode_setLabelIcon_args[] = {WTreeNode_setLabelIcon_args0, NULL};

int luawt_WTreeNode_setLabelIcon(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WTreeNode_setLabelIcon_args);
    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
    if (index == 0) {
    Wt::WIconPair* labelIcon =
        luawt_checkFromLua<Wt::WIconPair>(L, 2);
    self->setLabelIcon(labelIcon);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WTreeNode.setLabelIcon");
    }
}

ADD_SIGNAL(expanded, WTreeNode, Wt::WMouseEvent)
ADD_SIGNAL(collapsed, WTreeNode, Wt::WMouseEvent)

static const luaL_Reg luawt_WTreeNode_methods[] = {
    METHOD(WTreeNode, tree),
    METHOD(WTreeNode, label),
    METHOD(WTreeNode, labelIcon),
    METHOD(WTreeNode, setLabelIcon),
    METHOD(WTreeNode, insertChildNode),
    METHOD(WTreeNode, addChildNode),
    METHOD(WTreeNode, removeChildNode),
    METHOD(WTreeNode, displayedChildCount),
    METHOD(WTreeNode, setChildCountPolicy),
    METHOD(WTreeNode, childCountPolicy),
    METHOD(WTreeNode, setImagePack),
    METHOD(WTreeNode, setLoadPolicy),
    METHOD(WTreeNode, isExpanded),
    METHOD(WTreeNode, setSelectable),
    METHOD(WTreeNode, isSelectable),
    METHOD(WTreeNode, parentNode),
    METHOD(WTreeNode, setNodeVisible),
    METHOD(WTreeNode, setChildrenDecorated),
    METHOD(WTreeNode, setInteractive),
    METHOD(WTreeNode, expand),
    METHOD(WTreeNode, collapse),
    METHOD(WTreeNode, hasParent),
    METHOD(WTreeNode, expanded),
    METHOD(WTreeNode, collapsed),
    {NULL, NULL},
};

void luawt_WTreeNode(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WTreeNode,
        L,
        wrap<luawt_WTreeNode_make>::func,
        0,
        luawt_WTreeNode_methods,
        base
    );
}
