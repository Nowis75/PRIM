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

   changeLED (5); 	

   changeLED (6);

   changeLED (7);

   changeLED (8);

   changeLED (9);

   changeLED (10);

   changeLED (11);

   changeLED (12);

   changeLED (11);

   changeLED (10);

   changeLED (9);

   changeLED (8);

   changeLED (7);

   changeLED (6);



} 



void changeLED(int pin) {

   digitalWrite(pin, HIGH); 	// rozsvícení diody

   delay(50);

   digitalWrite(pin, LOW); 	// zhasnutí diod

   delay(50);

}


