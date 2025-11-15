#ifndef CALUMNO_H
#define CALUMNO_H
#include <iostream>
#include "CCurso.h"
using namespace std;

class CAlumno {
private:
    string nombre, apellidos;
    int edad, creditos;
public:
    CAlumno(string nom, int cred);

    void aprobar(CCurso *pCurso);

    void setNombre(string nom);
    void setApellidos(string ape);
    void setEdad(int ed);

    string getNombre();
    string getApellidos();
    int getEdad();
    int getCreditos();
};

#endif //CALUMNO_H
