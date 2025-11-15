#include <vector>
#include "Estrella.h"

int main() {
    vector<Estrella*> estrellas;
    estrellas.push_back(new Simple("AA"));
    estrellas.push_back(new Binaria("BB"));

    for (auto &pEst : estrellas) {
        cout << pEst->imprimir() << endl;
    }

    return 0;
}