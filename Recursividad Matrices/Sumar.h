/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNO: Mora Erick - Moreira Erick
Fecha de Creacion: 11 de Noviembre del 2022
Fecha de Modificacion: 11 de Noviembre del 2022
Enunciado del Problema: Recursividad (Suma de Matrices)
Nivel: Tercer PAO - NRC: 8000*/

#include <iostream>


class Isumar{

public:
	virtual ~Isumar();
	virtual void sumaRecursivaMatrices( int **, int **, int **, int, int)=0;
    virtual void multiplicacionMatrices( int **, int **, int **, int, int)=0;
	virtual void muestraMatriz1( int **)=0;
	virtual void muestraMatriz2( int **)=0;
	virtual void muestraMatrizR( int **)=0;
};
