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
    /*pnodoCola aux = primero;
    cout << "\tEl contenido de la cola es: ";
    while(aux) {
        cout << "-> " << aux->valor;
        aux = aux->siguiente;
    }
    cout << endl;*/
}
int Cola::eliminar()
{
    /*pnodoCola nodo;
    int v;
    nodo = primero;
    if(!nodo)
        return 0;
    primero = nodo->siguiente;
    v = nodo->valor;
    delete nodo;
    if(!primero)
        ultimo = NULL;
    longitud--;
    return v;*/	
	return 0;
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