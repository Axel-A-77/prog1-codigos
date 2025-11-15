#ifndef DOCUMENTO_H
#define DOCUMENTO_H

#include <iostream>
using namespace std;

class Documento {
protected:
    string numero, fecha_cad;
public:
    Documento(string num, string fc) {
        numero = num;
        fecha_cad = fc;
    }
    virtual string mostrar() {
        return numero + " " + fecha_cad;
    }
};

class DNI : public Documento {
    string ciudad;
public:
    DNI(string num, string fc, string ciu)
    : Documento(num, fc) {
        ciudad = ciu;
    }
    string mostrar() {
        return "DNI:" + numero + " " + fecha_cad + " " + ciudad;
    }
};

class Pasaporte : public Documento {
    string huella;
public:
    Pasaporte(string num, string fc, string hue)
        : Documento(num, fc), huella(hue) {}
    string mostrar() {
        return "Pasaporte:" + numero + " " + fecha_cad + " " + huella;
    }
};

class Brevete : public Documento {
    string categoria;
public:
    Brevete(string num, string fc, string cat)
        :Documento(num, fc), categoria(cat) {}
    string mostrar() {
        return "Brevete:" + numero + " " + fecha_cad + " " + categoria;
    }
};

#endif //DOCUMENTO_H
