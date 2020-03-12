#include <LiquidCrystal.h>

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
int i,j;

//Joystick
int JoyStick_X = 0; //Xová osa joysticku - analogový pin 0
int JoyStick_Y = 1; //Yová osa joysticku - analogový pin 1
int JoyStick_Z = 7; //Tlačítko joysticku - pin 7

// Piny pro připojení displeje
LiquidCrystal lcd(2, 3, 4, 5, 12, 13);

int minut; //Počet minut pro máchání čaje

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
  lcd.begin(16, 2);  // Počet sloupců a řádek LCD displeje
  
}

void loop() {
  //main program
  lcd.clear();  
  lcd.print("Pouzij joystick");
  lcd.setCursor(0,2);
  lcd.print("pro nastaveni"); 
  pocatecni_nastaveni(); //Nastavení polohy ruky "nad hrnek"
  lcd.clear(); //Nastaevení polohy pro připevnění pytlíku
  myservo.write(poloha+15);
  delay(1000);
  rotaceProtiSmeru(90);
  delay(1000);
  lcd.print("Ruka pripravena");  
  lcd.setCursor(0,2);
  lcd.print("pripevni caj a potvrd"); //Potvrdit stiskem joysticku
  delay(1000);
  z=1;
  while (z) {
    x=analogRead(JoyStick_X);
    y=analogRead(JoyStick_Y);
    z=digitalRead(JoyStick_Z);
    delay(100);
    }
  delay(1000);  
  minut=pocetMinut(); //Nastavení počtu minut pro máchání
  delay(1000);
  rotacePoSmeru(90); //Najedeme nad čaj
  delay(1000);
  myservo.write(poloha-5); //A mácháme
  for (i=minut;i;i--)
    {
      lcd.clear();
      lcd.print("Zbyva:");
      lcd.setCursor(0,1);
      lcd.print(i);
      lcd.print(" minut");
      for (j=1;j<10;j++){
         myservo.write(poloha-7);
         delay(3000);
         myservo.write(poloha+7);
         delay(3000);
      }
    }
  lcd.clear(); //Konec máchání
  lcd.print("Hotovo");
  myservo.write(poloha+20);
  delay(10000);
  rotacePoSmeru(90);//Odjezd doprava
  myservo.write(15); 
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

void pocatecni_nastaveni(){
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

int pocetMinut(){
  int m=2;
  int x, y, z;
  z=1;
  lcd.setCursor(0,0);
  lcd.print("Maximum 9 minut");
  lcd.setCursor(0,1);
  lcd.print("Louhovat: ");
  lcd.print(m);
  lcd.print(" min");
  while (z) {
     x=analogRead(JoyStick_X);
     y=analogRead(JoyStick_Y);
     z=digitalRead(JoyStick_Z);
     if (y>550){ //dolu
        if (m) {
          m=m-1;}
        lcd.setCursor(10,1);
        lcd.print(m);
               }
     if (y<480){ //nahoru
       if (m<9) {
          m=m+1;}
       lcd.setCursor(10,1);
       lcd.print(m);
        
      }
     delay(300);
     
  }
  return m;
}



