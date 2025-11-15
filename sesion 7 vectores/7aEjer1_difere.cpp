#include <iostream>
#include <vector>
using namespace std;

void    imprimir(vector<int> vec);
void    imprimir(vector<double> vec);
double  promedio(vector<int> vec);
int     suma_menores_70(vector<int> vec);
vector<double> diferencia_promedio(vector<int> vec);

int main() {
    int n; cout << "N:"; cin >> n;
    vector<int> vec(n);
    for (int &elem : vec) {
        elem = rand() % 100;
    }
    imprimir(vec);

    cout << "\nPromedio:" << promedio(vec);
    cout << "\nSuma menores a 70" << suma_menores_70(vec);
    cout << "\nDiferencias con el promedio:\n";
    vector<double> vec_dif = diferencia_promedio( vec );
    imprimir( vec_dif );

    return 0;
}
void imprimir(vector<int> vec) {
    for (int elem : vec) {
        cout << elem << " ";
    }
}
void imprimir(vector<double> vec) {
    for (double elem : vec) {
        cout << elem << " ";
    }
}
double  promedio(vector<int> vec) {
    double suma=0;
    for (int &elem : vec) {
        suma += elem;
    }
    return suma/vec.size();
}
int     suma_menores_70(vector<int> vec) {
    int suma = 0;
    for (int &elem: vec) {
        if (elem < 70) {
                suma += elem;
        }
    }
    return suma;
}
vector<double> diferencia_promedio(vector<int> vec) {
    vector<double> dif;
    double prom = promedio( vec );
    for (int &elem : vec) {
        dif.push_back(prom - elem);
    }
    return dif;
}
