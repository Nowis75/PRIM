int prepinac=2; 
int tlacitko = 0; 
int cervena1=3; 
int oranzova1=4;
int zelena1=5;
int cervena3=9;
int zelena3=10;
int modra=11; //kontrolni dioda pro chodce



void setup() {
  Serial.begin(9600); 
  pinMode(prepinac, INPUT);
  pinMode(cervena1, OUTPUT);
  pinMode(oranzova1, OUTPUT);
  pinMode(zelena1, OUTPUT);
  pinMode(cervena3, OUTPUT);
  pinMode(zelena3, OUTPUT);
  pinMode(modra, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(prepinac), zmena, RISING);
  digitalWrite(zelena1,HIGH);
  digitalWrite(cervena3,HIGH);

}

void loop() {
  delay(2000);
  if (tlacitko)
    {
      digitalWrite(zelena1,LOW);
      digitalWrite(oranzova1,HIGH);
      delay(1000);
      digitalWrite(oranzova1,LOW);
      digitalWrite(cervena1,HIGH);
      delay(500);
      digitalWrite(zelena3,HIGH);
      digitalWrite(cervena3,LOW);
      digitalWrite(modra,LOW);
      tlacitko=0;
      delay(2000);
      digitalWrite(zelena3,LOW);
      digitalWrite(oranzova1,HIGH);
      digitalWrite(cervena3,HIGH);
      delay(1000);
      digitalWrite(cervena1,LOW);
      digitalWrite(oranzova1,LOW);
      digitalWrite(zelena1,HIGH);
            
    }

}

void zmena(){
  tlacitko=1;
  Serial.println("Stisk");
  digitalWrite(modra,HIGH);
}


