#ifndef CCURSO_H
#define CCURSO_H

#include <iostream>
using namespace std;

class CCurso {
string nombre, carrera;
    int creditos;
public:
    CCurso(string nom, int cred);

    string getNombre();
    int getCreditos();
};



#endif //CCURSO_H
