#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WContainerWidget>
#include <Wt/WLength>
#include <Wt/WDialog>
#include <Wt/WString>

#include "globals.hpp"

static const char* WDialog_positionAt_args0[] = {luawt_typeToStr<WDialog>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* WDialog_positionAt_args1[] = {luawt_typeToStr<WDialog>(), luawt_typeToStr<Wt::WWidget>(), "int", NULL};
static const char* const* const luawt_WDialog_positionAt_args[] = {WDialog_positionAt_args0, WDialog_positionAt_args1, NULL};

int luawt_WDialog_positionAt(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_positionAt_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->positionAt(widget);
    return 0;
    
    } else if (index == 1) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    Wt::Orientation orientation = static_cast<Wt::Orientation>(lua_tointeger(L, 3));
    self->positionAt(widget, orientation);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.positionAt");
    }
}

static const char* WDialog_setMinimumSize_args0[] = {luawt_typeToStr<WDialog>(), "double", "double", NULL};
static const char* const* const luawt_WDialog_setMinimumSize_args[] = {WDialog_setMinimumSize_args0, NULL};

int luawt_WDialog_setMinimumSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_setMinimumSize_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength width = Wt::WLength(raw2);
    double raw3 = lua_tonumber(L, 3);
    Wt::WLength height = Wt::WLength(raw3);
    self->setMinimumSize(width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.setMinimumSize");
    }
}

static const char* WDialog_accept_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_accept_args[] = {WDialog_accept_args0, NULL};

int luawt_WDialog_accept(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_accept_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    self->accept();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.accept");
    }
}

static const char* WDialog_done_args0[] = {luawt_typeToStr<WDialog>(), "int", NULL};
static const char* const* const luawt_WDialog_done_args[] = {WDialog_done_args0, NULL};

int luawt_WDialog_done(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_done_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    Wt::WDialog::DialogCode r = static_cast<Wt::WDialog::DialogCode>(lua_tointeger(L, 2));
    self->done(r);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.done");
    }
}

static const char* WDialog_result_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_result_args[] = {WDialog_result_args0, NULL};

int luawt_WDialog_result(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_result_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    Wt::WDialog::DialogCode l_result = self->result();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDialog.result");
    }
}

static const char* WDialog_setModal_args0[] = {luawt_typeToStr<WDialog>(), "bool", NULL};
static const char* const* const luawt_WDialog_setModal_args[] = {WDialog_setModal_args0, NULL};

int luawt_WDialog_setModal(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_setModal_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    bool modal = lua_toboolean(L, 2);
    self->setModal(modal);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.setModal");
    }
}

static const char* WDialog_setMaximumSize_args0[] = {luawt_typeToStr<WDialog>(), "double", "double", NULL};
static const char* const* const luawt_WDialog_setMaximumSize_args[] = {WDialog_setMaximumSize_args0, NULL};

int luawt_WDialog_setMaximumSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_setMaximumSize_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    double raw2 = lua_tonumber(L, 2);
    Wt::WLength width = Wt::WLength(raw2);
    double raw3 = lua_tonumber(L, 3);
    Wt::WLength height = Wt::WLength(raw3);
    self->setMaximumSize(width, height);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.setMaximumSize");
    }
}

static const char* WDialog_titleBar_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_titleBar_args[] = {WDialog_titleBar_args0, NULL};

int luawt_WDialog_titleBar(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_titleBar_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    Wt::WContainerWidget * l_result = self->titleBar();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDialog.titleBar");
    }
}

static const char* WDialog_contents_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_contents_args[] = {WDialog_contents_args0, NULL};

int luawt_WDialog_contents(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_contents_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    Wt::WContainerWidget * l_result = self->contents();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDialog.contents");
    }
}

static const char* WDialog_setResizable_args0[] = {luawt_typeToStr<WDialog>(), "bool", NULL};
static const char* const* const luawt_WDialog_setResizable_args[] = {WDialog_setResizable_args0, NULL};

int luawt_WDialog_setResizable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_setResizable_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    bool resizable = lua_toboolean(L, 2);
    self->setResizable(resizable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.setResizable");
    }
}

static const char* WDialog_windowTitle_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_windowTitle_args[] = {WDialog_windowTitle_args0, NULL};

int luawt_WDialog_windowTitle(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_windowTitle_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    Wt::WString l_result = self->windowTitle();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDialog.windowTitle");
    }
}

static const char* WDialog_setTitleBarEnabled_args0[] = {luawt_typeToStr<WDialog>(), "bool", NULL};
static const char* const* const luawt_WDialog_setTitleBarEnabled_args[] = {WDialog_setTitleBarEnabled_args0, NULL};

