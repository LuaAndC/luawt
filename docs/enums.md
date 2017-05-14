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
