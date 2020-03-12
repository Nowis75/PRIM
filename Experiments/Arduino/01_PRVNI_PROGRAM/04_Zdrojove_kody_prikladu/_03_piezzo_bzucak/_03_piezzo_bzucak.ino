const int bzucak=13;



void setup() {

   pinMode(bzucak, OUTPUT); 		 

}   



void loop() {

   tone(bzucak, 440); 	

   delay(1000); 

   noTone(bzucak); 

   delay(1000);	 

} 


