#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

class Proceso
{
public:
	Proceso(int pdi, char nombre[6], bool tipo, bool estado, int prioridad);
	~Proceso();
	char getNombreUsuario;
	bool getEstado();
	bool getTipo();
	int getPrioridad();
	void setPrioridad(int prio);
	int getPDI();
	
private:
	int pdi;
	char nombre[6];
	bool estado;
	bool tipo;
	int prioridad;


};

