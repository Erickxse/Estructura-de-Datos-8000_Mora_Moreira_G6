/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNOS: Mora Erick - Moreira Erick
Fecha de Creacion: 07 de Noviembre del 2022
Fecha de Modificacion: 11 de Noviembre del 2022
Enunciado del Problema: Memoria Dinamica (Ejemplo de Clase)
Nivel: Tercer PAO - NRC: 8000*/
#include<iostream>
#include "funcion.h"

template<typename T>
funcion<T>::funcion(int t){
	this->t=t;
	this->ptr = (T*)calloc(t, sizeof(T*));
}

template<typename T>
funcion<T>::funcion(){
}

template<typename T>
void funcion<T>::setT (T otroT){
		t=otroT;
}

template<typename T>
void funcion<T>::setPtr (T* otroPtr){
		ptr=otroPtr;
	}

template<typename T>
	T funcion<T>:: getT (){
		return t;
	}

template<typename T>
	T*funcion<T>::  getPtr(){
		return *ptr; //preguntar si aqui va el puntero como retorno
	}
