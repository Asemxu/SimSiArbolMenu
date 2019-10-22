#include "Facade.h"
#include "Menu.h"
using namespace std;
using namespace Fachada;
using namespace Menu_;

Facade::Facade (Menu  * menu_){
	menu = menu_;
}
void Facade::empezar_Menu(){
	menu->empezarMenu();
	
}
Facade::~Facade(){
	
}
