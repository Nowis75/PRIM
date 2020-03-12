#include <Wire.h>
#include <ADXL345.h>

ADXL345 accelerometer;

void setup(void) 
{
  Serial.begin(9600);

  // Initialize ADXL345
  Serial.println("Initialize ADXL345");

  if (!accelerometer.begin())
  {
    Serial.println("Could not find a valid ADXL345 sensor, check wiring!");
    delay(500);
  }
  if (accelerometer.begin())
  {

  // Values for Free Fall detection
  accelerometer.setFreeFallThreshold(0.35); // Recommended 0.3 - 0.6 g
  accelerometer.setFreeFallDuration(0.1);  // Recommended 0.1 s

  // Select INT 1 for get activities
  accelerometer.useInterrupt(ADXL345_INT1);

  // Check settings
  checkSetup();
  }
}

void checkSetup()
{
  Serial.print("Free Fall Threshold = "); Serial.println(accelerometer.getFreeFallThreshold());
  Serial.print("Free Fall Duration = "); Serial.println(accelerometer.getFreeFallDuration());
}

void loop(void) 
{
  delay(50);

  // Read values for activities
  Vector norm = accelerometer.readNormalize();

  // Read activities
  Activites activ = accelerometer.readActivites();

  if (activ.isFreeFall)
  {
    Serial.println("Free Fall Detected!");
  }
}
