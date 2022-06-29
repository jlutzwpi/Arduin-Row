

/*
  Edge Impulse Data Forwarder - Nicla Sense ME data.
*/
#include "Arduino_BHY2.h"
#include "Nicla_System.h"

#define CONVERT_G_TO_MS2    9.80665f
#define FREQUENCY_HZ        100
#define INTERVAL_MS         (1000 / (FREQUENCY_HZ + 1))
static unsigned long last_interval_ms = 0;

SensorXYZ accelerometerRaw(SENSOR_ID_ACC_RAW);

void setup() {
  Serial.begin(115200);

  BHY2.begin();
  accelerometerRaw.begin();

  delay(2000);
}

void loop() {
  short accX, accY, accZ;
  
  BHY2.update();

  if (millis() > last_interval_ms + INTERVAL_MS) {
    last_interval_ms = millis();
        
    accX = accelerometerRaw.x();
    accY = accelerometerRaw.y();
    accZ = accelerometerRaw.z();

      
      Serial.print(accX * CONVERT_G_TO_MS2);
      Serial.print('\t');
      Serial.print(accY * CONVERT_G_TO_MS2);
      Serial.print('\t');
      Serial.println(accZ * CONVERT_G_TO_MS2);

  }
}
