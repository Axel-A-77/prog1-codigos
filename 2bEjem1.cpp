#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    float x0, y0, x1, y1, x2, y2, dist=0;
    do {
        cout << "Vertices:";
        cin >> n;
    }while (n < 3 or n > 10);

    cout << "Punto 1:";
    cin >> x1 >> y1;
    x0 = x1; y0 = y1;
    for (int i = 2; i <= n; i++) {
        cout << "Punto " << i << ":";
        cin >> x2 >> y2;
        dist += sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        x1 = x2; y1 = y2;
    }
    dist += sqrt(pow(x2-x0,2)+pow(y2-y0,2));
    cout << "Perimetro: " << dist << endl;

    string poligono = "";
    switch (n) {
        case 3: poligono = "Triangulo"; break;
        case 4: poligono = "Cuadrilatero"; break;
    }
    cout << "Poligono: " << poligono << endl;
    return 0;
}