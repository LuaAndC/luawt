/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include <string>
#include <memory>

#include "boost-xtime.hpp"
#include <Wt/WText>
#include <Wt/WApplication>

#include "globals.hpp"

using namespace Wt;

class LuaAppCreator {
public:
    LuaAppCreator(const std::string& code):
        code_(code) {
    }

    WApplication* operator()(const WEnvironment& env) const {
        std::auto_ptr<WApplication> app(new WApplication(env));
        new WText(code_, app->root());
        return app.release();
    }

private:
    std::string code_;
};

/** Runs the Wt application server
    Argument 1 is table of options
    Possible options: code, port.
*/
int luawt_WServer_WRun(lua_State* L) {
    luaL_checktype(L, 1, LUA_TTABLE);
    // get code
    lua_getfield(L, 1, "code");
    size_t code_len;
    const char* code = luaL_checklstring(L, 2, &code_len);
    lua_pop(L, 1);
    // get port
    lua_getfield(L, 1, "port");
    const char* port = luaL_checkstring(L, -1);
    // make argc, argv
    typedef std::vector<const char*> Options;
    Options opt;
    opt.push_back("luawt");
    opt.push_back("--http-address=127.0.0.1");
    opt.push_back("--http-port");
    opt.push_back(port);
    opt.push_back("--docroot=/usr/share/Wt");
    opt.push_back(0);
    WRun(opt.size() - 1, const_cast<char**>(&opt[0]),
         LuaAppCreator(std::string(code, code_len)));
    return 0;
}

static const luaL_Reg functions[] = {
    METHOD(WServer, WRun),
    {NULL, NULL},
};

void luawtWServer(lua_State* L) {
    lua_newtable(L);
    my_setfuncs(L, functions);
}
