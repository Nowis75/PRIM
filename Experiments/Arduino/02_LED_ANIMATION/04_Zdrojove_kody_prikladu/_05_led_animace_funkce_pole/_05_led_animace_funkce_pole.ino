int pinArray[] = {5, 6, 7, 8, 9, 10, 11, 12};



void setup() {

   pinMode(pinArray[0], OUTPUT);      // dioda 1

   pinMode(pinArray[1], OUTPUT);      // dioda 2

   pinMode(pinArray[2], OUTPUT);      // dioda 3

   pinMode(pinArray[3], OUTPUT);      // dioda 4

   pinMode(pinArray[4], OUTPUT);      // dioda 5

   pinMode(pinArray[5], OUTPUT);      // dioda 6

   pinMode(pinArray[6], OUTPUT);	 // dioda 7

   pinMode(pinArray[7], OUTPUT); 	 // dioda 8

}   



void loop() {

   changeLED (pinArray[0]); 	

   changeLED (pinArray[1]);

   changeLED (pinArray[2]);

   changeLED (pinArray[3]);

   changeLED (pinArray[4]);

   changeLED (pinArray[5]);

   changeLED (pinArray[6]);

   changeLED (pinArray[7]);

} 



void changeLED(int pin) {

   digitalWrite(pin, HIGH); 	// rozsvícení diody

   delay(50);

   digitalWrite(pin, LOW); 	// zhasnutí diod

}


