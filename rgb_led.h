#ifndef _RGB_LED_H_
#define _RGB_LED_H_

#include <Arduino.h>

//Anpassungen f. Dmx2WiFi
#define LED_B 0 //D3   // GPIO16/D0 16
#define LED_G 4 //D2   // GPIO05/D1 5
#define LED_R 5 //D1   // GPIO04/D2 4

// #define COMMON_ANODE

void ledInit();

void ledRed();
void ledGreen();
void ledBlue();

void ledYellow();
void ledMagenta();
void ledCyan();

void ledBlack();

#endif
