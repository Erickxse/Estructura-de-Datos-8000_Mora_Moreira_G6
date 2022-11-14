/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNOS: Mora Erick - Moreira Erick
Fecha de Creacion: 07 de Noviembre del 2022
Fecha de Modificacion: 11 de Noviembre del 2022
Enunciado del Problema: Memoria Dinamica (Ejemplo de Clase)
Nivel: Tercer PAO - NRC: 8000*/
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include"Funcion.cpp"
#include"Ingresar.cpp"
#include"Imp1.cpp"
#include"Procesar.cpp"

using namespace std;


int main(){

    int tam=0; //incializo variable tam
   // int *ptr=new int[10];
   //if(*ptr=realloc(*ptr,sizeof(int))
    int *ptr=(int*)malloc(4*sizeof(int)); //inicializo el puntero con malloc

    cout<<"\nIngrese el tamano: "; //Pedimos al usuario que ingrese el tamaño
    cin>>tam; //se extrae el tamaño o valor ingresado
    funcion<int> val; //Instanciamos el objeto
    Ingresar<int> ing;
    Imp1<int> imp;
    Procesar<int> proc;
    ing.ingresar(ptr,tam);
    imp.imprimir(ptr, tam);
    proc.procesar(ptr, tam);
    imp.imprimir(ptr, tam);
    getch();
}
