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

#define PIN 17        //PIN at Teensy LC where the LED strip is attached
#define LED_COUNT 298  //panel 1 = 108, panel2= 99; panel3= 90;

// Create an instance of the Adafruit_NeoPixel class called "leds".
// That'll be what we refer to from here on...
Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

// the MIDI channel number to send messages
const int channel = 1;

//global brightess
int brightness = 250;

//reference timer
unsigned long previousMillis = 0;
unsigned long previousMillisDimOut = 0;
unsigned long previousMillisDimIn = 0;
unsigned long timesectiontwostarted = 0;
//timer
unsigned long currentMillis = 0;
elapsedMillis sectiontwotime;

int pixel_timer[32];
int pixel1_timer = 0;

int pixel_loc[32];
int pixel1_loc = 0;

String inputString = "";         // a String to hold incoming data
boolean receivedSerial = false;  // whether the string is complete
int section = 0;

boolean start = false;
boolean two = false;
boolean three = false;
boolean four = false;

int figure1[2] = {0,18};
int figure2[2] = {19,22};
int figure3_1[2] = {37,38};
int figure3_2[2] = {39,40};
int figure3_3[2] = {41,43};
int figure3_4[2] = {44,45};
int figure4[2] = {46,66};
int figure5[2] = {67,72};
int figure6[6] = {73,81,101,106,107,120};
int figure7[2] = {82,92};
int figure8[2] = {93,95};
int figure9[2] = {96,100};
int figureall[28] = {0,18, 19, 22, 37, 38, 39, 40, 41,43, 44, 45, 46, 66, 67, 72, 73, 81, 101, 106, 107, 120, 82, 92, 93, 95, 96, 100};

int sec2_2=0;

void setup()
{
  Serial.begin(9600);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200);

  //MIDI
  usbMIDI.setHandleNoteOn(OnNoteOn);
  
  leds.begin();  // Call this to start up the LED strip.
  clearLEDs();   // This function, defined below, turns all LEDs off...
  leds.setBrightness(40);
  leds.show();   // ...but the LEDs don't actually update until you call this.

  //TEST ALL LEDS
  ledBlock(WHITE, 0, 298);
  leds.setBrightness(140);
  leds.show();   // ...but the LEDs don't actually update until you call this.
  delay(300);

  //CLEAR ALL LEDS
  clearLEDs();   // This function, defined below, turns all LEDs off...
  leds.setBrightness(40);
  leds.show();   // ...but the LEDs don't actually update until you call this.

  Serial.println("ready");
  brightness = 0;
}

void loop() {

//DO NOT TOUCH THESE LINES BELOW /////////////////// 
  //first:  update timer
  currentMillis = millis();
  
  //second: clear strip every frame
   clearLEDs();  // Turn off all LEDs
  leds.setBrightness(brightness);
   usbMIDI.read(); // USB MIDI receive

//DO NOT TOUCH THESE LINES ABOVE ///////////////////  


     
  // print the string when a newline arrives:
  if (receivedSerial) {
    Serial.println(inputString);

    if (inputString =="0") {    //READY TO WORK
      section = 0;
      start = false;
      clearLEDs();   // This function, defined below, turns all LEDs off...
      leds.setBrightness(40);
       leds.show();   // ...but the LEDs don't actually update until you call this.

      //TEST ALL LEDS
      ledBlock(WHITE, 0, 298);
      leds.setBrightness(40);
      leds.show();   // ...but the LEDs don't actually update until you call this.
       delay(3000);

      //CLEAR ALL LEDS
      clearLEDs();   // This function, defined below, turns all LEDs off...
      leds.setBrightness(40);
      leds.show();   // ...but the LEDs don't actually update until you call this.


      
      usbMIDI.sendNoteOn(60, 99, channel);
        
      Serial.println("ready to performance");
      previousMillis = currentMillis;
    }
    
    if (inputString =="1") {      //WAIT TWO MINUTES
      section = 1;
      Serial.println("start performance");
      previousMillis = currentMillis;
      delay(120000);
      
    }
    if (inputString =="2") {
      section = 2;
      Serial.println("SECTION 2");
      
      //leds.setBrightness(0);
      //leds.show();
      brightness=0;
      previousMillis = millis();

       //sec2_2= 0; 
      sec2_2= 49000/6; 
    }
    
    if (inputString =="9") { //TEST ALL LEDS   
      // Ride the Rainbow Road
      for (int i=0; i<LED_COUNT*1; i++){
        rainbow(i);
        delay(500);  // Delay between rainbow slides
      }
    }

    // clear the string:
    inputString = "";
    receivedSerial = false;
    
  }


  if(section == 2){  //SECTION 2  =  4MINUTES
    sectiontwo();
  }



  //////////////////////
  //AT THE END: LAST LINE (avoid any other leds.show during the frame) // DO NOT REMOVE
  leds.show(); // DO NOT REMOVE
  
}
//////////////////////END OF LOOP

