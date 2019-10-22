#ifndef FACADE_H
#define FACADE_H
#include "Menu.h"
using namespace Menu_;
namespace Fachada{
class Facade {
public:
	Facade(Menu *menu);
	~Facade();
	void empezar_Menu();
private:
	Menu * menu;
};
}

#endif

