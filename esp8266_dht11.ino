
#include "DHT.h"
#define DHTTYPE DHT11
DHT dht(5,DHTTYPE);

void setup(void) {
  dht.begin();
  Serial.begin(115200);
  

}

void loop() {
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  Serial.print("current humidity= ");
  Serial.print(h);
  Serial.print("% ");
  Serial.print("temperature =");
  Serial.print(t);
  Serial.println(" c ");
  delay(800);

}
