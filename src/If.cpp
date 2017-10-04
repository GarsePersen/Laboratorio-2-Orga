#include <stdexcept>
#include <iostream>

#include "If.hpp"


using namespace std;


If::If(NombreInstruccion nombre): Instruccion(nombre){
    

}

void If::runPipeline(Pipeline &pipeline){

    int result = 0;
    int valorR2 = 0;
    cout << "---" << endl;
    switch(this->nombre){
        case NombreInstruccion::Addi:
	    result = valorR2;
            cout << "Addi" << endl;
	    break;
        case NombreInstruccion::Subi:
            result = valorR2;
            break;
        default:
            throw logic_error("La instruccion no corresponde a un TipoInmediato");
    }
}
