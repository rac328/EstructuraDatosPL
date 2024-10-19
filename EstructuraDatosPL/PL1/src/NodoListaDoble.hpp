#include "Proceso.hpp"

class NodoListaDoble
{
public:
	NodoListaDoble(Proceso* vp, NodoListaDoble* listsignodo = NULL, NodoListaDoble* listantnodo = NULL);
	~NodoListaDoble();
private:
	NodoListaDoble* listnodant;
	Proceso* valorProceso;
	NodoListaDoble* listnodsig;
	
	friend class ListaDobleEnlazada;
};

typedef NodoListaDoble* nodoList;
