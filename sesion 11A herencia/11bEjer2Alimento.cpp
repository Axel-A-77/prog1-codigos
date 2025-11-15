#include "Alimento.h"

int main() {
    Alimento ali(5);
    Verdura tomate(4, "Tomate");

    ali.mostrar();
    tomate.mostrar();

    ali = tomate;
    ali.mostrar();

    Alimento *pAli = &tomate;
    pAli->mostrar();
    return 0;
}