#include "Nodo.h"
#include <iostream>
#include <cstring>
#include <bits/stdc++.h> 
#include <string>
using namespace std;
using namespace Espacio_Nodo;
bool TieneHijos();
Nodo::~Nodo(){
} 
void Nodo::set_data(string dato){
	this->Data=dato;
	
}
string Nodo::get_Data(){
	return this->Data;
}
void Nodo::setcostos_hijos(int n){
	for(int i=0;i<n;i++){
		cout<<"Ingrese Costo N°"<<i+1<<" : ";
		cin>>costos[i];
	}
}
void Nodo::set_n_costos_hijos(int n_costos_hijos){
	n_hijos=n_costos_hijos;
	hijos = new Nodo*[n_hijos];
}
int Nodo::get_cantidad_costos_hijos(){
	return this->n_hijos;
}
void Nodo::mostrar_costos(){
	for(int i=0;i<n_hijos;i++){
		cout<<"Costo :"<<costos[i]<<endl;
	}
}
void Nodo::set_Hijos(){
	for(int i=0;i<n_hijos;i++){
		string palabra = "";
		cout<<"Ingrese Nombre del Hijo N° "<<(i+1)<< "Del Nodo "<<Data<<": ";
		cin>>palabra;
		hijos[i]->set_data(palabra);
	}
}
void Nodo::get_Hijos(){
	cout<<"Nodo "<<this->Data<<endl;
	for(int i=0;i<n_hijos;i++){
		cout<<"Hijo  "<<hijos[i]->get_Data()<<endl;
	}
}

