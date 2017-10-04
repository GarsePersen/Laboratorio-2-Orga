#ifndef _H_PASOIF_
#define _H_PASOIF_

#include "Instruccion.hpp"

class PasoIf: public Instruccion{
   
    public:
        PasoIf(NombreInstruccion nombre);

	    void run(Pipeline &pipeline);
};


#endif
