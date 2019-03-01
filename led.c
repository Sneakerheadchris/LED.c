#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds [1];
void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}
void loop (){
    leds[0]=0xffffff;FastLED.show();delay(5);
    leds[0]=0x000000;FastLED.show();delay(5); 
    leds[9]=0x4fa547;FastLED.show();delay(5);
    leds[9]=0x000000;FastLED.show();delay(5);
    leds[18]=0xe51b1b;FastLED.show();delay(5);
    leds[18]=0x000000;FastLED.show();delay(5);
    leds[27]=0x873721;FastLED.show();delay(5);
    leds[27]=0x000000;FastLED.show();delay(5);
    leds[36]=0xed6504;FastLED.show();delay(5);
    leds[36]=0x000000;FastLED.show();delay(5);
    leds[45]=0x5b5957;FastLED.show();delay(5); 
    leds[45]=0x000000;FastLED.show();delay(5);
    leds[54]=0xfc7bd3;FastLED.show();delay(5);
    leds[54]=0x000000;FastLED.show();delay(5);
    leds[63]=0xfff200;FastLED.show();delay(5);
    leds[63]=0x000000;FastLED.show();delay(5);
    leds[72]=0x4fa547;FastLED.show();delay(5);
    leds[72]=0x000000;FastLED.show();delay(5); 
    leds[81]=0xe51b1b;FastLED.show();delay(5);
    leds[81]=0x000000;FastLED.show();delay(5);
    leds[90]=0x873721;FastLED.show();delay(5);
    leds[90]=0x000000;FastLED.show();delay(5);
    leds[99]=0xed6504;FastLED.show();delay(5);
    leds[99]=0x000000;FastLED.show();delay(5);
    leds[108]=0x5b5957;FastLED.show();delay(5);
    leds[108]=0x000000;FastLED.show();delay(5);
    leds[117]=0xfc7bd3;FastLED.show();delay(5); 
    leds[117]=0x000000;FastLED.show();delay(5);
    leds[126]=0xfff200;FastLED.show();delay(5);
    leds[126]=0x000000;FastLED.show();delay(5);
    leds[135]=0xffffff;FastLED.show();delay(5);
    leds[135]=0x000000;FastLED.show();delay(5);
}
