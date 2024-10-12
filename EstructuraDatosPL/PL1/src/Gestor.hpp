#include "Pila.hpp"
#include "Cola.hpp"
class Gestor
{
public:
	Gestor();
	~Gestor();
	int ProcesosEnPila();
	int ProcesosEnGPU0();
	int ProcesosEnGPU1();
	int ProcesosEnGPU2();
	int ProcesosEnGPU3();
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
	Pila pila;
	Cola gpuNormal0, gpuNormal1;
	Cola gpuTR2, gpuTR3;
	int contadorPDI;
	int contadorNombre;
	int contadorPrioridadNormal;
	int contadorPrioridadTR;

};
