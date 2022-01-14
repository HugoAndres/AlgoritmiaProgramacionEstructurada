#include<stdio.h>
#include"mcmmcd.h"
#include"fracciones.h"

void hazsuma();
void hazresta();
void hazmultiplicacion();
void hazdivision();

int main(){
	
	printf("---CALCULADORA DE FRACCIONES---\n\n");
	hazsuma();
	hazresta();
	hazmultiplicacion();
	hazdivision();	
	
	return 0;
}


void hazsuma(){
printf("-----SUMA DE FRACCIONES-----\n");
printf("Hola, por favor ingresa las dos fracciones que desea sumar de la siguiente forma:\n");
printf("1. Ingresa el entero (Si no hay entero ingresa un 0).\n");
printf("2. Ingresa el numerador.\n");
printf("3. Ingresa el denominador\n\n");
impfracc(sumafraccion(leefracc(), leefracc()));
printf("\n\n Da un ENTER para continuar.\n");
fflush(stdin); 
getchar();
}

void hazresta(){
printf("-----RESTA DE FRACCIONES-----\n");
printf("Hola, por favor ingresa las dos fracciones que desea restar de la siguiente forma:\n");
printf("1. Ingresa el entero (Si no hay entero ingresa un 0).\n");
printf("2. Ingresa el numerador.\n");
printf("3. Ingresa el denominador\n\n");
impfracc(restafraccion(leefracc(), leefracc()));
printf("\n\n Da un ENTER para continuar.\n");
fflush(stdin); 
getchar();
}

void hazmultiplicacion(){
printf("-----MULTIPLICACION DE FRACCIONES-----\n");
printf("Hola, por favor ingresa las dos fracciones que desea multiplicar de la siguiente forma:\n");
printf("1. Ingresa el entero (Si no hay entero ingresa un 0).\n");
printf("2. Ingresa el numerador.\n");
printf("3. Ingresa el denominador\n\n");
impfracc(multiplicacionfraccion(leefracc(), leefracc()));
printf("\n\n Da un ENTER para continuar.\n");
fflush(stdin); 
getchar();
}

void hazdivision(){
printf("----DIVISION DE FRACCIONES-----\n");
printf("Hola, por favor ingresa las dos fracciones que desea dividir de la siguiente forma:\n");
printf("1. Ingresa el entero (Si no hay entero ingresa un 0).\n");
printf("2. Ingresa el numerador.\n");
printf("3. Ingresa el denominador\n\n");
impfracc(divisionfraccion(leefracc(), leefracc()));
printf("\n\n Da un ENTER para continuar.\n");
fflush(stdin); 
getchar();
}
