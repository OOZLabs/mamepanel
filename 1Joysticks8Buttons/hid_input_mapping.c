/* Name: hid_input_mapping.c
 * Project: V-USB Mame Panel
 * Author: Andreas Oberdorfer
 * Creation Date: 2009-09-19
 * Copyright 2009 - 2011 Andreas Oberdorfer
 * License: GNU GPL v2 (see License.txt) or proprietary (CommercialLicense.txt)
 */

#include "hid_input_mapping.h"

#include <avr/pgmspace.h>

#if defined __AVR_ATmega8__

// Atmega8 Shift switch off
PROGMEM const unsigned char NormalMapping[NUMBER_OF_INPUTS] =
{                       //  Pin Atmega  Function
    J2_Left,            //  14  PB0     JOY2LEFT
    J2_Button2,         //  15  PB1     JOY2BUTTON2
    J2_Button3,         //  16  PB2     JOY2BUTTON3
    KEY_2,              //  17  PB3     JOY2START
    J1_Down,            //  18  PB4     JOY1DOWN
    J1_Up,              //  19  PB5     JOY1UP
    J1_Left,            //  23  PC0     JOY1LEFT
    J1_Right,           //  24  PC1     JOY1RIGHT
    J1_Button1,         //  25  PC2     JOY1BUTTON1
    J1_Button2,         //  26  PC3     JOY1BUTTON2
    J1_Button3,         //  27  PC4     JOY1BUTTON3
    KEY_1,              //  28  PC5     JOY1START
    0,                  //   3  PD1     SHIFTSWITCH
    KEY_5,              //   5  PD3     COINTRIGGER
    J2_Down,            //   6  PD4     JOY2DOWN
    J2_Button1,         //  11  PD5     JOY2BUTTON1
    J2_Right,           //  12  PD6     JOY2RIGHT
    J2_Up               //  13  PD7     JOY2UP
};

// Atmega8 Shift switch on
PROGMEM const unsigned char ShiftMapping[NUMBER_OF_INPUTS]=
{                       //  Pin Atmega  Function
    AC_VolumeDown,      //  14  PB0     JOY2LEFT
    KM_SHIFT_F7,        //  15  PB1     JOY2BUTTON2
    KM_ALT_F4,          //  16  PB2     JOY2BUTTON3
    AC_Mute,            //  17  PB3     JOY2START
    KEY_DownArrow,      //  18  PB4     JOY1DOWN
    KEY_UpArrow,        //  19  PB5     JOY1UP
    KEY_LeftArrow,      //  23  PC0     JOY1LEFT
    KEY_RightArrow,     //  24  PC1     JOY1RIGHT
    KEY_Enter,          //  25  PC2     JOY1BUTTON1
    KEY_Esc,            //  26  PC3     JOY1BUTTON2
    KEY_Tab,            //  27  PC4     JOY1BUTTON3
    KEY_P,              //  28  PC5     JOY1START
    0,                  //   3  PD1     SHIFTSWITCH
    KEY_5,              //   5  PD3     COINTRIGGER
    KEY_PageDown,       //   6  PD4     JOY2DOWN
    KEY_F7,             //  11  PD5     JOY2BUTTON1
    AC_VolumeUp,        //  12  PD6     JOY2RIGHT
    KEY_PageUp          //  13  PD7     JOY2UP
};

#elif defined __AVR_ATmega32__

