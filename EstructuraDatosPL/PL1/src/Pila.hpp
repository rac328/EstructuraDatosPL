#include "NodoPila.hpp"

class Pila
{
public:
	Pila();
	~Pila();
	void insertar(Proceso* proceso);
	Proceso* extraer();
	Proceso* cima();
	void borrar();
	void mostrarInfoB();
	int getLongitud();
	
private:
	pNodoP ultimo;
	int longitud;
	};
