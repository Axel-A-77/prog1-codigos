#ifndef COMPLEJO_H
#define COMPLEJO_H
#include<iostream>
using namespace std;
class Complejo {
private:
    double real, imag;
public:
    Complejo();
    Complejo(double _real, double _imag);
    Complejo suma(Complejo &otro);
    string getString();
};
#endif //COMPLEJO_H
