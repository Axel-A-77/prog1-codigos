#include <iostream>
#include <iomanip>
using namespace std;

double** generarMatrizDouble(int fils, int cols) {
    double **mat = new double*[fils];
    for (int i = 0; i < fils; i++) {
        mat[i] = new double[cols]();
    }
    return mat;
}
int** generarMatrizInt(int fils, int cols) {
    int **mat = new int*[fils];
    for (int i = 0; i < fils; i++) {
        mat[i] = new int[cols]();
    }
    return mat;
}

void generarMatriz(int **&mat, int fils, int cols) {
    mat = new int*[fils];
    for (int i = 0; i < fils; i++) {
        mat[i] = new int[cols];
    }
}

//int** generarMatriz(int fils, int cols);
void llenarAleatorios(int **mat, int fils, int cols, int min, int max) {
    for (int f = 0; f < fils; f++) {
        for (int c = 0; c < cols; c++) {
            mat[f][c] = rand() % (max-min+1) + min;
        }
    }
}
void imprimir(int **mat, int fils, int cols) {
    for (int f = 0; f < fils; f++) {
        for (int c = 0; c < cols; c++) {
            cout << setw(4) << mat[f][c];
        }
        cout << endl;
    }
}