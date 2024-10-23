#include "Gestor.hpp"
#include <algorithm>
#include <sstream>

using namespace std;
Gestor::Gestor()
{
	this->contadorPDI=1;
	this->contadorNombre=0;
	this->contadorPrioridadNormal=-19;
	this->contadorPrioridadTR=0;
	//Istanciar las GPUs
	Pila pila;
	Cola gpuNormal0, gpuNormal1;
	Cola gpuTR2, gpuTR3;
	ListaDobleEnlazada ListNormal, ListTReal;
}
int Gestor::ProcesosEnPila(){
	return pila.getLongitud();  
	}
	
void Gestor::genera12Procesos(){
	int arrayPDI[12];
	int prioridad = 0;
	string nombre = "user";
	string resultado;
	stringstream sstm;
	
	for(int i=0;i<=11;i++){
		arrayPDI[i] = contadorPDI + 300;
		contadorPDI++;
		}
		
	random_shuffle(arrayPDI,arrayPDI+11);
	
	for(int i=0;i<=11;i++){
		sstm << nombre << rand() % 4;
		resultado = sstm.str();
		bool tipoProceso = rand() % 2;
		if(tipoProceso){
			if(contadorPrioridadNormal < 20){
				prioridad = 120 + contadorPrioridadNormal;
				contadorPrioridadNormal++;
				}
			else{
				cout << "No se admiten mas procesos normales" <<endl;
				prioridad = 120 + contadorPrioridadNormal;
				}
			}
		else{
			if(contadorPrioridadTR < 100){
				prioridad = contadorPrioridadTR;
				contadorPrioridadTR++;
				}
			else{
				cout << "No se admiten mas procesos en tiempo real" <<endl;
				prioridad = contadorPrioridadTR;
				}
			}
		Proceso* proceso = new Proceso(arrayPDI[i], resultado, tipoProceso, false, prioridad);
		pila.insertar(proceso);
		contadorNombre++;
		sstm.str("");
		sstm.clear();
	}
	}
	
void Gestor::muestraProcesos(){
	pila.mostrarInfoB();
	}

void Gestor::borraProcesosPila(){
	while (pila.getLongitud()>0){
		pila.borrar();
	}
}


bool compararPrioridad(Proceso* a, Proceso* b) {
    return a->getPrioridad() < b->getPrioridad(); // Ordena de menor a mayor prioridad
}


//he buscado como hacer de manera facil lo de ordenar y lo podemos hacer con un vector y std::sort
void Gestor::encolarProcesos(){
	
	while (pila.getLongitud() > 0) {
        Proceso* proceso = pila.extraer();

        // Si es de tipo normal
        if (proceso->getTipo()) {
            if (gpuNormal0.getLongitud() <= gpuNormal1.getLongitud()) {
                gpuNormal0.encolar(proceso);
            } else {
                gpuNormal1.encolar(proceso);
            }
        } else { // Si es de tiempo real
            if (gpuTR2.getLongitud() <= gpuTR3.getLongitud()) {
                gpuTR2.encolar(proceso);
            } else {
                gpuTR3.encolar(proceso);
            }
        }
    }
}

int Gestor::ProcesosEnGPU0(){
	return gpuNormal0.getLongitud();
}
int Gestor::ProcesosEnGPU1(){
	return gpuNormal1.getLongitud();
}
int Gestor::ProcesosEnGPU2(){
	return gpuTR2.getLongitud();
}
int Gestor::ProcesosEnGPU3(){
	return gpuTR3.getLongitud();
}
int Gestor::ProcesosEnListaNormal(){
	return ListNormal.getLongitud();
	}
int Gestor::ProcesosEnListaTiempoReal(){
	return ListTReal.getLongitud();
	}

void Gestor::muestraProcesosGPUs0y1(){
	cout << "GPU 0:" << endl;
	gpuNormal0.mostrar();
	cout << endl;
	cout << "GPU 1:" << endl;
	gpuNormal1.mostrar();
	}

void Gestor::muestraProcesosGPUs2y3(){
	cout << "GPU 2:" << endl;
	gpuTR2.mostrar();
	cout << endl;
	cout << "GPU 3:" << endl;
	gpuTR3.mostrar();
	}
