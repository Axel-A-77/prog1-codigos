#include <iostream>
using namespace std;

int mul(int a, int b);

int pot(int x, int n);

int main() {
    cout << mul(5, 4) << endl;
    cout << pot(5, 3) << endl;
    return 0;
}

int mul(int a, int b) {
    if ( b == 1 ) {
        return a;
    }
    return a + mul(a, b-1);
}

int pot(int x, int n) {
    if ( n == 0 ) {
        return 1;
    }
    return x * pot(x, n-1);
}