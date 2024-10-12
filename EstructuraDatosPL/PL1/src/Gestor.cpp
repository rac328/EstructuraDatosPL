#include "Gestor.hpp"
#include <algorithm>
#include <sstream>
using namespace std;
Gestor::Gestor()
{
	this->contadorNormal=0;
	this->contadorTReal=0;
	this->contadorPDI=1;
	this->contadorNombre=0;
	//Istanciar las GPUs
	//Pila pila;
}
int Gestor::ProcesosEnPila(){
	return pila.getLongitud();  
	}
	
void Gestor::genera12Procesos(){
	int arrayPDI[12];
	string nombre = "user";
	string resultado;
	stringstream sstm;
	for(int i=0;i<=11;i++){
		arrayPDI[i] = contadorPDI + 1;
		contadorPDI++;
		}
	random_shuffle(arrayPDI,arrayPDI+11);
	for(int i=0;i<=11;i++){
		sstm << nombre << contadorNombre;
		resultado = sstm.str();
		Proceso* proceso = new Proceso(arrayPDI[i],resultado, rand() % 2, rand() % 2,1);
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




