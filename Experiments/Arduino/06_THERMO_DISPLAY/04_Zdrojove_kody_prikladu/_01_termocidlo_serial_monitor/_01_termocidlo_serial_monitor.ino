#include <dht11.h>

dht11 cidlo;

int dhtpin=4;

void setup(){
  Serial.begin(9600);
}

void loop()
{
  int chk = cidlo.read(dhtpin);
  Serial.print("Teplota = ");
  Serial.println(cidlo.temperature);
  Serial.print("Vlhkost = ");
  Serial.println(cidlo.humidity);
  delay(1000);
}
