
#ifndef CPROFESOR_H
#define CPROFESOR_H
#include <iostream>
using namespace std;

class CProfesor {
    string nombre, apellidos;
    int edad, creditos;
public:

    void setNombre(string nom);
    void setApellidos(string ape);
    void setEdad(int ed);

    string getNombre();
    string getApellidos();
    int getEdad();
};



#endif //CPROFESOR_H
