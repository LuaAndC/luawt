local luawt = require 'luawt'

-- Get code of the application as a string.
local module_file = io.open('./examples/hello/hello.lua', 'r')
local code = module_file:read('*all')
module_file:close()

-- Create and start WServer.
-- `docroot` option is needed to find static resources (CSS in our case).
local server = luawt.WServer({
    code = code,
    ip = '0.0.0.0',
    port = 12346,
    docroot = './examples',
})
server:start()
server:waitForShutdown()
