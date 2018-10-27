/*
 * Zachary Davis
 */

//initializing various variables
int analogIn = 0;
int analogOut = 0;

//initialize output pins
void setup(){
   //Serial.begin(9600);
   pinMode(3, OUTPUT);
}


void loop(){
  //Read the analog value in from A0
  analogIn = analogRead(A0);
  //Print this value to the monitor
  Serial.println(analogIn);
  //Use the equation to remap to PWM range keeping ratio equal
  analogOut = (analogIn/1023)*255;
  //Write this value to out PWM pin 3
  analogWrite(3, analogOut);
}
