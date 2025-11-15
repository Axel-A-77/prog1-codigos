#include <iostream>
using namespace std;
int main() {
    int num=1, leidos=0, pares=0;

    while ( num != 0 ) {
        cout << "Numero: ";
        cin >> num;

        if (num == 0) break;

        leidos++;
        if ( num % 2 == 0 ) {
            pares++;
        }
    }

    cout << "Leidos: " << leidos << endl;
    cout << "Pares: " << pares << endl;
    cout << "impares: " << leidos - pares << endl;

    return 0;
}
