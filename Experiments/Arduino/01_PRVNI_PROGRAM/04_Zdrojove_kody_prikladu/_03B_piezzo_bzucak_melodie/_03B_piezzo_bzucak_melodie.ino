// Uvedeny kód ukazuje část melodie Jingle Bells. 

// Poradi tonu je: E E E P, E E E P, E G C D E P

// Symbol P značí pauzu a bude mít hodnotu 0



const int pinBzucak=13;        



void setup() {		

   pinMode(pinBzucak, OUTPUT); 				 

}   



void loop() {

   tone(pinBzucak, 329);  delay(1000);                  

   noTone(pinBzucak); delay(100); 

   tone(pinBzucak, 329);  delay(1000);                  

   noTone(pinBzucak); delay(100); 

   tone(pinBzucak, 329);  delay(1000);                  

   noTone(pinBzucak); delay(100); 
   

   tone(pinBzucak, 0);  delay(1000); 

   noTone(pinBzucak); delay(100); 

   tone(pinBzucak, 329);  delay(1000);                  

   noTone(pinBzucak); delay(100); 

   tone(pinBzucak, 329);  delay(1000);                  

   noTone(pinBzucak); delay(100); 
   

   tone(pinBzucak, 329);  delay(1000);                  

   noTone(pinBzucak); delay(1000); 

   tone(pinBzucak, 0);  delay(1000);                

   noTone(pinBzucak); delay(100); 

   tone(pinBzucak, 329);  delay(1000);                  

   noTone(pinBzucak); delay(100); 

   tone(pinBzucak, 392);  delay(1000);                  

   noTone(pinBzucak); delay(100); 

   tone(pinBzucak, 261);  delay(1000);                  

   noTone(pinBzucak); delay(100); 

   tone(pinBzucak, 294);  delay(1000);                  

   noTone(pinBzucak); delay(100); 

   tone(pinBzucak, 329);  delay(1000);                  

   tone(pinBzucak, 0);  delay(1000);

	 

} 


