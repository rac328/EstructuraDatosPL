#ifndef PROCESO_HPP // Guardas de inclusión
#define PROCESO_HPP
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
	int getPDI();
	void setPrioridad(int prio);
	void setEstado(bool est);
	void mostrarInfoBasico();
	void mostrarInfoEstado();
	
private:
	int pdi;
	string nombre;
	bool estado;
	bool tipo;
	int prioridad;

};
#endif // PROCESO_HPP
