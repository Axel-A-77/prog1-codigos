#ifndef CTRIANGULO_H
#define CTRIANGULO_H
#include <cmath>
#include <vector>
using namespace std;
class CTriangulo {
private:
double lado1, lado2, lado3;
    double semiperimetro();
public:
    CTriangulo(); // constructor vacio
    // constructor con parametros
    CTriangulo(double l1, double l2, double l3);
    double area();
    double perimetro();
    // setter
    void setLados(double l1, double l2, double l3);
    // getter
    vector<double> getLados();
};
#endif //CTRIANGULO_H
