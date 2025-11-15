#include "Persona.h"
int main() {
    Persona per;
    DNI *p = new DNI("12345678","10-10-2030","Lima");
    Documento *pDoc = new Pasaporte("550755","10-12-2028","1010111110010011010101");

    per.setDocumento( p );
    per.setDocumento( pDoc );
    pDoc = new Brevete("123456","11-13-2035","A1");
    per.setDocumento( pDoc );

    per.mostrar();

    return 0;
}