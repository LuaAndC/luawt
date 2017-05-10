#include "boost-xtime.hpp"

#include <Wt/WWidget>
#include <Wt/WApplication>
#include <Wt/WContainerWidget>
#include <Wt/WLink>
#include <Wt/WString>

#include "enums.hpp"
#include "globals.hpp"

int luawt_MyApplication_make(lua_State* L) {
    WEnvironment* env = reinterpret_cast<WEnvironment*>(
        lua_touserdata(L, 1)
    );
    MyApplication* app = new MyApplication(
        L,
        luawt_getShared(L),
        *env
    );
    luawt_toLua(L, app);
    return 1;
}

static const char* MyApplication_enableUpdates_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* MyApplication_enableUpdates_args1[] = {luawt_typeToStr<MyApplication>(), "bool", NULL};
static const char* const* const luawt_MyApplication_enableUpdates_args[] = {MyApplication_enableUpdates_args0, MyApplication_enableUpdates_args1, NULL};

int luawt_MyApplication_enableUpdates(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_enableUpdates_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->enableUpdates();
    return 0;
    
    } else if (index == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->enableUpdates(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.enableUpdates");
    }
}

static const char* MyApplication_requireJQuery_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_requireJQuery_args[] = {MyApplication_requireJQuery_args0, NULL};

int luawt_MyApplication_requireJQuery(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_requireJQuery_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    bool l_result = self->requireJQuery(url);
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.requireJQuery");
    }
}

static const char* MyApplication_makeAbsoluteUrl_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_makeAbsoluteUrl_args[] = {MyApplication_makeAbsoluteUrl_args0, NULL};

int luawt_MyApplication_makeAbsoluteUrl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_makeAbsoluteUrl_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    std::string l_result = self->makeAbsoluteUrl(url);
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.makeAbsoluteUrl");
    }
}

static const char* MyApplication_bodyClass_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_bodyClass_args[] = {MyApplication_bodyClass_args0, NULL};

int luawt_MyApplication_bodyClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_bodyClass_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->bodyClass();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.bodyClass");
    }
}

static const char* MyApplication_attachThread_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* MyApplication_attachThread_args1[] = {luawt_typeToStr<MyApplication>(), "bool", NULL};
static const char* const* const luawt_MyApplication_attachThread_args[] = {MyApplication_attachThread_args0, MyApplication_attachThread_args1, NULL};

int luawt_MyApplication_attachThread(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_attachThread_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->attachThread();
    return 0;
    
    } else if (index == 1) {
    bool attach = lua_toboolean(L, 2);
    self->attachThread(attach);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.attachThread");
    }
}

static const char* MyApplication_addAutoJavaScript_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_addAutoJavaScript_args[] = {MyApplication_addAutoJavaScript_args0, NULL};

int luawt_MyApplication_addAutoJavaScript(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_addAutoJavaScript_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string javascript = std::string(raw2);
    self->addAutoJavaScript(javascript);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.addAutoJavaScript");
    }
}

static const char* MyApplication_setTitle_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_setTitle_args[] = {MyApplication_setTitle_args0, NULL};

int luawt_MyApplication_setTitle(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setTitle_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString title = Wt::WString(raw2);
    self->setTitle(title);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setTitle");
    }
}

static const char* MyApplication_redirect_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_redirect_args[] = {MyApplication_redirect_args0, NULL};

int luawt_MyApplication_redirect(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_redirect_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    self->redirect(url);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.redirect");
    }
}

static const char* MyApplication_pushExposedConstraint_args0[] = {luawt_typeToStr<MyApplication>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_MyApplication_pushExposedConstraint_args[] = {MyApplication_pushExposedConstraint_args0, NULL};

int luawt_MyApplication_pushExposedConstraint(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_pushExposedConstraint_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WWidget* w =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->pushExposedConstraint(w);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.pushExposedConstraint");
    }
}

static const char* MyApplication_docType_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_docType_args[] = {MyApplication_docType_args0, NULL};

int luawt_MyApplication_docType(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_docType_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->docType();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.docType");
    }
}

static const char* MyApplication_isConnected_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_isConnected_args[] = {MyApplication_isConnected_args0, NULL};

int luawt_MyApplication_isConnected(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_isConnected_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    bool l_result = self->isConnected();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.isConnected");
    }
}

static const char* MyApplication_setInternalPath_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* MyApplication_setInternalPath_args1[] = {luawt_typeToStr<MyApplication>(), "char const *", "bool", NULL};
static const char* const* const luawt_MyApplication_setInternalPath_args[] = {MyApplication_setInternalPath_args0, MyApplication_setInternalPath_args1, NULL};

int luawt_MyApplication_setInternalPath(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setInternalPath_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string path = std::string(raw2);
    self->setInternalPath(path);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string path = std::string(raw2);
    bool emitChange = lua_toboolean(L, 3);
    self->setInternalPath(path, emitChange);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setInternalPath");
    }
}

static const char* MyApplication_domRoot_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_domRoot_args[] = {MyApplication_domRoot_args0, NULL};

