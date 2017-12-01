//SECTION 
void sectionsix() {

    if (currentMillis - previousMillis  > 10 && currentMillis - previousMillis < 50) {
      note =true;
  }

    //BIG DIM IN
  if (currentMillis - previousMillis  > 50 && currentMillis - previousMillis < 300) {
    if(note) {
         
        note = false;
        usbMIDI.sendNoteOn(10, 127, 3);   //PLAY SSSHHH

      }
      ledBlock(IVORY, 0, 298);
      dimin(40,5);
  }
    //BIG DIM OUT
  if (currentMillis - previousMillis  > 300 && currentMillis - previousMillis < 1500) {
      ledBlock(IVORY, 0, 298);
      dimout(0,15);
  }

  
}

