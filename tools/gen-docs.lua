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
for k in reg do
    if k:match('2Wt%d') then
        table.insert(classes, k)
    end
end

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
    local mt = debug.getregistry()[mangled]
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
