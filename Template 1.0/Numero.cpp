/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNOS: Mora Erick - Moreira Erick
Fecha de Creacion: 30 de Octubre del 2022
Fecha de Modificacion: 08 de Noviembre del 2022 
Enunciado del Problema: Templates Ejercicio de Clase
Nivel: Tercer PAO - NRC: 8000*/

#include <iostream>
#include "Numero.h"



template <typename T>
void Numero<T>::setNum(T n1){
	this->num=n1;
}


template <typename T>
T Numero<T>::getNum()const{
	return this->num;
}