int luawt_MyApplication_domRoot(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_domRoot_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WContainerWidget * l_result = self->domRoot();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.domRoot");
    }
}

static const char* MyApplication_maximumRequestSize_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_maximumRequestSize_args[] = {MyApplication_maximumRequestSize_args0, NULL};

int luawt_MyApplication_maximumRequestSize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_maximumRequestSize_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    int64_t l_result = self->maximumRequestSize();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.maximumRequestSize");
    }
}

static const char* MyApplication_internalPathValid_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_internalPathValid_args[] = {MyApplication_internalPathValid_args0, NULL};

int luawt_MyApplication_internalPathValid(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_internalPathValid_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    bool l_result = self->internalPathValid();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.internalPathValid");
    }
}

static const char* MyApplication_relativeResourcesUrl_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_relativeResourcesUrl_args[] = {MyApplication_relativeResourcesUrl_args0, NULL};

int luawt_MyApplication_relativeResourcesUrl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_relativeResourcesUrl_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->relativeResourcesUrl();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.relativeResourcesUrl");
    }
}

static const char* MyApplication_setHtmlClass_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_setHtmlClass_args[] = {MyApplication_setHtmlClass_args0, NULL};

int luawt_MyApplication_setHtmlClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setHtmlClass_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string styleClass = std::string(raw2);
    self->setHtmlClass(styleClass);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setHtmlClass");
    }
}

static const char* MyApplication_internalPathDefaultValid_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_internalPathDefaultValid_args[] = {MyApplication_internalPathDefaultValid_args0, NULL};

int luawt_MyApplication_internalPathDefaultValid(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_internalPathDefaultValid_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    bool l_result = self->internalPathDefaultValid();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.internalPathDefaultValid");
    }
}

static const char* MyApplication_ajaxMethod_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_ajaxMethod_args[] = {MyApplication_ajaxMethod_args0, NULL};

int luawt_MyApplication_ajaxMethod(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_ajaxMethod_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WApplication::AjaxMethod l_result = self->ajaxMethod();
    luawt_returnEnum(L, luawt_enum_WApplication_AjaxMethod_str, luawt_enum_WApplication_AjaxMethod_val, l_result, "WApplication::AjaxMethod");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.ajaxMethod");
    }
}

static const char* MyApplication_internalPathMatches_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_internalPathMatches_args[] = {MyApplication_internalPathMatches_args0, NULL};

int luawt_MyApplication_internalPathMatches(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_internalPathMatches_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string path = std::string(raw2);
    bool l_result = self->internalPathMatches(path);
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.internalPathMatches");
    }
}

static const char* MyApplication_removeGlobalWidget_args0[] = {luawt_typeToStr<MyApplication>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_MyApplication_removeGlobalWidget_args[] = {MyApplication_removeGlobalWidget_args0, NULL};

int luawt_MyApplication_removeGlobalWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_removeGlobalWidget_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WWidget* w =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->removeGlobalWidget(w);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.removeGlobalWidget");
    }
}

static const char* MyApplication_setBodyClass_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_setBodyClass_args[] = {MyApplication_setBodyClass_args0, NULL};

int luawt_MyApplication_setBodyClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setBodyClass_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string styleClass = std::string(raw2);
    self->setBodyClass(styleClass);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setBodyClass");
    }
}

static const char* MyApplication_triggerUpdate_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_triggerUpdate_args[] = {MyApplication_triggerUpdate_args0, NULL};

int luawt_MyApplication_triggerUpdate(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_triggerUpdate_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->triggerUpdate();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.triggerUpdate");
    }
}

static const char* MyApplication_removeMetaHeader_args0[] = {luawt_typeToStr<MyApplication>(), "enum", NULL};
static const char* MyApplication_removeMetaHeader_args1[] = {luawt_typeToStr<MyApplication>(), "enum", "char const *", NULL};
static const char* const* const luawt_MyApplication_removeMetaHeader_args[] = {MyApplication_removeMetaHeader_args0, MyApplication_removeMetaHeader_args1, NULL};

int luawt_MyApplication_removeMetaHeader(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_removeMetaHeader_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::MetaHeaderType type = static_cast<Wt::MetaHeaderType>(luawt_getEnum(
        L,
        luawt_enum_MetaHeaderType_str,
        luawt_enum_MetaHeaderType_val,
        2,
        "Wrong enum type in args of MyApplication.removeMetaHeader"
    ));
    self->removeMetaHeader(type);
    return 0;
    
    } else if (index == 1) {
    Wt::MetaHeaderType type = static_cast<Wt::MetaHeaderType>(luawt_getEnum(
        L,
        luawt_enum_MetaHeaderType_str,
        luawt_enum_MetaHeaderType_val,
        2,
        "Wrong enum type in args of MyApplication.removeMetaHeader"
    ));
    char const * raw3 = lua_tostring(L, 3);
    std::string name = std::string(raw3);
    self->removeMetaHeader(type, name);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.removeMetaHeader");
    }
}

static const char* MyApplication_setTwoPhaseRenderingThreshold_args0[] = {luawt_typeToStr<MyApplication>(), "int", NULL};
static const char* const* const luawt_MyApplication_setTwoPhaseRenderingThreshold_args[] = {MyApplication_setTwoPhaseRenderingThreshold_args0, NULL};

