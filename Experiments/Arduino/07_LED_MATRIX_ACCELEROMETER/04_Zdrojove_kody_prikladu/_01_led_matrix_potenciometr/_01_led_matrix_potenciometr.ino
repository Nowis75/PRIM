const int row[8] = {
  2, 7, 19, 5, 13, 18, 12, 16
};

const int col[8] = {
  6, 11, 10, 3, 17, 4, 8, 9
};

int pixels[8][8];

int x = 5;
int y = 5;

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(col[i], OUTPUT);
    pinMode(row[i], OUTPUT);
    digitalWrite(col[i], HIGH);
  }

  for (int x = 0; x < 8; x++) {
    for (int y = 0; y < 8; y++) {
      pixels[x][y] = HIGH;
    }
  }
}

void loop() {
  readSensors();
  refreshScreen();
}

void readSensors() {
  pixels[x][y] = HIGH;
  x = 7 - map(analogRead(A0), 0, 1023, 0, 7);
  y = map(analogRead(A1), 0, 1023, 0, 7);
  pixels[x][y] = LOW;

}

void refreshScreen() {
  for (int j = 0; j < 8; j++) {
    digitalWrite(row[j], HIGH);
    for (int k = 0; k < 8; k++) {
      int thisPixel = pixels[j][k];
      digitalWrite(col[k], thisPixel);
      if (thisPixel == LOW) {
        digitalWrite(col[k], HIGH);
      }
    }

    digitalWrite(row[j], LOW);
  }
}
