#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, copia;
    do {
        cout << "Num:";
        cin >> num;
    } while ( num < 10 );

    copia = num;
    while (true) {
        num += 1;
        bool flag = true;
        for ( int div=2; div <= sqrt(num); div++) {
            if (num % div == 0) {
                flag = false;
                break;
            }
        }
        if ( flag ) {
            cout << "Primo siguiente es:" << num << endl;
            break;
        }
    }

    num = copia;
    while (true) {
        num -= 1;
        bool flag = true;
        for ( int div=2; div <= sqrt(num); div++) {
            if (num % div == 0) {
                flag = false;
                break;
            }
        }
        if ( flag ) {
            cout << "Primo anterior es:" << num << endl;
            break;
        }
    }

    return 0;
}