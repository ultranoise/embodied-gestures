void sectiontwo() {
  
  //Serial.println(currentMillis - previousMillis);
  
  //LENTA INTRO 
    if (currentMillis - previousMillis > 0 && currentMillis - previousMillis < 100/6) {
      note=true;      
   }
  
   if (currentMillis - previousMillis  > 100/6 && currentMillis - previousMillis < 6000/6) {
      if(note){
        usbMIDI.sendNoteOn(80, 99, 4);
        note=false;
        //Serial.println("empiezo seccion 2");  
      }  
      //ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 136, 138);   
      dimin(40,20);
      //Serial.println("hey"); 
             
   } 
   if (currentMillis - previousMillis > 6000/6 && currentMillis - previousMillis < 2400 ) {     
      ledBlock(IVORY, 136, 138);  
      dimout(0,30); 
      usbMIDI.sendNoteOff(80, 99, 4); 
      
           
   }
   if (currentMillis - previousMillis > 2400 && currentMillis - previousMillis < 2500) {
      note=true;  
         
   } 
   if (currentMillis - previousMillis > 2500 && currentMillis - previousMillis < 3600 ) {
      if(note){
        usbMIDI.sendNoteOn(90, 99, 4);
        //Serial.println("hey2"); 
        note=false;  
      }
      ledBlock(IVORY, 29, 32);   
      dimin(40,20);      
   }
   if (currentMillis - previousMillis > 3600 && currentMillis - previousMillis < 4500 ) {
      ledBlock(IVORY, 29, 32);  
      dimout(0,30);
      usbMIDI.sendNoteOff(90, 99, 4); 
      //Serial.println("acabo parte1");         
   }
   if (currentMillis - previousMillis > 4500 && currentMillis - previousMillis < 4600) {
      note=true;      
   }
   if (currentMillis - previousMillis > 4600 && currentMillis - previousMillis < 5600 ) {
      ledBlock(IVORY, 238, 239);    
      dimin(40,10);
      //Serial.println("acabo parte11");  
      if(note){
        usbMIDI.sendNoteOn(70, 99, 4);
        note=false;  
           
      }      
   }
   if (currentMillis - previousMillis > 5600 && currentMillis - previousMillis < 8100 ) {
      ledBlock(IVORY, 238, 239);   
      dimout(0,40);
      usbMIDI.sendNoteOff(70, 99, 4);
      note=true;
      //Serial.println("acabo parte111");        
   }
  
   //GESTO
   if (currentMillis - previousMillis > sec2_2 + 10 && currentMillis - previousMillis < sec2_2 + 20) {    
      brightness = 180;
            
   }
   if (currentMillis - previousMillis > sec2_2 + 20 && currentMillis - previousMillis < sec2_2 + 30) {    
      ledBlock(IVORY, 70, 70);  
      //Serial.println("seccion 2 part 2");
             
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
      usbMIDI.sendNoteOn(27, 120, 4); 
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 60 && currentMillis - previousMillis < sec2_2 + 70) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(29, 120, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 70 && currentMillis - previousMillis < sec2_2 + 80) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(31, 120, 4);           
   }
   if (currentMillis - previousMillis > sec2_2 + 80 && currentMillis - previousMillis < sec2_2 + 90) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(33, 120, 4); 
        
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 90 && currentMillis - previousMillis < sec2_2 + 100) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(35, 120, 4);   
       //usbMIDI.sendNoteOff(27, 99, 4);      
   }
   if (currentMillis - previousMillis > sec2_2 + 100 && currentMillis - previousMillis < sec2_2 + 110) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(37, 120, 4); 
      //usbMIDI.sendNoteOff(37, 99, 4);          
   }
   if (currentMillis - previousMillis > sec2_2 + 110 && currentMillis - previousMillis < sec2_2 + 120) {    
      ledBlock(IVORY, 70, 70);
      usbMIDI.sendNoteOn(39, 120, 4);   
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 120 && currentMillis - previousMillis < sec2_2 + 130) {    
      ledBlock(IVORY, 170, 170);
      usbMIDI.sendNoteOn(41, 120, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 130 && currentMillis - previousMillis < sec2_2 + 140) {    
      ledBlock(IVORY, 270, 270);
      note=true;          
   }

  //AGAIN
  if (currentMillis - previousMillis > sec2_2 + 140 && currentMillis - previousMillis < sec2_2 + 150) {    
      ledBlock(IVORY, 70, 70);  
      //Serial.println("seccion 2 part 2");
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 140 && currentMillis - previousMillis < sec2_2 + 150) {    
      ledBlock(IVORY, 170, 170);  
             
   }
   if (currentMillis - previousMillis > sec2_2 + 150 && currentMillis - previousMillis < sec2_2 + 160) {    
      ledBlock(IVORY, 270, 270);          
   }

   if (currentMillis - previousMillis > sec2_2 + 150 && currentMillis - previousMillis < sec2_2 + 160) {    
      int r=random(298);
      ledBlock(IVORY, r, r); 
      usbMIDI.sendNoteOn(27, 120, 4); 
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 160 && currentMillis - previousMillis < sec2_2 + 170) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(29, 120, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 170 && currentMillis - previousMillis < sec2_2 + 180) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(31, 120, 4);           
   }
   if (currentMillis - previousMillis > sec2_2 + 180 && currentMillis - previousMillis < sec2_2 + 190) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(33, 120, 4); 
        
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 190 && currentMillis - previousMillis < sec2_2 + 200) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(35, 120, 4);   
       //usbMIDI.sendNoteOff(27, 99, 4);      
   }
   if (currentMillis - previousMillis > sec2_2 + 200 && currentMillis - previousMillis < sec2_2 + 210) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(37, 120, 4); 
      //usbMIDI.sendNoteOff(37, 99, 4);          
   }
   if (currentMillis - previousMillis > sec2_2 + 210 && currentMillis - previousMillis < sec2_2 + 220) {    
      ledBlock(IVORY, 70, 70);
      usbMIDI.sendNoteOn(39, 120, 4);   
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 220 && currentMillis - previousMillis < sec2_2 + 230) {    
      ledBlock(IVORY, 170, 170);
      usbMIDI.sendNoteOn(41, 120, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 230 && currentMillis - previousMillis < sec2_2 + 240) {    
      ledBlock(IVORY, 270, 270);
      note=true;          
   }
   

   //STAY ON A NOTE/////
   if (currentMillis - previousMillis > sec2_2 + 240 && currentMillis - previousMillis < sec2_2 + 500) {    
      ledBlock(IVORY, 225, 231);
      //dimout(0,20);
      
      if(note){
        usbMIDI.sendNoteOn(120, 127, 4);
        usbMIDI.sendNoteOn(110, 127, 4);
        note=false;  
      }
                    
   }///SILENCIO LO APAGO TODO
   if (currentMillis - previousMillis > sec2_2 + 500 && currentMillis - previousMillis < sec2_2 + 600) {
    //ledBlock(IVORY, 225, 231);
    dimout(0,20);
      usbMIDI.sendNoteOff(120, 0, 4);
      usbMIDI.sendNoteOff(110, 0, 4); 
      usbMIDI.sendNoteOff(27, 0, 4);
      usbMIDI.sendNoteOff(29, 0, 4);
      usbMIDI.sendNoteOff(31, 0, 4);
      usbMIDI.sendNoteOff(33, 0, 4); 
      usbMIDI.sendNoteOff(35, 0, 4);
      usbMIDI.sendNoteOff(37, 0, 4);
      usbMIDI.sendNoteOff(39, 0, 4);
      usbMIDI.sendNoteOff(41, 0, 4); 
      brightness = 0;
      pixel_loc[1] =  5;
      pixel_loc[2] =  80;
      note = false;
      //Serial.println("aquiiiiiiiiiiiiii");  
   }
   //SILENCIO APAGO TODO



   ///GESTO 2
   ///////
   if (currentMillis - previousMillis > sec2_2 + 610 && currentMillis - previousMillis < sec2_2 + 620) {    
      brightness = 180;
      //note = true;
      //Serial.println("aquiiiiiiiiiiiiii");      
   }
   if (currentMillis - previousMillis > sec2_2 + 620 && currentMillis - previousMillis < sec2_2 + 630) {    
      ledBlock(IVORY, 70, 70);  
      //Serial.println("seccion 2 part 2");
      /*
      if(note){
             usbMIDI.sendNoteOn(36, 127, 9);
             note = false;
      }
      */
   }  
   if (currentMillis - previousMillis > sec2_2 + 630 && currentMillis - previousMillis < sec2_2 + 640) {    
      ledBlock(IVORY, 170, 170);  
             
   }
   if (currentMillis - previousMillis > sec2_2 + 640 && currentMillis - previousMillis < sec2_2 + 650) {    
      ledBlock(IVORY, 270, 270);          
   }

   if (currentMillis - previousMillis > sec2_2 + 650 && currentMillis - previousMillis < sec2_2 + 660) {    
      int r=random(298);
      ledBlock(IVORY, r, r); 
      usbMIDI.sendNoteOn(27, 99, 4); 
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 660 && currentMillis - previousMillis < sec2_2 + 670) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(29, 99, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 670 && currentMillis - previousMillis < sec2_2 + 680) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(31, 99, 4);           
   }
   if (currentMillis - previousMillis > sec2_2 + 680 && currentMillis - previousMillis < sec2_2 + 690) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(33, 99, 4); 
        
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 690 && currentMillis - previousMillis < sec2_2 + 700) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(35, 99, 4);   
       //usbMIDI.sendNoteOff(27, 99, 4);      
   }
   if (currentMillis - previousMillis > sec2_2 + 700 && currentMillis - previousMillis < sec2_2 + 710) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(37, 99, 4); 
      //usbMIDI.sendNoteOff(37, 99, 4);          
   }
   if (currentMillis - previousMillis > sec2_2 + 710 && currentMillis - previousMillis < sec2_2 + 720) {    
      ledBlock(IVORY, 70, 70);
      usbMIDI.sendNoteOn(39, 99, 4);   
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 720 && currentMillis - previousMillis < sec2_2 + 730) {    
      ledBlock(IVORY, 170, 170);
      usbMIDI.sendNoteOn(41, 99, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 730 && currentMillis - previousMillis < sec2_2 + 740) {    
      ledBlock(IVORY, 270, 270);
      note=true;          
   }

  //AGAIN
  if (currentMillis - previousMillis > sec2_2 + 740 && currentMillis - previousMillis < sec2_2 + 750) {    
      ledBlock(IVORY, 70, 70);  
      //Serial.println("seccion 2 part 2");
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 740 && currentMillis - previousMillis < sec2_2 + 750) {    
      ledBlock(IVORY, 170, 170);  
             
   }
   if (currentMillis - previousMillis > sec2_2 + 750 && currentMillis - previousMillis < sec2_2 + 760) {    
      ledBlock(IVORY, 270, 270);          
   }

   if (currentMillis - previousMillis > sec2_2 + 750 && currentMillis - previousMillis < sec2_2 + 760) {    
      int r=random(298);
      ledBlock(IVORY, r, r); 
      usbMIDI.sendNoteOn(27, 99, 4); 
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 760 && currentMillis - previousMillis < sec2_2 + 770) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(29, 99, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 770 && currentMillis - previousMillis < sec2_2 + 780) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(31, 99, 4);           
   }
   if (currentMillis - previousMillis > sec2_2 + 780 && currentMillis - previousMillis < sec2_2 + 790) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(33, 99, 4); 
        
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 790 && currentMillis - previousMillis < sec2_2 + 800) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(35, 99, 4);   
       //usbMIDI.sendNoteOff(27, 99, 4);      
   }
   if (currentMillis - previousMillis > sec2_2 + 800 && currentMillis - previousMillis < sec2_2 + 810) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(37, 99, 4); 
      //usbMIDI.sendNoteOff(37, 99, 4);          
   }
   if (currentMillis - previousMillis > sec2_2 + 810 && currentMillis - previousMillis < sec2_2 + 820) {    
      ledBlock(IVORY, 70, 70);
      usbMIDI.sendNoteOn(39, 99, 4);   
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 820 && currentMillis - previousMillis < sec2_2 + 830) {    
      ledBlock(IVORY, 170, 170);
      usbMIDI.sendNoteOn(41, 99, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 830 && currentMillis - previousMillis < sec2_2 + 840) {    
      ledBlock(IVORY, 270, 270);
      note=true;          
   }
   

   //STAY ON A NOTE/////
   if (currentMillis - previousMillis > sec2_2 + 840 && currentMillis - previousMillis < sec2_2 + 1050) {    
      ledBlock(IVORY, 70, 80);
      //dimout(0,20);
      
      if(note){
        usbMIDI.sendNoteOn(120, 127, 4);
        usbMIDI.sendNoteOn(110, 127, 4);
        note=false;  
      }
                    
   }///SILENCIO LO APAGO TODO
   if (currentMillis - previousMillis > sec2_2 + 1050 && currentMillis - previousMillis < sec2_2 + 1200) {
    //ledBlock(IVORY, 225, 231);
    dimout(0,20);
      usbMIDI.sendNoteOff(120, 0, 4);
      usbMIDI.sendNoteOff(110, 0, 4); 
      usbMIDI.sendNoteOff(27, 0, 4);
      usbMIDI.sendNoteOff(29, 0, 4);
      usbMIDI.sendNoteOff(31, 0, 4);
      usbMIDI.sendNoteOff(33, 0, 4); 
      usbMIDI.sendNoteOff(35, 0, 4);
      usbMIDI.sendNoteOff(37, 0, 4);
      usbMIDI.sendNoteOff(39, 0, 4);
      usbMIDI.sendNoteOff(41, 0, 4); 
      brightness = 0;
      pixel_loc[1] =  5;
      pixel_loc[2] =  80;
      
   }
   //SILENCIO APAGO TODO


 //////////
 //GESTO 3
 ////////////
    if (currentMillis - previousMillis > sec2_2 + 1210 && currentMillis - previousMillis < sec2_2 + 1220) {    
      brightness = 180;
            
   }
   if (currentMillis - previousMillis > sec2_2 + 1220 && currentMillis - previousMillis < sec2_2 + 1230) {    
      ledBlock(IVORY, 70, 70);  
      //Serial.println("seccion 2 part 2");
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 1230 && currentMillis - previousMillis < sec2_2 + 1240) {    
      ledBlock(IVORY, 170, 170);  
             
   }
   if (currentMillis - previousMillis > sec2_2 + 1240 && currentMillis - previousMillis < sec2_2 + 1250) {    
      ledBlock(IVORY, 270, 270);          
   }

   if (currentMillis - previousMillis > sec2_2 + 1250 && currentMillis - previousMillis < sec2_2 + 1260) {    
      int r=random(298);
      ledBlock(IVORY, r, r); 
      usbMIDI.sendNoteOn(27, 99, 4); 
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 1260 && currentMillis - previousMillis < sec2_2 + 1270) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(29, 99, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 1270 && currentMillis - previousMillis < sec2_2 + 1280) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(31, 99, 4);           
   }
   if (currentMillis - previousMillis > sec2_2 + 1280 && currentMillis - previousMillis < sec2_2 + 1290) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(33, 99, 4); 
        
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 1290 && currentMillis - previousMillis < sec2_2 + 1300) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(35, 99, 4);   
       //usbMIDI.sendNoteOff(27, 99, 4);      
   }
   if (currentMillis - previousMillis > sec2_2 + 1300 && currentMillis - previousMillis < sec2_2 + 1310) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(37, 99, 4); 
      //usbMIDI.sendNoteOff(37, 99, 4);          
   }
   if (currentMillis - previousMillis > sec2_2 + 1310 && currentMillis - previousMillis < sec2_2 + 1320) {    
      ledBlock(IVORY, 70, 70);
      usbMIDI.sendNoteOn(39, 99, 4);   
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 1320 && currentMillis - previousMillis < sec2_2 + 1330) {    
      ledBlock(IVORY, 170, 170);
      usbMIDI.sendNoteOn(41, 99, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 1330 && currentMillis - previousMillis < sec2_2 + 1340) {    
      ledBlock(IVORY, 270, 270);
      note=true;          
   }

  //AGAIN
  if (currentMillis - previousMillis > sec2_2 + 1340 && currentMillis - previousMillis < sec2_2 + 1350) {    
      ledBlock(IVORY, 70, 70);  
      //Serial.println("seccion 2 part 2");
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 1340 && currentMillis - previousMillis < sec2_2 + 1350) {    
      ledBlock(IVORY, 170, 170);  
             
   }
   if (currentMillis - previousMillis > sec2_2 + 1350 && currentMillis - previousMillis < sec2_2 + 1360) {    
      ledBlock(IVORY, 270, 270);          
   }

   if (currentMillis - previousMillis > sec2_2 + 1350 && currentMillis - previousMillis < sec2_2 + 1360) {    
      int r=random(298);
      ledBlock(IVORY, r, r); 
      usbMIDI.sendNoteOn(27, 99, 4); 
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 1360 && currentMillis - previousMillis < sec2_2 + 1370) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(29, 99, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 1370 && currentMillis - previousMillis < sec2_2 + 1380) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(31, 99, 4);           
   }
   if (currentMillis - previousMillis > sec2_2 + 1380 && currentMillis - previousMillis < sec2_2 + 1390) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(33, 99, 4); 
        
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 1390 && currentMillis - previousMillis < sec2_2 + 1400) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(35, 99, 4);   
       //usbMIDI.sendNoteOff(27, 99, 4);      
   }
   if (currentMillis - previousMillis > sec2_2 + 1400 && currentMillis - previousMillis < sec2_2 + 1410) {    
      int r=random(298);
      ledBlock(IVORY, r, r);
      usbMIDI.sendNoteOn(37, 99, 4); 
      //usbMIDI.sendNoteOff(37, 99, 4);          
   }
   if (currentMillis - previousMillis > sec2_2 + 1410 && currentMillis - previousMillis < sec2_2 + 1420) {    
      ledBlock(IVORY, 70, 70);
      usbMIDI.sendNoteOn(39, 99, 4);   
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 1420 && currentMillis - previousMillis < sec2_2 + 1430) {    
      ledBlock(IVORY, 170, 170);
      usbMIDI.sendNoteOn(41, 99, 4);   
             
   }
   if (currentMillis - previousMillis > sec2_2 + 1430 && currentMillis - previousMillis < sec2_2 + 1440) {    
      ledBlock(IVORY, 270, 270);
      note=true;          
   }
   

   //STAY ON A NOTE/////
   if (currentMillis - previousMillis > sec2_2 + 1440 && currentMillis - previousMillis < sec2_2 + 1750) {    
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 19, 22);
      ledBlock(IVORY, 244, 258);
      //dimout(0,20);
      
      if(note){
        usbMIDI.sendNoteOn(120, 127, 4);
        usbMIDI.sendNoteOn(110, 127, 4);
        note=false;  
      }
                    
   }///SILENCIO LO APAGO TODO
   if (currentMillis - previousMillis > sec2_2 + 1750 && currentMillis - previousMillis < sec2_2 + 2000) {
    //ledBlock(IVORY, 225, 231);
    dimout(0,20);
      usbMIDI.sendNoteOff(120, 0, 4);
      usbMIDI.sendNoteOff(110, 0, 4); 
      usbMIDI.sendNoteOff(27, 0, 4);
      usbMIDI.sendNoteOff(29, 0, 4);
      usbMIDI.sendNoteOff(31, 0, 4);
      usbMIDI.sendNoteOff(33, 0, 4); 
      usbMIDI.sendNoteOff(35, 0, 4);
      usbMIDI.sendNoteOff(37, 0, 4);
      usbMIDI.sendNoteOff(39, 0, 4);
      usbMIDI.sendNoteOff(41, 0, 4); 
      brightness = 0;
      pixel_loc[1] =  5;
      pixel_loc[2] =  80;
      note = true;
      //Serial.println("traveliiiiiing 2");
   }
   //SILENCIO APAGO TODO


