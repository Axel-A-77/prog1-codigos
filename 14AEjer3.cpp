
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    vector<int> enteros;
    ifstream entrada("../archivos/numeros.txt");
    string cadena, cadena2;
    int numero;
    while(!entrada.eof()){
        getline(entrada, cadena, ',');
        numero = stoi(cadena);
        cout << numero << "-";
        enteros.emplace_back(numero);
        // entrada >> cadena;
        // cadena2 = cadena.substr(0, cadena.length()-1);
        // numero = stoi(cadena2);
        // enteros.emplace_back(numero);
    }
    // ordenar
    // imprimir
    // buscar un numero

    return 0;
}