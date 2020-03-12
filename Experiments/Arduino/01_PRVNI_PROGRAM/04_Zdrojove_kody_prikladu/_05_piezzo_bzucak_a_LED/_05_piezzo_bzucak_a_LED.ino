const int pinLed=8;            // pin pro bzucák

const int pinBzucak=12;        // pin pro LED



void setup() {

   pinMode(pinLed, OUTPUT); 		

   pinMode(pinBzucak, OUTPUT); 				 

}   



void loop() {

   tone(pinBzucak, 433);        // neustale se opakujici

   digitalWrite(pinLed, HIGH);	 // blok kódu, kde se dale

   delay(100);                  // meni frekvence tonu

   noTone(pinBzucak);           // a pauza mezi tony

   digitalWrite(pinLed, LOW);   //

   delay(100);                  //



   tone(pinBzucak, 1033); 

   digitalWrite(pinLed, HIGH);	

   delay(300); 

   noTone(pinBzucak); 

   digitalWrite(pinLed, LOW); 

   delay(300);



   tone(pinBzucak, 600); 

   digitalWrite(pinLed, HIGH);	

   delay(200); 

   noTone(pinBzucak); 

   digitalWrite(pinLed, LOW); 

   delay(200);



   tone(pinBzucak, 800); 

   digitalWrite(pinLed, HIGH);	

   delay(500); 

   noTone(pinBzucak); 

   digitalWrite(pinLed, LOW); 

   delay(500);

	 

} 


