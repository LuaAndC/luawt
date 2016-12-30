-- luawt, Lua bindings for Wt
-- Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

local test = {}

function test.socketRequest(port)
    local http_client = require 'socket.http'
    local data = http_client.request('http://127.0.0.1:' .. port)
    return data
end

function test.baseConfig()
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

function test.createServer(code, port, wt_config)
    local luawt = require 'luawt'
    local server = luawt.WServer({
        code = code,
        port = port,
        wt_config = wt_config,
    })
    return server
end

function test.testWidget(name)
    local luawt = require 'luawt'
    local code = ([[
        local app, env = ...
        local luawt = require 'luawt'
        local widget = luawt.%s(app:root())
        luawt.Shared.widget_id = widget:id()
    ]]):format(name)
    local port = 56789
    local wt_config = test.baseConfig()
    local server = test.createServer(code, port, wt_config)
    server:start()
    os.execute("sleep 10")
    local data = test.socketRequest(port)
    local bust_assert = require 'busted'.assert
    bust_assert.truthy(data:match(luawt.Shared.widget_id)) -- ID should be there
    os.execute("sleep 10")
    server:stop()
    os.remove(wt_config)
end

return test
