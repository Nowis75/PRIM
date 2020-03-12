int pinA=2;
int pinB=6;

int pinC=A2;
int pinD=9;

void setup() {
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);

  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);

}

void loop() {
  digitalWrite(pinB,HIGH);
  digitalWrite(pinD,LOW);
  delay(200);
  digitalWrite(pinB,LOW);
  digitalWrite(pinD,HIGH);
  delay(200);
}

