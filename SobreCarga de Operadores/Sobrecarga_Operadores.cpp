/*UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
ALUMNO: Mora Erick - Moreira Erick
Fecha de Creacion: 02 de Noviembre del 2022
Fecha de Modificacion: 08 de Noviembre del 2022 
Enunciado del Problema: Sobrecarga de Operadores Ejercicio Clase
Nivel: Tercer PAO - NRC: 8000*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "Pareja.cpp"




using namespace std;

int main(int argc, char** argv) {
    Pareja A(150,  75);
    Pareja B(100, 15);
    Pareja C;
	cout << "A = " << A << endl;
    cout << "B = " << B << endl;
	cout << "........................." <<endl;
    C = A + B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
	C = A - B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
 	C = A * B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
 	C = A / B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
    C = A / B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
    ++C;
    cout << "C = " << C << endl;
    cout << "A == B " << ( (A==B)?"  True \n": "  False  \n");
    cout << "........................." << endl;
    C = A = B = ++C;
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
    // PRIMER DIA
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    C = A % B;
    cout << "A % B =" << C << endl;
    cout << "........................." << endl;

    //Segundo Dia (09/06/2020)
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << endl;
    cout << "A < B " << ( (A<B)?"  True \n": "  False  \n");
    cout << "........................." << endl;

    //Tercer Dia (10/06/2020)
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << endl;
    cout << "A < B " << ( (A>B)?"  True \n": "  False  \n");
    cout << "........................." << endl;

    //Cuarto Dia (11/06/2020)
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << endl;
    cout << "A < B " << ( (A>=B)?"  True \n": "  False  \n");
    cout << "........................." << endl;

    //Quinto Dia (12/06/2020)
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << endl;
    cout << "A < B " << ( (A<=B)?"  True \n": "  False  \n");
    cout << "........................." << endl;

    /**/
    cout << "A = " << A << "\n";
    cout << "C = " << C << "\n";
    C += A;
    cout << "C += A =" << C << endl;
    cout << "........................." << endl;
    cout << "B = " << B << "\n";
    cout << "C = " << C << "\n";
    C -= B;
    cout << "C -= B =" << C << endl;
    cout << "........................." << endl;
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    A *= B;
    cout << "A *= B =" << A << endl;
    cout << "........................." << endl;
    cout << "B = " << B << "\n";
    cout << "B = " << B << "\n";
    B /= B;
    cout << "B /= B =" << B << endl;
    cout << "........................." << endl;
    cout << "B = " << B << "\n";
    cout << "B = " << C << "\n";
    B %= B;
    cout << "B %= B =" << B << endl;
    cout << "........................." << endl;

    return 0;
}
