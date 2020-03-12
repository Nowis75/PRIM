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

   changeLED (5, 1); 	

   changeLED (6, 1);

   changeLED (7, 1);

   changeLED (8, 1);

   changeLED (9, 1);

   changeLED (10, 1);

   changeLED (11, 1);

   changeLED (12, 1);

   changeLED (5, 0); 	

   changeLED (6, 0);

   changeLED (7, 0);

   changeLED (8, 0);

   changeLED (9, 0);

   changeLED (10, 0);

   changeLED (11, 0);

   changeLED (12, 0);

} 



void changeLED(int pin, int state) {

   digitalWrite(pin, state); 	// změna stavu diody

   delay(50);

}


