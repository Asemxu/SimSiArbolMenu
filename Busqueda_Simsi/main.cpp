#include<iostream>
#include "Facade.h"
#include "MenuGestionArboles.h"

using namespace std;
using namespace Fachada;
using namespace Menu;
int main () {
	Facade * menu= new Facade(new MenuGestionArboles());
	menu->empezar_Menu();
	delete menu;

}
	

