-- luawt, Lua bindings for Wt
-- Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

local function socketRequest(port)
    os.execute("sleep 2")
    local socket = require 'socket.http'
    local data = socket.request('http://127.0.0.1:' .. port)
    return data
end

local function baseConfig()
    local wt_config = os.tmpname()
    local file = io.open(wt_config, 'w')
    local config = [=[
        <server>
            <application-settings location="*">
                <progressive-bootstrap>
                    true
                </progressive-bootstrap>
            </application-settings>
        </server> ]=]
    file:write(config)
    file:close()
    return wt_config
end

local function createServer(code, port, wt_config)
    local luawt = require 'luawt'
    local server = luawt.WServer({
        code = code,
        port = port,
        wt_config = wt_config,
    })
    return server
end

describe("luawt", function()

    it("requires main module", function()
        local luawt = require 'luawt'
    end)

    it("can stop the server forcibly", function()
        local luawt = require 'luawt'
        local server = luawt.WServer({
            code = '',
            port = 0,
            wt_config = '',
        })
        server:start()
        server:stop(true)
    end)

    it("doesn't throw on bad syntax in lua code", function()
        local luawt = require 'luawt'
        local wt_config = os.tmpname()
        local file = io.open(wt_config, 'w')
        local config = [=[
            <server>
                <application-settings location="*">
                    <progressive-bootstrap>
                        true
                    </progressive-bootstrap>
                </application-settings>
            </server> ]=]
        file:write(config)
        file:close()
        assert.has_no_error(function()
            local server = luawt.WServer({
                code = [[
                    (;(;(;)))))
                ]],
                port = 56789,
                wt_config = wt_config,
            })
            server:start()
            os.execute("sleep 2")
            local socket = require 'socket.http'
            local data = socket.request('http://127.0.0.1:56789/')
            server:stop()
        end)
        os.remove(wt_config)
    end)

    it("creates simple application", function()
        local luawt = require 'luawt'
        local wt_config = os.tmpname()
        local file = io.open(wt_config, 'w')
        local config = [=[
            <server>
                <application-settings location="*">
                    <progressive-bootstrap>
                        true
                    </progressive-bootstrap>
                </application-settings>
            </server> ]=]
        file:write(config)
        file:close()
        local server = luawt.WServer({
            code = [[
                local app, env = ...
                local luawt = require 'luawt'
                local text = "IP: " .. env:clientAddress()
                local button = luawt.WPushButton(app:root())
                button:setText(text)
            ]],
            port = 56789,
            wt_config = wt_config,
        })
        server:start()
        os.execute("sleep 2")
        local socket = require 'socket.http'
        local data = socket.request('http://127.0.0.1:56789/')
        assert.truthy(data:match('IP:'))
        server:stop()
        os.remove(wt_config)
    end)

end)
