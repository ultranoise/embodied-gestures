/* SparkFun WS2812 Breakout Board Example
  SparkFun Electronics
  date: July 25, 2013
  license: GNU GENERAL PUBLIC LICENSE
  
  Requires the Adafruit NeoPixel library. It's awesome, go get it.
  https://github.com/adafruit/Adafruit_NeoPixel
  
  This simple example code runs three sets of animations on a group of WS2812
  breakout boards. The more boards you link up, the better these animations
  will look. 
  
  For help linking WS2812 breakouts, checkout our hookup guide:
  https://learn.sparkfun.com/tutorials/ws2812-breakout-hookup-guide
  
  Before uploading the code, make sure you adjust the two defines at the
  top of this sketch: PIN and LED_COUNT. Pin should be the Arduino pin
  you've got connected to the first pixel's DIN pin. By default it's
  set to Arduino pin 4. LED_COUNT should be the number of breakout boards
  you have linked up.
*/
#include <Adafruit_NeoPixel.h>
#include "WS2812_Definitions.h"

#define PIN 17
#define LED_COUNT 60

// Create an instance of the Adafruit_NeoPixel class called "leds".
// That'll be what we refer to from here on...
Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

//global brightess
int brightness = 250;

//reference timer
unsigned long previousMillis = 0;
unsigned long previousMillisDimOut = 0;
unsigned long previousMillisDimIn = 0;
//timer
unsigned long currentMillis = 0;

int pixel_timer[32];
int pixel1_timer = 0;

int pixel_loc[32];
int pixel1_loc = 0;


void setup()
{
  Serial.begin(9600);
  
  leds.begin();  // Call this to start up the LED strip.
  clearLEDs();   // This function, defined below, turns all LEDs off...
  leds.setBrightness(250);
  leds.show();   // ...but the LEDs don't actually update until you call this.

  //ledPos(IVORY, 50, 60);
}

void loop()
{

  //first:  update timer
  currentMillis = millis();

  //second: clear strip every frame
   clearLEDs();  // Turn off all LEDs
  
  /*
  // Ride the Rainbow Road
  for (int i=0; i<LED_COUNT*1; i++)
  {
    rainbow(i);
    delay(20);  // Delay between rainbow slides
  }
  
  // Indigo cylon
  // Do a cylon (larson scanner) cycle 10 times
  for (int i=0; i<10; i++)
  {
    // cylon function: first param is color, second is time (in ms) between cycles
    cylon(WHITE, 100);  // Indigo cylon eye!
  }

  
  // A light shower of spring green rain
  // This will run the cascade from top->bottom 20 times
  for (int i=0; i<20; i++)
  {
    // First parameter is the color, second is direction, third is ms between falls
    cascade(WHITE, TOP_DOWN, 100); //SILVER, LIGHTCORAL, WHITESMOKE, GOSTWHITE, ANTIQUEWHITE
  }
  */
  //cascade(WHITE, TOP_DOWN, 100);
  //gotoled(WHITE, 30, 60, 20);
  
  //ESTO FUNCIONA
  //ledPos(IVORY, 1000, 50, 60);
  
  //gotoled(WHITE, 55, 40, 20);
  //gotoled(WHITE, 40, 45, 40);
  //for(int i=0;i<20;i++){
    //gotoled(WHITE, 40+random(10), 45+random(10), 50);
  //}



  /*
   * PRUEBAS DE CONTROL SIN UTILIZAR DELAY()
   */

  //MAKE EVENT BETWEEN TWO MOMENTS (e.g. 3secs and 5.5 secs)
  if (currentMillis - previousMillis >= 500 && currentMillis - previousMillis < 1000 ) {
    
      ledBlock(IVORY, 50, 60);       
  }


  //MAKE EVENT BETWEEN TWO MOMENTS (e.g. 3secs and 5.5 secs)
  if (currentMillis - previousMillis >= 1000 && currentMillis - previousMillis <= 2000 ) {
    
      ledBlock(IVORY, 40, 50);       
  }
  if (currentMillis - previousMillis > 2000 && currentMillis - previousMillis < 3000 ) {
    
      ledBlock(IVORY, 50, 60);       
  }


  //MAKE EVENT BETWEEN TWO MOMENTS (e.g. 3secs and 5.5 secs)
  //DIMMING IS ALWAYS AN EFFECT AFTER SETTING SOME PIXEL-LED TO A VALUE
  if (currentMillis - previousMillis >= 3100 && currentMillis - previousMillis <= 4500 ) {
      ledBlock(IVORY, 50, 60); 
      dimout(55,15);         
  }
  //AT 7 SEC UNTIL 10 SECS
  if (currentMillis - previousMillis >= 4600 && currentMillis - previousMillis <= 7000 ) {
      ledBlock(IVORY, 50, 60); 
      dimin(250,15);         
  }

  //MOVE PIXELS WITH TRAJECTORIES
  if (currentMillis - previousMillis >= 7100 && currentMillis - previousMillis <= 7400 ) {
   pixel_loc[1] = random(60);
   pixel_loc[2] = random(60);
   pixel_loc[3] = random(60);
   pixel_loc[4] = random(60);   
   pixel_loc[5] = random(60);  
  }
  
  if (currentMillis - previousMillis >= 7500 && currentMillis - previousMillis <= 14000 ) {
      
      gotoled(IVORY, pixel_loc[1], 1, random(260), 1);
      gotoled(IVORY, pixel_loc[2], 69, random(261), 2);
      gotoled(IVORY, pixel_loc[3], 55, random(262), 3);
      gotoled(IVORY, pixel_loc[4], 10, random(263), 4);   
      gotoled(IVORY, pixel_loc[5], 55, random(264), 5);  
             
  }
  
  if (currentMillis - previousMillis >= 14500 && currentMillis - previousMillis <= 12000 ){
    //end blackout
    clearLEDs();  // Turn off all LEDs
  
  }

  //AT THE END: LAST LINE (avoid any other leds.show during the frame)
  leds.show();
  
}
//////////////////////END OF LOOP

