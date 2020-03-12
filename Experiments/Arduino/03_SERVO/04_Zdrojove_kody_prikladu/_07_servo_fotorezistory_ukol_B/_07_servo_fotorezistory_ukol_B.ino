#include <Servo.h>    

 

int sensorPin = A0;

int servoPin  = 9;



int sensorValue = 0;

int servoPos = 90;



Servo myservo;



void setup() {

  pinMode(sensorPin, INPUT);

  myservo.attach( servoPin );

  //myservo.write( servoGrad );

}



void loop() {

  sensorValue = analogRead(sensorPin);



  if (sensorValue < (512) )

  {

    if (servoPos < 180)

    {

       servoPos++;

    } 

  }



 if (sensorValue > (512) )

 {

    if (servoPos > 0)

    {

        servoPos--;

    }

  }



  myservo.write(servoPos); 

  delay(100);

}


