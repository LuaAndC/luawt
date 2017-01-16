-- luawt, Lua bindings for Wt
-- Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

local test = require 'luawt.test'

describe("luawt.Shared", function()

    it("uses Shared correctly", function()
        local luawt = require 'luawt'
        luawt.Shared.test = 'true'
        assert.equal(luawt.Shared.test, 'true')
        luawt.Shared.test = nil
        assert.equal(luawt.Shared.test, nil)
    end)

    it("syncs from child thread", function()
        local luawt = require 'luawt'
        luawt.Shared.foo = "bar"
        local code = [[
            local luawt = require 'luawt'
            assert(luawt.Shared.foo == "bar")
            luawt.Shared.bar = "foo"
        ]]
        local server, wt_config = test.getData(code)
        test.clear(server, wt_config, false)
        assert(luawt.Shared.bar == "foo")
    end)

end)
