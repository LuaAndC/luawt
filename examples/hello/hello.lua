local luawt = require 'luawt'

local app, env = ...

function breakTheLine()
    app:root():addWidget(luawt.WBreak())
    app:root():addWidget(luawt.WBreak())
end

function mainApp()
    app:setTitle('Hello!')
    app:useStyleSheet('./common.css')
    app:root():setContentAlignment(4)
    local text = luawt.WText('Your name, please?')
    breakTheLine()
    local name_edit = luawt.WLineEdit(app:root())
    breakTheLine()
    name_edit:setFocus()
    local button = luawt.WPushButton('Greet me', app:root())
    button:setStyleClass('button')
    text:setStyleClass('my_text')
    button:clicked():connect(function()
        text:setText('Hello there, ' .. name_edit:text())
    end)
end

mainApp()
