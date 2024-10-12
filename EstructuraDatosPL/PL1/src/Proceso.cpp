#include "Proceso.hpp"
#include <iostream>
using namespace std;

Proceso::Proceso(){}
Proceso::Proceso(int pdi, string nombre, bool tipo, bool estado, int prioridad)
{
	this->pdi=pdi;
	this->nombre=nombre;
	this->tipo=tipo;
	this->estado=estado;
	this->prioridad=prioridad;
}

void Proceso::setPrioridad(int prio){
	this->prioridad=(prio);
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
	
void Proceso::mostrarInfoBasico(){
	if(this->tipo){
		cout << "El proceso cuyo PDI es " << this->pdi << " es de tipo " << "normal" <<" ejecutado por "<< this->nombre << " con prioridad " << this->prioridad << endl;
		}
	else{
		cout << "El proceso cuyo PDI es " << this->pdi << " es de tipo " << "en tiempo real" <<" ejecutado por "<< this->nombre<< " con prioridad " << this->prioridad << endl;
		}
	}
void Proceso::mostrarInfoEstado(){
	if(this->tipo){
			cout << "El proceso cuyo PDI es " << this->pdi << " es de tipo " << "normal, su estado es parado y su prioridad es: " << this->prioridad << endl;
		}
	else{
			cout << "El proceso cuyo PDI es " << this->pdi << " es de tipo " << "en tiempo real, su estado es parado y su prioridad es: " << this->prioridad << endl;
		}
	}
Proceso::~Proceso()
{
}
