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
        local ip = '127.0.0.1'
        local port = 56789
        local wt_config = test.baseConfig()
        local server = test.createServer(code, ip, port, wt_config)
        server:start()
        os.execute("sleep 1")
        local data = test.socketRequest(port)
        os.execute("sleep 1")
        server:stop()
        os.remove(wt_config)
        assert(luawt.Shared.bar == "foo")
    end)

end)
