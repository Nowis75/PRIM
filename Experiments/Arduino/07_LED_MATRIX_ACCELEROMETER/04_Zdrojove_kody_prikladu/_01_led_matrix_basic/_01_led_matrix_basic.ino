int pinA=2;
int pinB=6;

void setup() {
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
}

void loop() {
  digitalWrite(pinB,LOW);
  delay(200);
  digitalWrite(pinB,HIGH);
  delay(200);
}
