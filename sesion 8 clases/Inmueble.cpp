//
// Created by hgallegos on 16/10/2025.
//

#include "Inmueble.h"
void Inmueble::setDatos(char t, double a, double pm2, double cm) {
    tipo = t;
    area = a;
    precio_m2 = pm2;
    cuota_mensual = cm;
    calcularTiempoPago();
}
string Inmueble::getString() {
    string res = "";
    if (tipo == 'D')
        res += "Departamento";
    res += to_string(area);
    res += " Precio:" + to_string(precio_m2);
    return res;
}