#include<stdio.h>

//tipos definiciones
typedef int entero;


typedef struct enteros{
	entero e;
	entero n;
	entero d;
}mitipo;

//definicion de funciones
void impentero(entero);
void impmitipo();
mitipo leemitipo();

//Main
int main(){
	
	mitipo a;
	
	a=leemitipo();
	impmitipo(a);
	
	return 0;
}

//funciones
entero leeentero()
{
	entero a;
	scanf("%d",&a);
	
	return a;
}

mitipo leemitipo()
{
	mitipo a;
	
	a.e=leeentero();
	a.n=leeentero();
	a.d=leeentero();
	
	return a;
}

void impentero(entero a)
{
	printf("%d",a);
}

void impmitipo(mitipo a)
{
	impentero(a.e);
	impentero(a.n);
	impentero(a.d);
}




