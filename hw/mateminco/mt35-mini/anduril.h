// Mateminco MT35 Mini / Astrolux  FT03
// Copyright (C) 2022-2023 (original author TBD), Selene ToyKeeper
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "mateminco/mt35-mini/hwdef.h"

// the button lights up
#define USE_INDICATOR_LED
// the button is visible while main LEDs are on
#define USE_INDICATOR_LED_WHILE_RAMPING

#define RAMP_SIZE 150

// level_calc.py fifth 2 150 7135 1 1 120 FET 1 10 2000
#define PWM1_LEVELS 1  ,1  ,2  ,2  ,2  ,3  ,3  ,3  ,4  ,4  ,5  ,5  ,6  ,6  ,7  ,7  ,8  ,8  ,9  ,9  ,10 ,10 ,11 ,11 ,12 ,12 ,13 ,13 ,14 ,14 ,15 ,16 ,17 ,18 ,19 ,20 ,21 ,22 ,23 ,24 ,25 ,26 ,27 ,28 ,29 ,30 ,32 ,34 ,36 ,38 ,40 ,42 ,44 ,46 ,48 ,50 ,52 ,55 ,58 ,61 ,64 ,67 ,70 ,73 ,77 ,81 ,85 ,89 ,93 ,97 ,101,106,111,116,121,127,133,139,145,152,159,166,174,182,190,199,208,218,229,242,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM2_LEVELS 0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,1  ,2  ,3  ,4  ,5  ,6  ,7  ,8  ,9  ,10 ,11 ,12 ,13 ,14 ,15 ,17 ,19 ,21 ,23 ,25 ,27 ,29 ,31 ,34 ,37 ,40 ,43 ,46 ,50 ,54 ,58 ,62 ,67 ,72 ,77 ,82 ,87 ,92 ,98 ,104,110,117,124,130,136,143,150,157,164,172,180,189,198,207,216,225,234,244,255

#define DEFAULT_LEVEL       92
#define MAX_1x7135          92
#define HALFSPEED_LEVEL     20
#define QUARTERSPEED_LEVEL  10

#define RAMP_SMOOTH_FLOOR    1
#define RAMP_SMOOTH_CEIL     92
#define RAMP_DISCRETE_FLOOR  2
#define RAMP_DISCRETE_CEIL   130
#define RAMP_DISCRETE_STEPS  7

// safe limit ~33% power
#define SIMPLE_UI_FLOOR  RAMP_DISCRETE_FLOOR
#define SIMPLE_UI_CEIL   RAMP_DISCRETE_CEIL
#define SIMPLE_UI_STEPS  7

// this light should be fine running a bit hotter than most
#undef DEFAULT_THERM_CEIL
#define DEFAULT_THERM_CEIL 55

// stop panicking at ~40% power
#define THERM_FASTER_LEVEL 130
#define MIN_THERM_STEPDOWN 92 // ~600 lumens
#define THERM_RESPONSE_MAGNITUDE 30  // smaller adjustments, big body.  default = 64

#define DEFAULT_2C_STYLE 1  // enable 2 click turbo (Anduril 1 style)

#ifdef BLINK_AT_RAMP_MIDDLE
#undef BLINK_AT_RAMP_MIDDLE
#endif

// Allow 3C in Simple UI for switching between smooth and stepped ramping
#define USE_SIMPLE_UI_RAMPING_TOGGLE

// enable extra features
#define USE_SMOOTH_STEPS

// too big, turn off extra features
#undef USE_TACTICAL_MODE
#undef USE_SOS_MODE
#undef USE_RAMP_AFTER_MOON_CONFIG
//#undef USE_RAMP_SPEED_CONFIG
//#undef USE_VOLTAGE_CORRECTION
//#undef USE_2C_STYLE_CONFIG
#undef USE_MANUAL_MEMORY
#undef USE_MANUAL_MEMORY_TIMER
#undef USE_VERSION_CHECK
#undef USE_BIKE_FLASHER_MODE
#undef USE_PARTY_STROBE_MODE
#undef USE_TACTICAL_STROBE_MODE
//#undef USE_AUTOLOCK
#undef USE_MOMENTARY_MODE
