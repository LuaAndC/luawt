/* luawt, Lua bindings for Wt
 * Copyright (c) 2015-2017 Pavel Dolgov and Boris Nagaev
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
    MODULE(MyApplication),
    MODULE(Shared),
    MODULE(Test),
    MODULE(WEnvironment),
#ifdef LUAWTEST
    MODULE(WTestEnvironment),
#else
    MODULE(WServer),
#endif
    MODULE(WWidget),
    MODULE(WCompositeWidget),
    MODULE(WPopupWidget),
    MODULE(WDialog),
    MODULE(WSuggestionPopup),
    MODULE(WMessageBox),
    MODULE(WValidationStatus),
    MODULE(WToolBar),
    MODULE(WSplitButton),
    MODULE(WMediaPlayer),
    MODULE(WCalendar),
    MODULE(WDatePicker),
    MODULE(WAbstractItemView),
    MODULE(WTreeNode),
    MODULE(WInPlaceEdit),
    MODULE(WVirtualImage),
    MODULE(WPanel),
    MODULE(WTabWidget),
    MODULE(WIconPair),
    MODULE(WGoogleMap),
    MODULE(WWebWidget),
    MODULE(WBreak),
    MODULE(WInteractWidget),
    MODULE(WTimerWidget),
    MODULE(WAbstractMedia),
    MODULE(WVideo),
    MODULE(WAudio),
    MODULE(WTemplate),
    MODULE(WTemplateFormView),
    MODULE(WNavigationBar),
    MODULE(WGLWidget),
    MODULE(WProgressBar),
    MODULE(WFlashObject),
    MODULE(WScrollArea),
    MODULE(WImage),
    MODULE(WText),
    MODULE(WDefaultLoadingIndicator),
    MODULE(WLabel),
    MODULE(WTableView),
    MODULE(WTreeView),
    MODULE(WTreeTableNode),
    MODULE(WMenu),
    MODULE(WPopupMenu),
    MODULE(WTreeTable),
    MODULE(WFileUpload),
    MODULE(WTree),
    MODULE(WContainerWidget),
    MODULE(WTableCell),
    MODULE(WMenuItem),
    MODULE(WFormWidget),
    MODULE(WLineEdit),
    MODULE(WDateEdit),
    MODULE(WComboBox),
    MODULE(WTextArea),
    MODULE(WAbstractSpinBox),
    MODULE(WSpinBox),
    MODULE(WAbstractToggleButton),
    MODULE(WRadioButton),
    MODULE(WCheckBox),
    MODULE(WSlider),
    MODULE(WSelectionBox),
    MODULE(WDoubleSpinBox),
    MODULE(WPaintedWidget),
    MODULE(WTable),
    MODULE(WTextEdit),
    MODULE(WViewWidget),
    MODULE(WAnchor),
    MODULE(WOverlayLoadingIndicator),
    MODULE(WStackedWidget),
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
