
#include "CVector.h"

void CVector::redimensionar() {
    maximo = 2 * maximo;
    int *tmp = new int[maximo];
    for (int i = 0; i < maximo; i++) {
        tmp[i] = elementos[i];
    }
    delete [] elementos;
    elementos = tmp;

    cout << "\nRedimensionado a "<< maximo;
}
//constructor vacio
CVector::CVector() {
    tamanio = 0;
    maximo = 10;
    elementos = new int[maximo];
}
//constructor inicilizador
CVector::CVector(entero _tamanio, entero _valor) {
    tamanio = _tamanio;
    maximo = 2 * tamanio;
    elementos = new int[maximo];
    for (int i = 0; i < maximo; i++) {
        elementos[i] = _valor;
    }
}
//constructor copia
CVector::CVector(const CVector &otro_vector) {
    tamanio = otro_vector.tamanio;
    maximo = otro_vector.maximo;
    elementos = new int[maximo];
    for (int i = 0; i < tamanio; i++) {
        elementos[i] = otro_vector.elementos[i];
    }
}
//destructor
CVector::~CVector() {
    delete[] elementos;
}
//reemplazar elemento
void CVector::setElemento(entero elemento, entero posicion) {
    if (posicion >= 0 and posicion < tamanio) {
        elementos[posicion] = elemento;
    }
}
//insertar elemento
void CVector::insertar(entero elemento, entero posicion) {
    // validar la posicion
    if (posicion >= 0 and posicion < tamanio) {
        // validar memoria disponible
        if (tamanio == maximo) {
            redimensionar();
        }
        // mover los elementos
        for(int i=tamanio-1; i>=posicion; i--) {
            elementos[i+1] = elementos[i];
        }
        // insertar
        elementos[posicion] = elemento;
        tamanio++;
    }
}
//agregar elemento
void CVector::agregar(entero elemento) {
    if (tamanio == maximo) {
        redimensionar();
    }
    elementos[tamanio] = elemento;
    tamanio++;
}
//getters
entero CVector::getTamanio() {
    return tamanio;
}
entero CVector::getElemento(entero posicion) {
    if (posicion >= 0 and posicion < tamanio) {
        return elementos[posicion];
    }
}