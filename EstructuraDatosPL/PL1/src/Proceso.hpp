#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Proceso
{
public:
	Proceso();
	//si tipo es TRUE el proceso es normal, sino, es en tiempo real
	//si el estado es TRUE, el proceso está corriendo, sino, está parado
	Proceso(int pdi, string nombre, bool tipo, bool estado, int prioridad);
	~Proceso();
	string getNombreUsuario;
	bool getEstado();
	bool getTipo();
	int getPrioridad();
	void setPrioridad(int prio);
	int getPDI();
	void mostrarInfoBasico();
	
private:
	int pdi;
	string nombre;
	bool estado;
	bool tipo;
	int prioridad;

};

