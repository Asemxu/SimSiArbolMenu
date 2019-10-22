#include "MenuGestionArboles.h"
#include "MenuConstantesGestionArboles.h"
#include <windows.h>
using namespace Menu_constantes;
using namespace Menu;
int mostrarOpciones();
void evaluaropcionseleccionada(int);

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
			break;
		}
		case MenuConstantesGestionArboles::mostrar_arbol:{
			cout<<"..::Mostrar Arbol::.."<<endl;
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
		case MenuConstantesGestionArboles::salir:{
				cout<<"Salio"<<endl;
				exit(0);
			}
	}
	Sleep(2000);
}
	

