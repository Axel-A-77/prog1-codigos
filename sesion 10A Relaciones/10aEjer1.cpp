#include <iostream>
#include "Cliente.h"
using namespace std;

int main() {
    Cliente cli1("Manuel");
    Pedido obj("Cajas",123.45);

    cli1.asociar_pedido( &obj );
    cout << cli1.imprimir();

    Pedido *pPed = new Pedido("Bolsas", 23.44);
    cli1.asociar_pedido( pPed );
    cout << cli1.imprimir();

    return 0;
}