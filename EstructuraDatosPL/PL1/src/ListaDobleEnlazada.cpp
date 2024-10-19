#include "ListaDobleEnlazada.hpp"

ListaDobleEnlazada::ListaDobleEnlazada()
{
	longitud = 0;
	primero = NULL;
	ultimo = NULL;
}
void ListaDobleEnlazada::insertar(Proceso* proceso){
	nodoList nuevo;
	nuevo = new NodoListaDoble(proceso);
	if(primero==nullptr){
		primero = nuevo;
		ultimo = nuevo;
		}
	else if (proceso->getPrioridad() < primero->valorProceso->getPrioridad()) {
			// Si el nuevo tiene mayor prioridad se mete al principio
			nuevo->listnodsig = primero;
			primero->listnodant = nuevo;
			primero = nuevo;
	}
	else{
		NodoListaDoble* actual = primero;

        //Se busca donde meter el proceso nuevo
		//Arreglar porque no furula, se mete en un bucle infinito
        while (actual != nullptr && (actual->valorProceso->getPrioridad() <= proceso->getPrioridad())) {
			actual->listnodant = actual;
            actual = actual->listnodsig;
        }

        if (actual == nullptr) {
            // Si se llega al ultimo, para y se inserta ahi
            ultimo->listnodsig = nuevo;
            ultimo = nuevo;
			ultimo->listnodsig = nullptr;
        }
		else {
            // Insertar en medio
			nuevo->listnodant = actual->listnodant;
			//actual->listnodant->listnodsig = nuevo;
			nuevo->listnodant->listnodsig = nuevo;
			actual->listnodant = nuevo;
            nuevo->listnodsig = actual;
        }
    }
	longitud++;
		}

void ListaDobleEnlazada::mostrarInfoB(){
	NodoListaDoble* aux = primero;
	while(aux){
		aux->valorProceso->mostrarInfoEstado();
		aux = aux->listnodsig;
		}
	}
int ListaDobleEnlazada::getLongitud(){
	return this->longitud;
	}
ListaDobleEnlazada::~ListaDobleEnlazada()
{
}

