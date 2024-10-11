#include "NodoPila.hpp"

NodoPila::NodoPila(Proceso* v, NodoPila* sig)
{
	valorProceso = v;
	siguiente = sig;
}

NodoPila::~NodoPila()
{
}

