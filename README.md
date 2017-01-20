# luawt

[![Build Status][build-status]][travis]
[![Coverage Status][coveralls-badge]][coveralls-page]
[![License][license]](LICENSE)
[![gitter][gitter-badge]][gitter-page]

Lua bindings for Wt.

## Install

Install [Wt][wt] and [luarocks][luarocks].

Clone the repo and do
`$ luarocks make`

or

`$ luarocks install luawt`

## Check

`$ busted`

## How to use

A Web application in luawt is just a Lua program.

```lua
-- This code is executed in constructor of new application.
-- It setups widgets of a start page shown to a user.
local code = [[
    -- app is an instance of WApplication
    -- env is an instance of WEnvironment
    local app, env = ...

    -- To create new widgets, we need luawt module.
    local luawt = require 'luawt'

    -- Create widgets.
    local textarea = luawt.WTextArea(app:root())
    local button = luawt.WPushButton(app:root())
    button:setText("Click me")

    -- Setup signal handler: uppercase thest in the textarea.
    button:clicked():connect(function()
        textarea:setText(textarea:text():upper())
    end)
]]

-- Start WServer with the code above.
local luawt = require 'luawt'
local server = luawt.WServer({
    code = code,
    port = 8080,
})
server:start()
server:waitForShutdown()
```

See [the list of Wt classes bound to luawt][reference].

See [examples][examples]:
 * hello [source][hello-source], [demo][hello-demo],
 * luacheck [source][luacheck-source], [demo][luacheck-demo].

## How to bind new class

 - new .cpp file
 - globals.hpp
 - init.cpp (note that base must be before child)
 - rockspec

There is the tool [automate bindings][automate_bindings] which is used
to generate most of the code. To generate code compatible with wide
range of Wt versions, the tool has an option to provide a blacklist
of classes and methods to omit. It has also an option to generate
such a blacklist.

The tool [gen docs][gen-docs] is used to generate
[reference][reference].

[license]: https://img.shields.io/badge/License-GPL2-brightgreen.png
[travis]: https://travis-ci.org/LuaAndC/luawt
[build-status]: https://travis-ci.org/LuaAndC/luawt.png?branch=master
[coveralls-page]: https://coveralls.io/r/LuaAndC/luawt
[coveralls-badge]: https://coveralls.io/repos/LuaAndC/luawt/badge.png
[gitter-page]: https://gitter.im/luawt/Lobby
[gitter-badge]: https://badges.gitter.im/USER/REPO.png
[examples]: https://github.com/LuaAndC/luawt/tree/master/examples
[reference]: https://github.com/LuaAndC/luawt/blob/master/docs/reference.md
[automate_bindings]: https://github.com/LuaAndC/luawt/blob/master/tools/automate_bindings.py
[gen-docs]: https://github.com/LuaAndC/luawt/blob/master/tools/gen-docs.lua
[wt]: https://www.webtoolkit.eu/
[luarocks]: https://luarocks.org/
[hello-source]: https://github.com/LuaAndC/luawt/tree/master/examples/hello
[hello-demo]: http://hello.locksat.tk/
[luacheck-source]: https://github.com/LuaAndC/luawt/tree/master/examples/luacheck
[luacheck-demo]: http://luawt.locksat.tk/
