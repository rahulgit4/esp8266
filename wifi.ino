// Import required libraries

#include <ESP8266WiFi.h>

// WiFi parameters

const char* ssid = "Redmi 9A";
const char* password = "********";

void setup(void)
{
  
// Start Serial
Serial.begin(115200);

// Connect to WiFi
WiFi.begin(ssid, password);

}
void loop() {
  while (WiFi.status() != WL_CONNECTED) {
delay(500);
Serial.print(".");
}
Serial.println("");
Serial.println("WiFi connected");
// Print the IP address
Serial.println(WiFi.localIP());
delay(1000);
}
