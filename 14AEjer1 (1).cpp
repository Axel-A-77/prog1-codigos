#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ifstream entrada("../texto.txt");
    ofstream salida("../vocales.txt");  // ios::app
    if ( entrada.is_open() ) {
        string linea;
        int ca=0, ce=0;
        while ( !entrada.eof()) {
            getline(entrada, linea);
            cout << linea << endl;
            for (auto car: linea) {
                switch (car) {
                    case 'a':ca++; break;
                    case 'e':ce++; break;
                }
            }
        }
        salida << "a:" << ca << endl;
        salida << "e:" << ce << endl;
        salida.close();
        // while ( entrada >> palabra ) {
        //     cout << palabra << endl;
        // }
    } else {
        cout << "Archivo no encontrado";
    }
}