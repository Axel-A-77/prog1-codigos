#include "Complejo.h"
Complejo::Complejo() {}
Complejo::Complejo(double _real, double _imag) {
    real = _real; imag = _imag;
}
Complejo Complejo::suma(Complejo &otro) {
    Complejo suma(real + otro.real, imag + otro.imag);
    return suma;
}
string Complejo::getString() {
    return to_string(real) + " + i" + to_string(imag);
}