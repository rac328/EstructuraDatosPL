#include "NodoListaDoble.hpp"

NodoListaDoble::NodoListaDoble(Proceso* vp, NodoListaDoble* listasiguiente, NodoListaDoble* listanterior)
{
	listnodant = listanterior;
	valorProceso = vp;
	listnodsig = listasiguiente;
}
NodoListaDoble::NodoListaDoble(){}

NodoListaDoble::~NodoListaDoble()
{
}

