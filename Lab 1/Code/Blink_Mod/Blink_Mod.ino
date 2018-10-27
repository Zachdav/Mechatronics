/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

 /*
  *  Modified by: Zachary Davis
  */

//This is the none looping portion of arduino code used for one
//time initialization.
void setup() {
  //Initialize Pin 12 as the output pin.
  pinMode(12, OUTPUT);
}

//The inifinite looping portion of the arduino program.
void loop() {
  //Set pin 12 to output logic high
  digitalWrite(12, HIGH); 
  //Wait for 0.5 seconds  
  delay(500);         
  //Set pin 12 to output logic low     
  digitalWrite(12, LOW);
  //Wait for 1.5 seconds    
  delay(1500);              
}
