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
#undef MODULE

extern "C" {

int luaopen_luawt(lua_State* L) {
    luaL_newmetatable(L, "luawt"); // module luawt
    for (const LuawtReg* reg = luawt_modules; reg->name; ++reg) {
        int stack_size1 = lua_gettop(L);
        reg->func(L); // must not change stack
        int stack_size2 = lua_gettop(L);
        assert(stack_size2 == stack_size1);
    }
    return 1;
}

}
