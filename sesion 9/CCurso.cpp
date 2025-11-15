//
// Created by hgallegos on 29/10/2025.
//

#include "CCurso.h"

CCurso::CCurso(string nom, int cred) {
    nombre = nom;
    creditos = cred;
}

string CCurso::getNombre() {
    return nombre;
}
int CCurso::getCreditos() {
    return creditos;
}