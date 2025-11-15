#include <iostream>
#include "matriz.h"
void rotarArribaAbajo(int **mat, int fils, int cols);
using namespace std;
int main() {
    int fils;
    cout << "Filas: ";
    cin >> fils;
    int **mat;
    generarMatriz(mat, fils, fils);
    llenarAleatorios(mat, fils, fils, 0, 99);
    imprimir(mat, fils, fils);
    cout << "\nArriba abajo:\n";
    rotarArribaAbajo(mat, fils, fils);
    imprimir(mat, fils, fils);

    return 0;
}
void rotarArribaAbajo(int **mat, int fils, int cols) {
    int *tmp = mat[fils-1];
    for (int f=fils-1; f > 0; f--) {
        mat[f] = mat[f-1];
    }
    mat[0] = tmp;
}