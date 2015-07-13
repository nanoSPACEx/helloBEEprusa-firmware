/**
 * MKS BASE
 */

#ifndef __AVR_ATmega2560__
  #error Oops!  Make sure you have 'Arduino Mega 2560' selected from the 'Tools -> Boards' menu.
#endif

#define LARGE_FLASH true

#define X_STEP_PIN 54
#define X_DIR_PIN 55
#define X_MIN_PIN 3
#define X_MAX_PIN 2
#define X_ENABLE_PIN 38
#define X_MS1_PIN 5
#define X_MS2_PIN 6

#define Y_STEP_PIN 60
#define Y_DIR_PIN 61
#define Y_MIN_PIN 14
#define Y_MAX_PIN 15
#define Y_ENABLE_PIN 56
#define Y_MS1_PIN 59
#define Y_MS2_PIN 58

#define Z_STEP_PIN 46
#define Z_DIR_PIN 48
#define Z_MIN_PIN 18
#define Z_MAX_PIN 19
#define Z_ENABLE_PIN 62
#define Z_MS1_PIN 22
#define Z_MS2_PIN 39

#define HEATER_BED_PIN 8
#define TEMP_BED_PIN 14

#define HEATER_0_PIN  10
#define TEMP_0_PIN 13

#define HEATER_1_PIN 7
#define TEMP_1_PIN 15

#ifdef BARICUDA
  #define HEATER_2_PIN 6
#else
  #define HEATER_2_PIN -1
#endif

#define TEMP_2_PIN -1

#define E0_STEP_PIN         26
#define E0_DIR_PIN          28
#define E0_ENABLE_PIN       24
#define E0_MS1_PIN 63
#define E0_MS2_PIN 64

#define E1_STEP_PIN         36
#define E1_DIR_PIN          34
#define E1_ENABLE_PIN       30
#define E1_MS1_PIN 57
#define E1_MS2_PIN 4

#define SDPOWER            -1
#define SDSS               53
#define LED_PIN            13
#define FAN_PIN            9

/**********************************************************
  Fan Pins
  Fan_0 8
  Fan_1 6
  Fan_2 2
***********************************************************/
#define PS_ON_PIN          -1
#define KILL_PIN           80 //80 with Smart Controller LCD
#define SUICIDE_PIN        -1  //PIN that has to be turned on right after start, to keep power flowing.


#define BEEPER 37      // Beeper on AUX-4
#define LCD_PINS_RS 16
#define LCD_PINS_ENABLE 17
#define LCD_PINS_D4 23
#define LCD_PINS_D5 25
#define LCD_PINS_D6 27
#define LCD_PINS_D7 29

//buttons are directly attached using AUX-2
#define BTN_EN1 33
#define BTN_EN2 31
#define BTN_ENC 35  //the click

#define SDCARDDETECT 49    // Ramps does not use this port

#ifndef SDSUPPORT
  // these pins are defined in the SD library if building with SD support
  #define SCK_PIN          52
  #define MISO_PIN         50
  #define MOSI_PIN         51
#endif

