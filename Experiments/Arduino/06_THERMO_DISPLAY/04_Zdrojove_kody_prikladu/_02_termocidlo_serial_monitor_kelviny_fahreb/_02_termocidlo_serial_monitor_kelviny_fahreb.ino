#include <dht11.h>

dht11 cidlo;

int dhtpin=4;

double Fahrenheit(double celsius) 
{
  return 1.8 * celsius + 32;
}   

double Kelvin(double celsius)
{
  return celsius + 273.15;
} 

void setup(){
  Serial.begin(9600);
}

void loop()
{
  cidlo.read(dhtpin);
  
  double celsia=cidlo.temperature;
  double kelviny=Kelvin(celsia);
  double fahrenheity=Fahrenheit(celsia);
  
  Serial.print("Teplota v Celsiech= ");
  Serial.println(celsia);
  Serial.print("Teplota v Kelvinech= ");
  Serial.println(kelviny);
  Serial.print("Teplota v Fahrenheitech= ");
  Serial.println(fahrenheity);
  
  Serial.print("Vlhkost = ");
  Serial.println(cidlo.humidity);
  delay(1000);
}
