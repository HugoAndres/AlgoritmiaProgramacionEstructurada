#include<stdio.h>
void asteriscosSimples(int);
void asteriscosCuadro(int);
void asteriscosTriangulo(int);
void imprimirEspacios(int);
void imprcharn(char, int);
void impPiramide(int, char);
int leeInt();

int main()
{
	printf("¿Cuantos asteriscos quieres imprimir?\n");
	impPiramide(leeInt(),'*');
	return 0;
}

void asteriscosSimples(int n)
{
	int i;
	for(i = 0; i <= n; ++i)
	{
		printf("*");
	}
}

void impcharn(char c,int n)
{
	int i;
	for(i = 0; i <= n; ++i)
	{
		putchar(c);
	}
}

void asteriscosCuadro(int n)
{
	int i;
	for(i = 0; i <= n; ++i)
	{
		asteriscosSimples(n);
		printf("\n");
	}
}

void asteriscosTriangulo(int n)
{
	int i;
	for(i = 0; i <= n; ++i)
	{
		asteriscosSimples(i);
		printf("\n");
	}
	for(i = n - 1; i >= 0; --i)
	{
		asteriscosSimples(i);
		printf("\n");
	}
}

void impPiramide(int n, char c)
{
	int i;
	for(i = 0; i <= n; i++)
	{
		impcharn(' ', n - (i-1));
		impcharn(c, i + i - 1);
		printf("\n");
	}
}

int leeInt()
{
	int in;
	scanf("%d",&in);
	return in;
}
