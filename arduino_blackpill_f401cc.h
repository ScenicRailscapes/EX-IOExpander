/*
 *  © 2024, Paul M. Antoine
 *  © 2023, Peter Cole. All rights reserved.
 *  
 *  This file is part of EX-IOExpander.
 *
 *  This is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  It is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with CommandStation.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef ARDUINO_BLACKPILL_F401CC_H
#define ARDUINO_BLACKPILL_F401CC_H

#include <Arduino.h>
#include "globals.h"

pinDefinition pinMap[TOTAL_PINS] = {
  {PB12,DIO},{PB13,DIOP},{PB14,DIOP},{PB15,DIOP},{PA8,DIOP},{PA9,DIOP},{PA10,DIOP},{PA15,DIOP}, // P1 (left row)
  {PB3,DIOP},{PB4,DIOP},{PB5,DIOP},{PB6,DIOP},{PB7,DIOP}, // P1 (left row)
  {PB10,DIOP},{PB2,DIO},{PB1,AIDIOP},{PB0,AIDIOP},{PA7,AIDIOP},{PA6,AIDIOP},{PA5,DIOP},  // P2 (right row)
  {PA4,AIDIOP},{PA3,AIDIO},{PA2,DIO},{PA1,AIDIOP},{PA0,AIDIOP},{PC15,DIO},{PC14,DIO},{PC13,DIO},  // P2 (right row)
};

#define I2C_SDA PB9
#define I2C_SCL PB8

pinName pinNameMap[TOTAL_PINS] = {
  {PB12,"PB12"},{PB13,"PB13"},{PB14,"PB14"},{PB15,"PB15"},{PA8,"PA8"},{PA9,"PA9"},{PA10,"PA10"},{PA15,"PA15"}, // P1 (left row)
  {PB3,"PB3"},{PB4,"PB4"},{PB5,"PB5"},{PB6,"PB6"},{PB7,"PB7"}, // P1 (left row)
  {PB10,"PB10"},{PB2,"PB2"},{PB1,"PB1"},{PB0,"PB0"},{PA7,"PA7"},{PA6,"PA6"},{PA5,"PA5"},  // P2 (right row)
  {PA4,"PA4"},{PA3,"PA3"},{PA2,"PA2"},{PA1,"PA1"},{PA0,"PA0"},{PC15,"PC15"},{PC14,"PC14"},{PC13,"PC13"}, // P2 (right row)
};

/*
Pins not available for use:
Digital - PA13|14 (debugger),PH0|1 (clock), PC14|15 (used by 32KHz oscillator)
Digital - PB8|9 (I2C)
Digital - PA11/12 (USB D-/D+)
Note that PC13 has a green LED - 0 to this pin to turn it on
*/

#endif