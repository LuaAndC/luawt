#include "boost-xtime.hpp"

#include <Wt/WAbstractSpinBox>

#include "globals.hpp"


static const luaL_Reg luawt_WAbstractSpinBox_methods[] = {
    {NULL, NULL},
};

void luawt_WAbstractSpinBox(lua_State* L) {
    const char* base = luawt_typeToStr<WLineEdit>();
    assert(base);
    DECLARE_CLASS(
        WAbstractSpinBox,
        L,
        0,
        0,
        luawt_WAbstractSpinBox_methods,
        base
    );
}
