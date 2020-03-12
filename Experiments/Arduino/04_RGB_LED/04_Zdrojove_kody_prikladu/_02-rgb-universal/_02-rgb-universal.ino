bool common_anode=1;

void setup() {
  pinMode(11, OUTPUT); 		
  pinMode(10, OUTPUT); 		
  pinMode(9, OUTPUT); 		 
}   


void loop() {
  setColor(255,0,0); 	      //zelená barva
  delay(2000);
  setColor(0,0,255); 	      //modrá barva
  delay(2000);
} 

void setColor(int redC, int greenC, int blueC ) {
  if(common_anode==1){
    redC=255-redC;
    greenC=255-redC;
    blueC=255-redC;
  }
  digitalWrite(11, redC); 	
  digitalWrite(10, greenC); 	
  digitalWrite(9, blueC);
}



