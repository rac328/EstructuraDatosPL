#include "Pila.hpp"
class Gestor
{
public:
	Gestor();
	~Gestor();
	int ProcesosEnPila();
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
	Pila pila;
	int contadorPDI;
	int contadorNombre;
	int contadorPrioridadNormal;
	int contadorPrioridadTR;

};
