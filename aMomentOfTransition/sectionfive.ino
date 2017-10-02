//SECTION 
void sectionfive() {

  if (currentMillis - previousMillis  > 10 && currentMillis - previousMillis < 2000) {
      brightness = 0;
  }

  //BIG DIM IN
  if (currentMillis - previousMillis  > 10 && currentMillis - previousMillis < 50000) {
      ledBlock(IVORY, 0, 298);
      dimin(40,150);
  }
  if (currentMillis - previousMillis  > 50000 && currentMillis - previousMillis < 52000) {
      ledBlock(IVORY, 0, 298);
      dimout(0,80);
  }

} //////////END SECTION FIVE
