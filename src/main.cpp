#include <Arduino.h>
#include "DHT.h"
#define DHT11PIN 16

DHT dht(DHT11PIN, DHT11);
void setup()
{
  
  Serial.begin(115200);
  dht.begin();
}

void loop()
{
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("ºC ");
  Serial.print("Humidity: ");
  Serial.println(humidity);
  delay(1000);
}