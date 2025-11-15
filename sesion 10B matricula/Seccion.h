#ifndef SECCION_H
#define SECCION_H
#include "Profesor.h"
class Seccion {
    int dia, inicio, fin;
    Profesor *pProfesor;
public:
    Seccion(int d) {
        dia = d;
    }
    void setProfesor(Profesor *pProf) {
        pProfesor = pProf;
    }
    void imprimir() {
        cout << pProfesor->imprimir();
    }
};



#endif //SECCION_H
