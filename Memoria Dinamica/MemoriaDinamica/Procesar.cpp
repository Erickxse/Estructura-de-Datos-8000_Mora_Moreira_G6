/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNOS: Mora Erick - Moreira Erick
Fecha de Creacion: 07 de Noviembre del 2022
Fecha de Modificacion: 11 de Noviembre del 2022
Enunciado del Problema: Memoria Dinamica (Ejemplo de Clase)
Nivel: Tercer PAO - NRC: 8000*/
#include<iostream>
#include "Procesar.h"

template<typename T>
void Procesar <T> ::procesar(T *p,T t){
    int e=0; //inicializando variable de e
    printf("\nIngrese el escalar:"); //pide al escalar para multiplicar
    scanf("%d",&e); //se ingresa y escanea el escalar

    for(int i=0;i<t;i++)  //for estructural
    {
        *p=(*(&(*p)))*e; //multiplica el valor ptr con el escalar
        *(p++); //navega por la direccion del puntero extrayendo los valores
    }
}
