#include <Servo.h> 

 

Servo myservo;



void setup()

{

myservo.attach(9); 

}



void loop()

{

    myservo.write(10); 

    delay(1000); 

    myservo.write(40); 

    delay(1000);           

    myservo.write(80); 

    delay(1000);           

    myservo.write(120); 

    delay(1000);           

    myservo.write(160); 

    delay(1000);           

} 


