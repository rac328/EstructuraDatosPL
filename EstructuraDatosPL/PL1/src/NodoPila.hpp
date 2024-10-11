#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include "Proceso.hpp"

class NodoPila
{
public:
	NodoPila(Proceso* v, NodoPila* sig = NULL);
	~NodoPila();
private:
	Proceso* valorProceso;
	NodoPila* siguiente;
	friend class Pila;
};

typedef NodoPila* pNodoP;
#endif // NODOPILA_HPP
