#ifndef ARDUINO_ESP32_WROOM_H
#define ARDUINO_ESP32_WROOM_H

#if defined(ARDUINO_ARCH_ESP32) || defined(ESP32)
#define ARCHITECTURE "ESP32"
#define HAS_NEOPIXEL false
#define STATUS_LED 2

#include <Arduino.h>
#include "globals.h"



pinDefinition pinMap[TOTAL_PINS] = {
  {4,  AIDIOP},
  {5,  DIOP},
  {12, AIDIOP},
  {13, AIDIOP},
  {14, AIDIOP},
  {15, AIDIOP},
  {16, DIOP},
  {17, DIOP},
  {18, DIOP},
  {19, DIOP},
  {23, DIOP},
  {25, AIDIOP},
  {26, AIDIOP},
  {27, AIDIOP},
  {32, AIDIOP},
  {33, AIDIOP},
  // Input-only pinnen (Analoge In + Digitale In)
  {34, AIDI},
  {35, AIDI},
  {36, AIDI},
  {39, AIDI}
};

#define I2C_SDA 21
#define I2C_SCL 22

pinName pinNameMap[TOTAL_PINS] = {
  {4,  "IO4"},
  {5,  "IO5"},
  {12, "IO12"},
  {13, "IO13"},
  {14, "IO14"},
  {15, "IO15"},
  {16, "IO16"},
  {17, "IO17"},
  {18, "IO18"},
  {19, "IO19"},
  {23, "IO23"},
  {25, "IO25"},
  {26, "IO26"},
  {27, "IO27"},
  {32, "IO32"},
  {33, "IO33"},
  {34, "IO34"},
  {35, "IO35"},
  {36, "IO36"},
  {39, "IO39"}
};

#endif // ARDUINO_ARCH_ESP32
#endif // ARDUINO_ESP32_WROOM_H