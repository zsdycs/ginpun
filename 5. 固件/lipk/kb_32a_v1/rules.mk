# MCU name
MCU = atmega32a

F_CPU = 16000000
F_USB = $(F_CPU)

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = USBasp

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = no       # 虚拟拨码开关配置(+1000)
MOUSEKEY_ENABLE = no        # 鼠标键(+4700)
CONSOLE_ENABLE = no         # 调试控制台(+400)
COMMAND_ENABLE = no         # 调试和配置命令
EXTRAKEY_ENABLE = yes       # 音频控制和系统控制(+450)
DYNAMIC_KEYMAP_ENABLE = no  # 无需刷新固件的可重新配置键盘
USB_6KRO_ENABLE = yes       # 6 键无冲
NKRO_ENABLE = no            # 32A 不支持全键无冲
RGBLIGHT_ENABLE = no        # 支持 RGB 背光（与 RGB_MATRIX_ENABLE 冲突）
RGB_MATRIX_ENABLE = yes     # 支持RGB矩阵
RGB_MATRIX_DRIVER = WS2812  # LED 驱动器
RGB_MATRIX_CUSTOM_KB = no   # 不允许自定义键盘效果 rgb_matrix_kb.inc
LTO_ENABLE = yes            # 减小固件的编译大小
VIA_ENABLE = no			    # 不允许使用 VIA
# RAW_ENABLE = yes          # 启用 RAW HID 命令（由键盘配置器使用）
