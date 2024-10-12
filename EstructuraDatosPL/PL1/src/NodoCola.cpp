#include "NodoCola.hpp"

NodoCola::NodoCola(Proceso* vp, NodoCola* sig)
{
	valorProceso = vp;
	siguiente = sig;
}
NodoCola::
NodoCola::~NodoCola()
{
}