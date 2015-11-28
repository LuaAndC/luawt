/* luawt, Lua bindings for Wt
 * Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include <string>

#include "boost-xtime.hpp"
#include <Wt/WApplication>
#include <Wt/WEnvironment>

#include "globals.hpp"

/** Returns the IP address of the client */
int luawt_WEnvironment_clientAddress(lua_State* L) {
    const std::string& address =
        WApplication::instance()->environment().clientAddress();
    lua_pushlstring(L, address.c_str(), address.size());
    return 1;
}

static const luaL_Reg luawt_WEnvironment_methods[] = {
    METHOD(WEnvironment, clientAddress),
    {NULL, NULL},
};

void luawt_WEnvironment(lua_State* L) {
    DECLARE_CLASS(
        WEnvironment,
        L,
        0,
        0,
        luawt_WEnvironment_methods,
        0
    );
}
