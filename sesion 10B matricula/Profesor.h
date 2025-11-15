#ifndef PROFESOR_H
#define PROFESOR_H
#include <iostream>
using namespace std;
class Profesor {
    string codigo, nombres, apePaterno, apeMaterno, correo;
public:
    Profesor(string codigo, string nombres, string ape_paterno, string ape_materno, string correo)
        : codigo(codigo),
          nombres(nombres),
          apePaterno(ape_paterno),
          apeMaterno(ape_materno),
          correo(correo) {
    }
    string imprimir() {
        return codigo + " " + nombres + " " + apePaterno;
    }
};
#endif //PROFESOR_H
