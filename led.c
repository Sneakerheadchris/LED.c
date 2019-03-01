#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds [1];
void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}
void loop (){
    leds[0]=CRGB::0xffffff;FastLED.show();delay(30);
    leds[0]=CRGB::0x000000;FastLED.show();delay(30); 
    leds[9]=CRGB::0x4fa547;FastLED.show();delay(30);
    leds[9]=CRGB::0x000000;FastLED.show();delay(30);
    leds[18]=CRGB::0xe51b1b;FastLED.show();delay(30);
    leds[18]=CRGB::0x000000;FastLED.show();delay(30);
    leds[27]=CRGB::0x873721;FastLED.show();delay(30);
    leds[27]=CRGB::0x000000;FastLED.show();delay(30);
    leds[36]=CRGB::0xed6504;FastLED.show();delay(30);
    leds[36]=CRGB::0x000000;FastLED.show();delay(30);
    leds[45]=CRGB::0x5b5957;FastLED.show();delay(30); 
    leds[45]=CRGB::0x000000;FastLED.show();delay(30);
    leds[54]=CRGB::0xfc7bd3;FastLED.show();delay(30);
    leds[54]=CRGB::0x000000;FastLED.show();delay(30);
    leds[63]=CRGB::0xfff200;FastLED.show();delay(30);
    leds[63]=CRGB::0x000000;FastLED.show();delay(30);
    leds[72]=CRGB::0x4fa547;FastLED.show();delay(30);
    leds[72]=CRGB::0x000000;FastLED.show();delay(30); 
    leds[81]=CRGB::0xe51b1b;FastLED.show();delay(30);
    leds[81]=CRGB::0x000000;FastLED.show();delay(30);
    leds[90]=CRGB::0x873721;FastLED.show();delay(30);
    leds[90]=CRGB::0x000000;FastLED.show();delay(30);
    leds[99]=CRGB::0xed6504;FastLED.show();delay(30);
    leds[99]=CRGB::0x000000;FastLED.show();delay(30);
    leds[108]=CRGB::0x5b5957;FastLED.show();delay(30);
    leds[108]=CRGB::0x000000;FastLED.show();delay(30);
    leds[117]=CRGB::0xfc7bd3;FastLED.show();delay(30); 
    leds[117]=CRGB::0x000000;FastLED.show();delay(30);
    leds[126]=CRGB::0xfff200;FastLED.show();delay(30);
    leds[126]=CRGB::0x000000;FastLED.show();delay(30);
    leds[135]=CRGB::0xffffff;FastLED.show();delay(30);
    leds[135]=CRGB::0x000000;FastLED.show();delay(30);
}
