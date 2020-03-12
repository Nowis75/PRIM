#include <Servo.h>

Servo myservo;//Vytvoření objektu pro řízení krokového motoru

int poloha; //Svislá poloha ruky

// Piny pro krokový motor
const int in1 =  8;
const int in2 =  9;
const int in3 = 10;
const int in4 = 11;

// proměnná pro nastavení rychlosti,
// se zvětšujícím se číslem se rychlost zmenšuje
int rychlost = 8;
int uhel1;
int x,y,z;


//Joystick
int JoyStick_X = 0; //Xová osa joysticku - analogový pin 0
int JoyStick_Y = 1; //Yová osa joysticku - analogový pin 1
int JoyStick_Z = 7; //Tlačítko joysticku - pin 7



void setup() {
  myservo.attach(6);//Servo motor je na pinu 6
  myservo.write(0);//Ruka do výchozí polohy
  poloha = 0; //Pamatuj si tuto polohu
  // inicializace digitálních výstupů pro krokový motor
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  //incializace Joysticku
  pinMode(JoyStick_Z, INPUT_PULLUP); //Nastavení tlačítka joysticku
}

void loop() {
  pohyb(); //Nastavení polohy ruky "nad hrnek"
    while(1) { } //Nekonečná smyčka
}

// zde následují funkce pro volání jednotlivých
// kroků pro otočení po či proti směru hodinových
// ručiček
void rotacePoSmeru(int uhel) {
  for(int i=0;i<(uhel*64/45);i++){
    krok(1,0,0,0);
    krok(1,1,0,0);
    krok(0,1,0,0);
    krok(0,1,1,0);
    krok(0,0,1,0);
    krok(0,0,1,1);
    krok(0,0,0,1);
    krok(1,0,0,1);}
}
void rotaceProtiSmeru(int uhel) {
  for(int i=0;i<(uhel*64/45);i++){
    krok(1,0,0,1);
    krok(0,0,0,1);
    krok(0,0,1,1);
    krok(0,0,1,0);
    krok(0,1,1,0);
    krok(0,1,0,0);
    krok(1,1,0,0);
    krok(1,0,0,0);}
}
// každý krok obsahuje výrobcem dané pořadí
// pro správné spínání motoru a následnou
// pauzu, kterou určujeme rychlost otáčení
void krok(int a, int b, int c, int d){
  digitalWrite(in1, a);
  digitalWrite(in2, b);
  digitalWrite(in3, c);
  digitalWrite(in4, d);
  delay(rychlost);
}

void pohyb(){
  int x,y,z;
  z=1;
  while (z) {
    x=analogRead(JoyStick_X);
    y=analogRead(JoyStick_Y);
    z=digitalRead(JoyStick_Z);
    if (x>550) { //doprava
      rotacePoSmeru(5);
    }  
    else if (x<480){ //doleva
      rotaceProtiSmeru(5);
    }
    else if (y<480){ //dolu
      if (poloha>=5) {
        poloha=poloha-5;
        myservo.write(poloha);
        delay(1000);
      }
    }
    else if (y>550){ //nahoru
      if (poloha<=170) {
        poloha=poloha+5;
        myservo.write(poloha);
        delay(1000);
      }
      }
    }
    delay(100);
  }



