//SECTION 
void sectionfour() {


  if (currentMillis - previousMillis  > 10 && currentMillis - previousMillis < 500) {
      pixel_loc[1] = 0;
      pixel_loc[2] = 136;
      pixel_loc[3] = 199;
      brightness = 0;
  }
  
  if (currentMillis - previousMillis  > 500 && currentMillis - previousMillis < 3500) {
      dimin(70,30);
      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 136, 136);
      ledBlock(IVORY, 282, 282);
  }


  if (currentMillis - previousMillis  > 3500 && currentMillis - previousMillis < 4550) {
   //ESTO MOLA SON MOVIMIENTOS GRACIOSOS
  
       //dimout(40,15);
       //gotoledfull(IVORY, pixel_loc[1], 100, 25, 1);
       gotoledfull(IVORY, pixel_loc[2], 157, 45, 2);
       //gotoledfull(IVORY,  pixel_loc[3], 250, 30, 3);

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);

  }
  if (currentMillis - previousMillis  > 4550 && currentMillis - previousMillis < 4650) {
   //ESTO MOLA SON MOVIMIENTOS GRACIOSOS

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       ledBlock(IVORY, 157, 157);

  }
  if (currentMillis - previousMillis  > 4650 && currentMillis - previousMillis < 4750) {
   //ESTO MOLA SON MOVIMIENTOS GRACIOSOS
  
       //dimout(40,15);
       //gotoledfull(IVORY, pixel_loc[1], 100, 25, 1);
       gotoledfull(IVORY, pixel_loc[2], 150, 50, 2);
       //gotoledfull(IVORY,  pixel_loc[3], 250, 30, 3);

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);

  }
  if (currentMillis - previousMillis  > 4750 && currentMillis - previousMillis < 5150) {
   //ESTO MOLA SON MOVIMIENTOS GRACIOSOS
  
       //dimout(40,15);
       //gotoledfull(IVORY, pixel_loc[1], 100, 25, 1);
       gotoledfull(IVORY, pixel_loc[2], 153, 45, 2);
       //gotoledfull(IVORY,  pixel_loc[3], 250, 30, 3);

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       

  }
  if (currentMillis - previousMillis  > 5150 && currentMillis - previousMillis < 5250) {
   //ESTO MOLA SON MOVIMIENTOS GRACIOSOS

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       ledBlock(IVORY, 153, 153);
      

  }
  if (currentMillis - previousMillis  > 5250 && currentMillis - previousMillis < 6550) {
   //ESTO MOLA SON MOVIMIENTOS GRACIOSOS
  
       //dimout(40,15);
       //gotoledfull(IVORY, pixel_loc[1], 100, 25, 1);
       gotoledfull(IVORY, pixel_loc[2], 130, 50, 2);
       //gotoledfull(IVORY,  pixel_loc[3], 250, 30, 3);

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       
       

  }
  if (currentMillis - previousMillis  > 6550 && currentMillis - previousMillis < 7050) {
   //ESTO MOLA SON MOVIMIENTOS GRACIOSOS
        brightness = 70;
       //dimout(40,15);
       //gotoledfull(IVORY, pixel_loc[1], 100, 25, 1);
       gotoledfull(IVORY, pixel_loc[2], 136, 50, 2);
       //gotoledfull(IVORY,  pixel_loc[3], 250, 30, 3);

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);

      //VUELTA A CASE       

  }
  if (currentMillis - previousMillis  > 7050 && currentMillis - previousMillis < 7150) {
   //ESTO MOLA SON MOVIMIENTOS GRACIOSOS
       brightness = 70;
       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       ledBlock(IVORY, 136, 136); //ESTAMOS EN CASA

  }
  if (currentMillis - previousMillis  > 7150 && currentMillis - previousMillis < 10050) {
       brightness = 70;
       gotoled(IVORY, 33, 100, 35, 1);
       gotoled(IVORY, 282, 205, 35, 3);

       ledBlock(IVORY, 136, 136);



  }
  

}  ///END OF SECTION FOUR
