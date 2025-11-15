#include <iostream>
#include "matriz.h"
using namespace std;
int* multiplicar(double **mat, int *arr);
void prueba(float a, float b, float c, float d);
int main() {
    prueba(0.5, 0.5, 0.5, 0.9);
    return 0;
}
void prueba(float a, float b, float c, float d) {
    int x[] = {100,100,100}, *tmp;
    double **mat = generarMatrizDouble(3,3);
    mat[0][2] = a;
    mat[1][0] = b;
    mat[2][1] = c;
    mat[2][2] = d;

    int n; cout << "Anios: "; cin >> n;
    for (int i = 0; i < n; i++) {
        tmp = multiplicar(mat, x);
        cout << x[0] << " " << x[1] << " " << x[2] << endl;
        x[0] = tmp[0];
        x[1] = tmp[1];
        x[2] = tmp[2];
    }
}
int* multiplicar(double **mat, int *arr) {
    int *tmp = new int[3]();
    for (int f=0; f<3; f++) {
        for (int c=0; c<3; c++) {
            tmp[f] += mat[f][c] * arr[c];
        }
    }
    return tmp;
}

