#ifndef ZONE_H
#define ZONE_H

/**
 * Modela una zona de una jardinera
 */
class Zone{
  public:
    Zone(float horas_de_luz_requeridas, float humedad_minima, float humedad_maxima);
    void reset_horas();
    void reset_humedad();
    float get_humedad();
    void set_humedad(float humedad);
    void incrementa_horas(float cantidad);
    void set_horas(float horas);
    float get_horas();
  private:
    float horas_luz, humedad, _horas_de_luz_requeridas, _humedad_maxima, _humedad_minima;
};
#endif
