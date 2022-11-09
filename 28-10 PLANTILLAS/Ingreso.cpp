#include"Ingreso.h"

//Función ingreso de datos
char *ingresarDatosEnteros(char const *msj){
	char *dato=new char[10];
	char c;
	int i=0;
	printf("%s\n",msj);
	while((c=getch())!=13){
		if(c>='0'&& c<='9'){
			printf("%c",c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';
	return dato;
}


