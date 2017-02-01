local luawt = require 'luawt'

local module_file = io.open('./examples/luacheck/luacheck.lua')
local code = module_file:read('*all')
module_file:close()

local server = luawt.WServer({
    code = code,
    ip = '0.0.0.0',
    port = 12345,
    docroot = './examples',
})
server:start()
server:waitForShutdown()
