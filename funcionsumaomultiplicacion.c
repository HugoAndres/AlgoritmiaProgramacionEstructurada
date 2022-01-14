//Tarea lo de imprimir centenas decenas unidades de un CHEQUESOTOTOE
#include<stdio.h>
int leeint();
void operacion(int,char,int);
char leechar();
int main()
{
	int a,b;
	char operador;
	printf("Teclea una operacion de suma o de multiplicacion.\n");
	operacion(leeint(),leechar(),leeint());
	return 0;
}

void operacion(int a,char operador,int b)
{
	switch(operador)
	{
		case '+':
			printf("%d\n",a+b);
			break;
		case '*':
			printf("%d\n",a*b);
			break;
		default:
			printf("Operacion no soportada en parche actual.\n");
	}
}

int leeint()
{
	int i;
	scanf("%d",&i);
	return i;	
}

char leechar()
{
	char c;
	c = getchar();
	while(c==' ')
	{
		c = getchar();
	}
	return c;
}
