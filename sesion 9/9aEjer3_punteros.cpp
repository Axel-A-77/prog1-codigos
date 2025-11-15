#include <iostream>
#include "CAlumno.h"
#include "CProfesor.h"

template <typename T>
void mostrarDatosBasicos(T* pobjeto) {
    cout<<"--------\n";
    cout<<"Nombre: "   << pobjeto->getNombre()<<endl;
    cout<<"Apellidos: "<< pobjeto->getApellidos()<<endl;
    cout<<"Edad: "     << pobjeto->getEdad()<<endl;
}
template <typename T>
void pedirDatosBasicos(T* pobjeto) {
    cout<<"--------\n";
    string temps; int tempe;
    cout<<"Nombre: ";
    getline(cin, temps); pobjeto->setNombre(temps);
    cout<<"Apellidos: ";
    getline(cin, temps); pobjeto->setApellidos(temps);
    cout<<"Edad: ";
    cin>>tempe; pobjeto->setEdad(tempe);
    cin.ignore();
}
int main() {
    cout<<"Alumno:\n";
    CAlumno *a1 = new CAlumno();
    pedirDatosBasicos<CAlumno>(a1);

    cout<<"Profesor:\n";
    CProfesor* p1 = new CProfesor();
    pedirDatosBasicos<CProfesor>(p1);

    cout<<"Mostrar:\n";
    mostrarDatosBasicos<CAlumno>(a1);
    mostrarDatosBasicos<CProfesor>(p1);

    delete a1; delete p1;

    return 0;
}
