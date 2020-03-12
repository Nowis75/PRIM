int pinArray[] = {5, 6, 7, 8, 9, 10, 11, 12, 11, 10, 9 ,8 ,7 ,6, 5, 6, 5, 7, 5, 8, 5, 9, 5, 10, 5, 11, 5, 12};

int count = 0;
int timer = 50;
int sizeArray=sizeof(pinArray)/sizeof(int);

void setup(){
  for (count=0;count<8;count++) {
    pinMode(pinArray[count], OUTPUT);
  }
}

void loop() {
    for (count=0;count<sizeArray;count++) {
     changeLED(pinArray[count]);
    }
}

void changeLED(int pin) {
   digitalWrite(pin, HIGH); 	
   delay(timer);
   digitalWrite(pin, LOW); 	
   delay(timer);
}


