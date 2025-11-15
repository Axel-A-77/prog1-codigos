#include <iostream>
using namespace std;

void actualizarPuntosAzul(int *ptosAzul);
void actualizarPuntosRojo(int *ptosRojo);
void imprimeTablaPuntos(int *ptosAzul, int * ptosRojo);

void menu(char &op);

int main() {
    char opcion;
    int puntosAzul = 0, puntosRojo = 0;
    int *ptosRojo = &puntosRojo;

    do {
        menu(opcion);
        switch (opcion) {
            case '1': actualizarPuntosAzul( &puntosAzul ); break;
            case '2': actualizarPuntosRojo( ptosRojo ); break;
            case '3': imprimeTablaPuntos( &puntosAzul, ptosRojo);
        }
    }while (opcion != '4');
    return 0;
}

void menu(char &op) {
    cout<<"\n1. Azul";
    cout<<"\n2. Rojo";
    cout<<"\n3. Puntos";
    cout<<"\n4. Salir";
    cin >> op;
}

void actualizarPuntosAzul(int *ptosAzul) {
    int puntos;
    cout << "Puntos: ";
    cin >> puntos;
    *ptosAzul += puntos;
}
void actualizarPuntosRojo(int *ptosRojo) {
    int puntos;
    cout << "Puntos: ";
    cin >> puntos;
    *ptosRojo += puntos;
}
void imprimeTablaPuntos(int *ptosAzul, int * ptosRojo) {
    cout << "Azul: " <<  *ptosAzul << endl;
    cout << "Rojo: " << *ptosRojo;
}
