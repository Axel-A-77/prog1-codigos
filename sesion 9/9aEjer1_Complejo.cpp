#include <iostream>
#include <vector>
#include "Complejo.h"
using namespace std;
int main() {
    Complejo a(1,3), b(3,4), c;
    c = a.suma(b);
    vector<Complejo> vec={a,b,c};
    for(auto &com : vec) {
        cout << com.getString() << endl;
    }
}