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

// arguments:
// 1. argc, integer
// 2. argv, Lua string
// 3. ApplicationCreator, Lua metatable
static int lua_Wrun(lua_State* L) {
    return 1;
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

}
