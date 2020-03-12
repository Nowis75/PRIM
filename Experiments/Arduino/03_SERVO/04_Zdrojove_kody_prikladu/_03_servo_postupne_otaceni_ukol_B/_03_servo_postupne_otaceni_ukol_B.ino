#include <Servo.h>    

 

Servo myservo; 

int pos = 0;           



void setup()

{

  myservo.attach(9);   

}



void loop()

{

 // Úprava mezní hodnoty natočení servomotoru na 180

 for(pos = 0; pos <= 180; pos += 1) 

  {

    myservo.write(pos);  

    // Úprava prodlevy, aby se servo ještě více zpomalilo

    delay(20);

  } 

  // Úprava mezní hodnoty natočení servomotoru ze 180 na 0

  for(pos = 180; pos >= 0; pos -= 1) 

  {

    myservo.write(pos);

    // Úprava prodlevy, aby se servo zrychlilo   

    delay(5); 

  }

} 


