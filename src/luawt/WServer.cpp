/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include <string>
#include <memory>

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

extern "C" {

int lua_WRun(lua_State* L) {
    luaL_checktype(L, 1, LUA_TTABLE);
    lua_getfield(L, 1, "code");
    size_t code_len;
    const char* code = luaL_checklstring(L, 2, &code_len);
    int argc = 1;
    char* argv[] = {"", NULL};
    WRun(argc, argv, LuaAppCreator(std::string(code, code_len)));
    return 0;
}

}
