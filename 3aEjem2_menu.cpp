#include <iostream>
using namespace std;

// Prototipos de funciones, declarar  .h
char   FiltroChar();
int    FiltroEntero();
char   Menu();
void   LeerDatos (int &primero, int &segundo);
double Computos (char tecla, int primero, int segundo);
void   SalidaPantalla (double final);

int main() {
    int    dato1, dato2;
    double final;
    char   opcion;
    LeerDatos(dato1, dato2);
    opcion = Menu();
    final = Computos(opcion, dato1, dato2);
    SalidaPantalla(final);
    return 0;
}
// implementar las funciones, definir las funciones  .cpp
char   FiltroChar() {
    char opcion;
    do {
        cout << "(S R M): ";
        cin >> opcion;
        opcion = toupper(opcion);
    } while (opcion != 'S' and opcion != 'R' and opcion != 'M');
    return opcion;
}
int    FiltroEntero() {
    int numero;
    do {
        cout << "Numero:";
        cin >> numero;
    }while(numero < 0);
    return numero;
}
char Menu(){
    char tecla;
    cout << "\nElija una opción\n";
    cout << "\nS. Sumar";
    cout << "\nR. Restar";
    cout << "\nM. Media Aritmética\n";
    tecla = FiltroChar();
    return tecla;
}
void LeerDatos(int &primero, int &segundo){
    primero = FiltroEntero();
    segundo = FiltroEntero();
}
double Computos (char tecla, int primero, int segundo) {
    switch (tecla) {
        case 'S': return primero + segundo;
        case 'R': return primero - segundo;
        case 'M': return (primero + segundo) / 2.0;
    }
}
void   SalidaPantalla (double final) {
    cout << final << endl;
}