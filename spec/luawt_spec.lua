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

    it("#requires main module", function()
        local luawt = require 'luawt'
    end)

    it("uses #wrap with unknown exceptions", function()
        local luawt = require 'luawt'
        local code = [[
            local luawt = require 'luawt'
            luawt.Test.unknownException()
        ]]
        local port = 56789
        local wt_config = baseConfig()
        local server = createServer(code, port, wt_config)
        assert.has_no_error(function()
            server:start()
            local data = socketRequest(port)
            server:stop(true)
        end)
    end)

    it("can stop the server #forcibly", function()
        local luawt = require 'luawt'
        local code = ''
        local port = 56789
        local wt_config = baseConfig()
        local server = createServer(code, port, wt_config)
        server:start()
        local data = socketRequest(port)
        server:stop(true)
    end)

    it("doesn't throw on bad #syntax in lua code", function()
        local luawt = require 'luawt'
        local code = "(;(;(;)))))"
        local port = 56789
        local wt_config = baseConfig()
        local server = createServer(code, port, wt_config)
        assert.has_no_error(function()
            server:start()
            local data = socketRequest(port)
            server:stop(true)
        end)
        os.remove(wt_config)
    end)

    it("creates #simple application", function()
        local luawt = require 'luawt'
        local code = [[
            local app, env = ...
            local luawt = require 'luawt'
            local text = "IP: " .. env:clientAddress()
            local button = luawt.WPushButton(app:root())
            button:setText(text)
        ]]
        local port = 56789
        local wt_config = baseConfig()
        local server = createServer(code, port, wt_config)
        server:start()
        local data = socketRequest(port)
        assert.truthy(data:match('IP:'))
        server:stop()
        os.remove(wt_config)
    end)

end)
