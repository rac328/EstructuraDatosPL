#ifndef GESTOR_HPP
#define GESTOR_HPP
#include "Proceso.hpp"
class Gestor
{
public:
	Gestor();
	~Gestor();
	void ProcesosEnPila();
	void ProcesosEnGPU0();
	void ProcesosEnGPU1();
	void ProcesosEnGPU2();
	void ProcesosEnGPU3();
	void ProcesosEnListaNormal();
	void ProcesosEnListaTiempoReal();
	void ProcesosEnArbol();
	void genera12Procesos();
	void muestraProcesos();
	void borraProcesosPila();
	void encolarProcesos();
	void muestraProcesosGPUs0y1();
	void muestraProcesosGPUs2y3();
	void enlistarProcesos();
	void muestraProcesosNormal();
	void muestraProcesosTiempoReal();
	void buscarProcesos();
	Proceso buscarProcesoPorNombreUsuario();
	void eliminarProcesoPorPID();
	void cambiarPrioridadProcesoPorPID();
	void reiniciar();
	
private:
	int contadorNormal;
	int contadorTReal;
	int arrayNormal[39];
	int arrayTReal[100];

};

#endif // GESTOR_HPP