int luawt_MyApplication_setTwoPhaseRenderingThreshold(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setTwoPhaseRenderingThreshold_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    int size = lua_tointeger(L, 2);
    self->setTwoPhaseRenderingThreshold(size);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setTwoPhaseRenderingThreshold");
    }
}

static const char* MyApplication_addMetaHeader_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", NULL};
static const char* MyApplication_addMetaHeader_args1[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", "char const *", NULL};
static const char* MyApplication_addMetaHeader_args2[] = {luawt_typeToStr<MyApplication>(), "enum", "char const *", "char const *", NULL};
static const char* MyApplication_addMetaHeader_args3[] = {luawt_typeToStr<MyApplication>(), "enum", "char const *", "char const *", "char const *", NULL};
static const char* const* const luawt_MyApplication_addMetaHeader_args[] = {MyApplication_addMetaHeader_args0, MyApplication_addMetaHeader_args1, MyApplication_addMetaHeader_args2, MyApplication_addMetaHeader_args3, NULL};

int luawt_MyApplication_addMetaHeader(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_addMetaHeader_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString content = Wt::WString(raw3);
    self->addMetaHeader(name, content);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    Wt::WString content = Wt::WString(raw3);
    char const * raw4 = lua_tostring(L, 4);
    std::string lang = std::string(raw4);
    self->addMetaHeader(name, content, lang);
    return 0;
    
    } else if (index == 2) {
    Wt::MetaHeaderType type = static_cast<Wt::MetaHeaderType>(luawt_getEnum(
        L,
        luawt_enum_MetaHeaderType_str,
        luawt_enum_MetaHeaderType_val,
        2,
        "Wrong enum type in args of MyApplication.addMetaHeader"
    ));
    char const * raw3 = lua_tostring(L, 3);
    std::string name = std::string(raw3);
    char const * raw4 = lua_tostring(L, 4);
    Wt::WString content = Wt::WString(raw4);
    self->addMetaHeader(type, name, content);
    return 0;
    
    } else if (index == 3) {
    Wt::MetaHeaderType type = static_cast<Wt::MetaHeaderType>(luawt_getEnum(
        L,
        luawt_enum_MetaHeaderType_str,
        luawt_enum_MetaHeaderType_val,
        2,
        "Wrong enum type in args of MyApplication.addMetaHeader"
    ));
    char const * raw3 = lua_tostring(L, 3);
    std::string name = std::string(raw3);
    char const * raw4 = lua_tostring(L, 4);
    Wt::WString content = Wt::WString(raw4);
    char const * raw5 = lua_tostring(L, 5);
    std::string lang = std::string(raw5);
    self->addMetaHeader(type, name, content, lang);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.addMetaHeader");
    }
}

static const char* MyApplication_finalize_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_finalize_args[] = {MyApplication_finalize_args0, NULL};

int luawt_MyApplication_finalize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_finalize_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->finalize();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.finalize");
    }
}

static const char* MyApplication_layoutDirection_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_layoutDirection_args[] = {MyApplication_layoutDirection_args0, NULL};

int luawt_MyApplication_layoutDirection(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_layoutDirection_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::LayoutDirection l_result = self->layoutDirection();
    luawt_returnEnum(L, luawt_enum_LayoutDirection_str, luawt_enum_LayoutDirection_val, l_result, "LayoutDirection");
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.layoutDirection");
    }
}

static const char* MyApplication_title_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_title_args[] = {MyApplication_title_args0, NULL};

int luawt_MyApplication_title(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_title_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WString const & l_result = self->title();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.title");
    }
}

static const char* MyApplication_onePixelGifUrl_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_onePixelGifUrl_args[] = {MyApplication_onePixelGifUrl_args0, NULL};

int luawt_MyApplication_onePixelGifUrl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_onePixelGifUrl_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->onePixelGifUrl();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.onePixelGifUrl");
    }
}

static const char* MyApplication_sessionId_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_sessionId_args[] = {MyApplication_sessionId_args0, NULL};

int luawt_MyApplication_sessionId(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_sessionId_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->sessionId();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.sessionId");
    }
}

static const char* MyApplication_bindWidget_args0[] = {luawt_typeToStr<MyApplication>(), luawt_typeToStr<Wt::WWidget>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_bindWidget_args[] = {MyApplication_bindWidget_args0, NULL};

int luawt_MyApplication_bindWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_bindWidget_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WWidget* widget =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    char const * raw3 = lua_tostring(L, 3);
    std::string domId = std::string(raw3);
    self->bindWidget(widget, domId);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.bindWidget");
    }
}

static const char* MyApplication_javaScriptClass_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_javaScriptClass_args[] = {MyApplication_javaScriptClass_args0, NULL};

int luawt_MyApplication_javaScriptClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_javaScriptClass_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->javaScriptClass();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.javaScriptClass");
    }
}

