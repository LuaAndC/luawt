-- luawt, Lua bindings for Wt
-- Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

package = "luawt"
version = "dev-1"
source = {
    url = "git@github.com:LuaAndC/luawt.git",
}
description = {
    summary = "Lua bindings for Wt",
    homepage = "https://github.com/LuaAndC/luawt",
    license = "GPL 2.0",
}
dependencies = {
    "lua >= 5.1",
}
external_dependencies = {
    WT = {
        header = "Wt/WConfig.h",
    },
}
build = {
    type = "builtin",
    modules = {
        luawt = {
            sources = {
                "src/luawt/init.cpp",
                "src/luawt/WServer.cpp",
                "src/luawt/shared.cpp",
            },
            libraries = {
                "wt",
                "wthttp",
            },
            incdirs = {
                "src", -- for boost-xtime.hpp
            },
        },
    },
    platforms = {
        unix = {
            modules = {
                luawt = {
                    libraries = {
                        "wt",
                        "wthttp",
                        "stdc++"
                    },
                },
            },
        },
    },
}
