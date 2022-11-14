/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNO: Mora Erick - Moreira Erick
Fecha de Creacion: 11 de Noviembre del 2022
Fecha de Modificacion: 11 de Noviembre del 2022
Enunciado del Problema: Recursividad (Suma de Matrices)
Nivel: Tercer PAO - NRC: 8000*/

#include "Sumar.h"
#include <time.h>
using namespace std;


void sumaRecursivaMatrices( int **mat1, int **mat2, int **matR, int f, int c){
	if ((f>=0) && (c>=0)){
		*(*(matR+f)+c)=*(*(mat1+f)+c) + *(*(mat2 +f)+c);
		sumaRecursivaMatrices( mat1,mat2,matR,f-1,c);
		sumaRecursivaMatrices( mat1,mat2,matR,f,c-1);
	}
}

void multiplicacionMatrices( int **mat1, int **mat2, int **matR, int f, int c){
    if ((f>=0) && (c>=0)){
        *(*(matR+f)+c)=*(*(mat1+f)+c) * *(*(mat2 +f)+c);
                        //*(*(mat1-f)+c) * *(*(mat2 +f)-c) + *(*(mat1-f)+c) * *(*(mat2 +f)-c));
        multiplicacionMatrices( mat1,mat2,matR,f-1,c);
        multiplicacionMatrices( mat1,mat2,matR,f,c-1);
    }
}

void muestraMatriz1( int **mat1){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",*(*(mat1+i)+j));
			printf("%*s",j+5,"");
		}
		cout<<"\n";
	}
}

void muestraMatriz2(int **mat2){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",*(*(mat2+i)+j));
			printf("%*s",j+5,"");
		}
		cout<<"\n";
	}
}

void muestraMatrizR( int **matR){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",*(*(matR+i)+j));
			printf("%*s",j+5,"");
		}
		cout<<"\n";
	}
}



