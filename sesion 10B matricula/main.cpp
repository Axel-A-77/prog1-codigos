#include "Seccion.h"
int main() {
    Profesor prof("345", "Manuel","Rodriguez","Gonzales","manuel@");
    Seccion sec(2);
    sec.setProfesor( &prof );
    sec.imprimir();
    return 0;
}