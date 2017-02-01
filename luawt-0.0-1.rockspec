-- luawt, Lua bindings for Wt
-- Copyright (c) 2015-2017 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

local function merge(...)
    local arrays = {...}
    local results = {}
    local z = 1
    for i = 1, #arrays do
        for j = 1, #arrays[i] do
            results[z] = arrays[i][j]
            z = z + 1
        end
    end
    return results
end

local common = {
    sources = {
        "src/luawt/MyApplication.cpp",
        "src/luawt/WAbstractItemView.cpp",
        "src/luawt/WAbstractMedia.cpp",
        "src/luawt/WAbstractSpinBox.cpp",
        "src/luawt/WAbstractToggleButton.cpp",
        "src/luawt/WAnchor.cpp",
        "src/luawt/WAudio.cpp",
        "src/luawt/WBreak.cpp",
        "src/luawt/WCalendar.cpp",
        "src/luawt/WCheckBox.cpp",
        "src/luawt/WComboBox.cpp",
        "src/luawt/WCompositeWidget.cpp",
        "src/luawt/WContainerWidget.cpp",
        "src/luawt/WDateEdit.cpp",
        "src/luawt/WDatePicker.cpp",
        "src/luawt/WDefaultLoadingIndicator.cpp",
        "src/luawt/WDialog.cpp",
        "src/luawt/WDoubleSpinBox.cpp",
        "src/luawt/WEnvironment.cpp",
        "src/luawt/WFileUpload.cpp",
        "src/luawt/WFlashObject.cpp",
        "src/luawt/WFormWidget.cpp",
        "src/luawt/WGLWidget.cpp",
        "src/luawt/WGoogleMap.cpp",
        "src/luawt/WGroupBox.cpp",
        "src/luawt/WIconPair.cpp",
        "src/luawt/WImage.cpp",
        "src/luawt/WInPlaceEdit.cpp",
        "src/luawt/WInteractWidget.cpp",
        "src/luawt/WLabel.cpp",
        "src/luawt/WLineEdit.cpp",
        "src/luawt/WMediaPlayer.cpp",
        "src/luawt/WMenu.cpp",
        "src/luawt/WMenuItem.cpp",
        "src/luawt/WMessageBox.cpp",
        "src/luawt/WNavigationBar.cpp",
        "src/luawt/WOverlayLoadingIndicator.cpp",
        "src/luawt/WPaintedWidget.cpp",
        "src/luawt/WPanel.cpp",
        "src/luawt/WPopupMenu.cpp",
        "src/luawt/WPopupWidget.cpp",
        "src/luawt/WProgressBar.cpp",
        "src/luawt/WPushButton.cpp",
        "src/luawt/WRadioButton.cpp",
        "src/luawt/WScrollArea.cpp",
        "src/luawt/WSelectionBox.cpp",
        "src/luawt/WSlider.cpp",
        "src/luawt/WSpinBox.cpp",
        "src/luawt/WSplitButton.cpp",
        "src/luawt/WStackedWidget.cpp",
        "src/luawt/WSuggestionPopup.cpp",
        "src/luawt/WTabWidget.cpp",
        "src/luawt/WTable.cpp",
        "src/luawt/WTableCell.cpp",
        "src/luawt/WTableView.cpp",
        "src/luawt/WTemplate.cpp",
        "src/luawt/WTemplateFormView.cpp",
        "src/luawt/WText.cpp",
        "src/luawt/WTextArea.cpp",
        "src/luawt/WTextEdit.cpp",
        "src/luawt/WTimerWidget.cpp",
        "src/luawt/WToolBar.cpp",
        "src/luawt/WTree.cpp",
        "src/luawt/WTreeNode.cpp",
        "src/luawt/WTreeTable.cpp",
        "src/luawt/WTreeTableNode.cpp",
        "src/luawt/WTreeView.cpp",
        "src/luawt/WValidationStatus.cpp",
        "src/luawt/WVideo.cpp",
        "src/luawt/WViewWidget.cpp",
        "src/luawt/WVirtualImage.cpp",
        "src/luawt/WWebWidget.cpp",
        "src/luawt/WWidget.cpp",
        "src/luawt/init.cpp",
        "src/luawt/shared.cpp",
        "src/luawt/test.cpp",
    },
    libraries = {
        "wt",
    },
    incdirs = {
        "src", -- for boost-xtime.hpp
    },
}

package = "luawt"
version = "0.0-1"
source = {
    url = "git+https://github.com/LuaAndC/luawt.git",
}
description = {
    summary = "Lua bindings for Wt",
    homepage = "https://github.com/LuaAndC/luawt",
    license = "GPL 2.0",
}
dependencies = {
    "lua >= 5.1",
}
external_dependencies = {
    WT = {
        header = "Wt/WConfig.h",
    },
}
build = {
    type = "builtin",
    modules = {
        luawt = {
            sources = merge(
                common.sources,
                {"src/luawt/WServer.cpp"}
            ),
            libraries = merge(
                common.libraries,
                {
                    "wthttp",
                    "boost_system-mt",
                }
            ),
            incdirs = common.incdirs,
        },
        luawtest = {
            sources = merge(
                common.sources,
                {"src/luawt/WTestEnvironment.cpp"}
            ),
            defines = {
                "LUAWTEST",
            },
            libraries = merge(
                common.libraries,
                {
                    "wttest",
                    "boost_system-mt",
                }
            ),
            incdirs = common.incdirs,
        },
        ['luawt.test'] = "src/luawt/test.lua",
    },
}
build.platforms = {
    unix = {
        modules = {
            luawt = {
                libraries = merge(
                    common.libraries,
                    {
                        "wthttp",
                        "boost_system",
                        "stdc++",
                    }
                ),
            },
            luawtest = {
                libraries = merge(
                    common.libraries,
                    {
                        "wttest",
                        "boost_system",
                        "stdc++",
                    }
                ),
            },
        },
    },
}
