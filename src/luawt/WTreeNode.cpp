#include "boost-xtime.hpp"

#include <Wt/WTree>
#include <Wt/WString>
#include <Wt/WIconPair>
#include <Wt/WTreeNode>
#include <Wt/WText>

#include "globals.hpp"

int luawt_WTreeNode_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WString labelText = Wt::WString(raw1);
    Wt::WIconPair* labelIcon =
        luawt_checkFromLua<Wt::WIconPair>(L, 2);
    Wt::WTreeNode* parentNode =
        luawt_checkFromLua<Wt::WTreeNode>(L, 3);
    WTreeNode * result = new WTreeNode(labelText, labelIcon, parentNode);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.make: %d", argc);
    }
}

int luawt_WTreeNode_setChildrenDecorated(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 1) {
    bool decorated = lua_toboolean(L, 2);
    self->setChildrenDecorated(decorated);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.setChildrenDecorated: %d", argc);
    }
}

int luawt_WTreeNode_isSelectable(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 0) {
    bool result = self->isSelectable();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.isSelectable: %d", argc);
    }
}

int luawt_WTreeNode_addChildNode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 1) {
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 2);
    self->addChildNode(node);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.addChildNode: %d", argc);
    }
}

int luawt_WTreeNode_setChildCountPolicy(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 1) {
    Wt::WTreeNode::ChildCountPolicy policy = static_cast<Wt::WTreeNode::ChildCountPolicy>(lua_tointeger(L, 2));
    self->setChildCountPolicy(policy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.setChildCountPolicy: %d", argc);
    }
}

int luawt_WTreeNode_hasParent(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 0) {
    bool result = self->hasParent();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.hasParent: %d", argc);
    }
}

int luawt_WTreeNode_label(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 0) {
    Wt::WText * result = self->label();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.label: %d", argc);
    }
}

int luawt_WTreeNode_removeChildNode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 1) {
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 2);
    self->removeChildNode(node);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.removeChildNode: %d", argc);
    }
}

int luawt_WTreeNode_setNodeVisible(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 1) {
    bool visible = lua_toboolean(L, 2);
    self->setNodeVisible(visible);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.setNodeVisible: %d", argc);
    }
}

int luawt_WTreeNode_childCountPolicy(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 0) {
    Wt::WTreeNode::ChildCountPolicy result = self->childCountPolicy();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.childCountPolicy: %d", argc);
    }
}

int luawt_WTreeNode_insertChildNode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 2) {
    int index = lua_tointeger(L, 2);
    Wt::WTreeNode* node =
        luawt_checkFromLua<Wt::WTreeNode>(L, 3);
    self->insertChildNode(index, node);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.insertChildNode: %d", argc);
    }
}

int luawt_WTreeNode_setSelectable(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 1) {
    bool selectable = lua_toboolean(L, 2);
    self->setSelectable(selectable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.setSelectable: %d", argc);
    }
}

int luawt_WTreeNode_collapse(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 0) {
    self->collapse();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.collapse: %d", argc);
    }
}

int luawt_WTreeNode_labelIcon(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 0) {
    Wt::WIconPair * result = self->labelIcon();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.labelIcon: %d", argc);
    }
}

int luawt_WTreeNode_displayedChildCount(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 0) {
    int result = self->displayedChildCount();
    lua_pushinteger(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.displayedChildCount: %d", argc);
    }
}

int luawt_WTreeNode_setInteractive(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 1) {
    bool interactive = lua_toboolean(L, 2);
    self->setInteractive(interactive);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.setInteractive: %d", argc);
    }
}

int luawt_WTreeNode_expand(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 0) {
    self->expand();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.expand: %d", argc);
    }
}

int luawt_WTreeNode_setLoadPolicy(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 1) {
    Wt::WTreeNode::LoadPolicy loadPolicy = static_cast<Wt::WTreeNode::LoadPolicy>(lua_tointeger(L, 2));
    self->setLoadPolicy(loadPolicy);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.setLoadPolicy: %d", argc);
    }
}

int luawt_WTreeNode_isExpanded(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 0) {
    bool result = self->isExpanded();
    lua_pushboolean(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.isExpanded: %d", argc);
    }
}

int luawt_WTreeNode_setImagePack(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    self->setImagePack(url);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.setImagePack: %d", argc);
    }
}

int luawt_WTreeNode_tree(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 0) {
    Wt::WTree * result = self->tree();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.tree: %d", argc);
    }
}

int luawt_WTreeNode_parentNode(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 0) {
    Wt::WTreeNode * result = self->parentNode();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.parentNode: %d", argc);
    }
}

int luawt_WTreeNode_setLabelIcon(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WTreeNode* self = luawt_checkFromLua<WTreeNode>(L, 1);
        if (argc == 1) {
    Wt::WIconPair* labelIcon =
        luawt_checkFromLua<Wt::WIconPair>(L, 2);
    self->setLabelIcon(labelIcon);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WTreeNode.setLabelIcon: %d", argc);
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
