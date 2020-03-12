//Joystick
int JoyStick_X = 0; //Xová osa joysticku - analogový pin 0
int JoyStick_Y = 1; //Yová osa joysticku - analogový pin 1
int JoyStick_Z = 7; //Tlačítko joysticku - pin 7

int x,y,z;

  

void setup() {
  Serial.begin(9600);
  pinMode(JoyStick_Z, INPUT_PULLUP); //Nastavení tlačítka joysticku
  Serial.println("Test joysticku");
}

void loop() {
    x=analogRead(JoyStick_X);
    y=analogRead(JoyStick_Y);
    z=digitalRead(JoyStick_Z);
    Serial.print("X = ");
    Serial.print(x);
    Serial.print(", Y = ");
    Serial.print(y);
    Serial.print(", Z = ");
    Serial.println(z);
    delay(500);

}





