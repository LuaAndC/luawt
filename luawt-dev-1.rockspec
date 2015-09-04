-- luawt, Lua bindings for Wt
-- Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

package = "luawt"
version = "dev-1"
source = {
    url = "git@github.com:zer0main/luawt.git",
}
description = {
    summary = "Lua bindings for Wt",
    homepage = "https://github.com/zer0main/luawt",
    license = "MIT",
}
dependencies = {
    "lua >= 5.1",
}
external_dependencies = {
    WT = {
        header = "Wt/DomElement.h",
    },
}
build = {
    type = "builtin",
    modules = {
        ['luawt'] = 'src/luawt/init.lua',
    },
}
