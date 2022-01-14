//FUNCION QUE ESCRIBES ALGO Y DESPUES TE PREGUNTA CUANTAS VECES DESEAS REPETIRLA

#include<stdio.h>

void leestr(char*);
void impnmsgi(char*,int );

int main(){
	int n;
	char pal[1024];

	printf("Escribe algo y para finaizar introduce #: \n\n");
	leestr(pal);
	printf("\nCuantas veces deseas repetir la cadena?\t");
	scanf("%d",&n);
	impnmsgi(pal,n);

	return 0;
}

void leestr(char*pal){
	char c;
		if((c=getchar())!='#'){
			pal[0]=c;
			leestr(pal+1);
		}
}  

void impnmsgi(char*pal,int n){
	while(n>0){
		printf("%d.- %s\n",n,pal);
		n--;
	}
}
