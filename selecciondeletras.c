//Pide tu nombre y selecciona unas letras.
#include<stdio.h>
void impal(char*);

int main(){
	
	char pal[30];

	printf("Hola como te llamas?\n");
	scanf("%s",pal);
	//imprime buenos dias + el nombre que ingresaste
	printf("Buenos dias "), impal(pal);
	//imprime las letras que estan en la posicion que se le pide
	printf("\n%c\t%c\t%c\n",pal[0],pal[2],pal[5]);
	//lepone una X en la posicion que le dice
	printf("%s\n",pal);
	
	return 0;

}

	void impal(char*p){
	printf("%s",p);
	p[3]='X';
}

