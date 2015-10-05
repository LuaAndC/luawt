-- luawt, Lua bindings for Wt
-- Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

describe("luawt.Shared", function()

    it("uses Shared correctly", function()
        local luawt = require 'luawt'
        luawt.Shared.test = 'true'
        assert.equal(luawt.Shared.test, 'true')
        luawt.Shared.test = nil
        assert.equal(luawt.Shared.test, nil)
    end)

    it("uses Shared from another thread", function()
        local llthreads2 = require 'llthreads2'
        local thread = llthreads2.new [[
            local luawt = require 'luawt'
            luawt.Shared.abc = "def"
        ]]
        thread:start()
        thread:join()
        local luawt = require 'luawt'
        assert.equal("def", luawt.Shared.abc)
    end)

end)

