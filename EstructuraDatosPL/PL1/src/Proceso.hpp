#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

class Proceso
{
public:
	Proceso();
	//si tipo es TRUE el proceso es normal, sino, es en tiempo real
	//si el estado es TRUE, el proceso está corriendo, sino, está parado
	Proceso(int pdi, char nombre[6], bool tipo, bool estado, int prioridad);
	~Proceso();
	char getNombreUsuario;
	bool getEstado();
	bool getTipo();
	int getPrioridad();
	void setPrioridad(int prio);
	int getPDI();
	void mostrarInfo();
	
private:
	int pdi;
	char nombre[6];
	bool estado;
	bool tipo;
	int prioridad;


};

