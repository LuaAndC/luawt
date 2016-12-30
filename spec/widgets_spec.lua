-- luawt, Lua bindings for Wt
-- Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

local test = require 'luawt.test'

describe("luawt widgets", function()

    it("creates WPushButton", function()
        test.testWidget("WPushButton")
    end)

end)
