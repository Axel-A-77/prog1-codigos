#ifndef GANDALF_H
#define GANDALF_H
#include <iostream>
using namespace std;
#include "Alimento.h"
class Gandalf {
    int pf;
public:
    Gandalf() { pf = 0; }
    void comer(Alimento *pAli) {
        pf += pAli->getPf();
    }
    string getEstadoAnimo() {
        if (pf < -5 ) return "Enojado";
        if (pf < 0) return "Triste";
        return "Feliz";
    }
};



#endif //GANDALF_H
