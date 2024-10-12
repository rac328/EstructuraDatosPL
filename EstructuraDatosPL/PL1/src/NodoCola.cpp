#include "NodoCola.hpp"

NodoCola::NodoCola(Proceso* v, NodoCola* sig)
{
	valorProceso = v;
	siguiente = sig;
}
NodoCola::
NodoCola::~NodoCola()
{
}