#include <Servo.h>     //zahrnutí knihovny pro ovládání servo motoru
Servo myservo;         //každý motor má svou instanci třídy Servo
int pos = 0;           //proměnná obsahující pozici motoru (úhel natočení)

void setup()
{
  myservo.attach(9);   //tento motor je připojen na pin 9
}

void loop()
{
  for(pos = 0; pos <= 180; pos += 1) //je od úhlu 0 do úhlu 180
  {
    myservo.write(pos);  //natočení motoru na aktuální úhel
    delay(15);           //chvilka čekání než se motor natočí
  } 
  for(pos = 180; pos >= 0; pos -= 1) //je od úhlu 180 zpět do úhlu 0
  {
    myservo.write(pos);  //natočení motoru na aktuální úhel
    delay(15);           //chvilka čekání než se motor natočí

  }
}
