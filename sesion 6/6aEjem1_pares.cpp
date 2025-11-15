#include <iostream>
#include <iomanip>
using namespace std;

void menu(char &op);

void generarMatriz(int **&mat, int fils, int cols);
//int** generarMatriz(int fils, int cols);
void llenarAleatorios(int **mat, int fils, int cols);
void imprimir(int **mat, int fils, int cols);
void imprimirPares(int **mat, int fils, int cols);
void imprimirImpares(int **mat, int fils, int cols);

int main() {
    int fils, cols, **mat;
    char op;
    do {
        menu(op);
        switch (op) {
            case '1':
                cout << "filas cols:";
                cin >> fils >> cols;
                generarMatriz(mat, fils, cols);
                llenarAleatorios(mat, fils, cols);
                imprimir(mat, fils, cols);
                break;
            case '2':
                imprimirPares(mat, fils, cols); break;
            case '3':
                imprimirImpares(mat, fils, cols); break;
        }
    }while (op != '4');

    return 0;
}

void menu(char &op) {
    cout << "\n1. Generar matriz e imprimirla";
    cout << "\n2. Mostrar sólo números pares";
    cout << "\n3. Mostrar sólo números impares";
    cout << "\n4. Fin";
    cin >>op;
}
void generarMatriz(int **&mat, int fils, int cols) {
    mat = new int*[fils];
    for (int i = 0; i < fils; i++) {
        mat[i] = new int[cols];
    }
}

//int** generarMatriz(int fils, int cols);
void llenarAleatorios(int **mat, int fils, int cols) {
    for (int f = 0; f < fils; f++) {
        for (int c = 0; c < cols; c++) {
            mat[f][c] = rand() % 101 + 100;
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
void imprimirPares(int **mat, int fils, int cols) {
    for (int f = 0; f < fils; f++) {
        for (int c = 0; c < cols; c++) {
            if (mat[f][c] % 2 == 0) {
                cout << setw(4) << mat[f][c];
            } else {
                cout << setw(4) << 0;
            }
        }
        cout << endl;
    }
}
void imprimirImpares(int **mat, int fils, int cols) {
    for (int f = 0; f < fils; f++) {
        for (int c = 0; c < cols; c++) {
            if (mat[f][c] % 2 == 1) {
                cout << setw(4) << mat[f][c];
            } else {
                cout << setw(4) << 0;
            }
        }
        cout << endl;
    }
}
