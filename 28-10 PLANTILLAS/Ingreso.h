#include<iostream>

class Iaplicativo{
	public:
		virtual ~Iaplicativo();
		virtual char *ingresarDatosEnteros(char const *msj) = 0;
		virtual char *ingresarDatosFlotantes(char const *msj) = 0;
		virtual char *ingresarDatosReales(char const *msj) = 0;
};