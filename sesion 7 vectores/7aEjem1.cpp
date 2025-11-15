#include <iostream>
#include <vector>
using namespace std;

void imprimir(vector<int> vec);

int main() {
    int n, tmp;
    cout << "N:"; cin >> n;

    vector<int> vec;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        vec.emplace_back(tmp);
    }
    imprimir( vec );
    cout << "\nInvirtiendo: ";
    for (int i = vec.size()-1; i >= 0; i--) {
        cout << vec[i] << " ";
    }


    vector<int> vec2(n);
    for (int &elem : vec2) {
        cin >> elem;
    }
    imprimir( vec2 );
    cout << "\nInvirtiendo: ";
    for (int i = vec2.size()-1; i >= 0; i--) {
        cout << vec2[i] << " ";
    }

    return 0;
}

void imprimir(vector<int> vec) {
    for (int elem : vec) {
        cout << elem << " ";
    }
}