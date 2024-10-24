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
#define PWM1_LEVELS 1  ,2  ,2  ,2  ,3  ,3  ,3  ,4  ,4  ,4  ,5  ,5  ,5  ,6  ,6  ,7  ,7  ,8  ,8  ,9  ,9  ,10 ,10 ,11 ,11 ,12 ,12 ,13 ,13 ,14 ,15 ,16 ,17 ,18 ,19 ,20 ,21 ,22 ,23 ,24 ,25 ,26 ,28 ,30 ,32 ,34 ,36 ,38 ,40 ,42 ,44 ,46 ,48 ,50 ,52 ,54 ,57 ,60 ,63 ,66 ,69 ,72 ,75 ,79 ,83 ,87 ,91 ,95 ,99 ,104,109,114,119,124,129,135,141,147,154,161,168,175,183,191,200,209,219,235,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0

#define PWM2_LEVELS 0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,1  ,2  ,3  ,4  ,5  ,6  ,7  ,8  ,10 ,12 ,14 ,16 ,18 ,20 ,23 ,26 ,29 ,32 ,35 ,39 ,43 ,47 ,51 ,55 ,59 ,63 ,67 ,71 ,75 ,79 ,83 ,87 ,91 ,95 ,100,105,110,115,120,125,130,136,142,148,154,160,165,170,176,182,188,194,200,206,212,218,224,230,236,242,255

#define DEFAULT_LEVEL       90
#define MAX_1x7135          90
#define HALFSPEED_LEVEL     20
#define QUARTERSPEED_LEVEL  10

#define RAMP_SMOOTH_FLOOR    1
#define RAMP_SMOOTH_CEIL     90
#define RAMP_DISCRETE_FLOOR  2
#define RAMP_DISCRETE_CEIL   115
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
#define MIN_THERM_STEPDOWN 100 // ~600 lumens
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
//#undef USE_SOS_MODE
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
#undef USE_MOMENTARY_MODE
