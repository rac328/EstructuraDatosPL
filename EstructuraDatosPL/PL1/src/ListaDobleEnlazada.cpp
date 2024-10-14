#include "ListaDobleEnlazada.hpp"

ListaDobleEnlazada::ListaDobleEnlazada()
{
	longitud = 0;
	ultimo, siguiente = NULL;
}
void ListaDobleEnlazada::insertar(Proceso* proceso){
	nodoList nuevo;
	nuevo = new NodoListaDoble(proceso);
	if(ultimo){
		
		}
	else{
		
		}
	
	
	
	
	pnodoCola nuevo;
    nuevo = new NodoCola(proceso);
    if(ultimo)
        ultimo->siguiente = nuevo;
		
    ultimo = nuevo;
    if(!primero)

        primero = nuevo;
    longitud++;
	}

ListaDobleEnlazada::~ListaDobleEnlazada()
{
}

