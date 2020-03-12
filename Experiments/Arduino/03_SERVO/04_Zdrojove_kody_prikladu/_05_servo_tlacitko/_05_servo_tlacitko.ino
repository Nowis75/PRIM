#include <Servo.h> 

 

int servoPin  = 9; // Definice pinu pro řízení servomotoru

int Button = 2; // Definice pinu pro čtení z tlačítka

int servoPos = 0; // Výchozí pozice servomotoru

int delayPeriod = 2; // Prodleva při natáčení servomotoru



Servo myservo;

 

void setup() 

{ 

 myservo.attach(servoPin);

 myservo.write(servoPos); 

 pinMode(Button, LOW); // Vyhrazení pinu pro tlačítko

} 

 

void loop() 

{ 

 if(digitalRead(Button) == HIGH)  

 {                              

  if(servoPos < 180)

  {

     servoPos++;

  }

   myservo.write(servoPos); 

   delay(delayPeriod);

 } 

}


