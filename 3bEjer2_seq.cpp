#include <iostream>
using namespace std;

int sc(int n);

int main() {
    cout << sc(4) << endl;
    cout << sc(5);
    return 0;
}


int sc(int n) {
    if ( n == 1 ) {
        return 1;
    }
    return n * n + sc(n - 1);
}