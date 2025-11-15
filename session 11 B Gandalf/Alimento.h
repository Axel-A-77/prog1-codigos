#ifndef ALIMENTO_H
#define ALIMENTO_H
class Alimento {
    int pf;
public:
    Alimento(int p){ pf = p; }
    int getPf() { return pf; }
};

class Abarrote: public Alimento {
public:
    Abarrote(): Alimento(2) {}
};

class Hongos : public Alimento {
public:
    Hongos(): Alimento(-10) {}
};

#endif //ALIMENTO_H
