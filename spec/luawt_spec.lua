-- luawt, Lua bindings for Wt
-- Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

describe("luawt", function()

    it("requires main module", function()
        local luawt = require 'luawt'
    end)

    it("uses shared correctly", function()
        local luawt = require 'luawt'
        luawt.shared.test = 'true'
        assert.equal(luawt.shared.test, 'true')
        luawt.shared.test = nil
        assert.equal(luawt.shared.test, nil)
    end)

    pending("creates simple application", function()
        local luawt = require 'luawt'
        luawt.WRun {
            code = [[
                local app, env = ...
                local luawt = require 'luawt'
                if luawt.shared.test then
                    luawt.server:stop()
                else
                    luawt.shared.test = 'true'
                    local text = "IP: " .. env:clientAddress()
                    app:root():addWidget(lua.WPushButton(text))
                end
            ]],
        }
    end)

end)
