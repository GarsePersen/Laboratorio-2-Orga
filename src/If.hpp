#ifndef _H_IF_
#define _H_IF_

#include "Instruccion.hpp"

class If: public Instruccion{
   
    public:
        If(NombreInstruccion nombre);

        void run(Pipeline &pipeline);
};


#endif
