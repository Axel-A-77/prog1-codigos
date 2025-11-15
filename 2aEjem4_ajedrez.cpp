#include <iostream>
using namespace std;
int main() {
    char letra;
    int numero;
    string respuesta;
    do {
        cout << "letra numero";
        cin >> letra >> numero;
    } while (letra < 'A' or letra > 'H' or numero < 1 or numero > 8);

    letra = toupper(letra);

    int suma = numero + letra - 'A' + 1;
    string color = suma % 2 == 0 ? "negro" : "blanco";
    cout << color << endl;

    if (letra == 'A' or letra == 'C' or letra == 'E' or letra == 'G') {
        // if (numero % 2 == 1) {
        //     respuesta = "negro";
        // } else {
        //     respuesta = "blanco";
        // }
        respuesta = numero % 2 == 1 ? "negro" : "blanco";
    } else {
        if (numero % 2 == 0) {
            respuesta =  "negro";
        } else {
            respuesta = "blanco";
        }
    }
    cout << respuesta;

    return 0;
}