/*
 * METHODS FOR WORKING WITH PIXEL-LED MOVEMENTS
 */

//Move one pixel from a location to another at a rate
void gotoled(unsigned long color, int from, int to, int rate, int pix_number) {
   
    if (to>=from) {
      if (currentMillis - pixel_timer[pix_number] >= rate) {
        pixel_timer[pix_number] = currentMillis;
        if(pixel_loc[pix_number] < to){
          pixel_loc[pix_number] = pixel_loc[pix_number] + 1;
        }   
      }
            
    }
    else {
      if (currentMillis - pixel_timer[pix_number] >= rate) {
        pixel_timer[pix_number] = currentMillis;
        if(pixel_loc[pix_number] > to) {
          pixel_loc[pix_number] = pixel_loc[pix_number] - 1; 
        }  
      }               
    }  
  
 leds.setPixelColor(pixel_loc[pix_number], color);  // Set just this one 
}




void ledBlock(unsigned long color, int first, int last){
      
      for(int i=first;i<last;i++){
        leds.setPixelColor(i, color);  // Set just this one
      }
          
    
}







//dimming out until a brightness at a defined rate
void dimout(int last, unsigned long rate){

  if (currentMillis - previousMillisDimOut >= rate) {
    
    previousMillisDimOut = currentMillis;
    
    if(brightness >= last){
      brightness = brightness -1;
    }
     
    leds.setBrightness(brightness);
  }
  
}

void dimin(int last, unsigned long rate){

  if (currentMillis - previousMillisDimIn >= rate) {
    
    previousMillisDimIn = currentMillis;
  
    
    if(brightness < last){
      brightness = brightness + 1;
    }

    leds.setBrightness(brightness);
   
  }
  
}

//get brightness

int getBrightness(){
  return brightness;
}


//dimming out with delay
/*
void dimout(int first, int last, int wait){
  for(int i = 0;i<(first-last);i++){
    leds.setBrightness(first - i);
    leds.show();   // ...but the LEDs don't actually update until you call this.
    delay(10);
  }
}
*/


//dimming in with delay
/*
void dimin(int first, int last, int wait){
  for(int i = 0;i<(last-first);i++){
    leds.setBrightness(first + i);
    leds.show();   // ...but the LEDs don't actually update until you call this.
    delay(wait);
  }

}
*/








