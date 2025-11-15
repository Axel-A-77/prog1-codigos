#include <iostream>
#include "Cilindro.h"
using namespace std;
int main() {
    Cilindro cil1;
    cil1.set_radio(3.0);
    cil1.set_altura(3.0);
    cout << "\nArea total:" << cil1.area_total();
    cout << "\nVolumen:" << cil1.volumen();
    Cilindro cil2(10,3);
    cil2.set_radio(3.0);
    cil2.set_altura(3.0);
    cout << "\nArea total:" << cil2.area_total();
    cout << "\nVolumen:" << cil2.volumen();
    return 0;
}