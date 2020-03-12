

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>

// Used to decrease sensitivity
int sensitivity = 50;

// Assign a unique ID to this sensor at the same time
Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);

const int row[8] = {
  2, 7, 1, 5, 13, 19, 12, 17
};

const int col[8] = {
  6, 11, 10, 3, 18, 4, 8, 9
};

int pixels[8][8];

int x = 5;
int y = 5;

void setup() {
   Serial.begin(9600);
   
      // Initialize sensor
      if(!accel.begin())
      {
      // Sensor not detected
        Serial.println("No Sensor detected");
        while(1);
      }

      // Setup sensor Range and datarate
      accel.setRange(ADXL345_RANGE_16_G);
      accel.setDataRate(ADXL345_DATARATE_25_HZ);

  for (int thisPin = 0; thisPin < 8; thisPin++) {
    pinMode(col[thisPin], OUTPUT);
    pinMode(row[thisPin], OUTPUT);
    digitalWrite(col[thisPin], HIGH);
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
  /*
  x = 7 - map(analogRead(A0), 0, 1023, 0, 7);
  y = map(analogRead(A1), 0, 1023, 0, 7);
  */
  
    sensors_event_t event; 
    accel.getEvent(&event);
  int x = 7 - map(analogRead(A0), -10, 10, 0, 7);
  int y = map(analogRead(A1), -10, 10, 0, 7);
  pixels[x][y] = LOW;

}

void refreshScreen() {
  for (int thisRow = 0; thisRow < 8; thisRow++) {
    digitalWrite(row[thisRow], HIGH);
    for (int thisCol = 0; thisCol < 8; thisCol++) {
      int thisPixel = pixels[thisRow][thisCol];
      digitalWrite(col[thisCol], thisPixel);
      if (thisPixel == LOW) {
        digitalWrite(col[thisCol], HIGH);
      }
    }

    digitalWrite(row[thisRow], LOW);
  }
}
