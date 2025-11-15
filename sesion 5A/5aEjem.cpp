#include <iostream>
using namespace std;
void llenarAleatorios(int *pArr, int tam);
double promedio(int *pArr, int tam);
void imprimirEncimaPromedio(int *pArr, int tam);
int main() {
    int num;
    do {
        cout << "Num:";
        cin >> num;
    }while (num < 15);
    int *pArreglo = new int[num];
    llenarAleatorios(pArreglo, num);
    imprimirEncimaPromedio(pArreglo, num);
    delete [] pArreglo;
    pArreglo = nullptr;
    return 0;
}
void llenarAleatorios(int *pArr, int tam) {
    for (int i = 0; i < tam; i++) {
        pArr[i] = rand() % 21;
    }
}
double promedio(int *pArr, int tam) {
    double suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += pArr[i];
    }
    return suma / tam;
}
void imprimirEncimaPromedio(int *pArr, int tam) {
    double prom = promedio(pArr, tam);
    for (int i = 0; i < tam; i++) {
        if (pArr[i] > prom) {
            cout << pArr[i] << " ";
        }
    }
}