// Implements a little larson "cylon" sanner.
// This'll run one full cycle, down one way and back the other
void cylon(unsigned long color, byte wait)
{
  // weight determines how much lighter the outer "eye" colors are
  const byte weight = 4;  
  // It'll be easier to decrement each of these colors individually
  // so we'll split them out of the 24-bit color value
  byte red = (color & 0xFF0000) >> 16;
  byte green = (color & 0x00FF00) >> 8;
  byte blue = (color & 0x0000FF);
  
  // Start at closest LED, and move to the outside
  for (int i=0; i<=LED_COUNT-1; i++)
  {
    clearLEDs();
    leds.setPixelColor(i, red, green, blue);  // Set the bright middle eye
    // Now set two eyes to each side to get progressively dimmer
    for (int j=1; j<3; j++)
    {
      if (i-j >= 0)
        leds.setPixelColor(i-j, red/(weight*j), green/(weight*j), blue/(weight*j));
      if (i-j <= LED_COUNT)
        leds.setPixelColor(i+j, red/(weight*j), green/(weight*j), blue/(weight*j));
    }
    leds.show();  // Turn the LEDs on
    delay(wait);  // Delay for visibility
  }
  
  // Now we go back to where we came. Do the same thing.
  for (int i=LED_COUNT-2; i>=1; i--)
  {
    clearLEDs();
    leds.setPixelColor(i, red, green, blue);
    for (int j=1; j<3; j++)
    {
      if (i-j >= 0)
        leds.setPixelColor(i-j, red/(weight*j), green/(weight*j), blue/(weight*j));
      if (i-j <= LED_COUNT)
        leds.setPixelColor(i+j, red/(weight*j), green/(weight*j), blue/(weight*j));
      }
    
    leds.show();
    delay(wait);
  }
}






// Cascades a single direction. One time.
void cascade(unsigned long color, byte direction, byte wait)
{
  if (direction == TOP_DOWN)
  {
    for (int i=0; i<LED_COUNT; i++)
    {
      clearLEDs();  // Turn off all LEDs
      leds.setPixelColor(i, color);  // Set just this one
      leds.show();
      delay(wait);
    }
  }
  else
  {
    for (int i=LED_COUNT-1; i>=0; i--)
    {
      clearLEDs();
      leds.setPixelColor(i, color);
      leds.show();
      delay(wait);
    }
  }
}


// Sets all LEDs to off, but DOES NOT update the display;
// call leds.show() to actually turn them off after this.
void clearLEDs()
{
  for (int i=0; i<LED_COUNT; i++)
  {
    leds.setPixelColor(i, 0);
  }
}

// Prints a rainbow on the ENTIRE LED strip.
//  The rainbow begins at a specified position. 
// ROY G BIV!
void rainbow(byte startPosition) 
{
  // Need to scale our rainbow. We want a variety of colors, even if there
  // are just 10 or so pixels.
  int rainbowScale = 192 / LED_COUNT;
  
  // Next we setup each pixel with the right color
  for (int i=0; i<LED_COUNT; i++)
  {
    // There are 192 total colors we can get out of the rainbowOrder function.
    // It'll return a color between red->orange->green->...->violet for 0-191.
    leds.setPixelColor(i, rainbowOrder((rainbowScale * (i + startPosition)) % 192));
  }
  // Finally, actually turn the LEDs on:
  leds.show();
}

// Input a value 0 to 191 to get a color value.
// The colors are a transition red->yellow->green->aqua->blue->fuchsia->red...
//  Adapted from Wheel function in the Adafruit_NeoPixel library example sketch
uint32_t rainbowOrder(byte position) 
{
  // 6 total zones of color change:
  if (position < 31)  // Red -> Yellow (Red = FF, blue = 0, green goes 00-FF)
  {
    return leds.Color(0xFF, position * 8, 0);
  }
  else if (position < 63)  // Yellow -> Green (Green = FF, blue = 0, red goes FF->00)
  {
    position -= 31;
    return leds.Color(0xFF - position * 8, 0xFF, 0);
  }
  else if (position < 95)  // Green->Aqua (Green = FF, red = 0, blue goes 00->FF)
  {
    position -= 63;
    return leds.Color(0, 0xFF, position * 8);
  }
  else if (position < 127)  // Aqua->Blue (Blue = FF, red = 0, green goes FF->00)
  {
    position -= 95;
    return leds.Color(0, 0xFF - position * 8, 0xFF);
  }
  else if (position < 159)  // Blue->Fuchsia (Blue = FF, green = 0, red goes 00->FF)
  {
    position -= 127;
    return leds.Color(position * 8, 0, 0xFF);
  }
  else  //160 <position< 191   Fuchsia->Red (Red = FF, green = 0, blue goes FF->00)
  {
    position -= 159;
    return leds.Color(0xFF, 0x00, 0xFF - position * 8);
  }
}
