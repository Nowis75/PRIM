const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

int redIntens;
int greenIntens;
int blueIntens;

int x;
    
int display_time = 10;  // v milisekundách
int common_anode=1;

void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop(){ 
  for (x = 0; x < 768; x++){
    if(x <= 255){                          // zona 1 
      redIntens = 255 - x;              // cervena z 255 do 0
      greenIntens = x;                  // zelena z 0 do 255
      blueIntens = 0;                   // modra je vypla tj. 0
    }else if (x <= 511){                   // zona 2
      redIntens = 0;                    // cervena je vypla tj. 0
      greenIntens = 255 - (x - 256);    // zelena z 255 do 0
      blueIntens = (x - 256);           // modra z 0 do 255
    }else{                                 // zona 3
      redIntens = (x - 512);            // cervena z 0 do 255
      greenIntens = 0;                  // zelena je vypla tj. é
      blueIntens = 255 - (x - 512);     // modra z 255 do 0
    }
    
    setColor(redIntens, blueIntens, greenIntens);
    delay(display_time);
  }
}

void setColor(int redC, int greenC, int blueC){
  if(common_anode==1){
    redC=255-redC;
    greenC=255-greenC;
    blueC=255-blueC;
  }
  analogWrite(redPin, redC);
  analogWrite(greenPin, greenC);
  analogWrite(bluePin, blueC);
}

