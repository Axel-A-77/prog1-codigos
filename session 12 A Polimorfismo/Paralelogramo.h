#ifndef PARALELOGRAMO_H
#define PARALELOGRAMO_H

#include "AbstractPoligono.h"

class Paralelogramo : public Poligono {
    Number base;
    Number altura;
public:
    Paralelogramo(Number base, Number altura);
    Number calcularArea() override;
    void dibujar() const override;
};

Paralelogramo::Paralelogramo(Number base, Number altura) {
    this->base = base;
    this->altura = altura;
}

Number Paralelogramo::calcularArea() {
    return base * altura;
}

void Paralelogramo::dibujar() const{
    std::cout << "dibujar paralelogramo\n";
}




#endif //PARALELOGRAMO_H
