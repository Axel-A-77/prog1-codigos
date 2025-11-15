




#ifndef PERSONA_H
#define PERSONA_H

#include <vector>

#include "Documento.h"
class Persona {
    vector<Documento*> documentos;
public:

    ~Persona() {
        for (auto &pDoc : documentos) {
            delete pDoc;
        }
    }
    void setDocumento(Documento *pDoc) {
        documentos.emplace_back( pDoc );
    }
    void mostrar() {
        for ( auto &pDoc : documentos ) {
            cout << pDoc->mostrar() << endl;
        }
    }
};



#endif //PERSONA_H
