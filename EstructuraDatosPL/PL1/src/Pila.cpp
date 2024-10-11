#include "Pila.hpp"

using namespace std;

Pila::Pila(){
	ultimo = NULL;
	longitud = 0;
	}

void Pila::insertar(Proceso* proceso){
	pNodoP nuevo;
	nuevo = new NodoPila(proceso, ultimo);
	ultimo = nuevo;
	longitud++;
	}

Proceso* Pila::extraer(){
	pNodoP nodo;
	nodo = ultimo;
	ultimo = nodo->siguiente;
	Proceso* proceso = nodo->valorProceso;
	longitud--;
	delete nodo;
	return proceso;
	}

Proceso* Pila::cima(){
	return ultimo->valorProceso ;
	}

void Pila::mostrar(){
	pNodoP aux = ultimo;
	cout << "\tEl contenido de la pila es: " << endl;
	while(aux){
		aux->valorProceso->getPDI();
		aux = aux -> siguiente;
		}
	cout << endl;
	}

int Pila::getLongitud(){
	return this -> longitud;
	}

Pila::~Pila(){
	pNodoP aux;
	while(ultimo){
		aux = ultimo;
		ultimo = ultimo -> siguiente;
		delete aux;
		}
	}