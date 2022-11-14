/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNO: Mora Erick - Moreira Erick
Fecha de Creacion: 11 de Noviembre del 2022
Fecha de Modificacion: 11 de Noviembre del 2022
Enunciado del Problema: Recursividad (Suma de Matrices)
Nivel: Tercer PAO - NRC: 8000*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3
#include"Sumar.cpp"
using namespace std;


int main(int argc, char** argv) {
	int ** mat1 = nullptr;
	int ** mat2 = nullptr; //encerar
	int ** matR = nullptr;

	mat1=(int **)malloc (3*sizeof(int*));
	mat2=(int **)malloc (3*sizeof(int*)); //reservar espacio en memoria
	matR=(int **)malloc (3*sizeof(int*));

	for(int j=0;j<3;j++){
		*(mat1+j)=(int*)malloc(3*sizeof(int*));
		*(mat2+j)=(int*)malloc(3*sizeof(int*));
		*(matR+j)=(int*)malloc(3*sizeof(int*));
	}
	srand (time(NULL));
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			//*(*(mat1+i)+j)=(int)((rand()/32768.1)*1000);
			*(*(mat1+i)+j)=(int)((rand()/32768.1)*1000);
			*(*(mat2+i)+j)=(int)((rand()/32768.1)*1000);
			*(*(matR+i)+j)=0;
		}
	}

	cout<<"\n La matriz 1 es :\n";
	muestraMatriz1(mat1);

	cout<<"\n";
	cout<<"\n La matriz 2 es :\n";
	muestraMatriz2(mat2);

	cout<<"\n";
	cout<<"\n La matriz R suma es :\n";

	sumaRecursivaMatrices(mat1,mat2,matR, 2, 2);
	muestraMatrizR(matR);

	cout<<"\n";
	cout<<"\n La matriz R multiplicacion es :\n";
    multiplicacionMatrices(mat1,mat2,matR,2,2);
    muestraMatrizR(matR);

	return 0;
}
