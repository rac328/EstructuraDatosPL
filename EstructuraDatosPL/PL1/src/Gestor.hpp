#include "Pila.hpp"
#include "Cola.hpp"
#include "ListaDobleEnlazada.hpp"
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
	int ProcesosEnListaNormal();
	int ProcesosEnListaTiempoReal();
	void ProcesosEnArbol();
	void genera12Procesos();
	void muestraProcesos();
	void borraProcesosPila();
	void borraProcesosColas();
	void encolarProcesos();
	void muestraProcesosGPUs0y1();
	void muestraProcesosGPUs2y3();
	void enlistarProcesos();
	void muestraProcesosNormal();
	void muestraProcesosTiempoReal();
	void buscarProcesos();
	void buscarProcesoPorNombreUsuario();
	void eliminarProcesoPorPID();
	void cambiarPrioridadProcesoPorPID();
	void reiniciar();
	
private:
	Pila pila;
	Cola gpuNormal0, gpuNormal1;
	Cola gpuTR2, gpuTR3;
	ListaDobleEnlazada ListNormal, ListTReal;
	int contadorPDI;
	int contadorNombre;
	int contadorPrioridadNormal;
	int contadorPrioridadTR;

};
