/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNOS: Mora Erick - Moreira Erick
Fecha de Creacion: 30 de Octubre del 2022
Fecha de Modificacion: 08 de Noviembre del 2022 
Enunciado del Problema: Templates Ejercicio de Clase
Nivel: Tercer PAO - NRC: 8000*/

#include <iostream>

template<typename T> //declarar plantilla

class Numero{

	public:
		void setNum(T n);
		T getNum() const;

		private:
			T num;
};
