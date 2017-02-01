-- luawt, Lua bindings for Wt
-- Copyright (c) 2015-2017 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

if os.getenv('UNDER_VALGRIND') then
    return
end

describe("luawtest", function()

    it("#requires main module", function()
        require 'luawtest'
    end)

    it("builds test application without a server", function()
        local luawtest = require 'luawtest'
        local env = luawtest.WTestEnvironment()
        local app = luawtest.MyApplication(env)
        local button = luawtest.WPushButton(app:root())
        button:setText("кнопка")
    end)
end)
