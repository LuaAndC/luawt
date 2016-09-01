/* luawt, Lua bindings for Wt
 * Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include <map>
#include <memory>

#include "boost-xtime.hpp"
#include <Wt/WWidget>

#include "globals.hpp"

struct SlotWrapper {
    /* Slot func must be at the top of the stack. */
    SlotWrapper(lua_State* L):
        L_(L)
    {
        func_id_ = luaL_ref(L_, LUA_REGISTRYINDEX);
    }

    ~SlotWrapper() {
        luaL_unref(L_, LUA_REGISTRYINDEX, func_id_);
    }

    lua_State* L_;
    int func_id_;
};

class SlotWrapperPtr {
public:
    SlotWrapperPtr(lua_State* L):
        slot_wrapper_(new SlotWrapper(L)) {
    }

    /* Will be called from Wt as slot. */
    void operator()() {
        lua_rawgeti(
            slot_wrapper_->L_,
            LUA_REGISTRYINDEX,
            slot_wrapper_->func_id_
        );
        int status = lua_pcall(slot_wrapper_->L_, 0, 0, 0);
        checkPcallStatus(slot_wrapper_->L_, status);
    }

private:
    std::auto_ptr<SlotWrapper> slot_wrapper_;
};

typedef void (*connectSignalFunc) (
    WWidget* widget,
    SlotWrapperPtr slot_wrapper
);
std::map<std::string, connectSignalFunc> SignalsMap;

int luawt_connect(lua_State* L) {
    SlotWrapperPtr slot_wrapper(L);
    const char* signal_name = lua_tostring(L, 1);
    WWidget* widget = luawt_fromLua<WWidget>(L, 2);
    SignalsMap[std::string(signal_name)](widget, slot_wrapper);
    return 0;
}
