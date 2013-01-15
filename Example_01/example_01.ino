/*
 * Arduino Examples
 * https://github.com/fusion94/ArduinoExamples
    
 * Example 01 : Blinking LED
   
 * The circuit:
    * Positive output of LED to digital pin 13
    * GND of LED to ground
 
 * Copyright 2011-2013, http://fusion94.org
 * Licensed under the Mozilla Public License Version 2.0

 */

const int LED = 13; // LED connected to digital pin 13
                    
void setup()
{
  pinMode(LED, OUTPUT); // sets the digital pin as output
                        
}
void loop()
{
  digitalWrite(LED, HIGH); // turns the LED on
  delay(500);             // waits for 1/2 a second
  digitalWrite(LED, LOW);  // turns the LED off
  delay(500);             // waits for 1/2 a second
}
