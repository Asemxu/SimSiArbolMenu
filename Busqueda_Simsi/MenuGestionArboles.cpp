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
				arbol->InsertarNodo(arbol,1,true);
				cout<<"Termino de Insertar"<<endl;
			}else{
				cout<<"Vacie el Arbol para volver a Ingresar"<<endl;
			}
				break;
		}
		case MenuConstantesGestionArboles::mostrar_arbol:{
			cout<<"..::Mostrar Arbol::.."<<endl;
			if(arbol==NULL)
				cout<<"El Arbol Esta Vacio porfavor Ingrese Uno "<<endl;
			else{
				//arbol->get_Hijos();
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



