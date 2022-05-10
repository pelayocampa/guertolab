#include "DHT.h"

#define DHTTYPE DHT22

const int DHTPin = 15;

// Variables para el control
// Horas de luz
float horas_luz[3];

DHT dht(DHTPin, DHTTYPE);

void setup(){
  Serial.begin(9600);
  dht.begin();
  reset_horas_luz();
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
  Serial.print(" Temperatura: ");
  Serial.print(t);
  Serial.println(" C");
  delay(30000);
}

void reset_horas_luz(){
   for(int i=0;i<sizeof(horas_luz)/sizeof(horas_luz[0]);i++){
    horas_luz[i]=0;
  }
}
