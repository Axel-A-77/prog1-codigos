
#include "CAlumno.h"

CAlumno::CAlumno(string nom, int cred) {
    nombre = nom;
    creditos = cred;
}

void CAlumno::aprobar(CCurso *pCurso) {
    creditos += pCurso->getCreditos();
}

void CAlumno::setNombre(string nom){
    nombre = nom;
}
void CAlumno::setApellidos(string ape){
    apellidos = ape;
}
void CAlumno::setEdad(int ed){
    edad = ed;
}

string CAlumno::getNombre(){
    return nombre;
}
string CAlumno::getApellidos(){
    return apellidos;
}
int    CAlumno::getEdad(){
    return edad;
}
int CAlumno::getCreditos() {
    return creditos;
}

