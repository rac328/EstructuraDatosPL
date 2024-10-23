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

void ListaDobleEnlazada::buscarPorUsuario(string nombreUsuario){
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

	
void ListaDobleEnlazada::eliminarPorPID(int PID, Pila& pila){
	NodoListaDoble* sig = primero;
	bool encontrado = false;
	
	while (sig != nullptr){
		
		if (primero == nullptr){ //por si acaso se vacia la lista para que no lo haga
			cout << "No se puede buscar, la lista esta vacia." << endl;
			break;
		}
		//cout << "Buscando " << PID << " en " << proceso->valorProceso->getPDI() << "\n";
		if (sig->valorProceso->getPDI() == PID){
			
			//primero para si es el primero
			if (sig == primero){
				//cout << "Encontrado en primero !!!!\n";
				primero = sig->listnodsig;
			}else{
				 // ahora para cuando esta en el medio
			//cout << "Encontrado en medio. Anterior: " << sig->listnodant->valorProceso->getPDI() << " Pasa a " << proceso->listnodsig->valorProceso->getPDI();
				sig->listnodant->listnodsig = sig->listnodsig; //el lugar del proceso que se 
				//elimina pasa a ser del proceso con la posicion siguiente
				if (sig->listnodsig != nullptr){
					sig->listnodsig->listnodant = sig->listnodant;
				}				
			}
			if (sig == ultimo){
				ultimo->listnodant = nullptr; //Por seguridad
				ultimo = sig->listnodant;
			}
			encontrado = true;
			sig->valorProceso->setEstado(false); //Su estado se cambia ya que vuelve a la pila y no se encuentra en ejecución
			pila.insertar(sig->valorProceso);
			longitud--; //se resta el nodo al conjunto de la lista
			sig->listnodsig = nullptr; //Por seguridad
			sig->listnodant = nullptr; //Por seguridad
			delete sig; //Eliminamos el nodo en cuestión
			cout << "El proceso con PID " << PID << " ha sido encontrado en la lista y ha sido eliminado de esta e introducido en la pila.\n";
			break;
		}
		sig = sig->listnodsig;
	}
	
	if (encontrado == false){
		cout << "No se ha encontrado ningun proceso con dicho PID en la lista.";
	}
}

void ListaDobleEnlazada::borrarLista(){
	nodoList aux;
	while(ultimo){
		aux = primero;
		aux->listnodant = nullptr;
		primero = primero->listnodsig;
		aux->listnodsig = nullptr;
		delete aux;
		}
	}

bool ListaDobleEnlazada::buscarPorPDI(int pdi){
	NodoListaDoble* sig = primero;
	bool encontrado = false;
	
	while (sig != nullptr){
		
		if (primero == nullptr){ //por si acaso se vacia la lista para que no lo haga
			cout << "No se puede buscar, la lista esta vacia." << endl;
			break;
		}
		//Si el nodo contiene el proceso correcto se cambia el valor de encontrado a true, 
		//en caso contrario el bucle acabaría con el proceso no encontrado
		if (sig->valorProceso->getPDI() == pdi){
			encontrado = true;
			break;
		}
		sig = sig->listnodsig;
	}
	
	if (encontrado == false){
		cout << "No se ha encontrado ningun proceso con dicho PID en la lista.";
	}
	return encontrado;
	}

ListaDobleEnlazada::~ListaDobleEnlazada()
{
	nodoList aux;
	while(ultimo){
		aux = primero;
		aux->listnodant = nullptr;
		primero = primero->listnodsig;
		aux->listnodsig = nullptr;
		delete aux;
		}
}

