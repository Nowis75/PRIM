void setup() {

   pinMode(5, OUTPUT);      // dioda 1

   pinMode(6, OUTPUT);      // dioda 2

   pinMode(7, OUTPUT);      // dioda 3

   pinMode(8, OUTPUT);      // dioda 4

   pinMode(9, OUTPUT);      // dioda 5

   pinMode(10, OUTPUT);     // dioda 6

   pinMode(11, OUTPUT);	   // dioda 7

   pinMode(12, OUTPUT); 	   // dioda 8

}   



void loop() {

   changeLED (5, 12); 	

   changeLED (6, 11);

   changeLED (7, 10);

   changeLED (8, 9);

   changeLED (9, 8);

   changeLED (10, 7);

   changeLED (11, 6);

   changeLED (12, 5);

} 



void changeLED(int pinA, int pinB) {

   digitalWrite(pinA, HIGH); 	// rozsvícení diody A

   digitalWrite(pinB, HIGH); 	// rozsvícení diody B

   delay(50);

   digitalWrite(pinA, LOW); 	// zhasnutí diod A

   digitalWrite(pinB, LOW); 	// zhasnutí diod B

   delay(50);

}


