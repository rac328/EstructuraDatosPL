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
        while (actual != nullptr && actual->valorProceso->getPrioridad() <= proceso->getPrioridad()) {
            anterior = actual;
            actual = actual->siguiente;
        }

        if (actual == nullptr) {
            // Si llegó al ultimo, insertar allí
            ultimo->siguiente = nuevo;
            ultimo = nuevo;
			ultimo->siguiente = nullptr;
        } else {
            // Insertar en medio
            anterior->siguiente = nuevo;
            nuevo->siguiente = actual;
        }
    }
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
	return this -> longitud;
	}

Proceso* Cola::verPrimero() { return primero->valorProceso; }
Cola::~Cola()
{
    while(primero)
        eliminar();
}