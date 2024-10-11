#include "Proceso.hpp"

Proceso::Proceso(int pdi, char nombre[6], bool tipo, bool estado, int prioridad)
{
	this->pdi=pdi;
	strcpy(nombre, nombre);
	this->tipo=tipo;
	this->estado=estado;
	this->prioridad=prioridad;
}

void Proceso::setPrioridad(int prio){
	this->prioridad=(prio + 120);
	}


Proceso::~Proceso()
{
}

