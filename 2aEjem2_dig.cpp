#include <iostream>
using namespace std;
int main() {
    int num, dig, leidos=0, pares=0;

    do {
        cout << "Num:";
        cin >> num;
    }while (num < 100);

    while (num > 0) {
        dig = num % 10;
        leidos++;
        if ( dig % 2 == 0) { pares++; }
        num = num / 10;
    }
    cout << "leidos: " << leidos << endl;
    cout << "pares: " << pares << endl;
    cout << "impares:" << leidos - pares << endl;

    return 0;
}
