#pragma once

// Use custom magic number so that when switching branches, EEPROM always gets reset
#define EECONFIG_MAGIC_NUMBER (uint16_t)0x420

/* Set Polling rate to 1000Hz */
#define USB_POLLING_INTERVAL_MS 1

#if defined(RGBLIGHT_ENABLE)
#    undef RGBLIGHT_ANIMATIONS
#    define RGBLIGHT_SLEEP
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#endif  // RGBLIGHT_ENABLE

#if defined(RGB_MATRIX_ENABLE)
#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED

#    undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#    undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    undef ENABLE_RGB_MATRIX_BREATHING
#    undef ENABLE_RGB_MATRIX_BAND_SAT
#    undef ENABLE_RGB_MATRIX_BAND_VAL
#    undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#    undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#    undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#    undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#    undef ENABLE_RGB_MATRIX_CYCLE_ALL
#    undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    undef ENABLE_RGB_MATRIX_DUAL_BEACON
#    undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    undef ENABLE_RGB_MATRIX_RAINDROPS
#    undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    undef ENABLE_RGB_MATRIX_SPLASH
#    undef ENABLE_RGB_MATRIX_MULTISPLASH
#    undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#    undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif  // RGB_MATRIX_ENABLE

#if !defined(ONESHOT_TAP_TOGGLE)
#    define ONESHOT_TAP_TOGGLE 2
#endif  // !ONESHOT_TAP_TOGGLE

#if !defined(ONESHOT_TIMEOUT)
#    define ONESHOT_TIMEOUT 3000
#endif  // !ONESHOT_TIMEOUT

#if !defined(QMK_KEYS_PER_SCAN)
#    define QMK_KEYS_PER_SCAN 4
#endif  // !QMK_KEYS_PER_SCAN

#define IGNORE_MOD_TAP_INTERRUPT
#undef PERMISSIVE_HOLD

#define FORCE_NKRO

#if !defined(TAPPING_TOGGLE)
#    define TAPPING_TOGGLE 1
#endif

#if defined(TAPPING_TERM)
#    undef TAPPING_TERM
#endif  // TAPPING_TERM

#if defined(KEYBOARD_ergodox_ez)
#    define TAPPING_TERM 185
#elif defined(KEYBOARD_crkbd)
#    define TAPPING_TERM 200
#else
#    define TAPPING_TERM 175
#endif

#define TAP_CODE_DELAY 5

#define LEADER_TIMEOUT 250
#define LEADER_PER_KEY_TIMING

/* Disable unused and unneeded features to reduce on firmware size */
#if defined(LOCKING_SUPPORT_ENABLE)
#    undef LOCKING_SUPPORT_ENABLE
#endif

#if defined(LOCKING_RESYNC_ENABLE)
#    undef LOCKING_RESYNC_ENABLE
#endif

#if defined(OLED_FONT_H)
#    undef OLED_FONT_H
#endif

#define OLED_FONT_H "users/curry/glcdfont.c"
