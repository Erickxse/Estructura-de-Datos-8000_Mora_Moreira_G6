/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNO: Mora Erick - Moreira Erick
Fecha de Creacion: 11 de Noviembre del 2022
Fecha de Modificacion: 13 de Noviembre del 2022
Enunciado del Problema: Recursividad (Suma de Matrices)
Nivel: Tercer PAO - NRC: 8000*/

#include "Multiplicar.h"
#include <time.h>

using namespace std;

void multiplicacionMatrices( int **, int **, int **, int, int){
    if ((f>=0) && (c>=0)){
        *(*(matR+f)+c)=(*(*(mat1+f)+c) * *(*(mat2 +f)+c) + *(*(mat1-f)+c) * *(*(mat2 +f)-c) + *(*(mat1-f)+c) * *(*(mat2 +f)-c));
        multiplicacionMatrices( mat1,mat2,matR,f-1,c);
        multiplicacionMatrices( mat1,mat2,matR,f,c-1);
    }
}
