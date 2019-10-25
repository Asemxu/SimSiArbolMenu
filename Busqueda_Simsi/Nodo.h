#ifndef NODO_H
#define NODO_H
#include <string>

using namespace std;

namespace Espacio_Nodo{
class Nodo {
public:
	char * nombre_nodo;
	int costo;
	int n_hijos;
	Nodo * Inicial;
	Nodo * hijo;
	Nodo(){
		
	}
	
	void set_nombre_nodo(char*);
	void set_n_hijos(int); 
	void set_costo(int);
	int get_cantidad_hijos();
	int mostrar_costo();
	char * get_nombre(); 
	void InsertarNodo(Nodo *&,int,bool);

	int cuantos_hijos(char*);
};
}
#endif

