
#include "CProfesor.h"
void CProfesor::setNombre(string nom){
    nombre = nom;
}
void CProfesor::setApellidos(string ape){
    apellidos = ape;
}
void CProfesor::setEdad(int ed){
    edad = ed;
}

string CProfesor::getNombre(){
    return nombre;
}
string CProfesor::getApellidos(){
    return apellidos;
}
int    CProfesor::getEdad(){
    return edad;
}
