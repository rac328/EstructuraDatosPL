#include <iostream>
#include "Proceso.hpp"

using namespace std;

class NodoCola
{
public:
    NodoCola(Proceso* v, NodoCola* sig = NULL);
    ~NodoCola();

private:
    Proceso* valorProceso;
    NodoCola* siguiente;

    friend class Cola;
};

typedef NodoCola* pnodoCola;