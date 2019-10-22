#include<iostream>
#include "Facade.h"
#include "MenuGestionArboles.h"
#include "Nodo.h"
using namespace std;
using namespace Fachada;
using namespace Menu;
using namespace Espacio_Nodo;
int main () {
	//Facade * menu= new Facade(new MenuGestionArboles());
	//menu->empezar_Menu();
	//delete menu;

	int n=2;
	Nodo * nodo = new Nodo(n);
	nodo->set_data("A");
	nodo->set_Hijos();
	nodo->get_Hijos();
	delete nodo;
}
	

