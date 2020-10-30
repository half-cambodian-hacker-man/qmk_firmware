#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
      KC_NO, KC_NO, KC_NO, \
      KC_NO, KC_NO, KC_NO, \
      KC_NO, KC_NO, KC_NO, \
      KC_NO, KC_NO, KC_NO, \
      KC_NO, KC_NO, KC_NO, \
      KC_NO, KC_NO \
  )
};

void oled_task_user(void) {
    static bool initial_render = false;

    if (!initial_render) {
        oled_write("Hello from initial_render!", false);
        initial_render = true;
    }
}
