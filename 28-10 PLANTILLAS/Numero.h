#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

template <typename T>
class Numero{
	public: 
		void setNum(T n);
		T getNum() const;
	private:
		T num;	
};
