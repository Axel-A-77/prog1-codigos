#ifndef ABSTRACTPOLIGONO_H
#define ABSTRACTPOLIGONO_H

#include <iostream>
using namespace std;

using entero = int;
using real = float;
using Number = double;
using caracter = char;

class AbstractPoligono {
public:
    virtual ~AbstractPoligono() {};
    virtual Number calcularArea() = 0;
    virtual void dibujar() const = 0;

};

class Poligono: public AbstractPoligono {
public:
    Poligono(){};
    Number calcularArea() override {
        return 0;
    }
    void dibujar() const override {
      cout << "No implementado";
    }
};


#endif //ABSTRACTPOLIGONO_H
