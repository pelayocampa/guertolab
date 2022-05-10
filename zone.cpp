#include "zone.h"

Zone::Zone(float horas_de_luz_requeridas, float humedad_minima, float humedad_maxima){
  _horas_de_luz_requeridas = horas_de_luz_requeridas;
  _humedad_minima = humedad_minima;
  _humedad_maxima = humedad_maxima;
  horas_luz = 0;
  humedad = 0;
}

void Zone::reset_horas(){
    horas_luz=0;
}

void Zone::reset_humedad(){
  humedad = 0;
}

float Zone::get_humedad(){
  return humedad;
}

float Zone::get_horas(){
  return horas_luz;
}

void Zone::set_horas(float horas){
  horas_luz = horas;
}

void Zone::incrementa_horas(float cantidad){
  horas_luz+=cantidad;
}
