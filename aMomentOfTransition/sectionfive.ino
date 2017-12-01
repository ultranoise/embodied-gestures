//SECTION 
void sectionfive() {

  if (currentMillis - previousMillis  > 10 && currentMillis - previousMillis < 100) {
      note =true;
  }


  if (currentMillis - previousMillis  > 100 && currentMillis - previousMillis < 200) {
      brightness = 0;

      if(note) {
         
        note = false;
     
       //ACTIVATE TANGIBLE SCORES (
       usbMIDI.sendNoteOn(1, 127, 11);
       usbMIDI.sendNoteOn(1, 127, 12);
       usbMIDI.sendNoteOn(1, 127, 13);

       
         
      }
      
  }

  

  //BIG DIM IN
  if (currentMillis - previousMillis  > 200 && currentMillis - previousMillis < 8000) {
      ledBlock(IVORY, 0, 298);
      dimin(40,150);
      
      note =true;
  }
  if (currentMillis - previousMillis  > 8000 && currentMillis - previousMillis < 20000) {
      ledBlock(IVORY, 0, 298);
      if(note) {
         
        note = false;
     
       //ACTIVATE TANGIBLE SCORES (
       usbMIDI.sendNoteOn(2, 127, 11);
       usbMIDI.sendNoteOn(2, 127, 12);
       usbMIDI.sendNoteOn(2, 127, 13);  
         
      }
      
  }
  if (currentMillis - previousMillis  > 19500 && currentMillis - previousMillis < 20000) {
      ledBlock(IVORY, 0, 298);
        note = true;
  
  }
  if (currentMillis - previousMillis  > 20000 && currentMillis - previousMillis < 21000) {
      ledBlock(IVORY, 0, 298);
      if(note){      

        //ACTIVATE TANGIBLE SCORES (
       usbMIDI.sendNoteOn(3, 127, 11);
       usbMIDI.sendNoteOn(3, 127, 12);
       usbMIDI.sendNoteOn(3, 127, 13); 
       
        usbMIDI.sendNoteOn(8, 127, 3);
        note = false;
      }
  }
  if (currentMillis - previousMillis  > 21000 && currentMillis - previousMillis < 28000) {
      ledBlock(IVORY, 0, 298);
        note = true;
  
  }
  if (currentMillis - previousMillis  > 28000 && currentMillis - previousMillis < 29000) {
      ledBlock(IVORY, 0, 298);
        if(note) {
         
        note = false;
     
       //ACTIVATE TANGIBLE SCORES (
       usbMIDI.sendNoteOn(4, 127, 11);
       usbMIDI.sendNoteOn(4, 127, 12);
       usbMIDI.sendNoteOn(4, 127, 13);  
         
      }
  
  }
  if (currentMillis - previousMillis  > 29000 && currentMillis - previousMillis < 32000) {
      ledBlock(IVORY, 0, 298);
        note = true;
  
  }
  if (currentMillis - previousMillis  > 32000 && currentMillis - previousMillis < 33000) {
      ledBlock(IVORY, 0, 298);
        if(note) {
         
        note = false;
     
       //ACTIVATE TANGIBLE SCORES (
       usbMIDI.sendNoteOn(5, 127, 11);
       usbMIDI.sendNoteOn(5, 127, 12);
       usbMIDI.sendNoteOn(5, 127, 13);  
         
      }
  
  }
  if (currentMillis - previousMillis  > 33000 && currentMillis - previousMillis < 37000) {
      ledBlock(IVORY, 0, 298);
        note = true;
  
  }
  if (currentMillis - previousMillis  > 37000 && currentMillis - previousMillis < 41000) {
      ledBlock(IVORY, 0, 298);
        if(note) {
         
        note = false;
     
       //ACTIVATE TANGIBLE SCORES (
       usbMIDI.sendNoteOn(6, 127, 11);
       usbMIDI.sendNoteOn(6, 127, 12);
       usbMIDI.sendNoteOn(6, 127, 13);  
         
      }
  
  }
if (currentMillis - previousMillis  > 41000 && currentMillis - previousMillis < 45000) {
      ledBlock(IVORY, 0, 298);
        note = true;
  
  }
  if (currentMillis - previousMillis  > 45000 && currentMillis - previousMillis < 55000) {
      ledBlock(IVORY, 0, 298);
        if(note) {
         
        note = false;
     
       //ACTIVATE TANGIBLE SCORES (
       usbMIDI.sendNoteOn(2, 127, 11);
       usbMIDI.sendNoteOn(2, 127, 12);
       usbMIDI.sendNoteOn(2, 127, 13);  
         
      }
  
  }

  
  if (currentMillis - previousMillis  > 55000 && currentMillis - previousMillis < 60000) {
      ledBlock(IVORY, 0, 298);
      dimout(0,80);
  }

} //////////END SECTION FIVE


