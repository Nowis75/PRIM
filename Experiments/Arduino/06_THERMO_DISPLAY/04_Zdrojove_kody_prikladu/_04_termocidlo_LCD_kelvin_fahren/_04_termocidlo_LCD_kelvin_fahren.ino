#include <dht11.h>
#include <LiquidCrystal.h>


int rsPin = 5;
int ePin = 6;
int d4Pin = 7;
int d5Pin = 8;
int d6Pin = 9;
int d7Pin = 10;

LiquidCrystal LCD(rsPin, ePin, d4Pin, d5Pin, d6Pin, d7Pin);

dht11 cidlo;

int dhtpin = 4;

double Fahrenheit(double celsius) 
{
  return 1.8 * celsius + 32;
}   

double Kelvin(double celsius)
{
  return celsius + 273.15;
} 

void setup()
{
  LCD.begin(16,2);
  LCD.clear();
  LCD.setCursor(0,0);
  LCD.print("Teplota: ");
  
  LCD.setCursor(0,1);
  LCD.print("Vlhkost: ");
}

void loop()
{
  cidlo.read(dhtpin);
  
  double celsia=cidlo.temperature;
  double kelviny=Kelvin(celsia);
  double fahrenheity=Fahrenheit(celsia);
  
  LCD.setCursor(9,1);
  LCD.print(cidlo.humidity);
  
  LCD.setCursor(9,0);
  LCD.print(celsia);
  LCD.setCursor(15,0);
  LCD.print("   ");
  LCD.setCursor(13,0);
  LCD.print((char)223);
  LCD.print("C");
  
  delay(2000);
  
  LCD.setCursor(9,0);
  LCD.print(kelviny);
  LCD.setCursor(15,0);
  LCD.print("K");
  
  delay(2000);
  
  LCD.setCursor(9,0);
  LCD.print(fahrenheity);
  LCD.setCursor(15,0);
  LCD.print("F");
  
  delay(2000);
}
