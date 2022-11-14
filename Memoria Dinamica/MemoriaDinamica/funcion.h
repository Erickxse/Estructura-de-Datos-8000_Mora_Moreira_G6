/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNOS: Mora Erick - Moreira Erick
Fecha de Creacion: 07 de Noviembre del 2022
Fecha de Modificacion: 11 de Noviembre del 2022
Enunciado del Problema: Memoria Dinamica (Ejemplo de Clase)
Nivel: Tercer PAO - NRC: 8000*/
#include<iostream>
template<typename T> //declaramos plantilla

/**
     * @brief Declarar metodos ingresar, procesar, imprimir
*/
class funcion{

    public:

    /**
     * @brief Constructor default de la clase
     * @param  T t -> recibe el tamaño, T* ptr recibe un numero tipo puntero
     * @return funcion
    */
    funcion (int t); //constructores

    funcion ();

	void setT (T otroT);

	void setPtr (T* otroPtr);

	T getT ();

	T* getPtr();

    private:
        T*  ptr;
        T  t;
};
