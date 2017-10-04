#ifndef _H_PASOIF_
#define _H_PASOIF_
#include <string>
using namespace std;
#include "Instruccion.hpp"

class PasoIf: public Instruccion{
    private:
        size_t r1, r2;
	int valor;
    public:
        PasoIf(string nombre, string r1, string r2, string valor);

	PasoIf(NombreInstruccion nombre, size_t r1, size_t r2, int valor);
        void run(Pipeline &pipeline);
};


#endif
