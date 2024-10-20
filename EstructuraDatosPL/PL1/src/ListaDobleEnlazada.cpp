
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
ListaDobleEnlazada::~ListaDobleEnlazada()
{
}

