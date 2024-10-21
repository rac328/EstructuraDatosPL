#include "Cola.hpp"
Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}
void Cola::encolar(Proceso* proceso)
{
    NodoCola* nuevo = new NodoCola(proceso);
	//if(longitud>0){
			if (primero == nullptr) {  // Cuando la cola este vacia
			primero = ultimo = nuevo;
		} else if (proceso->getPrioridad() < primero->valorProceso->getPrioridad()) {
			// Si el nuevo tiene mayor prioridad se mete al principio
			nuevo->siguiente = primero;
			primero = nuevo;
		} else {
			NodoCola* actual = primero;
			NodoCola* anterior = nullptr;

			//Se busca donde meter el proceso nuevo
			while (actual != nullptr && (actual->valorProceso->getPrioridad() <= proceso->getPrioridad())) {
				anterior = actual;
				actual = actual->siguiente;
			}
	
			if (actual == nullptr) {
				// Si se llega al ultimo, para y se inserta ahi
				ultimo->siguiente = nuevo;
				ultimo = nuevo;
				ultimo->siguiente = nullptr;
			} else {
				// Insertar en medio
				anterior->siguiente = nuevo;
				nuevo->siguiente = actual;
			}
		}
		longitud++;
	
}

void Cola::mostrar()
{
    pnodoCola aux = primero;
    while(aux) {
        aux->valorProceso->mostrarInfoEstado();
        aux = aux->siguiente;
    }
}
void Cola::eliminar(){
    pnodoCola nodo;
	nodo = primero;
	if(nodo == NULL){
		}
	else{
		while(longitud > 0){
		nodo = primero;
		primero = nodo->siguiente;
		delete nodo;
		if(!primero){
			ultimo = NULL;
			}
		longitud--;			
			}
		}
}

int Cola::getLongitud(){
	return this->longitud;
	}

Proceso* Cola::verPrimero() { return primero->valorProceso; }

Proceso* Cola::devolverPrimero() {
	Proceso* vp = primero->valorProceso;
	NodoCola* eliminar;
	eliminar = primero;
	primero = primero->siguiente;
	longitud--;
	delete eliminar;
	return vp;
	}
	
Cola::~Cola()
{
    while(primero)
        eliminar();
}