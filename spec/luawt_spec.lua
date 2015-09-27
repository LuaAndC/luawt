-- luawt, Lua bindings for Wt
-- Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

describe("luawt", function()

    it("requires main module", function()
        local luawt = require 'luawt'
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
