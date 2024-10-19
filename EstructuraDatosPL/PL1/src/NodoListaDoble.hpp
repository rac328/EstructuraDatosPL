#include "Proceso.hpp"

class NodoListaDoble
{
public:
	NodoListaDoble();
	NodoListaDoble(Proceso* vp, NodoListaDoble* listsignodo = NULL, NodoListaDoble* listantnodo = NULL);
	NodoListaDoble(const NodoListaDoble* obj){
		listnodant = obj->listnodant;
		valorProceso = obj->valorProceso;
		listnodsig = obj->listnodsig;
		}
	~NodoListaDoble();
private:
	NodoListaDoble* listnodant;
	Proceso* valorProceso;
	NodoListaDoble* listnodsig;
	
	friend class ListaDobleEnlazada;
};

typedef NodoListaDoble* nodoList;
