//SECTION 
void sectionfour() {


  if (currentMillis - previousMillis  > 10 && currentMillis - previousMillis < 500) {
      pixel_loc[2] = 33;
      pixel_loc[3] = 136;
      pixel_loc[4] = 158;
      pixel_loc[6] = 282;
      brightness = 0;
  }
  
  if (currentMillis - previousMillis  > 500 && currentMillis - previousMillis < 3500) {
      dimin(70,30);
      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 136, 136);
      ledBlock(IVORY, 282, 282);
      ledBlock(MEDIUMAQUAMARINE, 158, 158);  //APARECEN TODOS
  }


  if (currentMillis - previousMillis  > 3500 && currentMillis - previousMillis < 4550) {
   //ESTO MOLA SON MOVIMIENTOS GRACIOSOS
  
       //gotoledfull(IVORY, pixel_loc[2], 157, 45, 2);
       gotoled(IVORY, pixel_loc[3], 157, 45, 3);

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       ledBlock(MEDIUMAQUAMARINE, 158, 158);  //UNO VA A BUSCAR A OTRO

  }
  if (currentMillis - previousMillis  > 4550 && currentMillis - previousMillis < 4650) {
   //ESTO MOLA SON MOVIMIENTOS GRACIOSOS

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       ledBlock(IVORY, 157, 157);
       ledBlock(MEDIUMAQUAMARINE, 158, 158);  //SE MIRAN

  }
  
  if (currentMillis - previousMillis  > 4650 && currentMillis - previousMillis < 4750) {
   //ESTO MOLA SON MOVIMIENTOS GRACIOSOS
  
       gotoledfull(IVORY, pixel_loc[3], 150, 50, 3);

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       ledBlock(MEDIUMAQUAMARINE, 158, 158);  //se va uno
       

  }
  if (currentMillis - previousMillis  > 4750 && currentMillis - previousMillis < 4900) {
  
       //dimout(40,15);
       gotoled(IVORY, pixel_loc[3], 153, 45, 3);
       gotoled(MEDIUMAQUAMARINE, pixel_loc[4], 155, 45, 4);    //SE SIGUEN

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       
       

  }
  if (currentMillis - previousMillis  > 4900 && currentMillis - previousMillis < 5050) {

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       ledBlock(IVORY, 153, 153);
       ledBlock(MEDIUMAQUAMARINE, 155, 155);
       
      

  }
  if (currentMillis - previousMillis  > 5050 && currentMillis - previousMillis < 5650) {
  
       gotoled(IVORY, pixel_loc[3], 125, 40, 3);
       gotoled(MEDIUMAQUAMARINE, pixel_loc[4], 135, 50, 4);

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282); //SE SIGUEN DE NUEVO
       
       

  }
  if (currentMillis - previousMillis  > 5650 && currentMillis - previousMillis < 5950) {
        brightness = 70;

       gotoled(IVORY, pixel_loc[3], 132, 50, 3);

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       ledBlock(MEDIUMAQUAMARINE, 134, 134);   //SE VA DE NUEVO
      
 

  }
  if (currentMillis - previousMillis  > 5950 && currentMillis - previousMillis < 6350) {

       ledBlock(IVORY, 33, 33);
       ledBlock(IVORY, 282, 282);
       
       ledBlock(IVORY, 133, 133);
       ledBlock(MEDIUMAQUAMARINE, 134, 134); //ESTAMOS EN CASA

       
       

  }
  if (currentMillis - previousMillis  > 6350 && currentMillis - previousMillis < 6400) {

      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      ledBlock(IVORY, 133, 133);
      ledBlock(MEDIUMAQUAMARINE, 135, 135);  //jueguecitos

  }
  if (currentMillis - previousMillis  > 6400 && currentMillis - previousMillis < 6450) {

      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      ledBlock(IVORY, 133, 133);
      ledBlock(MEDIUMAQUAMARINE, 136, 136);  //jueguecitos

  }
  if (currentMillis - previousMillis  > 6450 && currentMillis - previousMillis < 6800) {

      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      ledBlock(IVORY, 135, 135);
      ledBlock(MEDIUMAQUAMARINE, 136, 136);  //jueguecitos

  }
  if (currentMillis - previousMillis  > 6800 && currentMillis - previousMillis < 6900) {

      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      ledBlock(IVORY, 135, 135);
      ledBlock(MEDIUMAQUAMARINE, 138, 138);  //jueguecitos

  }
  if (currentMillis - previousMillis  > 6800 && currentMillis - previousMillis < 6900) {

      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      ledBlock(IVORY, 135, 135);
      ledBlock(MEDIUMAQUAMARINE, 137, 137);  //jueguecitos

  }
  if (currentMillis - previousMillis  > 6900 && currentMillis - previousMillis < 7050) {

      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      ledBlock(IVORY, 135, 135);
      ledBlock(MEDIUMAQUAMARINE, 136, 136);  //jueguecitos

  }
  if (currentMillis - previousMillis  > 7050 && currentMillis - previousMillis < 7150) {

      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      ledBlock(IVORY, 135, 135);
      ledBlock(MEDIUMAQUAMARINE, 137, 137);  //jueguecitos

  }
  if (currentMillis - previousMillis  > 7150 && currentMillis - previousMillis < 7300) {
      brightness = 70;
      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      ledBlock(IVORY, 135, 135);
      ledBlock(MEDIUMAQUAMARINE, 136, 136);  //jueguecitos

  }
  if (currentMillis - previousMillis  > 7300 && currentMillis - previousMillis < 7600) {
      brightness = 70;
      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      //ledBlock(IVORY, 135, 135);
      ledBlock(STEELBLUE, 134, 135);  //SE JUNTAN
  }
  if (currentMillis - previousMillis  > 7600 && currentMillis - previousMillis < 7700) {

      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      ledBlock(STEELBLUE, 134, 135);  //SE MULTIPLICAN
      ledBlock(STEELBLUE, 155, 155);
  }
  if (currentMillis - previousMillis  > 7700 && currentMillis - previousMillis < 7800) {
      brightness = 70;
      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      ledBlock(STEELBLUE, 134, 135);  //MULTIPLICAN MAS
      ledBlock(STEELBLUE, 155, 155);
      ledBlock(STEELBLUE, 156, 157);
  }
  if (currentMillis - previousMillis  > 7800 && currentMillis - previousMillis < 8500) {
      brightness = 70;
      ledBlock(IVORY, 33, 33);
      ledBlock(IVORY, 282, 282);
       
      ledBlock(STEELBLUE, 134, 135);  //MULTIPLICAN MAS
      ledBlock(STEELBLUE, 155, 155);
      ledBlock(STEELBLUE, 156, 157);
      //ledBlock(STEELBLUE, 158, 160);
      ledBlock(STEELBLUE, 133, 134);
      pixel_loc[2] = 33;
      pixel_loc[6] = 221;
  }

  if (currentMillis - previousMillis  > 8500 && currentMillis - previousMillis < 8850) {
    brightness = 70;
           //LOS OTROS SE EMPIEZAN A MOVER, VAN HACIA EL CENTRO
      gotoled(IVORY, 33, 26, 40, 2);
      gotoled(IVORY, 221, 234, 50, 6);
       
      ledBlock(STEELBLUE, 134, 135);  //LOS AZULES SE QUEDAN
      ledBlock(STEELBLUE, 155, 155);
      ledBlock(STEELBLUE, 156, 157);
      ledBlock(STEELBLUE, 133, 133);
      
  }
  if (currentMillis - previousMillis  > 8850 && currentMillis - previousMillis < 8900) {
    brightness = 70;
           //LOS OTROS SE EMPIEZAN A MOVER, VAN HACIA EL CENTRO
      ledBlock(IVORY, 26, 26);
      ledBlock(IVORY, 234, 234);
       
      ledBlock(STEELBLUE, 134, 135);  //LOS AZULES SE QUEDAN
      ledBlock(STEELBLUE, 155, 155);
      ledBlock(STEELBLUE, 156, 157);
      ledBlock(STEELBLUE, 133, 133);
      
      pixel_loc[2] = 146;
      pixel_loc[6] = 191;
      
  }
  if (currentMillis - previousMillis  > 8900 && currentMillis - previousMillis < 9500) {
    brightness = 70;
           //LOS OTROS SE EMPIEZAN A MOVER, VAN HACIA EL CENTRO
      gotoled(IVORY, 146, 154, 40, 2);
      gotoled(IVORY, 191, 181, 50, 6);
       
      ledBlock(STEELBLUE, 134, 135);  //LOS AZULES SE QUEDAN
      ledBlock(STEELBLUE, 155, 155);
      ledBlock(STEELBLUE, 156, 157);
      ledBlock(STEELBLUE, 133, 133);

      
  }
  if (currentMillis - previousMillis  > 9500 && currentMillis - previousMillis < 9300) {
    brightness = 70;

      ledBlock(IVORY, 154, 154);
      ledBlock(IVORY, 181, 181);
       
      ledBlock(STEELBLUE, 134, 135);  //LOS AZULES SE QUEDAN
      ledBlock(STEELBLUE, 155, 155);
      ledBlock(STEELBLUE, 156, 157);
      ledBlock(STEELBLUE, 133, 133);

      pixel_loc[2] = 154;
      pixel_loc[6] = 179;
      
     
      
  }
  if (currentMillis - previousMillis  > 9300 && currentMillis - previousMillis < 10000) {
    brightness = 70;
           //LOS OTROS SE EMPIEZAN A MOVER, VAN HACIA EL CENTRO
      gotoled(IVORY, 154, 160, 40, 2);
      gotoled(IVORY, 179, 171, 50, 6);
       
      ledBlock(STEELBLUE, 134, 135);  //LOS AZULES SE QUEDAN
      ledBlock(STEELBLUE, 155, 155);
      ledBlock(STEELBLUE, 156, 157);
      ledBlock(STEELBLUE, 133, 133);

     
      
  }
  if (currentMillis - previousMillis  > 10000 && currentMillis - previousMillis < 10600) {
    brightness = 70;
           //LOS OTROS SE EMPIEZAN A MOVER, VAN HACIA LOS AZULES
      gotoled(IVORY, 160, 174, 40, 2);
      gotoled(IVORY, 171, 177, 45, 6);
       
      ledBlock(STEELBLUE, 134, 135);  //LOS AZULES SE QUEDAN
      ledBlock(STEELBLUE, 155, 155);
      ledBlock(STEELBLUE, 156, 157);
      ledBlock(STEELBLUE, 133, 133); 

      pixel_loc[1] = 135;
      pixel_loc[3] = 155;
      pixel_loc[4] = 157;
      pixel_loc[5] = 133;
      
  }
  if (currentMillis - previousMillis  > 10600 && currentMillis - previousMillis < 12100) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      gotoled(IVORY, 160, 144, 30, 2);
      gotoled(IVORY, 171, 187, 45, 6);
       
      gotoled(STEELBLUE, 135, 96, 20, 1);
      gotoled(STEELBLUE, 155, 95, 20, 3);
      gotoled(STEELBLUE, 157, 94, 20, 4);
      gotoled(STEELBLUE, 133, 97, 20, 5);
      
  }
  if (currentMillis - previousMillis  > 12100 && currentMillis - previousMillis < 13000) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      gotoled(IVORY, 144, 120, 20, 2);
      gotoled(IVORY, 187, 123, 15, 6);

      gotoled(STEELBLUE, 135, 96, 20, 1);
      gotoled(STEELBLUE, 155, 95, 20, 3);
      gotoled(STEELBLUE, 157, 94, 20, 4);
      gotoled(STEELBLUE, 133, 97, 20, 5); 
  
      ledBlock(STEELBLUE, 89, 97);
      ledBlock(STEELBLUE, 61, 69);       
  }
  
  if (currentMillis - previousMillis  > 13000 && currentMillis - previousMillis < 14000) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      gotoled(IVORY, 120, 135, 10, 2);
      gotoled(IVORY, 113, 134, 15, 6);  //LOS BLANCOS SE QUEDAN QUIETECITOS

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);   
  }
  if (currentMillis - previousMillis  > 14000 && currentMillis - previousMillis < 14100) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);   
  }
  if (currentMillis - previousMillis  > 14100 && currentMillis - previousMillis < 14200) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);   
  }
  if (currentMillis - previousMillis  > 14200 && currentMillis - previousMillis < 14300) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);   
  }
  if (currentMillis - previousMillis  > 14300 && currentMillis - previousMillis < 14400) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);   
  }
  if (currentMillis - previousMillis  > 14400 && currentMillis - previousMillis < 14500) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 158, 160);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);   
  }
  if (currentMillis - previousMillis  > 14500 && currentMillis - previousMillis < 14600) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);   
  }
   if (currentMillis - previousMillis  > 14600 && currentMillis - previousMillis < 14700) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);   
  }
  if (currentMillis - previousMillis  > 14700 && currentMillis - previousMillis < 14800) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 176, 179);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);   
  }
  if (currentMillis - previousMillis  > 14800 && currentMillis - previousMillis < 15800) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 176, 179);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);

      gotoledfull2(STEELBLUE, 108, 117, 23, 1);  
  }
  if (currentMillis - previousMillis  > 15800 && currentMillis - previousMillis < 16400) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 176, 179);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);
      ledBlock(STEELBLUE, 108, 117);

      gotoledfull2(STEELBLUE, 121, 129, 23, 1);  
  }
  if (currentMillis - previousMillis  > 16400 && currentMillis - previousMillis < 16900) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 176, 179);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);
      ledBlock(STEELBLUE, 108, 117);
      ledBlock(STEELBLUE, 121, 129);

      gotoledfull2(STEELBLUE, 139, 154, 23, 1);  
  }
  if (currentMillis - previousMillis  > 16900 && currentMillis - previousMillis < 17400) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 176, 179);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);
      ledBlock(STEELBLUE, 108, 117);
      ledBlock(STEELBLUE, 121, 129);
      ledBlock(STEELBLUE, 139, 154);

      gotoledfull2(STEELBLUE, 158, 171, 23, 1);  
  }
  if (currentMillis - previousMillis  > 17400 && currentMillis - previousMillis < 18200) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 176, 179);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);
      ledBlock(STEELBLUE, 108, 117);
      ledBlock(STEELBLUE, 121, 129);
      ledBlock(STEELBLUE, 139, 154);
      ledBlock(STEELBLUE, 158, 171);

      gotoledfull2(STEELBLUE, 180, 197, 23, 1);  
  }
  if (currentMillis - previousMillis  > 18200 && currentMillis - previousMillis < 20200) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LOS BLANCOS SE QUEDAN QUIETECITOS
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 176, 179);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);
      ledBlock(STEELBLUE, 108, 117);
      ledBlock(STEELBLUE, 121, 129);
      ledBlock(STEELBLUE, 139, 154);
      ledBlock(STEELBLUE, 158, 171);
      ledBlock(STEELBLUE, 180, 198);

      //gotoledfull2(STEELBLUE, 180, 197, 23, 1);  
      pixel_loc[3] = 0;
      note = true;
  }
  if (currentMillis - previousMillis  > 18200 && currentMillis - previousMillis < 20200) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LLENAR EL RESTO DE LAS SUPERFICIES
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 176, 179);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);
      ledBlock(STEELBLUE, 108, 117);
      ledBlock(STEELBLUE, 121, 129);
      ledBlock(STEELBLUE, 139, 154);
      ledBlock(STEELBLUE, 158, 171);
      ledBlock(STEELBLUE, 180, 198);
      //ledBlock(STEELBLUE, 0, 108);

      gotoledfull2(STEELBLUE, 198, 298, 23, 1);  
      //gotoledfull2(STEELBLUE, 0, 108, 23, 3); 

      if(note) {
         
        note = false;
     
       //ACTIVATE TANGIBLE SCORES 
       usbMIDI.sendNoteOn(1, 127, 11);
       usbMIDI.sendNoteOn(1, 127, 12);
       usbMIDI.sendNoteOn(1, 127, 13);
       
      }
      
  }
  if (currentMillis - previousMillis  > 20200 && currentMillis - previousMillis < 50200) {
    brightness = 70;
           //MUEVEN A LOS AZULES
      ledBlock(IVORY, 134, 135);  //LLENAR EL RESTO DE LAS SUPERFICIES
      ledBlock(IVORY, 136, 138);
      ledBlock(IVORY, 130, 133);
      ledBlock(IVORY, 118, 121);
      ledBlock(IVORY, 172, 175);
      ledBlock(IVORY, 155, 155);
      ledBlock(IVORY, 176, 179);
      ledBlock(IVORY, 156, 157);

  
      ledBlock(STEELBLUE, 89, 97);    
      ledBlock(STEELBLUE, 61, 69);
      ledBlock(STEELBLUE, 108, 117);
      ledBlock(STEELBLUE, 121, 129);
      ledBlock(STEELBLUE, 139, 154);
      ledBlock(STEELBLUE, 158, 171);
      ledBlock(STEELBLUE, 180, 198);
      //ledBlock(STEELBLUE, 0, 108);
      ledBlock(STEELBLUE, 198, 298);

      //gotoledfull2(STEELBLUE, 198, 298, 23, 1);  
      gotoledfull2(STEELBLUE, 0, 108, 23, 3); 
      note = true;
  }
  if (currentMillis - previousMillis  > 50200 && currentMillis - previousMillis < 50250) {   
       if(note) {
         
        note = false;
     
       //MUTE TANGIBLE SCORES (AREA 99)
       usbMIDI.sendNoteOn(99, 127, 11);
       usbMIDI.sendNoteOn(99, 127, 12);
       usbMIDI.sendNoteOn(99, 127, 13);
     
       //leds.setBrightness(0);
       //leds.show();
       brightness=0;
       previousMillis = millis();

       sec5 = sec4 + 50250; 

        section = 5;                        //VAMONOS A LA SIGUIENTE SECCION
        Serial.println("SECTION 5");     
      } 
   }
  

}  ///END OF SECTION FOUR
