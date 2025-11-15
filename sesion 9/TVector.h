#ifndef TVECTOR_H
#define TVECTOR_H

#include <iostream>
using namespace std;
typedef int entero;

template <typename T>
class TVector {
private:
    entero tamanio;
    T* elementos;
    entero maximo;
    void redimensionar();
public:
    //constructor vacio
    TVector() {
        tamanio = 0;
        maximo = 10;
        elementos = new T[maximo];
    }
    //constructor inicilizador
    TVector(entero _tamanio, T _valor);
    //constructor copia
    TVector(const TVector &otro_vector);
    //destructor
    virtual ~TVector() {
        delete[] elementos;
    }
    //reemplazar elemento
    void setElemento(T elemento, entero posicion) {
        if (posicion >= 0 and posicion < tamanio) {
            elementos[posicion] = elemento;
        }
    }
    //insertar elemento
    void insertar(T elemento, entero posicion);
    //agregar elemento
    void agregar(T elemento) {
        if (tamanio == maximo) {
            redimensionar();
        }
        elementos[tamanio] = elemento;
        tamanio++;
    }
    //getters
    entero getTamanio() { return tamanio; }
    T getElemento(entero posicion) {
        if (posicion >= 0 and posicion < tamanio) {
            return elementos[posicion];
        }
    }
};
template <typename T>
TVector<T>::TVector(entero _tamanio, T _valor) {
    tamanio = _tamanio;
    maximo = 2 * tamanio;
    elementos = new T[maximo];
    for (int i = 0; i < maximo; i++) {
        elementos[i] = _valor;
    }
}

template <typename T>
void TVector<T>::insertar(T elemento, entero posicion) {
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
#include "TVector.cpp"

#endif //TVECTOR_H
