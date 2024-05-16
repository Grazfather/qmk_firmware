// Copyright 2024 Grazfather (@Grazfather)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
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


#define RGBLIGHT_LAYERS
#define WS2812_DI_PIN GP16
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB
// #define NOP_FUDGE 0.4
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
