#include <iostream>
#include "Entero.h"
using namespace std;
int main() {
    Entero a(10);
    Entero b(40);
    Entero c;
    Entero d(10);
    c = a + b - d;
    cout << "c = " << c.getDato() << "\n";
    cout << "c = " << c << "\n";

    //a << 2;
    return 0;
}
