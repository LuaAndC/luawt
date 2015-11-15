/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "boost-xtime.hpp"
#include <Wt/WWidget>

#include "globals.hpp"

void luawtWWidget(lua_State* L) {
    DECLARE_CLASS(
        WWidget,
        L,
        0,
        0,
        0,
        0
    );
}
