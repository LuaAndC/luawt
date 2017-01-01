#include "boost-xtime.hpp"

#include <Wt/WAbstractMedia>

#include "globals.hpp"


static const luaL_Reg luawt_WAbstractMedia_methods[] = {
    {NULL, NULL},
};

void luawt_WAbstractMedia(lua_State* L) {
    const char* base = luawt_typeToStr<WInteractWidget>();
    assert(base);
    DECLARE_CLASS(
        WAbstractMedia,
        L,
        0,
        0,
        luawt_WAbstractMedia_methods,
        base
    );
}
