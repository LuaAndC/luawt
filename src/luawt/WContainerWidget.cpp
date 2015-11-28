/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "boost-xtime.hpp"
#include <Wt/WContainerWidget>

#include "globals.hpp"

void luawt_WContainerWidget(lua_State* L) {
    const char* base = luawt_typeToStr<WWidget>();
    DECLARE_CLASS(
        WContainerWidget,
        L,
        0,
        0,
        0,
        base
    );
}