static const char* MyApplication_removeCookie_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* MyApplication_removeCookie_args1[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", NULL};
static const char* MyApplication_removeCookie_args2[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", "char const *", NULL};
static const char* const* const luawt_MyApplication_removeCookie_args[] = {MyApplication_removeCookie_args0, MyApplication_removeCookie_args1, MyApplication_removeCookie_args2, NULL};

int luawt_MyApplication_removeCookie(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_removeCookie_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    self->removeCookie(name);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string domain = std::string(raw3);
    self->removeCookie(name, domain);
    return 0;
    
    } else if (index == 2) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string domain = std::string(raw3);
    char const * raw4 = lua_tostring(L, 4);
    std::string path = std::string(raw4);
    self->removeCookie(name, domain, path);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.removeCookie");
    }
}

static const char* MyApplication_setInternalPathDefaultValid_args0[] = {luawt_typeToStr<MyApplication>(), "bool", NULL};
static const char* const* const luawt_MyApplication_setInternalPathDefaultValid_args[] = {MyApplication_setInternalPathDefaultValid_args0, NULL};

int luawt_MyApplication_setInternalPathDefaultValid(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setInternalPathDefaultValid_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    bool valid = lua_toboolean(L, 2);
    self->setInternalPathDefaultValid(valid);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setInternalPathDefaultValid");
    }
}

static const char* MyApplication_setCookie_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", "int", NULL};
static const char* MyApplication_setCookie_args1[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", "int", "char const *", NULL};
static const char* MyApplication_setCookie_args2[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", "int", "char const *", "char const *", NULL};
static const char* MyApplication_setCookie_args3[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", "int", "char const *", "char const *", "bool", NULL};
static const char* const* const luawt_MyApplication_setCookie_args[] = {MyApplication_setCookie_args0, MyApplication_setCookie_args1, MyApplication_setCookie_args2, MyApplication_setCookie_args3, NULL};

int luawt_MyApplication_setCookie(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setCookie_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string value = std::string(raw3);
    int maxAge = lua_tointeger(L, 4);
    self->setCookie(name, value, maxAge);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string value = std::string(raw3);
    int maxAge = lua_tointeger(L, 4);
    char const * raw5 = lua_tostring(L, 5);
    std::string domain = std::string(raw5);
    self->setCookie(name, value, maxAge, domain);
    return 0;
    
    } else if (index == 2) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string value = std::string(raw3);
    int maxAge = lua_tointeger(L, 4);
    char const * raw5 = lua_tostring(L, 5);
    std::string domain = std::string(raw5);
    char const * raw6 = lua_tostring(L, 6);
    std::string path = std::string(raw6);
    self->setCookie(name, value, maxAge, domain, path);
    return 0;
    
    } else if (index == 3) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string value = std::string(raw3);
    int maxAge = lua_tointeger(L, 4);
    char const * raw5 = lua_tostring(L, 5);
    std::string domain = std::string(raw5);
    char const * raw6 = lua_tostring(L, 6);
    std::string path = std::string(raw6);
    bool secure = lua_toboolean(L, 7);
    self->setCookie(name, value, maxAge, domain, path, secure);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setCookie");
    }
}

static const char* MyApplication_deferRendering_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_deferRendering_args[] = {MyApplication_deferRendering_args0, NULL};

int luawt_MyApplication_deferRendering(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_deferRendering_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->deferRendering();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.deferRendering");
    }
}

static const char* MyApplication_useStyleSheet_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* MyApplication_useStyleSheet_args1[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", NULL};
static const char* MyApplication_useStyleSheet_args2[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", "char const *", NULL};
static const char* const* const luawt_MyApplication_useStyleSheet_args[] = {MyApplication_useStyleSheet_args0, MyApplication_useStyleSheet_args1, MyApplication_useStyleSheet_args2, NULL};

int luawt_MyApplication_useStyleSheet(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_useStyleSheet_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WLink link = Wt::WLink(raw2);
    self->useStyleSheet(link);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WLink link = Wt::WLink(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string media = std::string(raw3);
    self->useStyleSheet(link, media);
    return 0;
    
    } else if (index == 2) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WLink link = Wt::WLink(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string condition = std::string(raw3);
    char const * raw4 = lua_tostring(L, 4);
    std::string media = std::string(raw4);
    self->useStyleSheet(link, condition, media);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.useStyleSheet");
    }
}

static const char* MyApplication_bookmarkUrl_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* MyApplication_bookmarkUrl_args1[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_bookmarkUrl_args[] = {MyApplication_bookmarkUrl_args0, MyApplication_bookmarkUrl_args1, NULL};

int luawt_MyApplication_bookmarkUrl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_bookmarkUrl_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->bookmarkUrl();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string internalPath = std::string(raw2);
    std::string l_result = self->bookmarkUrl(internalPath);
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.bookmarkUrl");
    }
}

static const char* MyApplication_findWidget_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_findWidget_args[] = {MyApplication_findWidget_args0, NULL};

int luawt_MyApplication_findWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_findWidget_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    Wt::WWidget * l_result = self->findWidget(name);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.findWidget");
    }
}

static const char* MyApplication_resolveRelativeUrl_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_resolveRelativeUrl_args[] = {MyApplication_resolveRelativeUrl_args0, NULL};