/////////////
//movimiento de texturas
/////////////////
   if (currentMillis - previousMillis > sec2_2 + 2070 && currentMillis - previousMillis < sec2_2 + 2350) {    
      //ledBlock(IVORY, 35, 57);
      //dimin(30,40);
      brightness = 180;
      
      gotoled(IVORY, pixel_loc[1], 18, 20, 1);
      //Serial.println("traveliiiiiing 1");
      
      if(note){
             usbMIDI.sendNoteOn(36, 127, 9);
             note = false;
             Serial.println("traveliiiiiing");
      }
      
                          
   }
   if (currentMillis - previousMillis > sec2_2 + 2400 && currentMillis - previousMillis < sec2_2 + 2600) {    
      //ledBlock(IVORY, 35, 57);
      //dimin(30,40);
      //brightness = 0;
      
      gotoled(IVORY, pixel_loc[2], 70, 18, 2);
      pixel_loc[1] =  69;
      //Serial.println("alla");                    
   }
  if (currentMillis - previousMillis > sec2_2 + 2650 && currentMillis - previousMillis < sec2_2 + 2800) {    
      
      //brightness = 0;
      
      gotoled(IVORY, pixel_loc[1], 61, 18, 1);
      pixel_loc[2] =  98;
      //Serial.println("alla");                    
   }
   if (currentMillis - previousMillis > sec2_2 + 2800 && currentMillis - previousMillis < sec2_2 + 2950) {    
      
      //brightness = 0;
      
      gotoled(IVORY, pixel_loc[2], 108, 18, 2);
      //Serial.println("alla");                    
   }
   if (currentMillis - previousMillis > sec2_2 + 2950 && currentMillis - previousMillis < sec2_2 + 3000) {    
      
      brightness = 0;
      
      pixel_loc[1] =  293;
      pixel_loc[2] =  241;                  
   }


   //TRAVELLING DE IZQUIERDA A DERECHA
   //DE LA 1 HACIA LA DERECHA (t = 11000)
   
   if (currentMillis - previousMillis > sec2_2 + 3000 && currentMillis - previousMillis < sec2_2 + 3450) {    
      
      brightness = 50;
      
      gotoled(IVORY, pixel_loc[1], 282, 40, 1); //WAS 244, 282
       
      
      //Serial.println("alla");                    
   }
   
   if (currentMillis - previousMillis > sec2_2 + 3450 && currentMillis - previousMillis < sec2_2 + 3750) {    
      
      gotoled(IVORY, pixel_loc[2], 234, 35, 2);
      pixel_loc[3] =  169;
                          
   }

   //EN LA DEL CENTRO HACIA LA DERECHA
    if (currentMillis - previousMillis > sec2_2 + 3750 && currentMillis - previousMillis < sec2_2 + 4200) {    
      
      brightness = 50;
      
      gotoled(IVORY, pixel_loc[3], 139, 25, 3);
      pixel_loc[1] =  139;
      //Serial.println("alla");                    
   }
   if (currentMillis - previousMillis > sec2_2 + 4200 && currentMillis - previousMillis < sec2_2 + 4350) {    
      
      brightness = 50;
      
      gotoled(IVORY, pixel_loc[1], 145, 25, 1);
      pixel_loc[2] =  81;
      //Serial.println("alla");                    
   }
   //EN LA DERECHA PARA LLEGAR
   if (currentMillis - previousMillis > sec2_2 + 4350 && currentMillis - previousMillis < sec2_2 + 4550) {    
      
      brightness = 50;
      
      gotoled(IVORY, pixel_loc[2], 88, 25, 2);
      pixel_loc[1] =  29;
      //Serial.println("alla");                    
   }
   if (currentMillis - previousMillis > sec2_2 + 4550 && currentMillis - previousMillis < sec2_2 + 4700) {    
      
      brightness = 50;
      
      gotoled(IVORY, pixel_loc[1], 34, 25, 1);
       pixel_loc[2] =  19;
      //Serial.println("alla");                    
   }
   if (currentMillis - previousMillis > sec2_2 + 4700 && currentMillis - previousMillis < sec2_2 + 4800) {    
      
      brightness = 50;
      
      gotoled(IVORY, pixel_loc[2], 22, 30, 2);
      pixel_loc[1] =  22;
      //Serial.println("alla");                    
   }
   if (currentMillis - previousMillis > sec2_2 + 4850 && currentMillis - previousMillis < sec2_2 + 5100) {    
      
      brightness = 50;
      
      gotoled(IVORY, pixel_loc[1], 3, 25, 1);
      
      //Serial.println("alla");                    
   }

   
   if (currentMillis - previousMillis > sec2_2 + 5100 && currentMillis - previousMillis < sec2_2 + 5200) { 
      brightness=0;
   }