// Atmega32 Shift switch off
PROGMEM const unsigned char NormalMapping[NUMBER_OF_INPUTS] =
{                       //  Pin Atmega  Board   Function
    KEY_5,              //  40  PA0     X6-1    COINTRIGGER
    0,                  //  39  PA1     X4-8    none
    0,                  //  38  PA2     X4-7    none
    KEY_2,              //  37  PA3     X4-6    JOY2START
    KEY_1,              //  36  PA4     X4-5    JOY1START
    J1_Button8,         //  35  PA5     X4-4    JOY1BUTTON8
    J1_Button7,         //  34  PA6     X4-3    JOY1BUTTON7
    J1_Button6,         //  33  PA7     X4-2    JOY1BUTTON6
    0,                  //   1  PB0     X9-2    SHIFTSWITCH
    J2_Button8,         //   2  PB1     X7-1    JOY2BUTTON8
    J2_Button7,         //   3  PB2     X7-2    JOY2BUTTON7
    J2_Button6,         //   4  PB3     X8-1    JOY2BUTTON6
    J2_Button5,         //   5  PB4     X8-2    JOY2BUTTON5
    J2_Button4,         //   6  PB5     X5-1    JOY2BUTTON4
    J2_Button3,         //   7  PB6     X5-2    JOY2BUTTON3
    J2_Button2,         //   8  PB7     X5-3    JOY2BUTTON2
    J1_Up,              //  22  PC0     X3-2    JOY1UP
    J1_Left,            //  23  PC1     X3-3    JOY1LEFT
    J1_Right,           //  24  PC2     X3-4    JOY1RIGHT
    J1_Button1,         //  25  PC3     X3-5    JOY1BUTTON1
    J1_Button2,         //  26  PC4     X3-6    JOY1BUTTON2
    J1_Button3,         //  27  PC5     X3-7    JOY1BUTTON3
    J1_Button4,         //  28  PC6     X3-8    JOY1BUTTON4
    J1_Button5,         //  29  PC7     X4-1    JOY1BUTTON5
    J2_Button1,         //  15  PD1     X5-4    JOY2BUTTON1
    J2_Right,           //  17  PD3     X5-5    JOY2RIGHT
    J2_Left,            //  18  PD4     X5-6    JOY2LEFT
    J2_Up,              //  19  PD5     X5-7    JOY2UP
    J2_Down,            //  20  PD6     X5-8    JOY2DOWN
    J1_Down             //  21  PD7     X3-1    JOY1DOWN
};

// Atmega32 Shift switch on
PROGMEM const unsigned char ShiftMapping[NUMBER_OF_INPUTS]=
{                       //  Pin Atmega  Board   Function
    KEY_5,              //  40  PA0     X6-1    COINTRIGGER
    0,                  //  39  PA1     X4-8    none
    0,                  //  38  PA2     X4-7    none
    AC_Mute,            //  37  PA3     X4-6    JOY2START
    KEY_P,              //  36  PA4     X4-5    JOY1START
    0,                  //  35  PA5     X4-4    JOY1BUTTON8
    0,                  //  34  PA6     X4-3    JOY1BUTTON7
    0,                  //  33  PA7     X4-2    JOY1BUTTON6
    0,                  //   1  PB0     X9-2    SHIFTSWITCH
    0,                  //   2  PB1     X7-1    JOY2BUTTON8
    0,                  //   3  PB2     X7-2    JOY2BUTTON7
    0,                  //   4  PB3     X8-1    JOY2BUTTON6
    0,                  //   5  PB4     X8-2    JOY2BUTTON5
    0,                  //   6  PB5     X5-1    JOY2BUTTON4
    KM_ALT_F4,          //   7  PB6     X5-2    JOY2BUTTON3
    KM_SHIFT_F7,        //   8  PB7     X5-3    JOY2BUTTON2
    KEY_UpArrow,        //  22  PC0     X3-2    JOY1UP
    KEY_LeftArrow,      //  23  PC1     X3-3    JOY1LEFT
    KEY_RightArrow,     //  24  PC2     X3-4    JOY1RIGHT
    KEY_Enter,          //  25  PC3     X3-5    JOY1BUTTON1
    KEY_Esc,            //  26  PC4     X3-6    JOY1BUTTON2
    KEY_Tab,            //  27  PC5     X3-7    JOY1BUTTON3
    0,                  //  28  PC6     X3-8    JOY1BUTTON4
    0,                  //  29  PC7     X4-1    JOY1BUTTON5
    KEY_F7,             //  15  PD1     X5-4    JOY2BUTTON1
    AC_VolumeUp,        //  17  PD3     X5-5    JOY2RIGHT
    AC_VolumeDown,      //  18  PD4     X5-6    JOY2LEFT
    KEY_PageUp,         //  19  PD5     X5-7    JOY2UP
    KEY_PageDown,       //  20  PD6     X5-8    JOY2DOWN
    KEY_DownArrow       //  21  PD7     X3-1    JOY1DOWN
};

#endif  // defined __AVR_ATmega8/32__

unsigned char GetKeyNormalMap(unsigned char index)
{
    if (index < NUMBER_OF_INPUTS)
    {
        return pgm_read_byte(NormalMapping + index);
    }
    return 0;
}

unsigned char GetKeyShiftMap(unsigned char index)
{
    if (index < NUMBER_OF_INPUTS)
    {
        return pgm_read_byte(ShiftMapping + index);
    }
    return 0;
}