int luawt_MyApplication_resolveRelativeUrl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_resolveRelativeUrl_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    std::string l_result = self->resolveRelativeUrl(url);
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.resolveRelativeUrl");
    }
}

static const char* MyApplication_resourcesUrl_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_resourcesUrl_args[] = {MyApplication_resourcesUrl_args0, NULL};

int luawt_MyApplication_resourcesUrl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_resourcesUrl_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->resourcesUrl();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.resourcesUrl");
    }
}

static const char* MyApplication_quit_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_quit_args[] = {MyApplication_quit_args0, NULL};

int luawt_MyApplication_quit(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_quit_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->quit();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.quit");
    }
}

static const char* MyApplication_setAjaxMethod_args0[] = {luawt_typeToStr<MyApplication>(), "enum", NULL};
static const char* const* const luawt_MyApplication_setAjaxMethod_args[] = {MyApplication_setAjaxMethod_args0, NULL};

int luawt_MyApplication_setAjaxMethod(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setAjaxMethod_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WApplication::AjaxMethod method = static_cast<Wt::WApplication::AjaxMethod>(luawt_getEnum(
        L,
        luawt_enum_WApplication_AjaxMethod_str,
        luawt_enum_WApplication_AjaxMethod_val,
        2,
        "Wrong enum type in args of MyApplication.setAjaxMethod"
    ));
    self->setAjaxMethod(method);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setAjaxMethod");
    }
}

static const char* MyApplication_processEvents_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_processEvents_args[] = {MyApplication_processEvents_args0, NULL};

int luawt_MyApplication_processEvents(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_processEvents_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->processEvents();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.processEvents");
    }
}

static const char* MyApplication_changeSessionId_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_changeSessionId_args[] = {MyApplication_changeSessionId_args0, NULL};

int luawt_MyApplication_changeSessionId(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_changeSessionId_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->changeSessionId();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.changeSessionId");
    }
}

static const char* MyApplication_require_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* MyApplication_require_args1[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", NULL};
static const char* const* const luawt_MyApplication_require_args[] = {MyApplication_require_args0, MyApplication_require_args1, NULL};

int luawt_MyApplication_require(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_require_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    bool l_result = self->require(url);
    lua_pushboolean(L, l_result);
    return 1;

    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string symbol = std::string(raw3);
    bool l_result = self->require(url, symbol);
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.require");
    }
}

static const char* MyApplication_redirectToSession_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_redirectToSession_args[] = {MyApplication_redirectToSession_args0, NULL};

int luawt_MyApplication_redirectToSession(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_redirectToSession_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string sessionId = std::string(raw2);
    self->redirectToSession(sessionId);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.redirectToSession");
    }
}

static const char* MyApplication_pathMatches_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", NULL};
static const char* const* const luawt_MyApplication_pathMatches_args[] = {MyApplication_pathMatches_args0, NULL};

int luawt_MyApplication_pathMatches(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_pathMatches_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string path = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string query = std::string(raw3);
    bool l_result = self->pathMatches(path, query);
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.pathMatches");
    }
}

static const char* MyApplication_setCssTheme_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_setCssTheme_args[] = {MyApplication_setCssTheme_args0, NULL};

int luawt_MyApplication_setCssTheme(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setCssTheme_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    self->setCssTheme(name);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setCssTheme");
    }
}

static const char* MyApplication_removeMetaLink_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_removeMetaLink_args[] = {MyApplication_removeMetaLink_args0, NULL};

int luawt_MyApplication_removeMetaLink(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_removeMetaLink_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string href = std::string(raw2);
    self->removeMetaLink(href);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.removeMetaLink");
    }
}

static const char* MyApplication_doJavaScript_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* MyApplication_doJavaScript_args1[] = {luawt_typeToStr<MyApplication>(), "char const *", "bool", NULL};
static const char* const* const luawt_MyApplication_doJavaScript_args[] = {MyApplication_doJavaScript_args0, MyApplication_doJavaScript_args1, NULL};

int luawt_MyApplication_doJavaScript(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_doJavaScript_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string javascript = std::string(raw2);
    self->doJavaScript(javascript);
    return 0;
    
    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string javascript = std::string(raw2);
    bool afterLoaded = lua_toboolean(L, 3);
    self->doJavaScript(javascript, afterLoaded);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.doJavaScript");
    }
}

static const char* MyApplication_encodeUntrustedUrl_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_encodeUntrustedUrl_args[] = {MyApplication_encodeUntrustedUrl_args0, NULL};

int luawt_MyApplication_encodeUntrustedUrl(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_encodeUntrustedUrl_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    std::string l_result = self->encodeUntrustedUrl(url);
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.encodeUntrustedUrl");
    }
}

static const char* MyApplication_initialize_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_initialize_args[] = {MyApplication_initialize_args0, NULL};

int luawt_MyApplication_initialize(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_initialize_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->initialize();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.initialize");
    }
}

static const char* MyApplication_hasQuit_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_hasQuit_args[] = {MyApplication_hasQuit_args0, NULL};

