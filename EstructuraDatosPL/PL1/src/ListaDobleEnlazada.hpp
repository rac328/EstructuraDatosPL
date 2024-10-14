#include "NodoListaDoble.hpp"

class ListaDobleEnlazada
{
public:
	ListaDobleEnlazada();
	~ListaDobleEnlazada();
	void insertar(Proceso* proceso);
	Proceso* extraer();
	Proceso* cima();
	void borrar();
	void mostrarInfoB();
	int getLongitud();
	
private:
	int longitud;
	nodoList siguiente, ultimo;
};