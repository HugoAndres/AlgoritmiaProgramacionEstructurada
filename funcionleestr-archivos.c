//Definir una funcion que defina como argumento una cadena y devuelva el numero de palabras que contiene
#include<stdio.h>

void leestr(FILE *);

int main(int argc, char *argv[]){
	FILE *salida = fopen(*++argv,"at");
	printf("Escribe: ");
	leestr(salida);
	fclose(salida);
	return 0;
}

void leestr(FILE *pal){
	char c = getchar();
	
	if(c != '@'){
		fputc(c,pal);
		leestr(pal);
    }
}
