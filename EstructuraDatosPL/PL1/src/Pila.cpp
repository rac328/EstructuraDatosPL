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
	

void Pila::borrar() {
    if (ultimo == nullptr) {  
        cout << "Error: La pila está vacía, no se puede borrar." << endl;
        return;
    }
    pNodoP nodo = ultimo;
    ultimo = nodo->siguiente;  
    longitud--;  
    delete nodo;  
}

Proceso* Pila::cima(){
	return ultimo->valorProceso ;
	}

void Pila::mostrarInfoB(){
	pNodoP aux = ultimo;
	while(aux){
		aux->valorProceso->mostrarInfoBasico();
		aux = aux -> siguiente;
		}
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