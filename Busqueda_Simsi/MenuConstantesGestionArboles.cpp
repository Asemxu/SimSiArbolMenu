#include "MenuConstantesGestionArboles.h"
#include <iostream>
#include <cstdlib>
using namespace std;
using namespace Menu_constantes;
void MenuConstantesGestionArboles::MostrarOpcionesListaMenu(){
	system("cls");
	cout<<"..:: MENU::.."<<endl;
	cout<<"1. REGISTRO DE ARBOL"<<endl;
	cout<<"2. MOSTRAR ARBOL"<<endl;
	cout<<"3. BUSQUEDA POR PROFUNDIDAD"<<endl;
	cout<<"4. BUSQUEDA POR ANCHURA"<<endl;
	cout<<"5. BUSQUEDA POR COSTO"<<endl;
	cout<<"6. SALIR"<<endl;
	cout<<"Ingrese Opcion: "<<endl;
}