int luawt_MyApplication_hasQuit(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_hasQuit_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    bool l_result = self->hasQuit();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.hasQuit");
    }
}

static const char* MyApplication_internalPathNextPart_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_internalPathNextPart_args[] = {MyApplication_internalPathNextPart_args0, NULL};

int luawt_MyApplication_internalPathNextPart(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_internalPathNextPart_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string path = std::string(raw2);
    std::string l_result = self->internalPathNextPart(path);
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.internalPathNextPart");
    }
}

static const char* MyApplication_setLayoutDirection_args0[] = {luawt_typeToStr<MyApplication>(), "enum", NULL};
static const char* const* const luawt_MyApplication_setLayoutDirection_args[] = {MyApplication_setLayoutDirection_args0, NULL};

int luawt_MyApplication_setLayoutDirection(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setLayoutDirection_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::LayoutDirection direction = static_cast<Wt::LayoutDirection>(luawt_getEnum(
        L,
        luawt_enum_LayoutDirection_str,
        luawt_enum_LayoutDirection_val,
        2,
        "Wrong enum type in args of MyApplication.setLayoutDirection"
    ));
    self->setLayoutDirection(direction);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setLayoutDirection");
    }
}

static const char* MyApplication_setConfirmCloseMessage_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_setConfirmCloseMessage_args[] = {MyApplication_setConfirmCloseMessage_args0, NULL};

int luawt_MyApplication_setConfirmCloseMessage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setConfirmCloseMessage_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString message = Wt::WString(raw2);
    self->setConfirmCloseMessage(message);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setConfirmCloseMessage");
    }
}

static const char* MyApplication_declareJavaScriptFunction_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", NULL};
static const char* const* const luawt_MyApplication_declareJavaScriptFunction_args[] = {MyApplication_declareJavaScriptFunction_args0, NULL};

int luawt_MyApplication_declareJavaScriptFunction(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_declareJavaScriptFunction_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string name = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string function = std::string(raw3);
    self->declareJavaScriptFunction(name, function);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.declareJavaScriptFunction");
    }
}

static const char* MyApplication_setFocus_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", "int", "int", NULL};
static const char* const* const luawt_MyApplication_setFocus_args[] = {MyApplication_setFocus_args0, NULL};

int luawt_MyApplication_setFocus(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setFocus_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string id = std::string(raw2);
    int selectionStart = lua_tointeger(L, 3);
    int selectionEnd = lua_tointeger(L, 4);
    self->setFocus(id, selectionStart, selectionEnd);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setFocus");
    }
}

static const char* MyApplication_popExposedConstraint_args0[] = {luawt_typeToStr<MyApplication>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_MyApplication_popExposedConstraint_args[] = {MyApplication_popExposedConstraint_args0, NULL};

int luawt_MyApplication_popExposedConstraint(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_popExposedConstraint_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WWidget* w =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->popExposedConstraint(w);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.popExposedConstraint");
    }
}

static const char* MyApplication_addGlobalWidget_args0[] = {luawt_typeToStr<MyApplication>(), luawt_typeToStr<Wt::WWidget>(), NULL};
static const char* const* const luawt_MyApplication_addGlobalWidget_args[] = {MyApplication_addGlobalWidget_args0, NULL};

int luawt_MyApplication_addGlobalWidget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_addGlobalWidget_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WWidget* w =
        luawt_checkFromLua<Wt::WWidget>(L, 2);
    self->addGlobalWidget(w);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.addGlobalWidget");
    }
}

static const char* MyApplication_internalSubPath_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_internalSubPath_args[] = {MyApplication_internalSubPath_args0, NULL};

int luawt_MyApplication_internalSubPath(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_internalSubPath_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string path = std::string(raw2);
    std::string l_result = self->internalSubPath(path);
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.internalSubPath");
    }
}

static const char* MyApplication_url_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* MyApplication_url_args1[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_url_args[] = {MyApplication_url_args0, MyApplication_url_args1, NULL};

int luawt_MyApplication_url(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_url_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->url();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else if (index == 1) {
    char const * raw2 = lua_tostring(L, 2);
    std::string internalPath = std::string(raw2);
    std::string l_result = self->url(internalPath);
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.url");
    }
}

static const char* MyApplication_root_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_root_args[] = {MyApplication_root_args0, NULL};

int luawt_MyApplication_root(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_root_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WContainerWidget * l_result = self->root();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.root");
    }
}

static const char* MyApplication_appRoot_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_appRoot_args[] = {MyApplication_appRoot_args0, NULL};

int luawt_MyApplication_appRoot(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_appRoot_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->appRoot();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.appRoot");
    }
}

static const char* MyApplication_customJQuery_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_customJQuery_args[] = {MyApplication_customJQuery_args0, NULL};

int luawt_MyApplication_customJQuery(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_customJQuery_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    bool l_result = self->customJQuery();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.customJQuery");
    }
}

static const char* MyApplication_enableInternalPaths_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_enableInternalPaths_args[] = {MyApplication_enableInternalPaths_args0, NULL};

