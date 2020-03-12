int row[] = { 2, 7, 19, 5, 13, 18, 12, 16}; 
int col[] = {6, 11, 10, 3, 17, 4, 8, 9};

void setup() {         
  for (int i=0; i<8; ++i){
    pinMode(row[i], OUTPUT);  
    pinMode(col[i], OUTPUT); 
    digitalWrite(row[i], HIGH);
    digitalWrite(col[i], LOW);   
  }
}

void loop () {
  refreshScreen();
}

void refreshScreen() {
  for (int j=0; j<8; ++j){
    digitalWrite(row[j], LOW);
    for (int k=0; k<8; k++){
      digitalWrite (col[k], HIGH);
      delay(100);
      digitalWrite(col[k], LOW);
    }
    digitalWrite(row[j], HIGH);
  } 
}
