int pinArray[] = {5, 6, 7, 8, 9, 10, 11, 12};
int count = 0;
int timer = 50;

void setup(){
  for (count=0;count<8;count++) {
    pinMode(pinArray[count], OUTPUT);
  }
}

void loop() {
  for (count=0;count<8;count++) {
   changeLED(pinArray[count]);
  }
  for (count=7;count>=0;count--) {
   changeLED(pinArray[count]);
  }
}

void changeLED(int pin) {
   digitalWrite(pin, HIGH); 	
   delay(timer);
   digitalWrite(pin, LOW); 	
   delay(timer);
}


