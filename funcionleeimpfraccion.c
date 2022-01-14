#include<stdio.h>

//tipos funciones
typedef int entero;

typedef struct enteros
{
	entero e;
	entero n;
	entero d;
}mitipo;

typedef mitipo fraccion;

//definicion de funciones
entero leeentero();
void impentero(entero);
mitipo leemitipo();
void impmitipo(mitipo);
fraccion leefracc();
void impfracc(fraccion);

//main
int main()
{	
	mitipo a;
	fraccion x;
	x=leefracc();
	impfracc(x);
	
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

mitipo leemitipo()
{
	mitipo a;
	a.e=leeentero();
	a.n=leeentero();
	a.d=leeentero();
	return a;
}

void impmitipo(mitipo a)
{
	impentero(a.e);
	impentero(a.n);
	impentero(a.d);
}

fraccion leefracc()
{
	return leemitipo();
}

void impfracc(fraccion f)
{
	impmitipo (f);
}




