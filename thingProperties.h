// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)


String inference;
float air_quality;

void initProperties(){

  ArduinoCloud.addProperty(inference, READ, 5 * SECONDS, NULL);
  ArduinoCloud.addProperty(air_quality, READ, 5 * SECONDS, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
