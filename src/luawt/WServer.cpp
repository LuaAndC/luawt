/* luawt, Lua bindings for Wt
 * Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include <string>
#include <memory>

#include "boost-xtime.hpp"
#include <Wt/WEnvironment>
#include <Wt/WServer>
#include <Wt/WIOService>

#include "globals.hpp"

class luawt_AppCreator {
public:
    luawt_AppCreator(const std::string& code):
        code_(code) {
    }

    WApplication* operator()(const WEnvironment& env) const {
        std::auto_ptr<luawt_Application> app(
            new luawt_Application(0, env)
        );
        int status = luaL_loadstring(app->L(),
                                     code_.c_str());
        checkPcallStatus(app->L(), status);
        luawt_toLua<luawt_Application>(app->L(), &(*app));
        WEnvironment& env_nonconst =
            const_cast<WEnvironment&>(env);
        luawt_toLua<WEnvironment>(app->L(), &env_nonconst);
        status = lua_pcall(app->L(), 2, 0, 0);
        checkPcallStatus(app->L(), status);
        return app.release();
    }

private:
    std::string code_;
};

/** Creates the Wt application server
    Argument 1 is table of options
    Possible options: code, port, config.
*/
int luawt_WServer_make(lua_State* L) {
    luaL_checktype(L, 1, LUA_TTABLE);
    // get code
    lua_getfield(L, 1, "code");
    size_t code_len;
    const char* code = luaL_checklstring(L, -1, &code_len);
    // get port
    lua_getfield(L, 1, "port");
    const char* port = luaL_checkstring(L, -1);
    // get config
    lua_getfield(L, 1, "wt_config");
    const char* config = luaL_checkstring(L, -1);
    // make argc, argv
    typedef std::vector<const char*> Options;
    Options opt;
    opt.push_back("luawt");
    opt.push_back("--http-address=127.0.0.1");
    opt.push_back("--http-port");
    opt.push_back(port);
    opt.push_back("--docroot=/usr/share/Wt");
    opt.push_back("--config");
    opt.push_back(config);
    opt.push_back(0);
    WServer* server = reinterpret_cast<WServer*>(
        lua_newuserdata(L, sizeof(WServer))
    );
    int argc = opt.size() - 1;
    char** argv = const_cast<char**>(&opt[0]);
    new (server) WServer();
    server->setServerConfiguration(argc, argv);
    server->addEntryPoint(
        Wt::Application,
        luawt_AppCreator(std::string(code, code_len))
    );
    luaL_getmetatable(L, "luawt_WServer");
    lua_setmetatable(L, -2);
    return 1;
}

int luawt_WServer_removeEntryPoint(lua_State* L) {
    WServer* server = reinterpret_cast<WServer*>(
        luaL_checkudata(L, 1, "luawt_WServer")
    );
    const char* path = luaL_checkstring(L, 2);
    server->removeEntryPoint(path);
    return 0;
}

int luawt_WServer_isRunning(lua_State* L) {
    WServer* server = reinterpret_cast<WServer*>(
        luaL_checkudata(L, 1, "luawt_WServer")
    );
    lua_pushboolean(L, server->isRunning());
    return 1;
}

int luawt_WServer_start(lua_State* L) {
    WServer* server = reinterpret_cast<WServer*>(
        luaL_checkudata(L, 1, "luawt_WServer")
    );
    bool ok = server->start();
    lua_pushboolean(L, ok);
    return 1;
}

int luawt_WServer_stop(lua_State* L) {
    WServer* s = reinterpret_cast<WServer*>(
        luaL_checkudata(L, 1, "luawt_WServer")
    );
    bool force = lua_toboolean(L, 2);
    if (force) {
        s->ioService().boost::asio::io_service::stop();
    }
    s->stop();
    return 0;
}

int luawt_WServer_gc(lua_State* L) {
    WServer* s = reinterpret_cast<WServer*>(
        luaL_checkudata(L, 1, "luawt_WServer")
    );
    s->WServer::~WServer();
    return 0;
}

static const luaL_Reg luawt_WServer_mt[] = {
    MT_METHOD(WServer, gc),
    {NULL, NULL},
};

static const luaL_Reg luawt_WServer_methods[] = {
    METHOD(WServer, removeEntryPoint),
    METHOD(WServer, isRunning),
    METHOD(WServer, start),
    METHOD(WServer, stop),
    {NULL, NULL},
};

void luawt_WServer(lua_State* L) {
    luaL_newmetatable(L, "luawt_WServer");
    my_setfuncs(L, luawt_WServer_mt);
    lua_newtable(L);
    my_setfuncs(L, luawt_WServer_methods);
    lua_setfield(L, -2, "__index");
    lua_pop(L, 1); // mt
    // put make to luawt
    luaL_getmetatable(L, "luawt");
    lua_pushcfunction(L, wrap<luawt_WServer_make>::func);
    lua_setfield(L, -2, "WServer");
    lua_pop(L, 1); // luawt
}
