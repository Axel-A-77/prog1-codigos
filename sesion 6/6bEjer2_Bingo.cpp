#include <iostream>
#include "matriz.h"
using namespace std;
int**   crearBingo();
int     comparar(int **oficial, int **jugador);
int main() {
    int **oficial = crearBingo();
    int **jugador = crearBingo();
    cout << "\nOficial:\n";
    imprimir(oficial, 5,5);
    cout << "\nJugador:\n";
    imprimir(jugador, 5,5);
    cout << "Aciertos:" << comparar(oficial, jugador);
    return 0;
}
int** crearBingo() {
    int **cartilla = generarMatrizInt(5,5);
    for (int f=0; f<5; f++) {
        for (int c=0; c<5; c++) {
            cartilla[f][c] = (rand() % 15 + 1) + c * 15;
        }
    }
    return cartilla;
}
int comparar(int **oficial, int **jugador) {
    int cont = 0;
    for (int c=0; c<5; c++) {
        for (int f=0; f<5; f++) {
            for (int fj=0; fj<5; fj++) {
                if (oficial[f][c] == jugador[fj][c]) {
                    cont++;
                }
            }
        }
    }
    return cont;
}