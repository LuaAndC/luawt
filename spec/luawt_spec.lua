-- luawt, Lua bindings for Wt
-- Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

describe("luawt", function()

    it("requires main module", function()
        local luawt = require 'luawt'
    end)

    pending("creates simple application", function()
        local luawt = require 'luawt'
        local llthreads2 = require 'llthreads2'
        local thread = llthreads2.new [=[
            luawt.WServer.WRun {
                code = [[
                    local app, env = ...
                    local luawt = require 'luawt'
                    if luawt.Shared.test then
                        luawt.server:stop()
                    else
                        luawt.Shared.test = 'true'
                        local text = "IP: " .. env:clientAddress()
                        local button = lua.WPushButton(app:root())
                        button:setText(text)
                    end
                ]],
                port = 56789,
            }
        ]=]
        thread:start()
        os.execute("sleep 2")
        local socket = require 'socket.http'
        local data = socket.request('http://127.0.0.1:56789/')
        assert.truthy(data:match('IP:'))
        -- killing request
        socket.request('http://127.0.0.1:56789/')
        thread:join()
    end)

end)
