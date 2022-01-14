//FUNCION QUE LEE UNA CADENA Y DESPUES TE PREGUNTA CUANTAS VECES REPETIRLA

#include<stdio.h>

void leestr(char*);
void impnmsg(char*,int );
void impnmsg2(char*,int);
void impnmsg3(char*,int);
void numerosorden(int);
void numerosinversa(int);

int main(){
	
  int n;
  char pal[1024];
  
printf("Escribe algo: \n");
leestr(pal);
printf("\nCuantas veces deceas repetir la cadena?\t");
scanf("%d",&n);
printf("\n-----------------------\n");
impnmsg(pal,n);
printf("\n-----------------------\n");
impnmsg2(pal,n);
printf("\n-----------------------\n");
impnmsg3(pal,n);
printf("\n-----------------------\n");
numerosinversa(n);
printf("\n-----------------------\n");
numerosorden(n);
return 0;
}

void leestr(char*pal){
	char c;
		if((c=getchar())!='#'){
		pal[0]=c;
		leestr(pal+1);
		}
}  

void impnmsg(char*pal,int n){
	if(n){
	printf("%s\n",pal);
	impnmsg(pal,n-1);
	}
}

void impnmsg2(char*pal,int n){
	if(n){
	impnmsg2(pal,n-1);
	printf("%d.-%s\n",n,pal);
	}
}
	
void impnmsg3(char*pal,int n){
	if(n){
	printf("%d.-%s\n",n,pal);
	impnmsg3(pal,n-1);
	}
}
	
void numerosorden(int n){
	if(n){
	printf("%d\n",n);
	numerosorden(n-1);
	}
}

void numerosinversa(int n){
	if(n){
	numerosinversa(n-1);
	printf("%d\n",n);
	}
}  
