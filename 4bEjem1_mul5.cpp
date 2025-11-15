#include <iostream>
using namespace std;
void imprimir(int *pArr, int tam);

int separar(int *pArr, int tam, int *pArr5);

int  main() {
    srand(time(NULL));
    const int tam = 100;
    int arreglo[tam], arreglo5[tam];
    for (int i = 0; i < tam; i++) {
        arreglo[i] = rand() % 1000;
    }
    imprimir(arreglo, tam);

    int cant = separar(arreglo, tam, arreglo5);
    imprimir(arreglo5, cant);
    return 0;
}
int separar(int *pArr, int tam, int *pArr5) {
    int cont = 0;
    for (int i = 0; i < tam; i++) {
        if (pArr[i] % 5 == 0) {
            pArr5[cont] = pArr[i];
            cont++;
        }
    }
    return cont;
}
void imprimir(int *pArr, int tam) {
    cout << endl;
    for (int i = 0; i < tam; i++) {
        cout << pArr[i] << " ";
    }
}