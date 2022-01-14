//CREACION DE NUEVAS FUNCIONES.

#include<stdio.h>

// tipos funciones
typedef int entero;

//definicion de funciones
entero leeentero();
void impentero(entero);

//main
int main()
{
	entero n;	
	n=leeentero();
	impentero(n);
	
	return 0;
}

//funciones

entero leeentero()
{
	entero a;
	scanf("%d",&a);
	
	return a;
}
void impentero(entero a)
{
	printf("%d",a);
}







