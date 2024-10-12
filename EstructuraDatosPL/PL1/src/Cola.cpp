#include "Cola.hpp"
Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}
void Cola::encolar(Proceso* proceso)
{
    pnodoCola nuevo;
    nuevo = new NodoCola(proceso);
    if(ultimo)
        ultimo->siguiente = nuevo;
		
    ultimo = nuevo;
    if(!primero)

        primero = nuevo;
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
	return this -> longitud;
	}

Proceso* Cola::verPrimero() { return primero->valorProceso; }
Cola::~Cola()
{
    while(primero)
        eliminar();
}