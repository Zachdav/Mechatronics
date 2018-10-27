/*
 * Zachary Davis
 */

//initializing various variables
int digitalPin0 = 0;
int digitalPin1 = 0;

//initialize output pins
void setup() {
   pinMode(4, OUTPUT);
}

//Constantly check the two inputs and change output based on which
//of the inputs is higher.
void loop(){
  if(!(digitalRead(2) && digitalRead(3))){
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }
}
