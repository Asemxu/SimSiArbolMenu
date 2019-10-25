#include "Nodo.h"
#include <iostream>
#include <cstring>
#include <bits/stdc++.h> 
#include <string>
using namespace std;
using namespace Espacio_Nodo;
Nodo::~Nodo(){
} 
void LLenandoHijos(Nodo &);
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
void Nodo::set_Hijos(Nodo *& arbol,bool isPadre,int cantidad_hijos){
	
	
	
	for(int i=0;i<cantidad_hijos;i++){
		string palabra = "";
		for(int j=0;j<cantidad_hijos;j++){
			if(isPadre){
				cout<<"Ingrese Nombre del Hijo N° "<<(j+1)<< "Del Nodo "<<arbol->get_Data()<<": ";
			}else{
				cout<<"Ingrese Nombre del Hijo N° "<<(j+1)<< "Del Nodo "<<arbol->hijos[i].get_Data()<<": ";
			}
			cin>>palabra
			arbol->hijos[j].set_data(palabra);
		}
		for(int k=0;k<cantidad_hijos;k++){
			int n=arbol->hijos[k].cuantos_hijos(arbol->hijos[k].get_Data());
			if(n==0){
				i++;
			}else{
				arbol->hijos[k].set_Hijos(arbol,false,n);
				
			}
		}
	}
	
	//LLenandoHijos(arbol->hijos[i]);
}
void LLenandoHijos(Nodo & hijo){
	
}
void Nodo::get_Hijos(){
	cout<<"Nodo "<<this->Data<<endl;
	for(int i=0;i<n_hijos;i++){
		
	}
}
int Nodo::cuantos_hijos(string nombre_nodo){
	cout<<"Cuantos hijos tiene el nodo "<<nombre_nodo<<": ";
	int cantidad;
	cin>>cantidad;
	return cantidad;
}
