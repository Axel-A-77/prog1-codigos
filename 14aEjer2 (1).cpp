#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
int main() {
    string nombre_archivo;
    cout << "Nombre del archivo: ";
    cin >> nombre_archivo;
    ofstream salida("../" + nombre_archivo);

    auto now = chrono::system_clock::now();
    time_t end_time = chrono::system_clock::to_time_t(now);

    salida << "Registro: " << ctime(&end_time) << endl;
    salida << "DNI;Nombre;Edad;Salario" << endl;

    int n;
    cout << "Cantidad de personas: ";
    cin >> n;
    string dni, nombre;
    int edad;
    float salario;
    for ( int i=0; i < n; i++) {
        cout << "dni nombre edad salario: ";
        cin >> dni >> nombre >> edad >> salario;
        salida << dni << ";" << nombre << ";" << edad << ";" << salario << endl;
    }
    salida.close();

    return 0;
}