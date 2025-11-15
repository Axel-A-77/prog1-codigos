#include <iostream>
#include "arreglo.h"
using namespace std;

// Prototipos, declarar funciones   .h

int main() {
    int num;
    cout << "Num:";
    cin >> num;

    int *pArreglo = new int[num];
    llenarAleatorios(pArreglo, num);
    imprimir(pArreglo, num);

    return 0;
}
// implementar, definir funciones  .cpp
