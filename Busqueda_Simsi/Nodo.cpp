#include "Nodo.h"
#include <iostream>
#include <cstring>
#include <bits/stdc++.h> 
using namespace std;
using namespace Espacio_Nodo;
Nodo::~Nodo(){
	
}

void Nodo::set_data(string dato){
	this->Data=dato;
	
}
void Nodo::setcostos_hijos(int n){
	for(int i=0;i<n;i++){
		cout<<"Ingrese Costo N°"<<i+1<<" : ";
		cin>>costos[i];
	}
}
void Nodo::set_n_costos(int n_costos_nuevos){
	n_costos=n_costos_nuevos;
}
int Nodo::get_cantidad_costos(){
	return this->n_costos;
}
void Nodo::mostrar_costos(){
	for(int i=0;i<n_costos;i++){
		cout<<"Costo :"<<costos[i]<<endl;
	}
}
void Nodo::set_Hijos(){
	for(int i=0;i<n_costos;i++){
		string palabra = "A";
		hijos[i]->set_data(palabra + to_string(i+1));
		
	}
}
void Nodo::get_Hijos(){
	cout<<"Nodo "<<this->Data<<endl;
	for(int i=0;i<n_costos;i++){
		cout<<"Hijo  "<<hijos[i]->Data<<endl;
	}
}
