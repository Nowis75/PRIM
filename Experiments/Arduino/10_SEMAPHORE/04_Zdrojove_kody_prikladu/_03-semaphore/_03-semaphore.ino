int prepinac=2; //Prepinac na pinu D2
int tlacitko = 0; //Zda je stiskle tlacitko
int cervena1=3; //Jednotlive semafory 1 a 2 auta, 3 chodci
int oranzova1=4;
int zelena1=5;
int cervena2=6;
int oranzova2=7;
int zelena2=8;
int cervena3=9;
int zelena3=10;
int modra=11; //kontrolni dioda pro chodce



void setup() {
  Serial.begin(9600); 
  pinMode(prepinac, INPUT);
  pinMode(cervena1, OUTPUT);
  pinMode(oranzova1, OUTPUT);
  pinMode(zelena1, OUTPUT);
  pinMode(cervena2, OUTPUT);
  pinMode(oranzova2, OUTPUT);
  pinMode(zelena2, OUTPUT);
  pinMode(cervena3, OUTPUT);
  pinMode(zelena3, OUTPUT);
  pinMode(modra, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(prepinac), zmena, RISING);
}

void loop() {
  digitalWrite(cervena1,HIGH);
  digitalWrite(cervena2,HIGH);
  digitalWrite(cervena3,HIGH);
  delay(1000);
  digitalWrite(oranzova1,HIGH);
  delay(1000);
  digitalWrite(cervena1,LOW);
  digitalWrite(oranzova1,LOW);
  digitalWrite(zelena1,HIGH);
  delay(2000);
  digitalWrite(zelena1,LOW);
  digitalWrite(oranzova1,HIGH);
  delay(1000);
  digitalWrite(oranzova1,LOW);
  digitalWrite(cervena1,HIGH);
  delay(1000);
  digitalWrite(oranzova2,HIGH);
  delay(1000);
  digitalWrite(cervena2,LOW);
  digitalWrite(oranzova2,LOW);
  digitalWrite(zelena2,HIGH);
  delay(2000);
  digitalWrite(zelena2,LOW);
  digitalWrite(oranzova2,HIGH);
  delay(1000);
  digitalWrite(oranzova2,LOW);
  digitalWrite(cervena2,HIGH);
  delay(1000);
  if (tlacitko)
    {
      tlacitko=0;
      digitalWrite(zelena3,HIGH);
      digitalWrite(cervena3,LOW);
      digitalWrite(modra,LOW);
      delay(2000);
      digitalWrite(zelena3,LOW);
    }

}

void zmena(){
  tlacitko=1;
  Serial.println("Stisk");
  digitalWrite(modra,HIGH);
}


