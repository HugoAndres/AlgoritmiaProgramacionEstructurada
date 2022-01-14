#include<stdio.h>
char leechar();
int leeint();
void imprascii(char);
void impchar(int i);

int main()
{
	printf("Ingresa un caracter para imprimir su ascii.\n");
	imprascii(leechar());
	
	printf("Ingresa un numero ascii para imprimir su caracter.\n");
	impchar(leeint());
	return 0;
}

char leechar()
{
	char c;
	c = getchar();
	return c;
}

int leeint()
{
	int i;
	scanf("%d",&i);
	return i;
}
void impchar(int i)
{
	printf("%c",i);
}

void imprascii(char c)
{
	printf("%d\n",c);
}
