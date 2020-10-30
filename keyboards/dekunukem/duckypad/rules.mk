MCU = STM32F072
BOARD = ST_STM32F072B_DISCOVERY

BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
SLEEP_LED_ENABLE = no
NKRO_ENABLE = no
RGBLIGHT_ENABLE = no

# TODO: Can we get this working with SPI?
WS2812_DRIVER = bitbang
RGB_MATRIX_ENABLE = WS2812

OLED_DRIVER_ENABLE = yes
