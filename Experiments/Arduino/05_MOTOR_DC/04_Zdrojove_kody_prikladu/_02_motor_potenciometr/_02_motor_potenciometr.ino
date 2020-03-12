const int transistorPin = 9;

 

void setup() {

  pinMode(transistorPin, OUTPUT);

}

 

void loop() {

  int sensorValue = analogRead(A0);

  int outputValue = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(transistorPin, outputValue);

}


