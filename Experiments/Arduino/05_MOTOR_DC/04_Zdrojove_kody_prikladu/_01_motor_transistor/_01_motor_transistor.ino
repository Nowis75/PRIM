const int transistorPin = 9;

const int speedMotor = 200;

 

void setup() {

  pinMode(transistorPin, OUTPUT);

}

 

void loop() {

  analogWrite(transistorPin, speedMotor);

}


