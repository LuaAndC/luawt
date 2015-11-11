# luawt

[![Build Status][build-status]][travis]
[![Coverage Status][coveralls-badge]][coveralls-page]
[![License][license]](LICENSE)

Lua bindings for Wt.

## Install

`$ luarocks make --local`

## Check

`$ busted`

## Base format of names of lua_CFunctions:
`luawt_class-name_method`

## How to bind new class

 - new .cpp file
 - globals.hpp
 - init.cpp (note that base must be before child)
 - rockspec

[license]: https://img.shields.io/badge/License-GPL2-brightgreen.png
[travis]: https://travis-ci.org/LuaAndC/luawt
[build-status]: https://travis-ci.org/LuaAndC/luawt.png?branch=master
[coveralls-page]: https://coveralls.io/r/LuaAndC/luawt
[coveralls-badge]: https://coveralls.io/repos/LuaAndC/luawt/badge.png
