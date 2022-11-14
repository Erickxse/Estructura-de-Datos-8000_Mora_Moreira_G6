/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNOS: Mora Erick - Moreira Erick
Fecha de Creacion: 07 de Noviembre del 2022
Fecha de Modificacion: 11 de Noviembre del 2022
Enunciado del Problema: Memoria Dinamica (Ejemplo de Clase)
Nivel: Tercer PAO - NRC: 8000*/
#include<iostream>
#include "Imp1.h"

template<typename T>

void Imp1 <T> ::imprimir(T *p,T t){
    //int i=0; //inicializa variable iterativa
    for(int i=0;i<t;i++) //for estructural
    {
        printf("\n\nValores ingresados: "); //pide valores a ingrear
        printf("%d",*(&(*p))); //Que significa esto preguntar al profe procesa variables a ingresar
        printf("\n");
        *(p++);//navega por la direccion del puntero extrayendo los valores
    }
}
