#include "boost-xtime.hpp"

#include <Wt/WInteractWidget>
#include <Wt/WContainerWidget>
#include <Wt/WString>
#include <Wt/WLineEdit>
#include <Wt/WDatePicker>
#include <Wt/WPopupWidget>
#include <Wt/WCalendar>

#include "globals.hpp"

int luawt_WDatePicker_make(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WDatePicker * result = new WDatePicker(parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 2) {
    Wt::WLineEdit* forEdit =
        luawt_checkFromLua<Wt::WLineEdit>(L, 1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WDatePicker * result = new WDatePicker(forEdit, parent);
    luawt_toLua(L, result);
    return 1;

    } else     if (argc == 3) {
    Wt::WInteractWidget* displayWidget =
        luawt_checkFromLua<Wt::WInteractWidget>(L, 1);
    Wt::WLineEdit* forEdit =
        luawt_checkFromLua<Wt::WLineEdit>(L, 2);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 3);
    WDatePicker * result = new WDatePicker(displayWidget, forEdit, parent);
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDatePicker.make: %d", argc);
    }
}

int luawt_WDatePicker_popupWidget(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
        if (argc == 0) {
    Wt::WPopupWidget * result = self->popupWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDatePicker.popupWidget: %d", argc);
    }
}

int luawt_WDatePicker_setGlobalPopup(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
        if (argc == 1) {
    bool global = lua_toboolean(L, 2);
    self->setGlobalPopup(global);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDatePicker.setGlobalPopup: %d", argc);
    }
}

int luawt_WDatePicker_format(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
        if (argc == 0) {
    Wt::WString const & result = self->format();
    lua_pushstring(L, result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDatePicker.format: %d", argc);
    }
}

int luawt_WDatePicker_setFormat(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
        if (argc == 1) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString format = Wt::WString(raw2);
    self->setFormat(format);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDatePicker.setFormat: %d", argc);
    }
}

int luawt_WDatePicker_displayWidget(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
        if (argc == 0) {
    Wt::WInteractWidget * result = self->displayWidget();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDatePicker.displayWidget: %d", argc);
    }
}

int luawt_WDatePicker_setEnabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
        if (argc == 1) {
    bool enabled = lua_toboolean(L, 2);
    self->setEnabled(enabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDatePicker.setEnabled: %d", argc);
    }
}

int luawt_WDatePicker_setDisabled(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
        if (argc == 1) {
    bool disabled = lua_toboolean(L, 2);
    self->setDisabled(disabled);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDatePicker.setDisabled: %d", argc);
    }
}

int luawt_WDatePicker_setPopupVisible(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
        if (argc == 1) {
    bool visible = lua_toboolean(L, 2);
    self->setPopupVisible(visible);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments number for WDatePicker.setPopupVisible: %d", argc);
    }
}

int luawt_WDatePicker_calendar(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
        if (argc == 0) {
    Wt::WCalendar * result = self->calendar();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDatePicker.calendar: %d", argc);
    }
}

int luawt_WDatePicker_lineEdit(lua_State* L) {
    int argc = lua_gettop(L) - 1;

    WDatePicker* self = luawt_checkFromLua<WDatePicker>(L, 1);
        if (argc == 0) {
    Wt::WLineEdit * result = self->lineEdit();
    luawt_toLua(L, result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments number for WDatePicker.lineEdit: %d", argc);
    }
}


static const luaL_Reg luawt_WDatePicker_methods[] = {
    METHOD(WDatePicker, setFormat),
    METHOD(WDatePicker, format),
    METHOD(WDatePicker, calendar),
    METHOD(WDatePicker, lineEdit),
    METHOD(WDatePicker, displayWidget),
    METHOD(WDatePicker, popupWidget),
    METHOD(WDatePicker, setEnabled),
    METHOD(WDatePicker, setDisabled),
    METHOD(WDatePicker, setGlobalPopup),
    METHOD(WDatePicker, setPopupVisible),
    {NULL, NULL},
};

void luawt_WDatePicker(lua_State* L) {
    const char* base = luawt_typeToStr<WCompositeWidget>();
    assert(base);
    DECLARE_CLASS(
        WDatePicker,
        L,
        wrap<luawt_WDatePicker_make>::func,
        0,
        luawt_WDatePicker_methods,
        base
    );
}
