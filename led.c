#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds [NUM_LEDS]; //telling the program to use the CRGB spectrum when calling for what colors to be displayed in the LED's for however many LED's are utilized within the program 
void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}
void loop (){
    leds[0]=0xffffff;FastLED.show();delay(50); //light up the LED as the color white;LED 72 will flash white at some point during the program
    leds[0]=0x000000;FastLED.show();delay(50); //the LED will turn off, resulting in the color black; this happens after every color flash
    leds[9]=0x4fa547;FastLED.show();delay(50); //light up the LED as the color Dark Green;LED 81 will flash this color later on in the program 
    leds[9]=0x000000;FastLED.show();delay(50);
    leds[18]=0xe51b1b;FastLED.show();delay(50); //light up the LED as the color Red;LED 90 will flash this color later on in the program 
    leds[18]=0x000000;FastLED.show();delay(50);
    leds[27]=0x873721;FastLED.show();delay(50); //light up the LED as the color Brown;LED 99 will flash this color later on in the program 
    leds[27]=0x000000;FastLED.show();delay(50); 
    leds[36]=0xed6504;FastLED.show();delay(50); //light up the LED as the color Orange;LED 108 will flash this color later on in the program 
    leds[36]=0x000000;FastLED.show();delay(50);
    leds[45]=0x5b5957;FastLED.show();delay(50); //light up the LED as the color Grey;LED 117 will flash this color later on in the program 
    leds[45]=0x000000;FastLED.show();delay(50);
    leds[54]=0xfc7bd3;FastLED.show();delay(50); //light up the LED as the color Pink;LED 126 will flash this color later on in the program 
    leds[54]=0x000000;FastLED.show();delay(50); 
    leds[63]=0xfff200;FastLED.show();delay(50); //light up the LED as the color Yellow;LED 135 will flash this color later on in the program        
    leds[63]=0x000000;FastLED.show();delay(50);
    leds[72]=0xffffff;FastLED.show();delay(50);
    leds[72]=0x000000;FastLED.show();delay(50); 
    leds[81]=0x4fa547;FastLED.show();delay(50);
    leds[81]=0x000000;FastLED.show();delay(50);
    leds[90]=0xe51b1b;FastLED.show();delay(50);
    leds[90]=0x000000;FastLED.show();delay(50);
    ledS[99]=0x873721;FastLED.show();delay(50);
    leds[99]=0x000000;FastLED.show();delay(50);
    leds[108]=0xed6504;FastLED.show();delay(50);
    leds[108]=0x000000;FastLED.show();delay(50);
    leds[117]=0x5b5957;FastLED.show();delay(50); 
    leds[117]=0x000000;FastLED.show();delay(50);
    leds[126]=0xfc7bd3;FastLED.show();delay(50);
    leds[126]=0x000000;FastLED.show();delay(50);
    leds[135]=0xfff200;FastLED.show();delay(50);
    leds[135]=0x000000;FastLED.show();delay(50);
    }
