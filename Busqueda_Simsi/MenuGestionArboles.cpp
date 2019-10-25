#include "MenuGestionArboles.h"
#include "MenuConstantesGestionArboles.h"
#include <windows.h>
#include "Nodo.h"
#include <cstdlib>
#include <cstddef>
using namespace std;
using namespace Menu_constantes;
using namespace Menu;
using namespace Espacio_Nodo;
int mostrarOpciones();
int PreguntarCantidad();
void evaluaropcionseleccionada(int);
void InsertarNodoInicio(Nodo *&);
Nodo * crearNodo(string);
void InsertarNodo(Nodo *&,int);
bool TieneHijos();

Nodo * arbol=NULL;
void MenuGestionArboles::empezarMenu() {
	int opcionseleccionada;
	do{
		opcionseleccionada=mostrarOpciones();
		evaluaropcionseleccionada(opcionseleccionada);

	} while(opcionseleccionada!=MenuConstantesGestionArboles::salir);
	
}
int mostrarOpciones(){
	MenuConstantesGestionArboles::MostrarOpcionesListaMenu();
	int opcion;
	cin>>opcion;
	return opcion;
}
void evaluaropcionseleccionada(int opcionseleccionada){
	switch(opcionseleccionada){
		case MenuConstantesGestionArboles::insertar_arbol:{
			cout<<"..::Ingrese Arbol a Insertar::"<<endl;
			if(arbol==NULL){
				InsertarNodoInicio(arbol);
				arbol->set_n_hijos(arbol->cuantos_hijos(arbol->get_Data()));
				arbol->set_Hijos(arbol,true,arbol->get_cantidad_hijos());
				break;
			}else{
				cout<<"Ya hay un Arbol Porfavor Vacielo para Insertar nuevos nodos"<<endl;
			}
			break;
		}
		case MenuConstantesGestionArboles::mostrar_arbol:{
			cout<<"..::Mostrar Arbol::.."<<endl;
			if(arbol==NULL)
				cout<<"El Arbol Esta Vacio porfavor Ingrese Uno "<<endl;
			else{
				arbol->get_Hijos();
			}
			break;
		}
		case MenuConstantesGestionArboles::busqueda_profundidad_arbol:{
				cout<<"..::Busqueda por Profundidad::.."<<endl;
				break;
		}
		case MenuConstantesGestionArboles::busqueda_anchura_arbol:{
				cout<<"..::Busqueda por Anchura::.."<<endl;
				break;
			}
		case MenuConstantesGestionArboles::busqueda_costo_arbol:{
				cout<<"..::Busqueda por Costos::.."<<endl;
				break;
			}
	case MenuConstantesGestionArboles::eliminar_arbol_actual:{
			cout<<"..:Vaciando Arbol::.."<<endl;
			arbol = NULL;
			break;
			}
		case MenuConstantesGestionArboles::salir:{
				cout<<"Salio"<<endl;
				exit(0);
			}
	}
	system("PAUSE");
	Sleep(2000);
}

Nodo * crearNodo(string dato){
	Nodo * nuevo_nodo = new Nodo();
	nuevo_nodo->set_data(dato);
	return nuevo_nodo;
}
void InsertarNodoInicio(Nodo  *&){
	cout<<"Ingrese nombre del Nodo Inicial: ";
	string nombre;
	cin>>nombre;
	Nodo * nuevo_nodo =crearNodo(nombre);
	arbol = nuevo_nodo;
}


