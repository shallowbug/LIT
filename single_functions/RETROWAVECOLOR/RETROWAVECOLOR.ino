
#include "FastLED.h"
#define NUM_LEDS 60
#define DATA_PIN 5

CRGB leds[NUM_LEDS];

int r = 0;
  int g = 0;
  int b = 0;
  
void setup() {
   	delay(2000);
      FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
}

void loop() {
  
   for(int b = 0; b < NUM_LEDS; b++) {
    for (r = 0; r <= 255; r++) {
    for (g = 0; g <= 255; g++) {
        for (b = 0; b <= 255; b++) {
            leds[b] = CRGB( r, g, b);
            FastLED.show();
        }
    }
}
   }
}
