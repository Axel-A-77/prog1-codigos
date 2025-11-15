#include <iostream>
#include "CTriangulo.h"
using namespace std;
int main() {
    CTriangulo tri1; // llama constructor vacio
    CTriangulo tri2(20,21,22); // constructor con parámetros
    tri1.setLados(11,12,13);
    cout << "\nArea:" << tri1.area();
    cout << "\nPerimetro:" << tri1.perimetro();
    vector<double> lados = tri1.getLados();
    cout << "\nLado1:"<< lados[0];
    cout << "\nLado2:"<< lados[1];
    cout << "\nLado3:"<< lados[2];

    cout << "\nArea:" << tri2.area();
    cout << "\nPerimetro:" << tri2.perimetro();
    lados = tri2.getLados();
    cout << "\nLado1:"<< lados[0];
    cout << "\nLado2:"<< lados[1];
    cout << "\nLado3:"<< lados[2];
    return 0;
}