int luawt_MyApplication_enableInternalPaths(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_enableInternalPaths_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->enableInternalPaths();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.enableInternalPaths");
    }
}

static const char* MyApplication_refresh_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_refresh_args[] = {MyApplication_refresh_args0, NULL};

int luawt_MyApplication_refresh(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_refresh_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->refresh();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.refresh");
    }
}

static const char* MyApplication_updatesEnabled_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_updatesEnabled_args[] = {MyApplication_updatesEnabled_args0, NULL};

int luawt_MyApplication_updatesEnabled(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_updatesEnabled_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    bool l_result = self->updatesEnabled();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.updatesEnabled");
    }
}

static const char* MyApplication_setInternalPathValid_args0[] = {luawt_typeToStr<MyApplication>(), "bool", NULL};
static const char* const* const luawt_MyApplication_setInternalPathValid_args[] = {MyApplication_setInternalPathValid_args0, NULL};

int luawt_MyApplication_setInternalPathValid(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setInternalPathValid_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    bool valid = lua_toboolean(L, 2);
    self->setInternalPathValid(valid);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setInternalPathValid");
    }
}

static const char* MyApplication_internalPath_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_internalPath_args[] = {MyApplication_internalPath_args0, NULL};

int luawt_MyApplication_internalPath(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_internalPath_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->internalPath();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.internalPath");
    }
}

static const char* MyApplication_resumeRendering_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_resumeRendering_args[] = {MyApplication_resumeRendering_args0, NULL};

int luawt_MyApplication_resumeRendering(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_resumeRendering_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    self->resumeRendering();
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.resumeRendering");
    }
}

static const char* MyApplication_setJavaScriptClass_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", NULL};
static const char* const* const luawt_MyApplication_setJavaScriptClass_args[] = {MyApplication_setJavaScriptClass_args0, NULL};

int luawt_MyApplication_setJavaScriptClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_setJavaScriptClass_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string className = std::string(raw2);
    self->setJavaScriptClass(className);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.setJavaScriptClass");
    }
}

static const char* MyApplication_domRoot2_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_domRoot2_args[] = {MyApplication_domRoot2_args0, NULL};

int luawt_MyApplication_domRoot2(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_domRoot2_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WContainerWidget * l_result = self->domRoot2();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.domRoot2");
    }
}

static const char* MyApplication_addMetaLink_args0[] = {luawt_typeToStr<MyApplication>(), "char const *", "char const *", "char const *", "char const *", "char const *", "char const *", "bool", NULL};
static const char* const* const luawt_MyApplication_addMetaLink_args[] = {MyApplication_addMetaLink_args0, NULL};

int luawt_MyApplication_addMetaLink(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_addMetaLink_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string href = std::string(raw2);
    char const * raw3 = lua_tostring(L, 3);
    std::string rel = std::string(raw3);
    char const * raw4 = lua_tostring(L, 4);
    std::string media = std::string(raw4);
    char const * raw5 = lua_tostring(L, 5);
    std::string hreflang = std::string(raw5);
    char const * raw6 = lua_tostring(L, 6);
    std::string type = std::string(raw6);
    char const * raw7 = lua_tostring(L, 7);
    std::string sizes = std::string(raw7);
    bool disabled = lua_toboolean(L, 8);
    self->addMetaLink(href, rel, media, hreflang, type, sizes, disabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.addMetaLink");
    }
}

static const char* MyApplication_debug_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_debug_args[] = {MyApplication_debug_args0, NULL};

int luawt_MyApplication_debug(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_debug_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    bool l_result = self->debug();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.debug");
    }
}

static const char* MyApplication_docRoot_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_docRoot_args[] = {MyApplication_docRoot_args0, NULL};

int luawt_MyApplication_docRoot(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_docRoot_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->docRoot();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.docRoot");
    }
}

static const char* MyApplication_isQuited_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_isQuited_args[] = {MyApplication_isQuited_args0, NULL};

int luawt_MyApplication_isQuited(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_isQuited_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    bool l_result = self->isQuited();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.isQuited");
    }
}

static const char* MyApplication_htmlClass_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_htmlClass_args[] = {MyApplication_htmlClass_args0, NULL};

int luawt_MyApplication_htmlClass(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_htmlClass_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    std::string l_result = self->htmlClass();
    lua_pushstring(L, l_result.c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.htmlClass");
    }
}

static const char* MyApplication_closeMessage_args0[] = {luawt_typeToStr<MyApplication>(), NULL};
static const char* const* const luawt_MyApplication_closeMessage_args[] = {MyApplication_closeMessage_args0, NULL};

int luawt_MyApplication_closeMessage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_MyApplication_closeMessage_args);
    MyApplication* self = luawt_checkFromLua<MyApplication>(L, 1);
    if (index == 0) {
    Wt::WString const & l_result = self->closeMessage();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for MyApplication.closeMessage");
    }
}

ADD_SIGNAL(globalKeyWentDown, MyApplication, Wt::WKeyEvent)
ADD_SIGNAL(globalKeyPressed, MyApplication, Wt::WKeyEvent)
ADD_SIGNAL(globalKeyWentUp, MyApplication, Wt::WKeyEvent)
ADD_SIGNAL(globalEnterPressed, MyApplication, Wt::NoClass)
ADD_SIGNAL(globalEscapePressed, MyApplication, Wt::NoClass)

