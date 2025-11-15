#include "Alumno.h"
int main() {
    Alumno alu1("Manuel", "202512");
    Curso curso1("Prog2", "CS12");
    Curso *p1 = new Curso("Prog1", "CS11");

    alu1.agregar_curso( &curso1 );
    alu1.agregar_curso( p1 );

    cout << alu1.imprimir() << endl;
    cout << alu1.imprimir_cursos();

    return 0;
}