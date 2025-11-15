
#ifndef ELIPSE_H
#define ELIPSE_H

#include "AbstractPoligono.h"

class Elipse: public Poligono {
    Number ejeMayor;
    Number ejeMenor;
public:
    Elipse(Number ejeMayor, Number ejeMenor);
    Number calcularArea() override;
    void dibujar() const override;
};

const double PI =  3.1416;

Elipse::Elipse(Number ejeMayor, Number ejeMenor) {
    this->ejeMayor = ejeMayor;
    this->ejeMenor = ejeMenor;
}
Number Elipse::calcularArea() {
    return PI * ejeMayor * ejeMenor;
}
void Elipse::dibujar() const{
    std::cout << "draw elipse\n";
}




#endif //POLIGONO_H
