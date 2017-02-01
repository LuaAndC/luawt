local luacheck = require 'luacheck'
local luawt = require 'luawt'

local app, env = ...

app:setTitle('luacheck')
app:useStyleSheet('./common.css')

app:root():setContentAlignment(4)
local textarea = luawt.WTextArea(app:root())
app:root():addWidget(luawt.WBreak())
local button = luawt.WPushButton(app:root())
app:root():addWidget(luawt.WBreak())
button:setStyleClass('button')
button:setText('Check Lua syntax')
local result = luawt.WText(app:root())
result:setStyleClass('my_text')

button:clicked():connect(function()
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
