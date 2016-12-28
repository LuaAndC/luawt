-- luawt, Lua bindings for Wt
-- Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
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
                "src/luawt/WApplication.cpp",
                "src/luawt/WContainerWidget.cpp",
                "src/luawt/WEnvironment.cpp",
                "src/luawt/WPushButton.cpp",
                "src/luawt/WServer.cpp",
                "src/luawt/WWidget.cpp",
                "src/luawt/init.cpp",
                "src/luawt/shared.cpp",
                "src/luawt/test.cpp",
            },
            libraries = {
                "wt",
                "wthttp",
                "boost_system-mt",
            },
            incdirs = {
                "src", -- for boost-xtime.hpp
            },
        },
        ['luawt.test'] = "src/luawt/test.lua",
    },
    platforms = {
        unix = {
            modules = {
                luawt = {
                    libraries = {
                        "wt",
                        "wthttp",
                        "boost_system",
                        "stdc++"
                    },
                },
            },
        },
    },
}
