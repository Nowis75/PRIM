int pinArray[3][8] = {
                      {5, 6, 7, 8, 9, 10, 11, 12},
                      {12, 11, 10, 9, 8, 7, 6, 5},
                      {8, 7, 6, 5, 9, 10, 11, 12}
                      };

int count = 0;
int timer = 50;
int i;

void setup(){
  for (count=0;count<8;count++) {
    pinMode(pinArray[0][count], OUTPUT);
  }
}

void loop() {
  for(i=0; i<3; i++){
    for (count=0;count<8;count++) {
     changeLED(pinArray[i][count]);
    }
  }
}

void changeLED(int pin) {
   digitalWrite(pin, HIGH); 	
   delay(timer);
   digitalWrite(pin, LOW); 	
   delay(timer);
}


