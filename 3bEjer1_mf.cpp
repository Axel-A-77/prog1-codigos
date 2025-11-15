#include <iostream>
using namespace std;

float monto_final(float mi, float i, int t);

float monto_final_r(float mi, float i, float t);

int main() {
    cout << monto_final(1000,10,10) << endl;
    cout << monto_final_r(1000,10,10);
    return 0;
}

float monto_final(float mi, float i, int t) {
    float monto = mi;
    for (int a = 1; a <= t; a++) {
        monto = monto * (1 + i/100);
    }
    return monto;
}
float monto_final_r(float mi, float i, float t) {
    if (t == 0)
        return mi;
    return monto_final_r(mi, i,t-1)*(1+i/100);
}