#include <Servo.h> 

 

Servo myservo;

int servoPin  = 9;

int leftButton = 2;

int rightButton = 3;

int servoPos = 90;

int delayPeriod = 2;

 

void setup() 

{ 

 myservo.attach(servoPin);

 myservo.write(servoPos);

 pinMode(leftButton, HIGH);

 pinMode(rightButton, HIGH);

} 

 

void loop() 

{ 

 if(digitalRead(leftButton) == LOW)  

 {                              

  if(servoPos > 0)

  {

     servoPos--;

  }

   myservo.write(servoPos); 

   delay(delayPeriod);

 } 



 if(digitalRead(rightButton) == LOW)  

 {                              

  if(servoPos < 180)

  {

      servoPos++;

  } 

   myservo.write(servoPos); 

   delay(delayPeriod);

 }

}


