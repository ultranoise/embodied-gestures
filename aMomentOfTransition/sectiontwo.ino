void sectiontwo() {

  
  //LENTA INTRO 
    if (currentMillis - previousMillis > 0 && currentMillis - previousMillis < 100/6) {
      note=true;      
   }
  
   if (currentMillis - previousMillis > 100/6 && currentMillis - previousMillis < 6000/6) {
      if(note){
        usbMIDI.sendNoteOn(80, 99, 4);
        note=false;  
      }  
      ledBlock(IVORY, 155, 155);  
      dimin(40,20);
      
             
   } 
   if (currentMillis - previousMillis > 6000/6 && currentMillis - previousMillis < 14500/6 ) {     
      ledBlock(IVORY, 155, 155);  
      dimout(0,30); 
      usbMIDI.sendNoteOff(80, 99, 4); 
           
   }
   if (currentMillis - previousMillis > 14500/6 && currentMillis - previousMillis < 15000/6) {
      note=true;      
   } 
   if (currentMillis - previousMillis > 15000/6 && currentMillis - previousMillis < 22000/6 ) {
      if(note){
        usbMIDI.sendNoteOn(90, 99, 4);
        note=false;  
      }
      ledBlock(IVORY, 29, 32);   
      dimin(40,20);      
   }
   if (currentMillis - previousMillis > 22000/6 && currentMillis - previousMillis < 28000/6 ) {
      ledBlock(IVORY, 29, 32);  
      dimout(0,30);
      usbMIDI.sendNoteOff(90, 99, 4);        
   }
   if (currentMillis - previousMillis > 27800/6 && currentMillis - previousMillis < 28000/6) {
      note=true;      
   }
   if (currentMillis - previousMillis > 28000/6 && currentMillis - previousMillis < 34000/6 ) {
      ledBlock(IVORY, 296, 296);    
      dimin(40,10);
      if(note){
        usbMIDI.sendNoteOn(70, 99, 4);
        note=false;  
      }      
   }
   if (currentMillis - previousMillis > 34000/6 && currentMillis - previousMillis < 49000/6 ) {
      ledBlock(IVORY, 296, 296);   
      dimout(0,40);
      usbMIDI.sendNoteOff(70, 99, 4);
      note=true;        
   }
  
   //GESTO
   if (currentMillis - previousMillis > sec2_2 + 10 && currentMillis - previousMillis < sec2_2 + 20) {    
      brightness = 80;
            
   }
   if (currentMillis - previousMillis > sec2_2 + 20 && currentMillis - previousMillis < sec2_2 + 30) {    
      ledBlock(IVORY, 70, 70);  
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 30 && currentMillis - previousMillis < sec2_2 + 40) {    
      ledBlock(IVORY, 170, 170);  
             
   }
   if (currentMillis - previousMillis > sec2_2 + 40 && currentMillis - previousMillis < sec2_2 + 50) {    
      ledBlock(IVORY, 270, 270);          
   }

   if (currentMillis - previousMillis > sec2_2 + 50 && currentMillis - previousMillis < sec2_2 + 60) {    
      int r=random(298);
      ledBlock(IVORY, r, r); 
      usbMIDI.sendNoteOn(27, 99, 4); 
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 60 && currentMillis - previousMillis < sec2_2 + 70) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(29, 99, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 70 && currentMillis - previousMillis < sec2_2 + 80) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(31, 99, 4);           
   }
   if (currentMillis - previousMillis > sec2_2 + 80 && currentMillis - previousMillis < sec2_2 + 90) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(33, 99, 4); 
        
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 90 && currentMillis - previousMillis < sec2_2 + 100) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(35, 99, 4);   
       //usbMIDI.sendNoteOff(27, 99, 4);      
   }
   if (currentMillis - previousMillis > sec2_2 + 100 && currentMillis - previousMillis < sec2_2 + 110) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(37, 99, 4); 
      //usbMIDI.sendNoteOff(37, 99, 4);          
   }
   if (currentMillis - previousMillis > sec2_2 + 110 && currentMillis - previousMillis < sec2_2 + 120) {    
      ledBlock(IVORY, 70, 70);
      usbMIDI.sendNoteOn(39, 99, 4);   
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 120 && currentMillis - previousMillis < sec2_2 + 130) {    
      ledBlock(IVORY, 170, 170);
      usbMIDI.sendNoteOn(41, 99, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 130 && currentMillis - previousMillis < sec2_2 + 140) {    
      ledBlock(IVORY, 270, 270);
      note=true;          
   }

   //STAY
   if (currentMillis - previousMillis > sec2_2 + 140 && currentMillis - previousMillis < sec2_2 + 2040) {    
      ledBlock(IVORY, 225, 231);
      //dimout(0,20);
      if(note){
        usbMIDI.sendNoteOn(120, 127, 4);
        usbMIDI.sendNoteOn(110, 127, 4);
        note=false;  
      }
                    
   }
   if (currentMillis - previousMillis > sec2_2 + 2040 && currentMillis - previousMillis < sec2_2 + 2070) {
    //ledBlock(IVORY, 225, 231);
    dimout(0,20);
      usbMIDI.sendNoteOff(120, 127, 4);
      usbMIDI.sendNoteOff(110, 127, 4); 
      usbMIDI.sendNoteOff(27, 99, 4);
      usbMIDI.sendNoteOff(29, 99, 4);
      usbMIDI.sendNoteOff(31, 99, 4);
      usbMIDI.sendNoteOff(33, 99, 4); 
      usbMIDI.sendNoteOff(35, 99, 4);
      usbMIDI.sendNoteOff(37, 99, 4);
      usbMIDI.sendNoteOff(39, 99, 4);
      usbMIDI.sendNoteOff(41, 99, 4); 
   }
   
}

