# Dealing with enums

## Standard (normal) enums

Passing in the form of a string or a number:
```
...
app:root():setContentAlignment('AlignCenter')
-- OR
app:root():setContentAlignment(4)
```

Return only in the form of a string, which can be converted
to a number though (see `luawt.enums` section).
```
...
local google_map = luawt.WGoogleMap(1)
google_map:apiVersion() --> 'Version3'
```

## Special (flag) enums

Passing in the form of a table containing all the strings
in the given flags combination, e.g.:
```
...
local button = luawt.WPushButton(app:root())
button:setVerticalAlignment({'AlignTop', 'AlignSub'})
```
Options for standard enums work as well:
```
...
local button = luawt.WPushButton(app:root())
button:setVerticalAlignment('AlignTop')
-- Or
button:setVerticalAlignment(192)
-- Is equal to button:setVerticalAlignment({'AlignTop', 'AlignSuper'})
```

Return in the form of table (['enum_string'] --> enum_value)
```
...

button:setVerticalAlignment({'AlignTop', 'AlignSub'})
button:verticalAlignment() --> {AlignSub = 32, AlignTop = 128,}
```
