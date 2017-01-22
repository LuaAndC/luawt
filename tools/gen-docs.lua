#!/usr/bin/env lua

local luawt = require 'luawt'

local non_abstract = {}
for k in pairs(luawt) do
    if k:sub(1, 1) == 'W' or k == 'MyApplication' then
        non_abstract[k] = true
    end
end

local reg = debug.getregistry()
local classes = {}
for k in pairs(reg) do
    local demangled = k:match('^2Wt%d+(.+)E$')
    if demangled then
        table.insert(classes, demangled)
    end
end
table.insert(classes, 'luawt_WServer')
table.insert(classes, 'MyApplication')
table.sort(classes)

print('# List of Wt classes bound to luawt')

for _, c in ipairs(classes) do
    local url = (
        "https://www.webtoolkit.eu/wt/doc/reference/html/classWt_1_1%s.html"
    ):format(c)
    local typ = ''
    if not non_abstract[c] then
        typ = ' (abstract)'
    end
    print((' * [%s](%s)%s'):format(c, url, typ))
    local mangled = ('2Wt%d%sE'):format(#c, c)
    if c == 'luawt_WServer' then
        mangled = 'luawt_WServer'
    elseif c == 'MyApplication' then
        mangled = '3MyApplication'
    end
    local mt = reg[mangled]
    if mt ~= nil then
        local methods = {}
        for m in pairs(mt.__index) do
            table.insert(methods, m)
        end
        table.sort(methods)
        for _, m in ipairs(methods) do
            print(('  * %s'):format(m))
        end
    end
end