///
//ENCIENDO TODO PARA PRESENTARLO t=13000
///   

  if (currentMillis - previousMillis > sec2_2 + 5400 && currentMillis - previousMillis < sec2_2 + 7500) { 
      ledBlock(IVORY, 199, 298);
      dimin(30,45);
   }
   if (currentMillis - previousMillis > sec2_2 + 7500 && currentMillis - previousMillis < sec2_2 + 8000) { 
      brightness=0;
   }
   if (currentMillis - previousMillis > sec2_2 + 8000 && currentMillis - previousMillis < sec2_2 + 10000) { 
      
      ledBlock(IVORY, 0, 108);
      dimin(30,45);
   }
   if (currentMillis - previousMillis > sec2_2 + 10000 && currentMillis - previousMillis < sec2_2 + 10500) { 
      brightness=0;
   }
   if (currentMillis - previousMillis > sec2_2 + 10500 && currentMillis - previousMillis < sec2_2 + 12000) { 
      ledBlock(IVORY, 109, 198);
      dimin(30,45);
   }
   if (currentMillis - previousMillis > sec2_2 + 12000 && currentMillis - previousMillis < sec2_2 + 12500) { 
      brightness=0;
   }
   if (currentMillis - previousMillis > sec2_2 + 12500 && currentMillis - previousMillis < sec2_2 + 15000) { 
      ledBlock(IVORY, 0, 298);
      dimin(30,45);
   }
   if (currentMillis - previousMillis > sec2_2 + 15000 && currentMillis - previousMillis < sec2_2 + 15500) { 
      brightness=0;
   }



