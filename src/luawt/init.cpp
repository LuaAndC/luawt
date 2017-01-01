/* luawt, Lua bindings for Wt
 * Copyright (c) 2015-2016 Pavel Dolgov and Boris Nagaev
 *
 * See the LICENSE file for terms of use.
 */

#include "globals.hpp"

typedef void (*luawt_Function) (lua_State *L);

typedef struct luawt_Reg {
  const char *name;
  luawt_Function func;
} luawt_Reg;

#define MODULE(name) {#name, luawt_##name}
static const luawt_Reg luawt_modules[] = {
    // Base must be before child
    MODULE(Shared),
    MODULE(Test),
    MODULE(WApplication),
    MODULE(WEnvironment),
#ifdef LUAWTEST
    MODULE(WTestEnvironment),
#else
    MODULE(WServer),
#endif
    MODULE(WWidget),
    MODULE(WWebWidget),
    MODULE(WViewWidget),
    MODULE(WFileUpload),
    MODULE(WFlashObject),
    MODULE(WScrollArea),
    MODULE(WInteractWidget),
    MODULE(WImage),
    MODULE(WProgressBar),
    MODULE(WFormWidget),
    MODULE(WAbstractToggleButton),
    MODULE(WSlider),
    MODULE(WComboBox),
    MODULE(WCheckBox),
    MODULE(WLineEdit),
    MODULE(WSpinBox),
    MODULE(WSelectionBox),
    MODULE(WText),
    MODULE(WLabel),
    MODULE(WPaintedWidget),
    MODULE(WGLWidget),
    MODULE(WTextArea),
    MODULE(WTable),
    MODULE(WCompositeWidget),
    MODULE(WInPlaceEdit),
    MODULE(WAbstractItemView),
    MODULE(WTableView),
    MODULE(WTreeTable),
    MODULE(WPanel),
    MODULE(WTreeNode),
    MODULE(WTree),
    MODULE(WIconPair),
    MODULE(WGoogleMap),
    MODULE(WVirtualImage),
    MODULE(WCalendar),
    MODULE(WMenu),
    MODULE(WTreeView),
    MODULE(WTabWidget),
    MODULE(WTreeTableNode),
    MODULE(WDefaultLoadingIndicator),
    MODULE(WDatePicker),
    MODULE(WTemplate),
    MODULE(WTextEdit),
    MODULE(WContainerWidget),
    MODULE(WOverlayLoadingIndicator),
    MODULE(WStackedWidget),
    MODULE(WAnchor),
    MODULE(WGroupBox),
    MODULE(WPushButton),
    {NULL, NULL},
};
#undef MODULE

extern "C" {

#ifdef LUAWTEST
int luaopen_luawtest(lua_State* L)
#else
int luaopen_luawt(lua_State* L)
#endif
{
    luaL_newmetatable(L, "luawt"); // module luawt
    for (const luawt_Reg* reg = luawt_modules; reg->name; ++reg) {
        int stack_size1 = lua_gettop(L);
        reg->func(L); // must not change stack
        int stack_size2 = lua_gettop(L);
        assert(stack_size2 == stack_size1);
    }
    return 1;
}

}
