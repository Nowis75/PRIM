#include <Servo.h> // Připojení knihovny

 

Servo myservo; // Vytvoření instance třídy pro každý servomotor

int pos = 90; // Pozice servomotoru 90°           



void setup()

{

  // Definice pinu na který je připojen signální vodič servomotoru

  myservo.attach(9); 

}



void loop()

{

    myservo.write(pos); // Nastavení pozice servomotoru

    delay(15);           

} 


