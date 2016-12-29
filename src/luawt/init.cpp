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
    MODULE(WServer),
    MODULE(WWidget),
    MODULE(WContainerWidget),
    MODULE(WImage),
    MODULE(WPushButton),
    MODULE(WProgressBar),
    MODULE(WSlider),
    MODULE(WComboBox),
    MODULE(WFileUpload),
    MODULE(WFlashObject),
    MODULE(WScrollArea),
    MODULE(WVideo),
    MODULE(WCheckBox),
    MODULE(WLineEdit),
    MODULE(WSpinBox),
    MODULE(WDoubleSpinBox),
    MODULE(WDateEdit),
    MODULE(WSelectionBox),
    MODULE(WIcon),
    MODULE(WAudio),
    MODULE(WText),
    MODULE(WLabel),
    MODULE(WGLWidget),
    MODULE(WTextArea),
    MODULE(WTable),
    MODULE(WCompositeWidget),
    MODULE(WSplitButton),
    MODULE(WInPlaceEdit),
    MODULE(WTableView),
    MODULE(WTreeTable),
    MODULE(WPanel),
    MODULE(WTreeNode),
    MODULE(WTree),
    MODULE(WIconPair),
    MODULE(WGoogleMap),
    MODULE(WToolBar),
    MODULE(WVirtualImage),
    MODULE(WCalendar),
    MODULE(WMenu),
    MODULE(WMediaPlayer),
    MODULE(WTreeView),
    MODULE(WTabWidget),
    MODULE(WTreeTableNode),
    MODULE(WDatePicker),
    MODULE(WPopupMenu),
    MODULE(WTemplate),
    MODULE(WNavigationBar),
    MODULE(WTextEdit),
    MODULE(WDefaultLoadingIndicator),
    MODULE(WTableCell),
    MODULE(WOverlayLoadingIndicator),
    MODULE(WStackedWidget),
    MODULE(WAnchor),
    MODULE(WGroupBox),
    {NULL, NULL},
};
#undef MODULE

extern "C" {

int luaopen_luawt(lua_State* L) {
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
