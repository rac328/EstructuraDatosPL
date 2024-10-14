#include "Proceso.hpp"

class NodoListaDoble
{
public:
	NodoListaDoble(NodoListaDoble* listantnodo = NULL, Proceso* vp, NodoListaDoble* listsignodo = NULL, int index);
	~NodoListaDoble();
private:
	Proceso* valorProceso;
	NodoListaDoble* listsig;
	NodoListaDoble* listant;
	int indice;
	friend class ListaDobleEnlazada;
};

typedef NodoListaDoble* nodoList;
