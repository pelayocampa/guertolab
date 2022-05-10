#include "DHT.h"

#define DHTTYPE DHT22

const int DHTPin = 15;

// Variables para el control
// Horas de luz
float horas_luz;

DHT dht(DHTPin, DHTTYPE);

void setup(){
  Serial.begin(9600);
  dht.begin();
  horas_luz = 0;
}

void loop(){
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)){
    Serial.println("Failed to read!");
    return;
  }

  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print(" Temperature: ");
  Serial.print(t);
  Serial.println(" C");
  delay(30000);
}
