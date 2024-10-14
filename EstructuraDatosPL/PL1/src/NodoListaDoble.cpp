#include "NodoListaDoble.hpp"

NodoListaDoble::NodoListaDoble(NodoListaDoble* listanterior, Proceso* vp, NodoListaDoble* listasiguiente, int index)
{
	valorProceso = vp;
	indice = index;
	listsig = listasiguiente;
	listant = listanterior;
}

NodoListaDoble::~NodoListaDoble()
{
}

