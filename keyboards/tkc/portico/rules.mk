# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes          # Mouse keys
EXTRAKEY_ENABLE = yes          # Audio control and System control
CONSOLE_ENABLE = no            # Console for debug
COMMAND_ENABLE = yes           # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no          # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no           # Enable keyboard RGB underglow
AUDIO_ENABLE = no              # Audio output
RGB_MATRIX_ENABLE = no
RGB_MATRIX_DRIVER = IS31FL3731
CIE1931_CURVE = yes

# project specific files
SRC += keyboards/wilba_tech/wt_main.c \
       keyboards/wilba_tech/wt_rgb_backlight.c \
       quantum/color.c \
       drivers/led/issi/is31fl3731.c

QUANTUM_LIB_SRC += i2c_master.c
