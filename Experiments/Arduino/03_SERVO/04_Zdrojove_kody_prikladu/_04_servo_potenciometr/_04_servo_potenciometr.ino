#include <Servo.h>    

 

Servo myservo; 

int pos = 0;           



void setup()

{

  myservo.attach(9);   

}



void loop()

{

  pos = analogRead(A2);

  pos = map(pos, 0, 1023, 0, 179); 

  myservo.write(pos);

  delay(5);

}


