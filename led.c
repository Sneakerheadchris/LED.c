#include "FastLED.h"
CRGB leds [1];
void setup() {FastLED.add leds<NEOPIXEL,6>(leds,1);}
void loop (){
    leds[0]=CRGB::0xffffff;FastLED.show();delay(30);
    leds[0]=CRGB::0x000000;FastLED.show();delay(30); 
    leds[9]=CRGB::0x2d00b5;FastLED.show();delay(30);
    leds[9]=CRGB::0x000000;FastLED.show();delay(30);
    leds[18]=CRGB::0xb50900;FastLED.show();delay(30);
    leds[18]=CRGB::0x000000;FastLED.show();delay(30);
    leds[27]=CRGB::0x00b515;FastLED.show();delay(30);
    leds[27]=CRGB::0x000000;FastLED.show();delay(30);
    leds[36]=CRGB::0xb5006f;FastLED.show();delay(30);
    leds[36]=CRGB::0x000000;FastLED.show();delay(30);
    leds[45]=CRGB::0x00afb5;FastLED.show();delay(20); 
    leds[45]=CRGB::0x000000;FastLED.show();delay(20);
    leds[54]=CRGB::0xffb6af;FastLED.show();delay(20);
    leds[54]=CRGB::0x000000;FastLED.show();delay(20);
    leds[63]=CRGB::0x8600b7;FastLED.show();delay(20);
    leds[63]=CRGB::0x000000;FastLED.show();delay(20);
    leds[72]=CRGB::;FastLED.show();delay(30);
    leds[72]=CRGB::0x000000;FastLED.show();delay(30); 
    leds[81]=CRGB::;FastLED.show();delay(30);
    leds[81]=CRGB::0x000000;FastLED.show();delay(30);
    leds[90]=CRGB::;FastLED.show();delay(30);
    leds[90]=CRGB::0x000000;FastLED.show();delay(30);
    leds[99]=CRGB::;FastLED.show();delay(30);
    leds[99]=CRGB::0x000000;FastLED.show();delay(30);
    leds[108]=CRGB::;FastLED.show();delay(30);
    leds[108]=CRGB::0x000000;FastLED.show();delay(30);
    leds[117]=CRGB::;FastLED.show();delay(20); 
    leds[117]=CRGB::0x000000;FastLED.show();delay(20);
    leds[126]=CRGB::;FastLED.show();delay(20);
    leds[126]=CRGB::0x000000;FastLED.show();delay(20);
    leds[135]=CRGB::;FastLED.show();delay(20);
    leds[135]=CRGB::0x000000;FastLED.show();delay(20);
