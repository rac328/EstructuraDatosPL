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
	/*Cola gpuNormal0, gpuNormal1;
	Cola gpuTR2, gpuTR3;*/
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
				cout << "No se admiten más procesos normales";
				prioridad = 120 + contadorPrioridadNormal;
				}
			}
		else{
			if(contadorPrioridadTR < 100){
				prioridad = contadorPrioridadTR;
				contadorPrioridadTR++;
				}
			else{
				cout << "No se admiten más procesos en tiempo real";
				prioridad = contadorPrioridadTR;
				}
			}
			cout << "me cago en todo" <<endl;
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
	vector<Proceso*> procesos;
	
	while (pila.getLongitud() > 0){
		Proceso* proceso = pila.extraer();
		procesos.push_back(proceso); //push_back se usa para introducir al vector procesos el proceso extraido de la pila
	}
	
	sort(procesos.begin(), procesos.end(), compararPrioridad); //esto ordena el vector que hemos creado en funcion de la prioridad
	
	for (Proceso* proceso : procesos) {
		if (proceso->getTipo()){ //esto es que es de tipo normal
			if (gpuNormal0.getLongitud() <= gpuNormal1.getLongitud()){ //si una cola tiene menos que otra, 
			//se mete el proceso en la que menos tiene, pero si los dos tienen igual, se mete al primero
				gpuNormal0.encolar(proceso);
			}else{
				gpuNormal1.encolar(proceso);
			}
		}else{ //lo mismo para los de tiempo real
			if(gpuTR2.getLongitud() <= gpuTR3.getLongitud()){
				gpuTR2.encolar(proceso);
			}else{
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

Gestor::~Gestor()
{	
}




