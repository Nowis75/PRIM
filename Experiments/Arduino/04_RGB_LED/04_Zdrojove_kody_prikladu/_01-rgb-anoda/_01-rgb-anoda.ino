// Zakladní kod pro zobrazení barvy na RGB diode se spolecnou anodou.
// V tomto pripade se jedna o modrou barvu.
int vR=255;
int vG=255;
int vB=0;

void setup()  {
  pinMode(11, OUTPUT);    //red    
  pinMode(10, OUTPUT);    //green    
  pinMode(9, OUTPUT);     //blue  
}  

void loop()  {
  digitalWrite(11, vR);  //red
  digitalWrite(10, vG); //green
  digitalWrite(9, vB);  //blue
  delay(2000);
} 
