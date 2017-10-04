#ifndef _H_PIPELINE_
#define _H_PIPELINE_


using namespace std;

class Pipeline{
    private:
        int ciclo;
    public:
	Pipeline();
	int obtenerCiclo();
	void modificarCiclo(int valor);
        void comprobarHazard(int registro, int registro2);
};



#endif
