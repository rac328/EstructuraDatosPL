#ifndef LISTA_HPP
#define LISTA_HPP

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
	//faltan más métodos
	

private:
	int Longitud;

};

#endif // LISTA_HPP
