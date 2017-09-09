void sectiontwo() {

  
  //LENTA INTRO 
  
   if (currentMillis - previousMillis > 0 && currentMillis - previousMillis < 6000/6) {    
      ledBlock(IVORY, 155, 155);  
      dimin(40,20);       
   }  
   if (currentMillis - previousMillis > 5000/6 && currentMillis - previousMillis < 15000/6 ) {
      ledBlock(IVORY, 155, 155);  
      dimout(0,30);       
   }
   if (currentMillis - previousMillis > 15000/6 && currentMillis - previousMillis < 22000/6 ) {
      ledBlock(IVORY, 29, 32);   
      dimin(40,20);      
   }
   if (currentMillis - previousMillis > 22000/6 && currentMillis - previousMillis < 28000/6 ) {
      ledBlock(IVORY, 29, 32);  
      dimout(0,30);       
   }
   if (currentMillis - previousMillis > 28000/6 && currentMillis - previousMillis < 34000/6 ) {
      ledBlock(IVORY, 296, 296);    
      dimin(40,10);      
   }
   if (currentMillis - previousMillis > 34000/6 && currentMillis - previousMillis < 49000/6 ) {
      ledBlock(IVORY, 296, 296);   
      dimout(0,40);       
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
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 60 && currentMillis - previousMillis < sec2_2 + 70) {    
      int r=random(298);
      ledBlock(IVORY, r, r);  
             
   }
   if (currentMillis - previousMillis > sec2_2 + 70 && currentMillis - previousMillis < sec2_2 + 80) {    
      int r=random(298);
      ledBlock(IVORY, r, r);          
   }
   if (currentMillis - previousMillis > sec2_2 + 80 && currentMillis - previousMillis < sec2_2 + 90) {    
      int r=random(298);
      ledBlock(IVORY, r, r);  
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 90 && currentMillis - previousMillis < sec2_2 + 100) {    
      int r=random(298);
      ledBlock(IVORY, r, r);  
             
   }
   if (currentMillis - previousMillis > sec2_2 + 100 && currentMillis - previousMillis < sec2_2 + 110) {    
      int r=random(298);
      ledBlock(IVORY, r, r);          
   }
   if (currentMillis - previousMillis > sec2_2 + 110 && currentMillis - previousMillis < sec2_2 + 120) {    
      ledBlock(IVORY, 70, 70);  
             
   }  
   if (currentMillis - previousMillis > sec2_2 + 120 && currentMillis - previousMillis < sec2_2 + 130) {    
      ledBlock(IVORY, 170, 170);  
             
   }
   if (currentMillis - previousMillis > sec2_2 + 130 && currentMillis - previousMillis < sec2_2 + 140) {    
      ledBlock(IVORY, 270, 270);          
   }

   //STAY
   if (currentMillis - previousMillis > sec2_2 + 140 && currentMillis - previousMillis < sec2_2 + 9040) {    
      ledBlock(IVORY, 225, 231);
      dimout(0,20);          
   }
}