//////////////
///PARTE DE COMUNICACION
// LINGUISTICA ENTRE LUCES  t= 27000
//////////////
  //pregunta
    if (currentMillis - previousMillis > sec2_2 + 16500 && currentMillis - previousMillis < sec2_2 + 16700) { 
      ledBlock(IVORY, 238, 239);
      dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 17100 && currentMillis - previousMillis < sec2_2 + 17200) { 
      ledBlock(IVORY, 238, 239);
      dimout(0,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 17200 && currentMillis - previousMillis < sec2_2 + 17300) { 
      ledBlock(IVORY, 238, 239);
      dimin(40,1);
   }
   if (currentMillis - previousMillis > sec2_2 + 17100 && currentMillis - previousMillis < sec2_2 + 17400) { 
      ledBlock(IVORY, 238, 239);
      dimout(0,5);
   }
   //respuesta
  if (currentMillis - previousMillis > sec2_2 + 18100 && currentMillis - previousMillis < sec2_2 + 18500) { 
      ledBlock(IVORY, 235, 237);
      dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 18500 && currentMillis - previousMillis < sec2_2 + 19000) { 
      ledBlock(IVORY, 235, 237);
      dimout(0,5);
   }
   //pregunta otra vez [19500]
   /*
   if (currentMillis - previousMillis > sec2_2 + 19500 && currentMillis - previousMillis < sec2_2 + 20400) { 
      ledBlock(IVORY, 238, 239);
      dimin(40,3);
   }
  */
  if (currentMillis - previousMillis > sec2_2 + 19200 && currentMillis - previousMillis < sec2_2 + 19400) { 
      ledBlock(IVORY, 238, 239);
      dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 19800 && currentMillis - previousMillis < sec2_2 + 19900) { 
      ledBlock(IVORY, 238, 239);
      dimout(0,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 19900 && currentMillis - previousMillis < sec2_2 + 20000) { 
      ledBlock(IVORY, 238, 239);
      dimin(40,1);
   }
   if (currentMillis - previousMillis > sec2_2 + 19800 && currentMillis - previousMillis < sec2_2 + 20100) { 
      ledBlock(IVORY, 238, 239);
      dimout(0,5);
   }

   //pequeños aparecen
   if (currentMillis - previousMillis > sec2_2 + 20400 && currentMillis - previousMillis < sec2_2 + 20420) { 
      ledBlock(IVORY, 242, 242);
      //ledBlock(IVORY, 238, 239);
      ledBlock(IVORY, 296, 296); 
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 20420 && currentMillis - previousMillis < sec2_2 + 20440) { 
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
       
       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 20440 && currentMillis - previousMillis < sec2_2 + 20460) { 
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242); 

      ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 20460 && currentMillis - previousMillis < sec2_2 + 20480) { 
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);

       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 20480 && currentMillis - previousMillis < sec2_2 + 20500) { 
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
      
      ledBlock(IVORY, 233, 233);  
      ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 20500 && currentMillis - previousMillis < sec2_2 + 20520) { 
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
     
       ledBlock(IVORY, 233, 233);
       ledBlock(IVORY, 296, 296); 
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 20520 && currentMillis - previousMillis < sec2_2 + 20540) { 
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
     
       ledBlock(IVORY, 233, 233); 
       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 20540 && currentMillis - previousMillis < sec2_2 + 20560) { 
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
       
       ledBlock(IVORY, 233, 233);  
       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 20560 && currentMillis - previousMillis < sec2_2 + 20580) { 
      ledBlock(IVORY, 222, 222);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
     
       ledBlock(IVORY, 233, 233); 
       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 20580 && currentMillis - previousMillis < sec2_2 + 20600) { 
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
     
       ledBlock(IVORY, 133, 133);
       ledBlock(IVORY, 296, 296); 
      //dimin(30,3);
   }
   //aqui estan todos juntos
   if (currentMillis - previousMillis > sec2_2 + 20600 && currentMillis - previousMillis < sec2_2 + 21400) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
     
       ledBlock(IVORY, 233, 233); 
       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 21400 && currentMillis - previousMillis < sec2_2 + 22000) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
      ledBlock(IVORY, 233, 233); 
      ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 22000 && currentMillis - previousMillis < sec2_2 + 22050) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 233, 233); 
      ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 22050 && currentMillis - previousMillis < sec2_2 + 22100) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
     ledBlock(IVORY, 233, 233); 
     ledBlock(IVORY, 296, 296);
   }
   if (currentMillis - previousMillis > sec2_2 + 22100 && currentMillis - previousMillis < sec2_2 + 22150) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 233, 233); 
      ledBlock(IVORY, 296, 296); 
   }
   if (currentMillis - previousMillis > sec2_2 + 22150 && currentMillis - previousMillis < sec2_2 + 22200) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 233, 233); 
      ledBlock(IVORY, 296, 296);
   }
   if (currentMillis - previousMillis > sec2_2 + 22200 && currentMillis - previousMillis < sec2_2 + 22240) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 233, 233); 
      ledBlock(IVORY, 296, 296);
   }
   if (currentMillis - previousMillis > sec2_2 + 22240 && currentMillis - previousMillis < sec2_2 + 22260) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 233, 233); 
      ledBlock(IVORY, 296, 296);
   }
   if (currentMillis - previousMillis > sec2_2 + 22260 && currentMillis - previousMillis < sec2_2 + 22280) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 233, 233); 
      ledBlock(IVORY, 296, 296);
   }
   if (currentMillis - previousMillis > sec2_2 + 22280 && currentMillis - previousMillis < sec2_2 + 22290) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 296, 296);
   }
   if (currentMillis - previousMillis > sec2_2 + 22290 && currentMillis - previousMillis < sec2_2 + 22300) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 233, 233); 
      ledBlock(IVORY, 296, 296);
   }
   if (currentMillis - previousMillis > sec2_2 + 22310 && currentMillis - previousMillis < sec2_2 + 22750) { 
      brightness = 0;
   }
   
  //pregunta otra vez el pesado
   /*
    if (currentMillis - previousMillis > sec2_2 + 22750 && currentMillis - previousMillis < sec2_2 + 23350) { 
      ledBlock(IVORY, 238, 239);
      dimin(30,3);
   }
   */
   if (currentMillis - previousMillis > sec2_2 + 22750 && currentMillis - previousMillis < sec2_2 + 22950) { 
      ledBlock(IVORY, 238, 239);
      dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 23350 && currentMillis - previousMillis < sec2_2 + 23450) { 
      ledBlock(IVORY, 238, 239);
      dimout(0,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 23450 && currentMillis - previousMillis < sec2_2 + 23550) { 
      ledBlock(IVORY, 238, 239);
      dimin(40,1);
   }
   if (currentMillis - previousMillis > sec2_2 + 23350 && currentMillis - previousMillis < sec2_2 + 23650) { 
      ledBlock(IVORY, 238, 239);
      dimout(0,5);
   } 

   //pequeños aparecen
   if (currentMillis - previousMillis > sec2_2 + 23650 && currentMillis - previousMillis < sec2_2 + 23950) { 
      brightness = 40;
      ledBlock(IVORY, 238, 239);
      
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 233, 233);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 23950 && currentMillis - previousMillis < sec2_2 + 24350) { 
      brightness = 40;
      ledBlock(IVORY, 238, 239);
      
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 232, 232);
      ledBlock(IVORY, 222, 222);

      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 24350 && currentMillis - previousMillis < sec2_2 + 24650) { 
      brightness = 40;
      ledBlock(IVORY, 238, 239);
      
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 232, 232);
      ledBlock(IVORY, 222, 222);
      ledBlock(IVORY, 243, 243);
      ledBlock(IVORY, 242, 242);
      //dimin(30,3);
   }
   //aparece el gordo 
   if (currentMillis - previousMillis > sec2_2 + 24650 && currentMillis - previousMillis < sec2_2 + 24750) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);

      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 233, 233);
      ledBlock(IVORY, 232, 232);
      ledBlock(IVORY, 222, 222);
      ledBlock(IVORY, 243, 243);
      ledBlock(IVORY, 242, 242);
      
   }
   //se van los pequeños
   if (currentMillis - previousMillis > sec2_2 + 24750 && currentMillis - previousMillis < sec2_2 + 25150) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      
   }
   //dimin-out de nervios
   if (currentMillis - previousMillis > sec2_2 + 25150 && currentMillis - previousMillis < sec2_2 + 25250) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      dimout(0,5);
   }
   if (currentMillis - previousMillis > sec2_2 + 25250 && currentMillis - previousMillis < sec2_2 + 25350) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      dimin(30,5);
   }
   if (currentMillis - previousMillis > sec2_2 + 25350 && currentMillis - previousMillis < sec2_2 + 25450) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      dimout(0,5);
   }
   if (currentMillis - previousMillis > sec2_2 + 25450 && currentMillis - previousMillis < sec2_2 + 25550) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      dimin(30,5);
   }
   if (currentMillis - previousMillis > sec2_2 + 25550 && currentMillis - previousMillis < sec2_2 + 25650) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      dimout(0,5);
   }
   if (currentMillis - previousMillis > sec2_2 + 25650 && currentMillis - previousMillis < sec2_2 + 25750) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      dimin(30,5);
   }
   if (currentMillis - previousMillis > sec2_2 + 25750 && currentMillis - previousMillis < sec2_2 + 25850) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      dimout(0,5);
   }
   if (currentMillis - previousMillis > sec2_2 + 25850 && currentMillis - previousMillis < sec2_2 + 25950) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      dimin(30,5);
   }
   if (currentMillis - previousMillis > sec2_2 + 25950 && currentMillis - previousMillis < sec2_2 + 26050) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      dimout(0,5);
   }
   if (currentMillis - previousMillis > sec2_2 + 26050 && currentMillis - previousMillis < sec2_2 + 26450) { 
      ledBlock(IVORY, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      dimin(30,5);
   }

   
   //se lo come
   if (currentMillis - previousMillis > sec2_2 + 26450 && currentMillis - previousMillis < sec2_2 + 26850) { 
      //brightness = 40;
      ledBlock(DARKRED, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      
   }
   //muere
   if (currentMillis - previousMillis > sec2_2 + 26850 && currentMillis - previousMillis < sec2_2 + 29050) { 
      
      ledBlock(DARKRED, 238, 239);
      
      ledBlock(DARKRED, 209, 211);
      ledBlock(DARKRED, 212, 221);
      dimout(0,45);
      
   }
   if (currentMillis - previousMillis > sec2_2 + 29050 && currentMillis - previousMillis < sec2_2 + 29150) { 
      brightness = 0;  
   }
   
   //pequeños aparecen de nuevo y se rien
     if (currentMillis - previousMillis > sec2_2 + 29150 && currentMillis - previousMillis < sec2_2 + 29200) { 
       brightness = 30; 
      ledBlock(IVORY, 242, 242);
      //ledBlock(IVORY, 238, 239);
      ledBlock(IVORY, 296, 296); 
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 29200 && currentMillis - previousMillis < sec2_2 + 29250) { 
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
       
       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 29250 && currentMillis - previousMillis < sec2_2 + 29310) { 
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242); 

      ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 29310 && currentMillis - previousMillis < sec2_2 + 29330) { 
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);

       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 29330 && currentMillis - previousMillis < sec2_2 + 29350) { 
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
      
      ledBlock(IVORY, 233, 233);  
      ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 29350 && currentMillis - previousMillis < sec2_2 + 29370) { 
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
     
       ledBlock(IVORY, 233, 233);
       ledBlock(IVORY, 296, 296); 
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 29370 && currentMillis - previousMillis < sec2_2 + 29390) { 
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
     
       ledBlock(IVORY, 233, 233); 
       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 29390 && currentMillis - previousMillis < sec2_2 + 29410) { 
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
       
       ledBlock(IVORY, 233, 233);  
       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 29410 && currentMillis - previousMillis < sec2_2 + 29430) { 
      ledBlock(IVORY, 222, 222);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
     
       ledBlock(IVORY, 233, 233); 
       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   if (currentMillis - previousMillis > sec2_2 + 29430 && currentMillis - previousMillis < sec2_2 + 29450) { 
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
     
       ledBlock(IVORY, 133, 133);
       ledBlock(IVORY, 296, 296); 
      //dimin(30,3);
   }
   //aqui estan todos juntos
   if (currentMillis - previousMillis > sec2_2 + 29450 && currentMillis - previousMillis < sec2_2 + 29950) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
     
       ledBlock(IVORY, 233, 233); 
       ledBlock(IVORY, 296, 296);
      //dimin(30,3);
   }
   //legan más monstruos
   if (currentMillis - previousMillis > sec2_2 + 29950 && currentMillis - previousMillis < sec2_2 + 30150) { 
      ledBlock(IVORY, 208, 208);
      ledBlock(IVORY, 234, 234);
      ledBlock(IVORY, 83, 83);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 194, 194);
      ledBlock(IVORY, 58, 58);
      ledBlock(IVORY, 147, 147);
      ledBlock(IVORY, 28, 28);
      ledBlock(IVORY, 167, 167);
      ledBlock(IVORY, 242, 242);
     
       ledBlock(IVORY, 233, 233); 
       ledBlock(IVORY, 296, 296);

      ledBlock(DARKRED, 35, 57);
       ledBlock(DARKRED, 128, 133);
       ledBlock(DARKRED, 244, 258);
      //dimin(30,3);
   }
   //se van
   if (currentMillis - previousMillis > sec2_2 + 30150 && currentMillis - previousMillis < sec2_2 + 33950) { 


      ledBlock(DARKRED, 35, 57);
       ledBlock(DARKRED, 128, 133);
       ledBlock(DARKRED, 244, 258);
       dimout(0,25);
      //dimin(30,3);
   }
   
   if (currentMillis - previousMillis > sec2_2 + 33950 && currentMillis - previousMillis < sec2_2 + 42050) { 
      brightness = 0;
      sec3 = sec2_2 + 42050;
   }



   
} ///END OF SECTION 2

