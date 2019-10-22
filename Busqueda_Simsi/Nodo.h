#ifndef NODO_H
#define NODO_H
#include <string>

using namespace std;

namespace Espacio_Nodo{
class Nodo {
public:
	string Data;
	int *costos;
	int n_costos;
	Nodo ** hijos;
	Nodo(int  cantidad){
		n_costos=cantidad;
		costos= new int[cantidad];
		hijos = new Nodo*[cantidad];
	}
	void set_data(string);
	void setcostos_hijos(int );
	void set_n_costos(int); 
	int get_cantidad_costos();
	void mostrar_costos();
	void set_Hijos();
	void get_Hijos();
	~Nodo();	
};
}
#endif