void Gestor::borraProcesosColas(){
	gpuNormal0.eliminar();
	gpuNormal1.eliminar();
	gpuTR2.eliminar();
	gpuTR3.eliminar();
	}
	
	
void Gestor::reiniciar(){
	borraProcesosColas();
	borraProcesosPila();
	//falta eliminar procesos de las listas
	}

void Gestor::enlistarProcesos(){
	while(gpuNormal0.getLongitud() !=0){
		Proceso* aux0Normal = gpuNormal0.devolverPrimero();
		aux0Normal->setEstado(true);
		ListNormal.insertar(aux0Normal);}
		cout << gpuNormal0.getLongitud() <<endl;
	while(gpuNormal1.getLongitud() !=0){
		Proceso* aux1Normal = gpuNormal1.devolverPrimero();
		aux1Normal->setEstado(true);
		ListNormal.insertar(aux1Normal);
		}
	while(gpuTR2.getLongitud() !=0){
		Proceso* aux2TReal = gpuTR2.devolverPrimero();
		aux2TReal->setEstado(true);
		ListTReal.insertar(aux2TReal);
	}
	while(gpuTR3.getLongitud() !=0){
		Proceso* aux3TReal = gpuTR3.devolverPrimero();
		aux3TReal->setEstado(true);
		ListTReal.insertar(aux3TReal);
	}
}

void Gestor::muestraProcesosNormal(){
	cout << "PDI" << "\t" << "Usuario" << "\t" << "Tipo" << "\t" << "Estado" << "\t" << "\tPrioridad" << endl;
	ListNormal.mostrarInfoB();
	}

void Gestor::muestraProcesosTiempoReal(){
	cout << "PDI" << "\t" << "Usuario" << "\t" << "Tipo" << "\t" << "Estado" << "\t" << "Prioridad" << endl;
	ListTReal.mostrarInfoB();
	}

void Gestor::buscarProcesos(){
	cout <<"Proceso con menor prioridad de la lista de procesos normales: " << endl;
	cout << "PDI" << "\t" << "Usuario" << "\t" << "Tipo" << "\t" << "Estado" << "\t"  << "   Prioridad" << endl;
	ListNormal.menor();
	cout << endl;
	cout << "Proceso con menor prioridad de la lista de procesosde tiempo real: " << endl;
	cout << "PDI" << "\t" << "Usuario" << "\t" << "Tipo" << "\t" << "\t" << "Estado" << "\t" << "Prioridad" << endl;
	ListTReal.menor();
}

void Gestor::buscarProcesoPorNombreUsuario(){
	string nombreUsuario;
	cout << "Introduzca el nombre de usuario del cual desea buscar los procesos: ";
	cin >>nombreUsuario;
	
	cout << "Los procesos asociados al nombre de usuario " << nombreUsuario << " en la lista normal son: " << endl;
	cout << "PDI" << "\t" << "Usuario" << "\t" << "Tipo" << "\t" << "Estado" << "\t"  << "   Prioridad" << endl;
	ListNormal.buscarPorUsuario(nombreUsuario);
	cout << endl;
	
	cout << "Los procesos asociados al nombre de usuario " << nombreUsuario << " en la lista de tiempo real son: " << endl;
	cout << "PDI" << "\t" << "Usuario" << "\t" << "Tipo" << "\t" << "\t" << "Estado" << "\t"  << "   Prioridad" << endl;
	ListTReal.buscarPorUsuario(nombreUsuario);
	cout << endl;
}

void Gestor::eliminarProcesoPorPID(){
	int PID;
	cout << "Introduzca el PID que desea eliminar de las listas y introducir de nuevo a la pila: ";
	cin >> PID;
	
	cout << "Lista normal: " << endl;
	ListNormal.buscarPorPID(PID, pila);
	cout << endl;
	cout << endl;
	
	cout << "Lista de tiempo real: " << endl;
	ListTReal.buscarPorPID(PID, pila);
	cout << endl;
}

void Gestor::cambiarPrioridadProcesoPorPID(){
	//buscar si el proceso con ese PID esta en alguna lista.
	//si está, pedirle una prioridad valida para la lista en la que se encuentre
	//reordenar la lista con la nueva prioridad
}

Gestor::~Gestor()
{	
}




