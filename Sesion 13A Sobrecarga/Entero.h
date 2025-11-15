#ifndef ENTERO_H
#define ENTERO_H

#include <iostream>
using TipoEntero = int; //desde c++ 11
using namespace std;
class Entero {
private:
    TipoEntero m_dato;
public:
    Entero() { }
    Entero(TipoEntero _dato) { m_dato= _dato; }
    int getDato() {return m_dato;}

    Entero operator-(Entero &y) {
        return Entero(m_dato - y.m_dato);
    }

    friend Entero operator+(Entero& x, Entero& y);
    friend ostream& operator<<(ostream& o, Entero e);
};

Entero operator+(Entero &x, Entero &y) {
    return Entero(x.m_dato + y.m_dato);
}

ostream& operator<<(ostream &o, Entero e) {
    o << e.m_dato + 5;
    return o;
}


#endif //ENTERO_H
