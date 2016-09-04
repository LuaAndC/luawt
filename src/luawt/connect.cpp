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

