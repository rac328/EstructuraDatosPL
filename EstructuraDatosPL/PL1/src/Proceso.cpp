#include "Proceso.hpp"
using namespace std;

Proceso::Proceso(){}
Proceso::Proceso(int pdi, char nombre[6], bool tipo, bool estado, int prioridad)
{
	this->pdi= 300 + rand() % 1000;
	strcpy(this->nombre, nombre);
	this->tipo= rand() % 2;
	this->estado=estado;
	this->prioridad=prioridad;
}

void Proceso::setPrioridad(int prio){
	this->prioridad=(prio + 120);
	}

int Proceso::getPDI(){
	return this->pdi;
	}

int Proceso::getPrioridad(){
	return this->prioridad;
	}

bool Proceso::getEstado(){
	return this->estado;
	} 

bool Proceso::getTipo(){
	return this->tipo;
	}
	
void Proceso::mostrarInfo(){
	//no funciona
	if(tipo)
		cout << "Proceso normal" << endl;
	else
		cout << "Proceso en tiempo real" << endl;
	}

Proceso::~Proceso()
{
}

