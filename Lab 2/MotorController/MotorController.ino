/*
Stepper Motor Controller
Zachary Davis & Tatsuya Kudo
October 20th, 2018
*/

//Declare Program Wide Variables
int RotationalDelay;
int reverseSwitch;

//Configure Arduino Pins
void setup(){
  
  //Solenoid Output Pins
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  //Dircetion Input
  pinMode(6, INPUT);  
}

//Actual Control Loopy
void loop(){

  //Read in the value of the pot to determine dirction.
  reverseSwitch = digitalRead(6);
  
  if(reverseSwitch == LOW){
    //Read in the speed delay from pot and apply to map.
    RotationalDelay = analogRead(0);
    RotationalDelay = map(RotationalDelay, 0, 1023, 60, 2000);

    //Set which coils to be High delay and set Low.
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);     
    delay(RotationalDelay);           
    digitalWrite(12, LOW);
    digitalWrite(13, LOW); 
    delay(5);

    //This is repeated 3 more times for all coils
    RotationalDelay = analogRead(0);
    RotationalDelay = map(RotationalDelay, 0, 1023, 60, 2000);
  
    digitalWrite(11, HIGH); 
    delay(RotationalDelay);           
    digitalWrite(11, LOW); 
    delay(5);
  
    RotationalDelay = analogRead(0);
    RotationalDelay = map(RotationalDelay, 0, 1023, 60, 2000);
  
    digitalWrite(10, HIGH); 
    digitalWrite(13, HIGH);  
    delay(RotationalDelay);           
    digitalWrite(10, LOW);
    digitalWrite(13, LOW); 
    delay(5);
  
    RotationalDelay = analogRead(0);
    RotationalDelay = map(RotationalDelay, 0, 1023, 60, 2000);
  
    digitalWrite(9, HIGH); 
    delay(RotationalDelay);           
    digitalWrite(9, LOW); 
    delay(5);   
  }
  else{
    //This is the same as above although in the opposite direction.
    RotationalDelay = analogRead(0);
    RotationalDelay = map(RotationalDelay, 0, 1023, 60, 2000);
      
    digitalWrite(9, HIGH);
    digitalWrite(13, HIGH);     
    delay(RotationalDelay);           
    digitalWrite(9, LOW);
    digitalWrite(13, LOW); 
    delay(5);
    
    RotationalDelay = analogRead(0);
    RotationalDelay = map(RotationalDelay, 0, 1023, 60, 2000);
    
    digitalWrite(10, HIGH); 
    delay(RotationalDelay);           
    digitalWrite(10, LOW); 
    delay(5);
    
    RotationalDelay = analogRead(0);
    RotationalDelay = map(RotationalDelay, 0, 1023, 60, 2000);
    
    digitalWrite(11, HIGH); 
    digitalWrite(13, HIGH);  
    delay(RotationalDelay);           
    digitalWrite(11, LOW);
    digitalWrite(13, LOW); 
    delay(5);
    
    RotationalDelay = analogRead(0);
    RotationalDelay = map(RotationalDelay, 0, 1023, 60, 2000);
    
    digitalWrite(12, HIGH); 
    delay(RotationalDelay);           
    digitalWrite(12, LOW); 
    delay(5);
  }  
}