int luawt_WDialog_setTitleBarEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_setTitleBarEnabled_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    bool enabled = lua_toboolean(L, 2);
    self->setTitleBarEnabled(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.setTitleBarEnabled");
    }
}

static const char* WDialog_reject_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_reject_args[] = {WDialog_reject_args0, NULL};

int luawt_WDialog_reject(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_reject_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    self->reject();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.reject");
    }
}

static const char* WDialog_setClosable_args0[] = {luawt_typeToStr<WDialog>(), "bool", NULL};
static const char* const* const luawt_WDialog_setClosable_args[] = {WDialog_setClosable_args0, NULL};

int luawt_WDialog_setClosable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_setClosable_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    bool closable = lua_toboolean(L, 2);
    self->setClosable(closable);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.setClosable");
    }
}

static const char* WDialog_isModal_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_isModal_args[] = {WDialog_isModal_args0, NULL};

int luawt_WDialog_isModal(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_isModal_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    bool l_result = self->isModal();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDialog.isModal");
    }
}

static const char* WDialog_setWindowTitle_args0[] = {luawt_typeToStr<WDialog>(), "char const *", NULL};
static const char* const* const luawt_WDialog_setWindowTitle_args[] = {WDialog_setWindowTitle_args0, NULL};

int luawt_WDialog_setWindowTitle(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_setWindowTitle_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString title = Wt::WString(raw2);
    self->setWindowTitle(title);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.setWindowTitle");
    }
}

static const char* WDialog_resizable_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_resizable_args[] = {WDialog_resizable_args0, NULL};

int luawt_WDialog_resizable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_resizable_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    bool l_result = self->resizable();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDialog.resizable");
    }
}

static const char* WDialog_closable_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_closable_args[] = {WDialog_closable_args0, NULL};

int luawt_WDialog_closable(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_closable_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    bool l_result = self->closable();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDialog.closable");
    }
}

static const char* WDialog_setCaption_args0[] = {luawt_typeToStr<WDialog>(), "char const *", NULL};
static const char* const* const luawt_WDialog_setCaption_args[] = {WDialog_setCaption_args0, NULL};

int luawt_WDialog_setCaption(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_setCaption_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString caption = Wt::WString(raw2);
    self->setCaption(caption);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WDialog.setCaption");
    }
}

static const char* WDialog_isTitleBarEnabled_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_isTitleBarEnabled_args[] = {WDialog_isTitleBarEnabled_args0, NULL};

int luawt_WDialog_isTitleBarEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_isTitleBarEnabled_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    bool l_result = self->isTitleBarEnabled();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDialog.isTitleBarEnabled");
    }
}

static const char* WDialog_footer_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_footer_args[] = {WDialog_footer_args0, NULL};

int luawt_WDialog_footer(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_footer_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    Wt::WContainerWidget * l_result = self->footer();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDialog.footer");
    }
}

static const char* WDialog_caption_args0[] = {luawt_typeToStr<WDialog>(), NULL};
static const char* const* const luawt_WDialog_caption_args[] = {WDialog_caption_args0, NULL};

int luawt_WDialog_caption(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WDialog_caption_args);
    WDialog* self = luawt_checkFromLua<WDialog>(L, 1);
    if (index == 0) {
    Wt::WString l_result = self->caption();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WDialog.caption");
    }
}


static const luaL_Reg luawt_WDialog_methods[] = {
    METHOD(WDialog, setWindowTitle),
    METHOD(WDialog, windowTitle),
    METHOD(WDialog, setCaption),
    METHOD(WDialog, caption),
    METHOD(WDialog, setTitleBarEnabled),
    METHOD(WDialog, isTitleBarEnabled),
    METHOD(WDialog, titleBar),
    METHOD(WDialog, contents),
    METHOD(WDialog, footer),
    METHOD(WDialog, done),
    METHOD(WDialog, accept),
    METHOD(WDialog, reject),
    METHOD(WDialog, result),
    METHOD(WDialog, setModal),
    METHOD(WDialog, isModal),
    METHOD(WDialog, setResizable),
    METHOD(WDialog, resizable),
    METHOD(WDialog, setClosable),
    METHOD(WDialog, closable),
    METHOD(WDialog, positionAt),
    METHOD(WDialog, setMinimumSize),
    METHOD(WDialog, setMaximumSize),
    {NULL, NULL},
};

void luawt_WDialog(lua_State* L) {
    const char* base = luawt_typeToStr<WPopupWidget>();
    assert(base);
    DECLARE_CLASS(
        WDialog,
        L,
        0,
        0,
        luawt_WDialog_methods,
        base
    );
}
