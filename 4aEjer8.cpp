#include <iostream>
using namespace std;
void shift_izq(int *pArr, int tam);
void shift_der(int *pArr, int tam);
void imprimir(int *pArr, int tam);

void invertir(int *pArr, int tam);

int main() {
    int arr[]={1,2,3,4};
    imprimir(arr, 4);
    shift_izq(arr, 4);
    imprimir(arr, 4);
    shift_der(arr, 4);
    imprimir(arr, 4);

    invertir(arr, 4);
    imprimir(arr, 4);
    return 0;
}

void invertir(int *pArr, int tam) {
    for (int i=0, d=tam-1; i < d; i++, d--) {
        int tmp = pArr[i];
        pArr[i] = pArr[d];
        pArr[d] = tmp;
    }
}


void shift_izq(int *pArr, int tam) {
    int tmp = pArr[0];
    for (int i=1; i< tam; i++) {
        pArr[i-1] = pArr[i];
    }
    pArr[tam-1] = tmp;
}
void shift_der(int *pArr, int tam) {
    int tmp = pArr[tam-1];
    for (int i=tam-1; i > 0; i--) {
        pArr[i] = pArr[i-1];
    }
    pArr[0] = tmp;
}
void imprimir(int *pArr, int tam) {
    cout << endl;
    for (int i = 0; i < tam; i++) {
        cout << pArr[i] << " ";
    }
}