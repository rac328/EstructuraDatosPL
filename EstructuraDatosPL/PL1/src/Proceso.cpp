#include "Proceso.hpp"

Proceso::Proceso(int pdi, char nombre[6], bool tipo, bool estado, int prioridad)
{
	this->pdi=pdi;
	strcpy(this->nombre, nombre);
	this->tipo=tipo;
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

Proceso::~Proceso()
{
}

