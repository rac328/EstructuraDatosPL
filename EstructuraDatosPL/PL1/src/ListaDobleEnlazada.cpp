#include "Pila.hpp"
#include "ListaDobleEnlazada.hpp"

ListaDobleEnlazada::ListaDobleEnlazada()
{
	longitud = 0;
	primero = NULL;
	ultimo = NULL;
}
void ListaDobleEnlazada::insertar(Proceso* proceso){
	nodoList nuevo;
	nuevo = new NodoListaDoble(proceso);
	if(primero==nullptr){
		primero = nuevo;
		ultimo = nuevo;
		}
	else if (proceso->getPrioridad() < primero->valorProceso->getPrioridad()) {
			// Si el nuevo tiene mayor prioridad se mete al principio
			nuevo->listnodsig = primero;
			primero->listnodant = nuevo;
			primero = nuevo;
	}
	else{
		NodoListaDoble* aux = this->primero;
		NodoListaDoble* actual = aux;
        //Se busca donde meter el proceso nuevo
		//Arreglar porque no furula, se mete en un bucle infinito
        while (actual != nullptr && (actual->valorProceso->getPrioridad() <= proceso->getPrioridad())) {
			//actual->listnodant = actual;
            actual = actual->listnodsig;
        }

        if (actual == nullptr) {
            // Si se llega al ultimo, para y se inserta ahi
            ultimo->listnodsig = nuevo;
			NodoListaDoble* aux = ultimo;
            ultimo = nuevo;
			ultimo->listnodant= aux;		
			ultimo->listnodsig = nullptr;
        }
		else {
            // Insertar en medio
			nuevo->listnodsig = actual;
			actual->listnodant->listnodsig = nuevo;
			nuevo->listnodant = actual->listnodant->listnodsig;
			actual->listnodant = nuevo;
			/* 
			 nuevo->listnodant = actual->listnodant;
			//actual->listnodant->listnodsig = nuevo;
			nuevo->listnodant->listnodsig = nuevo;
			actual->listnodant = nuevo;
            nuevo->listnodsig = actual;
			 */
			
        }
    }
	longitud++;
		}

void ListaDobleEnlazada::mostrarInfoB(){
	NodoListaDoble* aux = primero;
	while(aux){
		aux->valorProceso->mostrarInfoEstado();
		aux = aux->listnodsig;
		}
	}
int ListaDobleEnlazada::getLongitud(){
	return this->longitud;
	}
	
void ListaDobleEnlazada::menor(){
	//if lista vacia: devolver nulo/error
	
	if (primero == nullptr){
		cout<<"No hay procesos en la lista"<<endl;
	}
	
	//else:
		//menor = primero
		//siguiente = primero.siguiente
		//while siguiente != nulo
			//if siguiente.prioridad < menor.prioridad
				//menor = siguiente
				//siguiente = siguiente.siguiente
	Proceso* menorProceso = primero->valorProceso;
	NodoListaDoble* siguiente = primero->listnodsig;
	while (siguiente != nullptr){
		if (siguiente->valorProceso->getPrioridad() < menorProceso->getPrioridad()){
			menorProceso = siguiente->valorProceso;
		}
		siguiente = siguiente->listnodsig;
	}
	menorProceso->mostrarInfoEstado();
}	

void ListaDobleEnlazada::buscarPorUsuario( string nombreUsuario){
	NodoListaDoble* proceso = primero;
	bool encontrado = false;
	while (proceso != nullptr){
		if (proceso->valorProceso->getNombreUsuario() == nombreUsuario){
			proceso->valorProceso->mostrarInfoEstado();
			encontrado = true;
		}
		proceso = proceso->listnodsig;
	}
	if (encontrado == false){
		cout<< "No hay ningun proceso asociado al nombre de usuario proporcionado" << endl;
	}
}

	
void ListaDobleEnlazada::buscarPorPID(int PID, Pila& pila){
	NodoListaDoble* proceso = primero;
	NodoListaDoble* sig;
	bool encontrado = false;
	
	while (proceso != nullptr){
		sig = proceso->listnodsig;
		
		cout << "Buscando " << PID << " en " << proceso->valorProceso->getPDI() << "\n";
		if (proceso->valorProceso->getPDI() == PID){
			
			//primero para si es el primero
			if (proceso == primero){
				cout << "Encontrado en primero !!!!\n";
				primero = proceso->listnodsig;
				
				if (primero != nullptr){ //por si acaso se vacia la lista para que no lo haga
					primero->listnodant = nullptr;
				}
			}else{ // ahora para cuando esta en el medio
			//cout << "Encontrado en medio. Anterior: " << proceso->listnodant->valorProceso->getPDI() << " Pasa a " << proceso->listnodsig->valorProceso->getPDI();
				proceso->listnodant->listnodsig = proceso->listnodsig; //el lugar del proceso que se 
				//elimina pasa a ser del proceso con la posicion siguiente				
				}
			if (proceso == ultimo){
				ultimo = proceso->listnodant;
			}
			
			encontrado = true;
			proceso->valorProceso->setEstado(false);
			pila.insertar(proceso->valorProceso);
			longitud--;
			delete proceso;
			cout << "El proceso con PID " << PID << " ha sido encontrado en la lista y ha sido eliminado de esta e introducido en la pila.\n";
			break;
		}
		proceso = sig;
	}
	if (encontrado == false){
		cout << "No se ha encontrado ningun proceso con dicho PID en la lista.";
	}
}

void ListaDobleEnlazada::cambiarPrioridadListaNormal(int PIDbuscado, int prioridad){
	/*pasos:	primero comparar si la prioridad es valida (-19 - 19).
	 * 			segundo ver si alguno de la lista tiene esa prioridad
si es que si que salte un mensaje con otro cin, 
 * si es que no: 
	 * 			tercero ver si esta el PDI en la lista normal
	 * 			cuarto sustituir la prioridad del proceso por la nueva 
	 
	NodoListaDoble* proceso = primero;
	proceso->valorProceso->setPrioridad(NULL);
	bool encontrado = false;
	if (prioridad < 101 
	while (proceso != nullptr){
		if (proceso->valorProceso->getPrioridad() == prioridad){
			cout << "La prioridad introducida ya existe
		}
	}*/
}
//repetir el anterior para las listas de tiempo real pero comparando con otras prioridades
ListaDobleEnlazada::~ListaDobleEnlazada()
{
}

