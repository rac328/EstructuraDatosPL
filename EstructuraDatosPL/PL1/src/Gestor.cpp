#include "Gestor.hpp"
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;
Gestor::Gestor()
{
	this->contadorPDI=1;
	this->contadorNombre=0;
	this->contadorPrioridadNormal=-19;
	this->contadorPrioridadTR=0;
	//Istanciar las GPUs
	Pila pila;
	Cola gpuNormal0, gpuNormal1;
	Cola gpuTR2, gpuTR3;
}
int Gestor::ProcesosEnPila(){
	return pila.getLongitud();  
	}
	
void Gestor::genera12Procesos(){
	int arrayPDI[12];
	int prioridad = 0;
	string nombre = "user";
	string resultado;
	stringstream sstm;
	
	for(int i=0;i<=11;i++){
		arrayPDI[i] = contadorPDI + 300;
		contadorPDI++;
		}
		
	random_shuffle(arrayPDI,arrayPDI+11);
	
	for(int i=0;i<=11;i++){
		sstm << nombre << contadorNombre;
		resultado = sstm.str();
		bool tipoProceso = rand() % 2;
		if(tipoProceso){
			if(contadorPrioridadNormal < 20){
				prioridad = 120 + contadorPrioridadNormal;
				contadorPrioridadNormal++;
				}
			else{
				cout << "No se admiten mas procesos normales" <<endl;
				prioridad = 120 + contadorPrioridadNormal;
				}
			}
		else{
			if(contadorPrioridadTR < 100){
				prioridad = contadorPrioridadTR;
				contadorPrioridadTR++;
				}
			else{
				cout << "No se admiten mas procesos en tiempo real" <<endl;
				prioridad = contadorPrioridadTR;
				}
			}
		Proceso* proceso = new Proceso(arrayPDI[i], resultado, tipoProceso, false, prioridad);
		pila.insertar(proceso);
		contadorNombre++;
		sstm.str("");
		sstm.clear();
	}
	}
	
void Gestor::muestraProcesos(){
	pila.mostrarInfoB();
	}

void Gestor::borraProcesosPila(){
	while (pila.getLongitud()>0){
		pila.borrar();
	}
}


bool compararPrioridad(Proceso* a, Proceso* b) {
    return a->getPrioridad() < b->getPrioridad(); // Ordena de menor a mayor prioridad
}


//he buscado como hacer de manera facil lo de ordenar y lo podemos hacer con un vector y std::sort
void Gestor::encolarProcesos(){
	while (pila.getLongitud() > 0) {
        Proceso* proceso = pila.extraer();

        // Si es de tipo normal
        if (proceso->getTipo()) {
            if (gpuNormal0.getLongitud() <= gpuNormal1.getLongitud()) {
                gpuNormal0.encolar(proceso);
            } else {
                gpuNormal1.encolar(proceso);
            }
        } else { // Si es de tiempo real
            if (gpuTR2.getLongitud() <= gpuTR3.getLongitud()) {
                gpuTR2.encolar(proceso);
            } else {
                gpuTR3.encolar(proceso);
            }
        }
    }
}

int Gestor::ProcesosEnGPU0(){
	return gpuNormal0.getLongitud();
}
int Gestor::ProcesosEnGPU1(){
	return gpuNormal1.getLongitud();
}
int Gestor::ProcesosEnGPU2(){
	return gpuTR2.getLongitud();
}
int Gestor::ProcesosEnGPU3(){
	return gpuTR3.getLongitud();
}

void Gestor::muestraProcesosGPUs0y1(){
	cout << "GPU 0:" << endl;
	gpuNormal0.mostrar();
	cout << endl;
	cout << "GPU 1:" << endl;
	gpuNormal1.mostrar();
	}

void Gestor::muestraProcesosGPUs2y3(){
	cout << "GPU 2:" << endl;
	gpuTR2.mostrar();
	cout << endl;
	cout << "GPU 3:" << endl;
	gpuTR3.mostrar();
	}
void Gestor::borraProcesosColas(){
	gpuNormal0.eliminar();
	gpuNormal1.eliminar();
	gpuTR2.eliminar();
	gpuTR3.eliminar();
	}
	
	
void Gestor::reiniciar(){
	borraProcesosColas();
	borraProcesosPila();
	}

Gestor::~Gestor()
{	
}




