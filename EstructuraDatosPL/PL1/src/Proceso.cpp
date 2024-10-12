#include "Proceso.hpp"
using namespace std;

Proceso::Proceso(){}
Proceso::Proceso(int pdi, string nombre, bool tipo, bool estado, int prioridad)
{
	this->pdi=pdi;
	this->nombre=nombre;
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
	
void Proceso::mostrarInfoBasico(){
	if(this->tipo)
		cout << "El proceso cuyo PDI es " << this->pdi << " es de tipo " << "normal" <<" ejecutado por "<<nombre<<endl;
	else
		cout << "El proceso cuyo PDI es " << this->pdi << " es de tipo " << "en tiempo real" <<" ejecutado por "<<nombre<<endl;
	}

Proceso::~Proceso()
{
}

