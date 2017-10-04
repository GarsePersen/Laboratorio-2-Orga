#include <stdexcept>

#include "PasoIf.hpp"


using namespace std;


PasoIf::PasoIf(NombreInstruccion nombre): Instruccion(nombre){
    

}

void PasoIf::run(Pipeline &pipeline){

    int result = 0;
    int valorR2 = 0;
    switch(this->nombre){
        case NombreInstruccion::Addi:
	        result = valorR2;
            break;
        case NombreInstruccion::Subi:
            result = valorR2;
            break;
        default:
            throw logic_error("La instruccion no se identifica en el paso IF");
    }

}