/*
 * EXAMPLE OF USE
 */

  /*
 * EXAMPLE OF USE 1
 *   //MAKE EVENT BETWEEN TWO MOMENTS (e.g. 3secs and 5.5 secs)
  if (currentMillis - previousMillis > 500 && currentMillis - previousMillis < 1500 ) {
      ledBlock(IVORY, 55, 60);
      ledBlock(IVORY, 45, 50);         
  }


  //MAKE EVENT BETWEEN TWO MOMENTS (e.g. 3secs and 5.5 secs)
  if (currentMillis - previousMillis >= 1500 && currentMillis - previousMillis < 2500 ) {
      ledBlock(IVORY, 25, 30);          
  }
  
  if (currentMillis - previousMillis > 2500 && currentMillis - previousMillis < 3500 ) {
      ledBlock(IVORY, 50, 60);
      ledBlock(IVORY, 45, 50);       
  }

  if (currentMillis - previousMillis >= 3500 && currentMillis - previousMillis <= 4000 ){
    //end blackout
    clearLEDs();  // Turn off all LEDs
  }
 * 
 */
 
 /*
  //MAKE EVENT BETWEEN TWO MOMENTS (e.g. 3secs and 5.5 secs)
  //DIMMING IS ALWAYS AN EFFECT AFTER SETTING SOME PIXEL-LED TO A VALUE
  if (currentMillis - previousMillis >= 3500 && currentMillis - previousMillis <= 4500 ) {
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
  */ 



/*
 * SERIAL READ
 *
 */
 /*
  SerialEvent occurs whenever a new data comes in the hardware serial RX. This
  routine is run between each time loop() runs, so using delay inside loop can
  delay response. Multiple bytes of data may be available.
*/
void serialEvent() {
  
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    //if (inChar == '\n') {
      receivedSerial = true;
      
    //}
  }
}

/*
 * MIDI READ
 *
 */

void OnNoteOn(byte channel, byte note, byte velocity) {
  Serial.print("Note On, ch=");
  Serial.print(channel, DEC);
  Serial.print(", note=");
  Serial.print(note, DEC);
  Serial.print(", velocity=");
  Serial.print(velocity, DEC);
  Serial.println();
}


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

//Move one pixel from a location to another at a rate and leave it full
void gotoledfull(unsigned long color, int from, int to, int rate, int pix_number) {
   
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
  
 //leds.setPixelColor(pixel_loc[pix_number], color);  // Set just this one
 ledBlock(color, from, pixel_loc[pix_number]); 
}




void ledBlock(unsigned long color, int first, int last){
      
      for(int i=first;i<=last;i++){
        leds.setPixelColor(i, color);  // Set just this one
      }        
    
}







//dimming out until a brightness at a defined rate
void dimout(int final, unsigned long rate){

  if (currentMillis - previousMillisDimOut >= rate) {
    
    previousMillisDimOut = currentMillis;
    
    if(brightness > final){
      brightness = brightness -1;
    }
     
    //leds.setBrightness(brightness);
  }
  
}

void dimin(int last, unsigned long rate){

  if (currentMillis - previousMillisDimIn >= rate) {
    
    previousMillisDimIn = currentMillis;
  
    
    if(brightness < last){
      brightness = brightness + 1;
    }

    //leds.setBrightness(brightness);
   
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


