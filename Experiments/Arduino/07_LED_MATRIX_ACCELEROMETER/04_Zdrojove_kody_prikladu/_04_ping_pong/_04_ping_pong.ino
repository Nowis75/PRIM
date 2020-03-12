int row[8] = {2, 7, 19, 5, 13, 18, 12, 16};     // definice pinu pro radky na Arduino
int col[8] = {6, 11, 10, 3, 17, 4, 8, 9};       // definice pinu pro sloupce na Arduino

int pot1Pin=A0;                                // Deklarace pinu pro potenciometr prvni hrace
int pot2Pin=A1;                                // Deklarace pinu pro potenciometr druheho hrace

int image[8][8]={                              // Vycisteni displeje 
{0,0,0,0,0,0,0,0},  
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0}
};                                              

int death[8][8]={                              // Rozsviceni vsech diod na displeji
{1,1,1,1,1,1,1,1},  
{1,1,1,1,1,1,1,1}, 
{1,1,1,1,1,1,1,1}, 
{1,1,1,1,1,1,1,1}, 
{1,1,1,1,1,1,1,1},  
{1,1,1,1,1,1,1,1}, 
{1,1,1,1,1,1,1,1}, 
{1,1,1,1,1,1,1,1}
};     

int blank[8][8]={                              // Zhasnuti vsech diod na displeji
{0,0,0,0,0,0,0,0},  
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0}
};    

long theTimer;                                           // Promenna timer

int gameState=0;                                         // Promena pro hlidani stavu hry
int animations=300;                                      // Rychlost animace

float ballXSpeed = 1;                                    // Rychlost v ose x   
float ballXPosition=4;                                   // Vychozi X pozice micku

float ballYSpeed = 0;                                    // Rychlost v ose y
float ballYPosition=4;                                   // Vychozi Y pozice micku

int imageYPosition;                                      
int imageXPosition;                                      

int player1Position=3;                                   // Pozice palky prvniho hrace
int player2Position=3;                                   // Pozice palky druheho hrace

int gameSpeed;                                           // Rychlost hry

void setup(){
  for (int i=0; i<8; i++){                               // NAstaveni pinu jako vystupnich
    pinMode(row[i],OUTPUT);
    pinMode(col[i],OUTPUT);
  }
}

void draw(){
  for (int y=0; y<8; y++){                               // radky 
    for (int x=0; x<8; x++){                             // z leva do prava
      if (image[x][y]==1){                               // Jestlize bude 1
        digitalWrite(col[x],LOW);                        // pin sloupce bude zapnut
      } else {                                           // jinak
        digitalWrite(col[x],HIGH);                       // pin radku bude vypnut
      } 
    }
    digitalWrite(row[y],HIGH);                           // prepnuti pinu radku na LOW
    delayMicroseconds(1000);                             // zastaven programu na 1 sekundu
    digitalWrite(row[y],LOW);                            // prepnuti pinu radku na HIGH
  }
}

void refreshScreen(){
  switch (gameState) {                                   // prepnuti podle stavu hry
  case 0:                                                // nova hra
    memcpy(image,blank,sizeof(blank));                   // vycisteni obrazovky
    gameSpeed=300;                                       // nastaveni rychlosti hry
    ballXPosition=3;                                     // nastaveni X pozice micku
    ballYPosition=3;                                     // nastaveni Y pozice micku
    ballYSpeed=0;                                        // Micek leti rovne
    if (random(0,2)>0){                                  // ale nahodne z leva do prava
      ballXSpeed=1;
    } else {
      ballXSpeed=-1;
    }     
    theTimer=millis(); 
    gameState=1;
    break;
  case 1:                                                // aktivni hra
    image[player1Position][0]=0;                         // palka hrace 1 vynulovani stare pozice
    image[player1Position+1][0]=0;                       // palka hrace 1 vynulovani stare pozice
    image[player2Position][7]=0;                         // palka hrace 2 vynulovani stare pozice
    image[player2Position+1][7]=0;                       // palka hrace 2 vynulovani stare pozice

    player1Position=map(analogRead(pot1Pin),0,1023,0,7); // cteni pozice hrace 1
    player2Position=map(analogRead(pot2Pin),0,1023,0,7); // cteni pozice hrace 2
    
    image[player1Position][0]=1;                         // zobrazeni palky hrace 1            
    image[player1Position+1][0]=1;                       // zobrazeni palky hrace 1 
    image[player2Position][7]=1;                         // zobrazeni palky hrace 2 
    image[player2Position+1][7]=1;                       // zobrazeni palky hrace 2
  
    if (millis()>theTimer+gameSpeed){                    // casovar rychlosti hry
      if (gameSpeed>50) gameSpeed-=3;                    // akcelerace hry
      theTimer=millis();                                 // nastaveni noveho casu
      image[imageYPosition][imageXPosition]=0;           // prepise starou pozici
      ballXPosition+=ballXSpeed;                         // inovace pozice
      ballYPosition+=ballYSpeed;                         // inovace pozice     
      
      if (ballYPosition>=7) ballYSpeed*=-1;              // kolize dolniho okraje
      if (ballYPosition<=0) ballYSpeed*=-1;              // kolize horniho okraje

      ballYPosition=constrain(ballYPosition,0,7);        
      ballXPosition=constrain(ballXPosition,0,7);        
      imageYPosition=round(ballYPosition);                
      imageXPosition=round(ballXPosition);      
      
      if ((ballXPosition>=6)&&(image[imageYPosition][7]==1)) {  // jestlize se palka stretne s mickem
        ballXSpeed*=-1;                                    // odrazi micek
        ballYSpeed=random(-2,3);                           // nahodny odrazovy uhel
      }
      if ((ballXPosition<=1)&&(image[imageYPosition][0]==1)) {  // jestlize se palka stretne s mickem
        ballXSpeed*=-1;                                    // odrazi micek
        ballYSpeed=random(-2,3);                           // nahodny odrazovy uhel
      }
      if (ballXPosition>=7){                               // micek propadl
        gameState=2;                                       // zmen stav hry
        theTimer=millis();                                 // nastaveni noveho casovace
      }

      if (ballXPosition<=0){                               // micek propadl 
        gameState=2;                                       // zmen stav hry
        theTimer=millis();                                 // nastaveni noveho casovace
      }

      image[imageYPosition][imageXPosition]=1;             // nastaveni pozice obrazku
      
    }
    break;  
  case 2:                                                  // hra byla ukoncena
    if (millis()>theTimer+gameSpeed){                      // 
      theTimer=millis();
      gameState=3;                                         // nastaveni stavu hry na ukonceni
    }
    break;
    
  case 3:                                                  // ukonceni hry
    memcpy(image,death,sizeof(death));                     // zobrazni obrazku z ukoncene hry, memcpy je funkce pro zkopirovani jednoho pole do druheho
    if (millis()>theTimer+animations){                     // 
      gameState=0;                                         // nastaveni stavu na zacatek nove hry
    }
    break;
    
  }
}

void loop(){
  refreshScreen();                                         // 
  draw();                                                  // 
}
