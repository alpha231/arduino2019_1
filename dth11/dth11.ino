#include "DHT.h"

#define PIN 2
#define DHTTYPE DHT11

DHT dht(2, DHT11);
void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(1000);
  int humedad = dht.readHumidity();
  int temperatura = dht.readTemperature();
  if(isnan(temperatura) || isnan(humedad)){
    Serial.println("Error obteniendo datos");
  }
  Serial.println(humedad);
  return;
}
