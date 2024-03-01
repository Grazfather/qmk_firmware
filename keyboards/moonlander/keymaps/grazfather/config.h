/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 175

#define RETRO_TAPPING

// Register a mod + key as soon as the key is released instead of when the mod
// is released.
#define PERMISSIVE_HOLD

// Don't register a tap then hold on one key as a hold of the tapped key. Let
// the hold work as a mod.
#define TAPPING_FORCE_HOLD

// When I quickly hit a layer toggle with a tap (LT), use the hold function if
// I hit another key, even if I don't hold it for TAPPING_TERM
#define HOLD_ON_OTHER_KEY_PRESS

#undef IGNORE_MOD_TAP_INTERRUPT

#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 600000

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"rOeRb/nAWqK"
#define RGB_MATRIX_STARTUP_SPD 60
