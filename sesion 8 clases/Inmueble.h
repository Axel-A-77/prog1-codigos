#ifndef INMUEBLE_H
#define INMUEBLE_H
#include <iostream>
using namespace std;
class Inmueble {
    double area, precio_m2, cuota_mensual;
    int tiempo_pago;
    char tipo;
public:
    void setDatos(char t, double a, double pm2, double cm);
    void calcularTiempoPago();
    string getString();
};
#endif //INMUEBLE_H
