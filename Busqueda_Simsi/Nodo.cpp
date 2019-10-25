#include "Nodo.h"
#include <iostream>
#include <cstring>
#include <bits/stdc++.h> 
#include <string>
using namespace std;
using namespace Espacio_Nodo;
Nodo::~Nodo(){
} 
void LLenandoHijos(Nodo &,int,int);
void mostrarHijosdehijos(Nodo&);
void Nodo::set_data(string dato){
	this->Data=dato;
	
}
string Nodo::get_Data(){
	return this->Data;
}
void Nodo::ingresarcostos_hijos(int n){
		cout<<"Ingrese Costo del Nodo °"<<this->Data<<" : ";
		cin>>costo;
}
void Nodo::set_n_hijos(int cantidad_hijos){
	n_hijos=cantidad_hijos;
	hijos = new Nodo[n_hijos];
}
int Nodo::get_cantidad_hijos(){
	return this->n_hijos;
}
int Nodo::mostrar_costos(){
	return this->costo;
}
void Nodo::set_Hijos(Nodo *& arbol,int cantidad_hijos){
	
	
	
		string palabra = "";
		for(int j=0;j<cantidad_hijos;j++){
				cout<<"Ingrese Nombre del Hijo N° "<<(j+1)<< "Del Nodo "<<arbol->get_Data()<<": ";
			cin>>palabra;
			arbol->hijos[j].set_data(palabra);
		}
		for(int k=0;k<cantidad_hijos;k++){
			int n=arbol->hijos[k].cuantos_hijos(arbol->hijos[k].get_Data());
			if(n!=0)
				LLenandoHijos(arbol->hijos[k],n,0);
			else
				arbol->hijos[k].set_n_hijos(0);
		}
}
	
	//LLenandoHijos(arbol->hijos[i]);
void LLenandoHijos(Nodo & hijo,int cantidad,int nivel){
	
}
void Nodo::get_Hijos(){
	cout<<"Nodo "<<this->Data<<endl;
	for(int i=0;i<n_hijos;i++){
		cout<<"Nodo : "<<this->hijos[i].get_Data()<<endl;
		if(this->hijos[i].get_cantidad_hijos()>0){
			get_hijosdehijos(this->hijos[i]);
		}
	}
}
void Nodo::get_hijosdehijos(Nodo & hijo){
	
}
int Nodo::cuantos_hijos(string nombre_nodo){
	cout<<"Cuantos hijos tiene el nodo "<<nombre_nodo<<": ";
	int cantidad;
	cin>>cantidad;
	return cantidad;
}
