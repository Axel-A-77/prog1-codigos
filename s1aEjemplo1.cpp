#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double PI=3.1415;

int main()
{ double radio, area, volumen;

    cout << "Radio : ";
    cin >> radio;
    //--- este es un comentario
    area = 4 * PI * radio * radio;
    volumen = 4.0/3.0 * PI * pow(radio,3);
    cout << "\n";
    cout << "El area es    ====> " << area << "\n";
    cout << "El volumen es ====> " << volumen << "\n";
    //--- ahora se indica la cantidad de decimales
    //--- al momento de imprimir el volumen
    cout << "El volumen es ====> " << fixed << setprecision(7) << volumen;
    return 0;
}
