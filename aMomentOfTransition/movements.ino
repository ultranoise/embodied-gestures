
void tillend(int del){
  
  //forma 1
  ledBlock(WHITE, 0, 18);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 2
  ledBlock(WHITE, 19, 22);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 3-1
  ledBlock(WHITE, 37, 38);
  leds.show();
  delay(del);
  clearLEDs(); 

  //forma 3-2
  ledBlock(WHITE, 39, 40);
  leds.show();
  delay(del);
  clearLEDs();

  //forma 3-3
  ledBlock(WHITE, 41, 43);
  leds.show();
  delay(del);
  clearLEDs();

  //forma 3-4
  ledBlock(WHITE, 44, 45);
  leds.show();
  delay(del);
  clearLEDs();
  
  //forma 4
  ledBlock(WHITE, 46, 66);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 5
  ledBlock(WHITE, 67, 72);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 6 (compuesta)
  ledBlock(WHITE, 73, 81);
  ledBlock(WHITE, 101, 106);
  ledBlock(WHITE, 107, 120);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 7
  ledBlock(WHITE, 82, 92);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 8
  ledBlock(WHITE, 93, 95);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 9
  ledBlock(WHITE, 96, 100);
  leds.show();
  delay(del);
  clearLEDs(); 
}

void randomall(int del){
  int pos =0;
  for(int i=0;i<28;i=i+2){
    pos = random(0,27);
    ledBlock(WHITE, figureall[pos],figureall[pos+1]);
    leds.show();
    delay(del);
    clearLEDs();
  }
  
  /*
  //forma 1
  ledBlock(WHITE, 0, 18);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 2
  ledBlock(WHITE, 19, 22);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 3-1
  ledBlock(WHITE, 37, 38);
  leds.show();
  delay(del);
  clearLEDs(); 

  //forma 3-2
  ledBlock(WHITE, 39, 40);
  leds.show();
  delay(del);
  clearLEDs();

  //forma 3-3
  ledBlock(WHITE, 41, 43);
  leds.show();
  delay(del);
  clearLEDs();

  //forma 3-4
  ledBlock(WHITE, 44, 45);
  leds.show();
  delay(del);
  clearLEDs();
  
  //forma 4
  ledBlock(WHITE, 46, 66);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 5
  ledBlock(WHITE, 67, 72);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 6 (compuesta)
  ledBlock(WHITE, 73, 81);
  ledBlock(WHITE, 101, 106);
  ledBlock(WHITE, 107, 120);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 7
  ledBlock(WHITE, 82, 92);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 8
  ledBlock(WHITE, 93, 95);
  leds.show();
  delay(del);
  clearLEDs(); 
  
  //forma 9
  ledBlock(WHITE, 96, 100);
  leds.show();
  delay(del);
  clearLEDs(); 
  */
}
