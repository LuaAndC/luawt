-- This code is executed in constructor of new application.
-- It setups widgets of a start page shown to a user.
local luawt = require 'luawt'

-- app is an instance of WApplication
-- env is an instance of WEnvironment
local app, env = ...

function breakTheLine()
    app:root():addWidget(luawt.WBreak())
    app:root():addWidget(luawt.WBreak())
end

function mainApp()
    app:setTitle('Hello!')
    -- Use CSS style sheet file. Note that it should be in docroot
    -- specified by WServer's options.
    app:useStyleSheet('./common.css')
    -- Set AlignmentFlag enum in the form of string.
    app:root():setContentAlignment('AlignCenter')
    -- Enums can be represented in many ways, see docs/enums.md
    -- for more information.

    -- Create widgets.
    local text = luawt.WText('Your name, please?')
    breakTheLine()
    local name_edit = luawt.WLineEdit(app:root())
    breakTheLine()
    name_edit:setFocus()
    local button = luawt.WPushButton('Greet me', app:root())
    -- Set CSS style classes (from common.css).
    button:setStyleClass('button')
    text:setStyleClass('my_text')
    -- Setup singal handler.
    button:clicked():connect(function()
        text:setText('Hello there, ' .. name_edit:text())
    end)
end

mainApp()
