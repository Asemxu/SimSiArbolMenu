#ifndef NODO_H
#define NODO_H
#include <string>

using namespace std;

namespace Espacio_Nodo{
class Nodo {
public:
	string Data;
	int *costos;
	int n_hijos;
	Nodo ** hijos;
	Nodo(){
		
	}
	
	void set_data(string);
	void setcostos_hijos(int );
	void set_n_costos_hijos(int); 
	int get_cantidad_costos_hijos();
	void mostrar_costos();
	void set_Hijos();
	void get_Hijos();
	string get_Data(); 
	~Nodo();	
};
}
#endif

