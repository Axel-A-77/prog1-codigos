#include "Cilindro.h"
Cilindro::Cilindro() {}
Cilindro::Cilindro(double r, double a) {
    radio = r; altura = a;
}
double Cilindro::area_base(){
    return M_PI * radio * radio;
}
double Cilindro::area_lateral(){
    return M_PI * radio * altura;
}
double Cilindro::area_total(){
    return 2*area_base() + area_lateral();
}
double Cilindro::volumen(){
    return M_PI*radio*radio*altura;
}
void   Cilindro::set_radio(double r){ radio = r; }
void   Cilindro::set_altura(double a){ altura = a; }
double Cilindro::get_radio(){ return radio; }
double Cilindro::get_altura(){ return altura; }