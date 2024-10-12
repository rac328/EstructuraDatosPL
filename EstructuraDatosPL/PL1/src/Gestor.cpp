#include "Gestor.hpp"
#include <algorithm>
#include <sstream>
using namespace std;
Gestor::Gestor()
{
	this->contadorPDI=1;
	this->contadorNombre=0;
	this->contadorPrioridadNormal=-19;
	this->contadorPrioridadTR=0;
	//Istanciar las GPUs
	Pila pila;
}
int Gestor::ProcesosEnPila(){
	return pila.getLongitud();  
	}
	
void Gestor::genera12Procesos(){
	int arrayPDI[12];
	int prioridad;
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
Gestor::~Gestor()
{	
}




