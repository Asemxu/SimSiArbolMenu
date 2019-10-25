#include "Nodo.h"
#include <iostream>
#include <cstring>
#include <bits/stdc++.h> 
#include <string>
using namespace std;
using namespace Espacio_Nodo;

Nodo * crearNodo(char*,int,int);
void Nodo::set_nombre_nodo(char * nombre){
	this->nombre_nodo=nombre;
	
}
char * Nodo::get_nombre(){
	return this->nombre_nodo;
}

void Nodo::set_n_hijos(int cantidad_hijos){
	n_hijos=cantidad_hijos;
}
void Nodo::set_costo(int costo_nodo){
	costo=costo_nodo;
}

int Nodo::get_cantidad_hijos(){
	return this->n_hijos;
}
int Nodo::mostrar_costo(){
	return this->costo;
}

	//LLenandoHijos(arbol->hijos[i]);

int Nodo::cuantos_hijos(char *nombre){
	cout<<"Cuantos hijos tiene el nodo "<<nombre<<": ";
	int cantidad;
	cin>>cantidad;
	return cantidad;
}
void Nodo::InsertarNodo(Nodo *&arbol,int cantidad,bool isPadre)
{
	char * nombre= new char[20];
	int costo;
	if(cantidad!=0){
		cout<<"Ingrese nombre del Nodo: ";
		cin>>nombre;
		if(isPadre)
			costo=0;
		else{
			cout<<"Ingrese costo del Nodo "<<nombre<<" : ";
			cin>>costo;
		}
		int cantidad_hijos=arbol->cuantos_hijos(nombre);
		if(arbol==NULL){
			Nodo * nuevo_nodo =crearNodo(nombre,costo,cantidad);
			arbol = nuevo_nodo;
			InsertarNodo(arbol,cantidad_hijos,false);
		}else{
			if(cantidad!=0){
				char * nombre_nuevo_nodo = arbol->get_nombre();
				if(strcmp(nombre,nombre_nuevo_nodo)>0)
					InsertarNodo(arbol->Inicial,cantidad_hijos-1,false);
				else
					InsertarNodo(arbol->hijo,cantidad_hijos-1,false);
			}else
			   return;
		}
	}
}
	
 Nodo * crearNodo(char* nombre,int costo_nodo,int cantidad){
	Nodo * nuevo_nodo = new Nodo();
	nuevo_nodo->set_nombre_nodo(nombre);
	nuevo_nodo->set_costo(costo_nodo);
	nuevo_nodo->Inicial=NULL;
	nuevo_nodo->set_n_hijos(cantidad);
	nuevo_nodo->hijo=NULL;
	return nuevo_nodo;
}

