-- luawt, Lua bindings for Wt
-- Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

local function merge(...)
    local arrays = {...}
    local results = {}
    local z = 1
    for i = 1, #arrays do
        for j = 1, #arrays[i] do
            results[z] = arrays[i][j]
            z = z + 1
        end
    end
    return results
end

local common = {
    sources = {
        "src/luawt/WApplication.cpp",
        "src/luawt/WContainerWidget.cpp",
        "src/luawt/WEnvironment.cpp",
        "src/luawt/WPushButton.cpp",
        "src/luawt/WWidget.cpp",
        "src/luawt/init.cpp",
        "src/luawt/shared.cpp",
        "src/luawt/test.cpp",
    },
    libraries = {
        "wt",
    },
    incdirs = {
        "src", -- for boost-xtime.hpp
    },
}

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
            sources = merge(
                common.sources,
                {"src/luawt/WServer.cpp"}
            ),
            libraries = merge(
                common.libraries,
                {
                    "wthttp",
                    "boost_system-mt",
                }
            ),
            incdirs = common.incdirs,
        },
        luawtest = {
            sources = merge(
                common.sources,
                {"src/luawt/WTestEnvironment.cpp"}
            ),
            defines = {
                "LUAWTEST",
            },
            libraries = merge(
                common.libraries,
                {
                    "wttest",
                    "boost_system-mt",
                }
            ),
            incdirs = common.incdirs,
        },
        ['luawt.test'] = "src/luawt/test.lua",
    },
}
build.platforms = {
    unix = {
        modules = {
            luawt = {
                libraries = merge(
                    common.libraries,
                    {
                        "wthttp",
                        "boost_system",
                        "stdc++",
                    }
                ),
            },
            luawtest = {
                libraries = merge(
                    common.libraries,
                    {
                        "wttest",
                        "boost_system",
                        "stdc++",
                    }
                ),
            },
        },
    },
}
