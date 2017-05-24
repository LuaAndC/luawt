-- This code is executed in constructor of new application.
-- It setups widgets of a start page shown to a user.
local luacheck = require 'luacheck'
local luawt = require 'luawt'

-- app is an instance of WApplication
-- env is an instance of WEnvironment
local app, env = ...

app:setTitle('luacheck')
-- Use CSS style sheet file. Note that it should be in docroot
-- specified by WServer's options.
app:useStyleSheet('./common.css')

-- Set AlignmentFlag enum in the form of string.
app:root():setContentAlignment('AlignCenter')
-- Enums can be represented in many ways, see docs/enums.md
-- for more information.

-- Create widgets.
local textarea = luawt.WTextArea(app:root())
app:root():addWidget(luawt.WBreak())
local button = luawt.WPushButton(app:root())
app:root():addWidget(luawt.WBreak())
button:setText('Check Lua syntax')
local result = luawt.WText(app:root())
-- Set CSS style classes (from common.css).
result:setStyleClass('my_text')
button:setStyleClass('button')

-- Setup signal handler.
button:clicked():connect(function()
    -- Play with luacheck a bit.
    local c = luacheck.check_strings({textarea:text()})
    if c.fatals + c.errors + c.warnings > 0 then
        local error_msg = ''
        for i = 1, #c[1] do
            error_msg = error_msg .. luacheck.get_message(c[1][i]) .. '\n'
        end
        result:setText('\nErrors: \n' .. error_msg)
    else
        result:setText('No errors')
    end
end)
