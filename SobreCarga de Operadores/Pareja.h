/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNO: Mora Erick - Moreira Erick
Fecha de Creacion: 02 de Noviembre del 2022
Fecha de Modificacion: 08 de Noviembre del 2022 
Enunciado del Problema: Sobrecarga de Operadores Ejercicio Clase
Nivel: Tercer PAO - NRC: 8000*/
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;
class Pareja {

private:
    int a, b;

public:
    Pareja() : a(0), b(0) {}
    Pareja(const int a,const int b) {
	this->a = a;
	this->b = b;
    }

    Pareja(const Pareja&);

    Pareja& operator + (const Pareja &p);
    Pareja& operator - (const Pareja &p);
    Pareja& operator * (const Pareja &p);
    Pareja& operator / (const Pareja &p);
    Pareja& operator = (const Pareja &p);
    Pareja& operator ++();
    bool  operator ==(const Pareja &p) const;

    friend ostream& operator << (ostream &o,const Pareja &p);
    friend istream& operator >> (istream &o, Pareja &p);

    /**
     * @brief %
     * @param p 
     * @return Pareja
    */
    Pareja& operator % (const Pareja &p);

    /**
     * @brief <
     * @param p 
     * @return bool
    */
    bool operator < (const Pareja &p);

    /**
     * @brief >
     * @param p 
     * @return bool
    */
    bool operator > (const Pareja &p);

    /**
     * @brief <=
     * @param p 
     * @return bool
    */
    bool operator <= (const Pareja &p);

    /**
     * @brief >=
     * @param p 
     * @return bool
    */
    bool operator >= (const Pareja &p);

    /**
     * @brief +=
     * @param p 
     * @return Pareja
    */
    Pareja& operator += (const Pareja& p);

    /**
     * @brief -=
     * @param p 
     * @return Pareja
    */
    Pareja& operator -= (const Pareja& p);

    /**
     * @brief *=
     * @param p 
     * @return Pareja
    */
    Pareja& operator *= (const Pareja& p);

    /**
     * @brief /=
     * @param p 
     * @return Pareja
    */
    Pareja& operator /= (const Pareja& p);

    /**
     * @brief %=
     * @param p 
     * @return Pareja
    */
    Pareja& operator %= (const Pareja& p);
};
