void setup() {

   pinMode(13, OUTPUT); 		

   pinMode(12, OUTPUT); 				 

}   



void loop() {

   digitalWrite(13, HIGH); 

   delay(250);	

   digitalWrite(12, HIGH); 	 

   delay(500);

   digitalWrite(13, LOW);

   delay(750); 	

   digitalWrite(12, LOW); 	

   delay(1000);	 

} 