static const luaL_Reg luawt_MyApplication_methods[] = {
    METHOD(MyApplication, root),
    METHOD(MyApplication, findWidget),
    METHOD(MyApplication, useStyleSheet),
    METHOD(MyApplication, useStyleSheet),
    METHOD(MyApplication, setCssTheme),
    METHOD(MyApplication, setLayoutDirection),
    METHOD(MyApplication, layoutDirection),
    METHOD(MyApplication, setBodyClass),
    METHOD(MyApplication, bodyClass),
    METHOD(MyApplication, setHtmlClass),
    METHOD(MyApplication, htmlClass),
    METHOD(MyApplication, setTitle),
    METHOD(MyApplication, title),
    METHOD(MyApplication, closeMessage),
    METHOD(MyApplication, refresh),
    METHOD(MyApplication, bindWidget),
    METHOD(MyApplication, url),
    METHOD(MyApplication, makeAbsoluteUrl),
    METHOD(MyApplication, resolveRelativeUrl),
    METHOD(MyApplication, bookmarkUrl),
    METHOD(MyApplication, bookmarkUrl),
    METHOD(MyApplication, setInternalPath),
    METHOD(MyApplication, setInternalPathDefaultValid),
    METHOD(MyApplication, internalPathDefaultValid),
    METHOD(MyApplication, setInternalPathValid),
    METHOD(MyApplication, internalPathValid),
    METHOD(MyApplication, internalPath),
    METHOD(MyApplication, internalPathNextPart),
    METHOD(MyApplication, internalSubPath),
    METHOD(MyApplication, internalPathMatches),
    METHOD(MyApplication, redirect),
    METHOD(MyApplication, resourcesUrl),
    METHOD(MyApplication, relativeResourcesUrl),
    METHOD(MyApplication, appRoot),
    METHOD(MyApplication, docRoot),
    METHOD(MyApplication, sessionId),
    METHOD(MyApplication, changeSessionId),
    METHOD(MyApplication, enableUpdates),
    METHOD(MyApplication, updatesEnabled),
    METHOD(MyApplication, triggerUpdate),
    METHOD(MyApplication, attachThread),
    METHOD(MyApplication, doJavaScript),
    METHOD(MyApplication, addAutoJavaScript),
    METHOD(MyApplication, declareJavaScriptFunction),
    METHOD(MyApplication, require),
    METHOD(MyApplication, requireJQuery),
    METHOD(MyApplication, customJQuery),
    METHOD(MyApplication, setJavaScriptClass),
    METHOD(MyApplication, javaScriptClass),
    METHOD(MyApplication, processEvents),
    METHOD(MyApplication, setAjaxMethod),
    METHOD(MyApplication, ajaxMethod),
    METHOD(MyApplication, domRoot),
    METHOD(MyApplication, domRoot2),
    METHOD(MyApplication, initialize),
    METHOD(MyApplication, finalize),
    METHOD(MyApplication, setTwoPhaseRenderingThreshold),
    METHOD(MyApplication, setCookie),
    METHOD(MyApplication, removeCookie),
    METHOD(MyApplication, addMetaLink),
    METHOD(MyApplication, removeMetaLink),
    METHOD(MyApplication, addMetaHeader),
    METHOD(MyApplication, addMetaHeader),
    METHOD(MyApplication, removeMetaHeader),
    METHOD(MyApplication, onePixelGifUrl),
    METHOD(MyApplication, docType),
    METHOD(MyApplication, quit),
    METHOD(MyApplication, isQuited),
    METHOD(MyApplication, hasQuit),
    METHOD(MyApplication, maximumRequestSize),
    METHOD(MyApplication, redirectToSession),
    METHOD(MyApplication, isConnected),
    METHOD(MyApplication, debug),
    METHOD(MyApplication, setFocus),
    METHOD(MyApplication, setConfirmCloseMessage),
    METHOD(MyApplication, enableInternalPaths),
    METHOD(MyApplication, pathMatches),
    METHOD(MyApplication, deferRendering),
    METHOD(MyApplication, resumeRendering),
    METHOD(MyApplication, encodeUntrustedUrl),
    METHOD(MyApplication, pushExposedConstraint),
    METHOD(MyApplication, popExposedConstraint),
    METHOD(MyApplication, addGlobalWidget),
    METHOD(MyApplication, removeGlobalWidget),
    METHOD(MyApplication, globalKeyWentDown),
    METHOD(MyApplication, globalKeyPressed),
    METHOD(MyApplication, globalKeyWentUp),
    METHOD(MyApplication, globalEnterPressed),
    METHOD(MyApplication, globalEscapePressed),
    {NULL, NULL},
};

void luawt_MyApplication(lua_State* L) {
    
    DECLARE_CLASS(
        MyApplication,
        L,
        wrap<luawt_MyApplication_make>::func,
        0,
        luawt_MyApplication_methods,
        0
    );
}
