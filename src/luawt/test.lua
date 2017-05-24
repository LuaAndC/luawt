-- luawt, Lua bindings for Wt
-- Copyright (c) 2015-2017 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

local test = {}

function test.sizeOf(table)
    local count = 0
    for k in pairs(table) do
        count = count + 1
    end
    return count
end

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

function test.createServer(code, ip, port, wt_config)
    local luawt = require 'luawt'
    local server = luawt.WServer({
        code = code,
        ip = ip,
        port = port,
        wt_config = wt_config,
    })
    return server
end

function test.getData(code)
    local ip = '127.0.0.1'
    local port = 56789
    local wt_config = test.baseConfig()
    local server = test.createServer(code, ip, port, wt_config)
    server:start()
    os.execute("sleep 1")
    local data = test.socketRequest(port)
    return server, wt_config, data
end

function test.clear(server, wt_config, force)
    os.execute("sleep 1")
    server:stop(force)
    os.remove(wt_config)
end

function test.baseTest(code)
    local luawt = require 'luawt'
    local server, wt_config, data = test.getData(code)
    local bust_assert = require 'busted'.assert
    bust_assert.truthy(data:match(luawt.Shared.widget_id)) -- ID should be there
    test.clear(server, wt_config)
end

function test.testWidget(name, constructor_has_arguments)
    local code = [[
        local app, env = ...
        local luawt = require 'luawt'
        local widget = luawt.%s(%s)
        luawt.Shared.widget_id = widget:id()
    ]]
    test.baseTest(code:format(name, ''))
    if constructor_has_arguments then
        test.baseTest(code:format(name, 'app:root()'))
    end
end

return test
