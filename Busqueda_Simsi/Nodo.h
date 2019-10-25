#ifndef NODO_H
#define NODO_H
#include <string>

using namespace std;

namespace Espacio_Nodo{
class Nodo {
public:
	string Data;
	int costo;
	int n_hijos;
	Nodo * hijos;
	Nodo(){
		
	}
	
	void set_data(string);
	void ingresarcostos_hijos(int );
	void set_n_hijos(int); 
	int get_cantidad_hijos();
	int mostrar_costos();
	void set_Hijos(Nodo*&,bool,int);
	void get_Hijos();
	string get_Data(); 
	int cuantos_hijos(string);
	~Nodo();	
};
}
#endif

