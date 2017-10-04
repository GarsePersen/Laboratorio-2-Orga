#include <stdexcept>
#include <iostream>

#include "PasoIf.hpp"


using namespace std;

PasoIf::PasoIf(NombreInstruccion nombre, size_t r1, size_t r2, int valor): Instruccion(nombre){
    this->r1 = r1;
    this->r2 = r2;
    this->valor = valor;
}

PasoIf::PasoIf(string nombre, string r1, string r2, string valor): Instruccion(nombre){
    this->r1 = this->storeg(r1);
    this->r2 = this->storeg(r2);
    this->valor = stoi(valor);
}


PasoIf::PasoIf(NombreInstruccion nombre): Instruccion(nombre){
    

}

void PasoIf::run(Pipeline &pipeline){
    cout << "PasoIf"<< endl;
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
