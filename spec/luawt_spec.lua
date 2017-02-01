-- luawt, Lua bindings for Wt
-- Copyright (c) 2015-2017 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

local test = require 'luawt.test'

describe("luawt", function()

    it("#requires main module", function()
        require 'luawt'
    end)

    pending("supports Wt's #signal/slot system", function()
        local code = [[
            local app, env = ...
            local luawt = require 'luawt'
            local button = luawt.WPushButton(app:root())
            button:clicked():connect(function()
                button:setText("was pressed")
            end)
            button:clicked():emit()
        ]]
        local server, wt_config, data = test.getData(code)
        assert.truthy(data:match('was pressed'))
        test.clear(server, wt_config, false)
    end)

    it("#works fine with #WPushButton's set/isDefault", function()
        local code = [[
            local app, env = ...
            local luawt = require 'luawt'
            local button = luawt.WPushButton(app:root())
            button:setDefault(true)
            local state1 = button:isDefault()
            button:setDefault(false)
            local state2 = button:isDefault()
            local text = tostring(state1) .. tostring(state2)
            button:setText(text)
        ]]
        local server, wt_config, data = test.getData(code)
        assert.truthy(data:match('10'))
        test.clear(server, wt_config, false)
    end)

    pending("uses #wrap with unknown exceptions", function()
        local code = [[
            local luawt = require 'luawt'
            luawt.Test.unknownException()
        ]]
        local ip = '127.0.0.1'
        local port = 56789
        local wt_config = test.baseConfig()
        local server = test.createServer(code, ip, port, wt_config)
        assert.has_no_error(function()
            server:start()
            os.execute("sleep 1")
            test.socketRequest(port)
            os.execute("sleep 1")
            server:stop(true)
        end)
        os.remove(wt_config)
    end)

    pending("can stop the server #forcibly", function()
        local code = ''
        local server, wt_config = test.getData(code)
        test.clear(server, wt_config, true)
    end)

    pending("doesn't throw on bad #syntax in lua code", function()
        local code = "(;(;(;)))))"
        local ip = '127.0.0.1'
        local port = 56789
        local wt_config = test.baseConfig()
        local server = test.createServer(code, ip, port, wt_config)
        assert.has_no_error(function()
            server:start()
            os.execute("sleep 1")
            test.socketRequest(port)
            os.execute("sleep 1")
            server:stop(true)
        end)
        os.remove(wt_config)
    end)

    it("creates #simple application", function()
        local code = [[
            local app, env = ...
            local luawt = require 'luawt'
            local text = "IP: " .. env:clientAddress()
            local button = luawt.WPushButton(app:root())
            button:setText(text)
        ]]
        local server, wt_config, data = test.getData(code)
        assert.truthy(data:match('IP:'))
        test.clear(server, wt_config, false)
    end)

end)
