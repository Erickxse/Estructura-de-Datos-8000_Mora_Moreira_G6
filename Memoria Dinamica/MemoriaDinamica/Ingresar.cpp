/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNOS: Mora Erick - Moreira Erick
Fecha de Creacion: 07 de Noviembre del 2022
Fecha de Modificacion: 11 de Noviembre del 2022
Enunciado del Problema: Memoria Dinamica (Ejemplo de Clase)
Nivel: Tercer PAO - NRC: 8000*/
#include<iostream>
#include"Ingresar.h"
//#include "funcion.h"

template<typename T>
void Ingresar <T> ::ingresar(T *p,T t){ //saca plantilla
    //int i=0; //inicializa variable iterativa
    for(int i=0;i<t;i++) //for estructural
    {
        printf("\nIngrese el valor: "); //pide el valor al usuario
        scanf("%d",*(&p)+i); //agarra el valor
    }
}



