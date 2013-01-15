/*
 * Arduino Examples
 * https://github.com/fusion94/ArduinoExamples
    
 * Example 04: Fade an LED in and out like on a sleeping Apple computer
   
 * The circuit:
 
 * Copyright 2011-2013, http://fusion94.org
 * Licensed under the Mozilla Public License Version 2.0

 */

const int LED = 9; // the pin for the LED
int i = 0;         // Weâ€™ll use this to count up and down

void setup() {
  pinMode(LED, OUTPUT); // tell Arduino LED is an output
}
void loop(){

  for (i = 0; i < 255; i++) { // loop from 0 to 254 (fade in)
  
    analogWrite(LED, i); // set the LED brightness
    delay(10);           // Wait 10ms because analogWrite
                         // is instantaneous and we would
                         // not see any change
  }
  
  for (i = 255; i > 0; i--) { // loop from 255 to 1 (fade out)
  
    analogWrite(LED, i); // set the LED brightness
    delay(10);           // Wait 10ms  
  }
}
