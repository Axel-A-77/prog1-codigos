#include <iostream>
#include <vector>
#include "Inmueble.h"
using namespace std;

void menu(char &op);
void imprimir(vector<Inmueble> &inmuebles);

int main() {
    double area, pm2, cuota;
    vector<Inmueble> inmuebles;
    char op;
    do {
        menu(op);
        pm2 = rand() %500 + 2000;
        cuota = rand()%2000 + 3000;
        switch (op) {
            case 'D': {
                Inmueble depa;
                area = rand()%100 + 100;
                depa.setDatos('D',area, pm2, cuota);
                inmuebles.push_back(depa);
                break;
            }
            case 'H':case'C':break;
        }
        imprimir( inmuebles );
    } while (op != 'S');
    return 0;
}
void imprimir(vector<Inmueble> &inmuebles) {
    for (auto &inmueble : inmuebles) {
        cout << inmueble.getString() << endl;
    }
}

void menu(char &op) {
    cout << "\n(D)epartamento";
    cout << "\n(C)asa";
    cout << "\n(H)otel";
    cout << "\n(S)alir";
    cin >> op;
}