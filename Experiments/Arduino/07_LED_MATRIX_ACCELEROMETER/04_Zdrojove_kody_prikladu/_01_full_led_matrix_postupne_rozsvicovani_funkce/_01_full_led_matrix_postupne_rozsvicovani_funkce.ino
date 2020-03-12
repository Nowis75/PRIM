int row[] = { 2, 7, 19, 5, 13, 18, 12, 16};
int col[] = {6, 11, 10, 3, 17, 4, 8, 9};

void setup(){
    for(int i = 0; i < 8; i++){
        pinMode(col[i], OUTPUT);
        pinMode(row[i], OUTPUT);
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
      digitalWrite(row[k],HIGH);
      delay(200);  
    }  
    Clear();
  } 
}

void Clear(){
  for(int i = 0;i<8;i++){  
    digitalWrite(row[i],LOW);  
    digitalWrite(col[i],HIGH);  
  }  
} 

