#include <iostream>
#include "Gandalf.h"
using namespace std;
int main() {
    Gandalf g;

    g.comer(new Abarrote);
    cout << g.getEstadoAnimo() << endl;
    g.comer(new Hongos);
    cout << g.getEstadoAnimo() << endl;

    return 0;
}