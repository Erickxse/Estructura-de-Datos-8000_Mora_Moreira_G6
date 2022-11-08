/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNOS: Mora Erick - Moreira Erick
Fecha de Creacion: 30 de Octubre del 2022
Fecha de Modificacion: 08 de Noviembre del 2022 
Enunciado del Problema: Templates Ejercicio de Clase
Nivel: Tercer PAO - NRC: 8000*/

#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include<conio.h>
#include "Numero.cpp"


using namespace std;

int main(int argc, char** argv){
	
	Numero <int> entero;
	Numero <float> flotante;
	Numero <double> real;
	entero.setNum(5);
	flotante.setNum(5.32f);
	real.setNum(3.456789);
	std::cout<<"\nNumero entero "<<entero.getNum()<<std::endl;
	std::cout<<"\nNumero flotante "<<flotante.getNum()<<"f"<<std::endl;
	std::cout<<"\nNumero real "<<real.getNum()<<std::endl;
	return 0;
}
