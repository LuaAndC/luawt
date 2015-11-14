/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "globals.hpp"

typedef void (*luawtFunction) (lua_State *L);

typedef struct LuawtReg {
  const char *name;
  luawtFunction func;
} LuawtReg;

#define MODULE(name) {#name, luawt##name}
static const LuawtReg luawt_modules[] = {
    // Base must be before child
    MODULE(Shared),
    MODULE(WApplication),
    MODULE(WEnvironment),
    MODULE(WServer),
    MODULE(WWidget),
    MODULE(WContainerWidget),
    MODULE(WPushButton),
    {NULL, NULL},
};

extern "C" {

int luaopen_luawt(lua_State* L) {
    lua_newtable(L); // module luawt
    for (const LuawtReg* reg = luawt_modules; reg->name; ++reg) {
        reg->func(L); // must push 1 object (module)
        lua_setfield(L, -2, reg->name);
    }
    return 1;
}

}
