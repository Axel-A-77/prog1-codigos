#include <iostream>
using namespace std;
int main() {
    int filas;
    do {
        cout << "Filas:";
        cin >> filas;
    }while (filas < 1 or filas > 9);
    string respuesta = "";

    for (int f=1; f<=filas; f++) {
        respuesta += string(filas-f+1, ' ');
        for (int c=1; c <= f; c++) {
            respuesta += to_string(c);
        }
        respuesta += "\n";
    }
    cout << respuesta;

    string cadena2 = "", tmp="";
    for (int f=1; f<=filas; f++) {
        cadena2 += string(filas-f+1, ' ');
        tmp += to_string(f);
        cadena2 += tmp + "\n";
    }
    cout << endl << cadena2;

    return 0;
}