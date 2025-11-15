#include <iostream>
#include <cmath>
using namespace std;
// declarando
int   triple(int num);
float raiz_cuadrada(int num);
bool  es_multiplo_3(int num);
void triple(int num, int &res);
void raiz_cuadrada(int num, double &res);
void es_multiplo_3(int num, bool &res);

int main() {
    int numero;
    cout << "Numero:";
    cin >> numero;
    cout << "Triple:" << triple(numero) << endl;
    cout << "Raiz:" << raiz_cuadrada(numero) << endl;
    cout << "Multiplo 3:" << es_multiplo_3(numero) << endl;

    int res;
    triple(numero, res);
    cout << "Triple: " << res << endl;
    double raiz;
    raiz_cuadrada(numero, raiz);
    cout  << "Raiz cuadrada: " << raiz << endl;
    bool es_mul;
    es_multiplo_3(numero, es_mul);
    cout << "Multiplo 3: " << es_mul << endl;

    return 0;
}
int   triple(int num) {
    return num * 3;
}
float raiz_cuadrada(int num) {
    return sqrt(num);
}
bool  es_multiplo_3(int num) {
    return num % 3 == 0;
}
void triple(int num, int &res) {
    res = num * 3;
}
void raiz_cuadrada(int num, double &res) {
    res = sqrt(num);
}
void es_multiplo_3(int num, bool &res) {
    res = num % 3 == 0;
}