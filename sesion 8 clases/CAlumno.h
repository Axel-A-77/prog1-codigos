#ifndef CALUMNO_H
#define CALUMNO_H
#include <iostream>
using namespace std;

class CAlumno {
private:
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

#endif //CALUMNO_H
