#include "Pipeline.hpp"

using namespace std;

Pipeline::Pipeline(){
    this->ciclo=0;
}

int Pipeline::obtenerCiclo(){
    return this->ciclo;

}

void Pipeline::modificarCiclo(int valor){
    this->ciclo = obtenerCiclo() + valor;
}


void Pipeline::comprobarHazard(int registro, int registro2){


}
