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
	void menor();
	void buscarPorUsuario(string);
	void buscarPorPID(int, Pila&);
	void cambiarPrioridadListaNormal(int, int);
	void cambiarPrioridadListaTReal(int, int);
	
private:
	int longitud;
	nodoList primero, ultimo;
};