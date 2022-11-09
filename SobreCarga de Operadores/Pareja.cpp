/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNO: Mora Erick - Moreira Erick
Fecha de Creacion: 02 de Noviembre del 2022
Fecha de Modificacion: 08 de Noviembre del 2022 
Enunciado del Problema: Sobrecarga de Operadores Ejercicio Clase
Nivel: Tercer PAO - NRC: 8000*/
#include <iostream>
#include "Pareja.h"

// implementacion de los operadores para la clase Pareja
//....................................
Pareja::Pareja(const Pareja &p)
{
    *this=p;
}
//....................................
Pareja& Pareja::operator + (const Pareja &p)
{
    this->a += p.a;
    this->b += p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator - (const Pareja &p)
{
    this->a -= p.a;
    this->b -= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator * (const Pareja &p)
{
    this->a *= p.a;
    this->b *= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator / (const Pareja &p)
{
    if (p.a != 0) this->a /= p.a;
    if (p.b != 0) this->b /= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator = (const Pareja &p)
{
    if(this!=&p){ //Comprueba que no se esté intentanod igualar un objeto a sí mismo
        if (p.a != 0) this->a = p.a;
        if (p.b != 0) this->b = p.b;
    }
    return *this;
}

//....................................
Pareja& Pareja::operator ++ ()
{
    this->a ++;
    this->b ++;
    return *this;
}

//....................................
bool Pareja::operator == (const Pareja &p) const
{
    return this->a == p.a && this->b == p.b;
}

// implemetaci¢n de operadores no miembros
ostream& operator << (ostream &o,const Pareja &p)
{
    o << "(" << p.a << ", " << p.b << ")";
    return o;
}

istream& operator >> (istream &i, Pareja &p)
{
    cout << "Introducir valores para ( a, b) :";
    i >> p.a >> p.b;
    i.ignore();
    return i;
}


/**
 * @brief %
 * @param p 
 * @return Pareja
*/
Pareja& Pareja::operator % (const Pareja &p)
{
    if (p.a != 0) this->a %= p.a;
    if (p.b != 0) this->b %= p.b;
    return *this;
}

/**
 * @brief <
 * @param p 
 * @return bool
*/
bool Pareja::operator < (const Pareja &p)
{
    return this->a < p.a && this->b < p.b;
}


/**
 * @brief >
 * @param p 
 * @return bool
*/
bool Pareja::operator > (const Pareja &p)
{
    return this->a > p.a && this->b > p.b;
}

/**
 * @brief <=
 * @param p 
 * @return bool
*/
bool Pareja::operator <= (const Pareja &p)
{
    return this->a <= p.a && this->b <= p.b;
}

/**
 * @brief >=
 * @param p 
 * @return bool
*/
bool Pareja::operator >= (const Pareja &p)
{
    return this->a >= p.a && this->b >= p.b;
}

/**
 * @brief +=
 * @param p 
 * @return Pareja
*/
Pareja& Pareja::operator+=(const Pareja& p){
    this->a += p.a;
    this->b += p.b;
    return *this;
}

/**
 * @brief -=
 * @param p 
 * @return Pareja
*/
Pareja& Pareja::operator-=(const Pareja& p){
    this->a -= p.a;
    this->b -= p.b;
    return *this;
}

/**
 * @brief *=
 * @param p 
 * @return Pareja
*/
Pareja& Pareja::operator*=(const Pareja& p){
    this->a *= p.a;
    this->b *= p.b;
    return *this;
}

/**
 * @brief /=
 * @param p 
 * @return Pareja
*/
Pareja& Pareja::operator/=(const Pareja& p){
    this->a /= p.a;
    this->b /= p.b;
    return *this;
}

/**
 * @brief %=
 * @param p 
 * @return Pareja
*/
Pareja& Pareja::operator%=(const Pareja& p){
    this->a %= p.a;
    this->b %= p.b;
    return *this;
}

