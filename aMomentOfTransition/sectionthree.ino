void sectionthree() {

   if (currentMillis - previousMillis  > 10 && currentMillis - previousMillis < 3000) {
      
      if(s1){
        usbMIDI.sendNoteOn(1, 99, 11);
        usbMIDI.sendNoteOn(1, 99, 12);
        usbMIDI.sendNoteOn(1, 99, 13);
        s1=false;
        s2=true;
      }  
      
      ledBlock(IVORY, 35, 57);   
      dimin(40,20);
      
   }
   if (currentMillis - previousMillis  > 3000 && currentMillis - previousMillis < 4000) {   
      ledBlock(IVORY, 35, 57);
           
      dimout(0,5);
      if(s2){
        usbMIDI.sendNoteOn(2, 99, 11);
        usbMIDI.sendNoteOn(2, 99, 12);
        usbMIDI.sendNoteOn(2, 99, 13);
        s2=false;
        s1=true;
      } 
      
   } 
  if (currentMillis - previousMillis  > 4000 && currentMillis - previousMillis < 5000) {
      if(s1){
        usbMIDI.sendNoteOn(3, 99, 11);
        usbMIDI.sendNoteOn(3, 99, 12);
        usbMIDI.sendNoteOn(3, 99, 13);
        s1=false;
        s2=true; 
      }  
      
      ledBlock(IVORY, 70, 80);   
      dimin(40,10);
      
   }
   if (currentMillis - previousMillis  > 5000 && currentMillis - previousMillis < 7000) {   
      ledBlock(IVORY, 70, 80);   
      dimout(0,10);
      if(s2){
        usbMIDI.sendNoteOn(4, 99, 11);
        usbMIDI.sendNoteOn(4, 99, 12);
        usbMIDI.sendNoteOn(4, 99, 13);
        s2=false;
        s1=true; 
      }
   } 


   if (currentMillis - previousMillis  > 7000 && currentMillis - previousMillis < 9000) {
      if(note){
        usbMIDI.sendNoteOn(19, 22, 4);
        note=false;
         
      }  
      
      ledBlock(IVORY, 19, 22);   
      dimin(40,10);
      
   }
   if (currentMillis - previousMillis  > 9000 && currentMillis - previousMillis < 10000) {   
      ledBlock(IVORY, 19, 22);     
      dimout(0,7);
      
   } 

   if (currentMillis - previousMillis  > 10000 && currentMillis - previousMillis < 15000) {
      if(note){
        usbMIDI.sendNoteOn(19, 22, 4);
        note=false;
         
      }  
      
      ledBlock(IVORY, 0, 18);   
      dimin(40,20);
      
   }
   //hasa aqui he tocado en la derecha varios animalitos, ahora aparecen por la izquierda
   if (currentMillis - previousMillis  > 15000 && currentMillis - previousMillis < 15500) {   
      brightness = 40;
      ledBlock(IVORY, 235, 237);          
   }
   if (currentMillis - previousMillis  > 15500 && currentMillis - previousMillis < 17500) {   
      ledBlock(IVORY, 203, 207);          
   }
   if (currentMillis - previousMillis  > 17500 && currentMillis - previousMillis < 19500) {   
      ledBlock(IVORY, 209, 221);          
   }
   if (currentMillis - previousMillis  > 19500 && currentMillis - previousMillis < 21500) {   
      ledBlock(IVORY, 283, 293);          
   }

   //ahora apareecen los de enmedio
   if (currentMillis - previousMillis  > 21500 && currentMillis - previousMillis < 22500) {   
      ledBlock(IVORY, 115, 16);          
   }
   if (currentMillis - previousMillis  > 22500 && currentMillis - previousMillis < 23500) {   
      ledBlock(IVORY, 118, 121);          
   }
   if (currentMillis - previousMillis  > 23500 && currentMillis - previousMillis < 24500) {   
      ledBlock(IVORY, 172, 175);          
   }
   if (currentMillis - previousMillis  > 24500 && currentMillis - previousMillis < 25500) {   
      ledBlock(IVORY, 164, 166);          
   }
   if (currentMillis - previousMillis  > 25500 && currentMillis - previousMillis < 26500) {   
      ledBlock(IVORY, 122, 127);          
   }
   if (currentMillis - previousMillis  > 26500 && currentMillis - previousMillis < 27500) {   
      ledBlock(IVORY, 176, 179);          
   }
   if (currentMillis - previousMillis  > 26500 && currentMillis - previousMillis < 29500) {   
      ledBlock(IVORY, 139, 141);          
   }





   
} ///END OF SECTION THREE

