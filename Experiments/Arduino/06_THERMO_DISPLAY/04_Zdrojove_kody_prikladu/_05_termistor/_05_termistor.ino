int termistorPin = 0;

int Vout;

float R1 = 10000;

float logR2, R2, T, Tc, Tf;

float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;



void setup() {

  Serial.begin(9600);

}



void loop() {

  Vout = analogRead(termistorPin);

  R2 = R1 * (1023.0 / (float)Vout - 1.0);

  logR2 = log(R2);

  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));

  Tc = T - 273.15;

  Tf = (Tc * 9.0)/ 5.0 + 32.0; 



  Serial.print("Teplota: "); 

  Serial.print(Tf);

  Serial.print(" F; ");

  Serial.print(Tc);

  Serial.println(" C");   



  delay(500);

}


