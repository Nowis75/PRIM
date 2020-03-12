void setup() {

   pinMode(5, OUTPUT);      // dioda 1

   pinMode(6, OUTPUT);      // dioda 2

   pinMode(7, OUTPUT);      // dioda 3

   pinMode(8, OUTPUT);      // dioda 4

   pinMode(9, OUTPUT);      // dioda 5

   pinMode(10, OUTPUT);     // dioda 6

   pinMode(11, OUTPUT);	   // dioda 7

   pinMode(12, OUTPUT); 	   // dioda 8

   pinMode(13, OUTPUT);	   // dioda 9

}   



void loop() {

   digitalWrite(5, HIGH); 	// rozsvícení diody 1

   delay(50);

   digitalWrite(5, LOW); 	// zhasnutí diod

   delay(50);

   digitalWrite(6, HIGH); 	// rozsvícení diody 2

   delay(50);

   digitalWrite(6, LOW);       // zhasnutí diod

   delay(50);

   digitalWrite(7, HIGH); 	// rozsvícení diody 3

   delay(50);

   digitalWrite(7, LOW);       // zhasnutí diod 

   delay(50);

   digitalWrite(8, HIGH); 	// rozsvícení diody 4

   delay(50);

   digitalWrite(8, LOW);       // zhasnutí diod 

   delay(50);

   digitalWrite(9, HIGH); 	// rozsvícení diody 5

   delay(50);

   digitalWrite(9, LOW);       // zhasnutí diod

   delay(50);

   digitalWrite(10, HIGH); 	// rozsvícení diody 6

   delay(50);

   digitalWrite(10, LOW);      // zhasnutí diod

   delay(50);

   digitalWrite(11, HIGH); 	// rozsvícení diody 7

   delay(50);

   digitalWrite(11, LOW);      // zhasnutí diod

   delay(50);

   digitalWrite(12, HIGH); 	// rozsvícení diody 8

   delay(50);

   digitalWrite(12, LOW);      // zhasnutí diod 

   delay(50);


} 


