const int row[8] = {
  2, 7, 19, 5, 13, 18, 12, 16
};

const int col[8] = {
  6, 11, 10, 3, 17, 4, 8, 9
};

//dvojrozměrné pole pro obrázek
byte image[8][8] = {
  {0,0,0,0,0,0,0,0},
  {0,1,1,0,0,1,1,0},
  {1,0,0,1,1,0,0,1},
  {1,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,1},
  {0,1,0,0,0,0,1,0},
  {0,0,1,0,0,1,0,0},
  {0,0,0,1,1,0,0,0}};          
                      

void setup(){
    for(int i = 0; i < 8; i++){
        //nastavíme piny
        pinMode(col[i], OUTPUT);
        pinMode(row[i], OUTPUT);
        
        //zajistíme vypnutí displeje
        digitalWrite(col[i], HIGH); 
        digitalWrite(row[i], LOW);
    }
}

void loop(){
    refreshScreen();
}

void refreshScreen() {
  for(int j = 0; j<8;j++) {  
    digitalWrite(col[j],LOW);
    for(int k = 0;k<8;k++){  
      digitalWrite(row[k],image[k][j]);  
    }  
    delay(1);  
    Clear();
  } 
}

void Clear(){
  for(int i = 0;i<8;i++){  
    digitalWrite(row[i],LOW);  
    digitalWrite(col[i],HIGH);  
  }  
} 
