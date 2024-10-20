
#include "Proceso.hpp"

class Lista
{
public:
	Lista();
	~Lista();
	int getLongitud();
	void listarProceso();
	Proceso buscarProceso();
	Proceso finalizarProceso();
	void cambiarPrioridad();
	Proceso menor();
	//faltan más métodos
	

private:
	int Longitud;

};
