// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: esp32_p4_eye_factory

#include "../ui.h"

void ui_ScreenAlbum_screen_init(void)
{
    ui_ScreenAlbum = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenAlbum, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ImageScreenAlbum = lv_canvas_create(ui_ScreenAlbum);
    lv_obj_set_width(ui_ImageScreenAlbum, 240);
    lv_obj_set_height(ui_ImageScreenAlbum, 240);
    lv_obj_set_align(ui_ImageScreenAlbum, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageScreenAlbum, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageScreenAlbum, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ImageAlbumMenu = lv_img_create(ui_ImageScreenAlbum);
    lv_img_set_src(ui_ImageAlbumMenu, &ui_img_button_menu_png);
    lv_obj_set_width(ui_ImageAlbumMenu, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImageAlbumMenu, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ImageAlbumMenu, 100);
    lv_obj_set_y(ui_ImageAlbumMenu, -47);
    lv_obj_set_align(ui_ImageAlbumMenu, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageAlbumMenu, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageAlbumMenu, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ImageAlbumUp = lv_img_create(ui_ImageScreenAlbum);
    lv_img_set_src(ui_ImageAlbumUp, &ui_img_up_button_png);
    lv_obj_set_width(ui_ImageAlbumUp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImageAlbumUp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ImageAlbumUp, 100);
    lv_obj_set_y(ui_ImageAlbumUp, 0);
    lv_obj_set_align(ui_ImageAlbumUp, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageAlbumUp, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageAlbumUp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ImageAlbumDown = lv_img_create(ui_ImageScreenAlbum);
    lv_img_set_src(ui_ImageAlbumDown, &ui_img_button_down_png);
    lv_obj_set_width(ui_ImageAlbumDown, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImageAlbumDown, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ImageAlbumDown, 100);
    lv_obj_set_y(ui_ImageAlbumDown, 55);
    lv_obj_set_align(ui_ImageAlbumDown, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageAlbumDown, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageAlbumDown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PanelImageScreenAlbumDelete = lv_obj_create(ui_ImageScreenAlbum);
    lv_obj_set_width(ui_PanelImageScreenAlbumDelete, 181);
    lv_obj_set_height(ui_PanelImageScreenAlbumDelete, 185);
    lv_obj_set_x(ui_PanelImageScreenAlbumDelete, -13);
    lv_obj_set_y(ui_PanelImageScreenAlbumDelete, 4);
    lv_obj_set_align(ui_PanelImageScreenAlbumDelete, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PanelImageScreenAlbumDelete, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_PanelImageScreenAlbumDelete, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PanelImageScreenAlbumDelete, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PanelImageScreenAlbumDelete, lv_color_hex(0xC9C9C9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelImageScreenAlbumDelete, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_PanelImageScreenAlbumDelete, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_PanelImageScreenAlbumDelete, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PanelImageScreenAlbumDelete, lv_color_hex(0xC9C9C9), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_PanelImageScreenAlbumDelete, 120, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_LabelPanelImageScreenAlbumDelete = lv_label_create(ui_PanelImageScreenAlbumDelete);
    lv_obj_set_width(ui_LabelPanelImageScreenAlbumDelete, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelPanelImageScreenAlbumDelete, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelPanelImageScreenAlbumDelete, 2);
    lv_obj_set_y(ui_LabelPanelImageScreenAlbumDelete, -43);
    lv_obj_set_align(ui_LabelPanelImageScreenAlbumDelete, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelPanelImageScreenAlbumDelete, "Delete?");
    lv_obj_set_style_text_color(ui_LabelPanelImageScreenAlbumDelete, lv_color_hex(0x000000),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelPanelImageScreenAlbumDelete, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelPanelImageScreenAlbumDelete, &ui_font_FontKoHoBold28,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPanelImageScreenAlbumDeleteYES = lv_btn_create(ui_PanelImageScreenAlbumDelete);
    lv_obj_set_width(ui_ButtonPanelImageScreenAlbumDeleteYES, 140);
    lv_obj_set_height(ui_ButtonPanelImageScreenAlbumDeleteYES, 30);
    lv_obj_set_x(ui_ButtonPanelImageScreenAlbumDeleteYES, -2);
    lv_obj_set_y(ui_ButtonPanelImageScreenAlbumDeleteYES, -1);
    lv_obj_set_align(ui_ButtonPanelImageScreenAlbumDeleteYES, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPanelImageScreenAlbumDeleteYES, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPanelImageScreenAlbumDeleteYES, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPanelImageScreenAlbumDeleteYES, lv_color_hex(0xFFFFFF),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPanelImageScreenAlbumDeleteYES, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ButtonPanelImageScreenAlbumDeleteYES, lv_color_hex(0xFFFFFF),
                              LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_ButtonPanelImageScreenAlbumDeleteYES, 150, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_LabelButtonPanelImageScreenAlbumDeleteYES = lv_label_create(ui_ButtonPanelImageScreenAlbumDeleteYES);
    lv_obj_set_width(ui_LabelButtonPanelImageScreenAlbumDeleteYES, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonPanelImageScreenAlbumDeleteYES, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelButtonPanelImageScreenAlbumDeleteYES, 0);
    lv_obj_set_y(ui_LabelButtonPanelImageScreenAlbumDeleteYES, 2);
    lv_obj_set_align(ui_LabelButtonPanelImageScreenAlbumDeleteYES, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPanelImageScreenAlbumDeleteYES, "YES");
    lv_obj_set_style_text_color(ui_LabelButtonPanelImageScreenAlbumDeleteYES, lv_color_hex(0xFF0202),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPanelImageScreenAlbumDeleteYES, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPanelImageScreenAlbumDeleteNO = lv_btn_create(ui_PanelImageScreenAlbumDelete);
    lv_obj_set_width(ui_ButtonPanelImageScreenAlbumDeleteNO, 140);
    lv_obj_set_height(ui_ButtonPanelImageScreenAlbumDeleteNO, 30);
    lv_obj_set_x(ui_ButtonPanelImageScreenAlbumDeleteNO, -2);
    lv_obj_set_y(ui_ButtonPanelImageScreenAlbumDeleteNO, 42);
    lv_obj_set_align(ui_ButtonPanelImageScreenAlbumDeleteNO, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPanelImageScreenAlbumDeleteNO, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPanelImageScreenAlbumDeleteNO, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPanelImageScreenAlbumDeleteNO, lv_color_hex(0xFFFFFF),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPanelImageScreenAlbumDeleteNO, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ButtonPanelImageScreenAlbumDeleteNO, lv_color_hex(0xFFFFFF),
                              LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_ButtonPanelImageScreenAlbumDeleteNO, 150, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_LabelButtonPanelImageScreenAlbumDeleteNO = lv_label_create(ui_ButtonPanelImageScreenAlbumDeleteNO);
    lv_obj_set_width(ui_LabelButtonPanelImageScreenAlbumDeleteNO, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonPanelImageScreenAlbumDeleteNO, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelButtonPanelImageScreenAlbumDeleteNO, 0);
    lv_obj_set_y(ui_LabelButtonPanelImageScreenAlbumDeleteNO, 2);
    lv_obj_set_align(ui_LabelButtonPanelImageScreenAlbumDeleteNO, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonPanelImageScreenAlbumDeleteNO, "NO");
    lv_obj_set_style_text_color(ui_LabelButtonPanelImageScreenAlbumDeleteNO, lv_color_hex(0x000000),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelButtonPanelImageScreenAlbumDeleteNO, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelAlbumPopupSDWarning = lv_obj_create(ui_ScreenAlbum);
    lv_obj_set_width(ui_PanelAlbumPopupSDWarning, 212);
    lv_obj_set_height(ui_PanelAlbumPopupSDWarning, 212);
    lv_obj_set_x(ui_PanelAlbumPopupSDWarning, -15);
    lv_obj_set_y(ui_PanelAlbumPopupSDWarning, 0);
    lv_obj_set_align(ui_PanelAlbumPopupSDWarning, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PanelAlbumPopupSDWarning, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_PanelAlbumPopupSDWarning, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PanelAlbumPopupSDWarning, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PanelAlbumPopupSDWarning, lv_color_hex(0xC9C9C9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelAlbumPopupSDWarning, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_PanelAlbumPopupSDWarning, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_PanelAlbumPopupSDWarning, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelPanelAlbumPopupSDWarning = lv_label_create(ui_PanelAlbumPopupSDWarning);
    lv_obj_set_width(ui_LabelPanelAlbumPopupSDWarning, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelPanelAlbumPopupSDWarning, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelPanelAlbumPopupSDWarning, -4);
    lv_obj_set_y(ui_LabelPanelAlbumPopupSDWarning, -70);
    lv_obj_set_align(ui_LabelPanelAlbumPopupSDWarning, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelPanelAlbumPopupSDWarning, "Warning");
    lv_obj_set_style_text_color(ui_LabelPanelAlbumPopupSDWarning, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelPanelAlbumPopupSDWarning, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelPanelAlbumPopupSDWarning, &ui_font_FontKoHoBold28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelAlbumPopupCameraSDWarning = lv_obj_create(ui_PanelAlbumPopupSDWarning);
    lv_obj_set_width(ui_PanelAlbumPopupCameraSDWarning, 197);
    lv_obj_set_height(ui_PanelAlbumPopupCameraSDWarning, 6);
    lv_obj_set_x(ui_PanelAlbumPopupCameraSDWarning, -1);
    lv_obj_set_y(ui_PanelAlbumPopupCameraSDWarning, -36);
    lv_obj_set_align(ui_PanelAlbumPopupCameraSDWarning, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelAlbumPopupCameraSDWarning, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelAlbumPopupCameraSDWarning, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelAlbumPopupCameraSDWarning, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelPanelAlbumPopupCameraSDWarning = lv_label_create(ui_PanelAlbumPopupSDWarning);
    lv_obj_set_width(ui_LabelPanelAlbumPopupCameraSDWarning, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelPanelAlbumPopupCameraSDWarning, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelPanelAlbumPopupCameraSDWarning, 3);
    lv_obj_set_y(ui_LabelPanelAlbumPopupCameraSDWarning, 39);
    lv_obj_set_align(ui_LabelPanelAlbumPopupCameraSDWarning, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelPanelAlbumPopupCameraSDWarning,
                      "No SDCard detected\n\n  Insert SDCard to \n          continue");
    lv_obj_set_style_text_color(ui_LabelPanelAlbumPopupCameraSDWarning, lv_color_hex(0x000000),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelPanelAlbumPopupCameraSDWarning, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelPanelAlbumPopupCameraSDWarning, &ui_font_FontKoHoMiniBold22,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

}
