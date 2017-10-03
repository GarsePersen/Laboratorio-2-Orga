#include <stdexcept>

#include "If.hpp"


using namespace std;


If::If(NombreInstruccion nombre): Instruccion(nombre){
    

}

void If::run(Pipeline &pipeline){

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
            throw logic_error("La instruccion no corresponde a un TipoInmediato");
    }
}
