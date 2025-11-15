#include <iostream>
#include <vector>
using namespace std;

void imprimir(vector<int> vec);
vector<int> sin_multiplos_3(vector<int> vec);

int main() {
    int n; cout << "N:"; cin >> n;
    vector<int> vec(n), vec_sin_3;
    for (int &elem : vec) {
        elem = rand() % 30 + 1;
    }
    imprimir(vec);
    vec_sin_3 = sin_multiplos_3(vec);
    cout <<"\nSin multiplos de 3:\n";
    imprimir(vec_sin_3);

    return 0;
}

void imprimir(vector<int> vec) {
    for (int elem : vec) {
        cout << elem << " ";
    }
}

vector<int> sin_multiplos_3(vector<int> vec) {
    vector<int> res;   // vector vacio
    for (int elem : vec) {
        if ( elem % 3 != 0 ) {
            res.push_back(elem);
        }
    }
    return res;
}