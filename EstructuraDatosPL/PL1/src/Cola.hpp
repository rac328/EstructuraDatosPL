#include "NodoCola.hpp"

class Cola
{
public:
	Cola();
	~Cola();
	
	void encolar(Proceso* proceso);
	void eliminar();
	void mostrar();
	int getLongitud();
	Proceso* verPrimero();

private:
	pnodoCola primero, ultimo;
	int longitud;
};