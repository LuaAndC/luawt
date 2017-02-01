local luawt = require 'luawt'

local module_file = io.open('./examples/hello/hello.lua', 'r')
local code = module_file:read('*all')
module_file:close()

local server = luawt.WServer({
    code = code,
    ip = '0.0.0.0',
    port = 12346,
    docroot = './examples/',
})
server:start()
server:waitForShutdown()
