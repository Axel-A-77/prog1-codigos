
#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "AbstractPoligono.h"

class Triangulo: public Poligono {
    Number base;
    Number altura;
public:
    Triangulo(Number base, Number altura);
    Number calcularArea() override;
    void dibujar() const override;
};

Triangulo::Triangulo(Number base, Number altura) {
    this->base = base;
    this->altura = altura;
}

Number Triangulo::calcularArea() {
    return base * altura / 2.;
}

void Triangulo::dibujar() const{
    std::cout << "dibujar triangulo\n";
}



#endif //TRIANGULO_H
