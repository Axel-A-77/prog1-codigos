#include <iostream>
using namespace std;
//int factorial(int numero);
int factorial(int &numero);
int factorial(int *pNumero);

int main() {
    int *p1, *p2, *p3, *p4;
    int e1=4, e2=5, e3=6, e4=7;

    p1 = &e1;
    p2 = &e2;
    p3 = &e3;
    p4 = &e4;

    cout << factorial( e1 ) << endl;
    cout << factorial( p2 ) << endl;
    cout << factorial( *p3 ) << endl;
    p3 = &e4;
    cout << factorial( p3 ) << endl;
    p4 = p3;
    cout << factorial( p4 );
}

int factorial(int &numero) {
    int fact = 1;
    for (int i = 1; i <= numero; i++) {
        fact = fact * i;
    }
    return fact;
}
int factorial(int *pNumero) {
    return factorial( *pNumero );
}