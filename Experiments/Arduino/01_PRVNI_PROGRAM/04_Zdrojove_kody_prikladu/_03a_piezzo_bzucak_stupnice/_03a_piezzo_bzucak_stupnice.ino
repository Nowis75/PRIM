const int pinBzucak=13;        



void setup() {		

   pinMode(pinBzucak, OUTPUT); 				 

}   



void loop() {
   // Ton C
   tone(pinBzucak, 261);        
   delay(1000);                  
   noTone(pinBzucak);           
   delay(1000); 

   // Ton D
   tone(pinBzucak, 294);        
   delay(1000);                  
   noTone(pinBzucak);           
   delay(1000);   

   // Ton E
   tone(pinBzucak, 329);        
   delay(1000);                  
   noTone(pinBzucak);           
   delay(1000);   

   // Ton F
   tone(pinBzucak, 349);        
   delay(1000);                  
   noTone(pinBzucak);           
   delay(1000);  

   // Ton G
   tone(pinBzucak, 392);        
   delay(1000);                  
   noTone(pinBzucak);           
   delay(1000);  
   
    // Ton H
   tone(pinBzucak, 440);        
   delay(1000);                  
   noTone(pinBzucak);           
   delay(1000);  

   // Ton H
   tone(pinBzucak, 393);        
   delay(1000);                  
   noTone(pinBzucak);           
   delay(1000);  
   
   // Ton C
   tone(pinBzucak, 523);        
   delay(1000);                  
   noTone(pinBzucak);           
   delay(1000);   
            	 

} 


