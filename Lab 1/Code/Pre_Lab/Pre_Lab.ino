/*
 * Zachary Davis
 */

//initializing various variables
int analogPin0 = 0;
int analogPin1 = 0;
int difference = 0;

//initialize output pins
void setup() {
   pinMode(4, OUTPUT);
}

//Constantly check the two inputs and change output based on which
//of the inputs is higher.
void loop() {
  //Subtract input 2 from 1. If postive 1 is bigger and 
  //visa versa.
  difference = analogRead(A0) - analogRead(A1);

  //If input one is greater set the output ON.
  //If input two is greater set the output OFF.
  //If they are equal leave the output as is.
  if(difference > 0){
    digitalWrite(4, HIGH);
  }
  else if(difference < 0){
    digitalWrite(4, LOW);
  }
  else{
    delay(1);
  }

  //Wait a fifth of a second and start over.
  delay(200);
}
