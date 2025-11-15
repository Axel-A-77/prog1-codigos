#include "TVector.h"


template <typename T>
TVector<T>::TVector(const TVector &otro_vector) {
    tamanio = otro_vector.tamanio;
    maximo = otro_vector.maximo;
    elementos = new T[maximo];
    for (int i = 0; i < tamanio; i++) {
        elementos[i] = otro_vector.elementos[i];
    }
}

template <typename T>
void TVector<T>::redimensionar() {
    maximo = 2 * maximo;
    T *tmp = new T[maximo];
    for (int i = 0; i < maximo; i++) {
        tmp[i] = elementos[i];
    }
    delete [] elementos;
    elementos = tmp;

    cout << "\nRedimensionado a "<< maximo;
}