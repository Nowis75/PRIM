#include <IRremote.h>


int RECV_PIN = 8; // IR Dioda na pinu 8
IRrecv irrecv(RECV_PIN);
decode_results results;
String Vstup;

void setup() {
   Serial.begin(9600);
   irrecv.enableIRIn(); 
}

void loop() {
 if (irrecv.decode(&results)) {
    Vstup =  String(results.value, HEX); 
    Serial.println(Vstup);
    irrecv.resume(); //Načti další hodnotu
 }
 
}
