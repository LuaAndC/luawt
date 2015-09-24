/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "globals.hpp"

// arguments:
// 1. argc, integer
// 2. argv, Lua string
// 3. ApplicationCreator, Lua metatable
static int lua_Wrun(lua_State* L) {
    return 1;
}
