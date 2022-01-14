//lee texto del teclado y lo imprime en el archivo

#include<stdio.h>

int main()
{ int i;
	FILE *aa = fopen("numeros.txt", "a");
	char pal[100];
	for(
	i=0;i < 100; i++)
	{
		fscanf(stdin, "%s", pal);
		fprintf(aa, "%s\n", pal);
	}
	fclose(aa);
	return 0;
}
