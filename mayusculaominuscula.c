#include<stdio.h>

void vermayus(char);

int main()
{
	vermayus(getchar());
}

void vermayus(char c)
{
	int ascii = c;
	if(65<=ascii && ascii <= 90)
		printf("La letra %c es mayuscula.\n",c);
	else if(97<=ascii && ascii <= 122)
		printf("La letra %c es minuscula.\n",c);
	else
		printf("El caracter no es una letra.\n");
}
