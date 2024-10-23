#include "NodoListaDoble.hpp"

class ListaDobleEnlazada
{
public:
	ListaDobleEnlazada();
	~ListaDobleEnlazada();
	void insertar(Proceso* proceso);
	void mostrarInfoB();
	int getLongitud();
	void menor();
	void buscarPorUsuario(string);
	void eliminarPorPID(int, Pila&);
	bool buscarPorPDI(int);
	void borrarLista();
	
private:
	int longitud;
	nodoList primero, ultimo;
};