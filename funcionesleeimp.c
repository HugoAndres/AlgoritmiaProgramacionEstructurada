//FUNCION LEER E IMPRIMIR DATOS.

#include<stdio.h>

void leeint(int*,int);
void impint(int*, int);

int main(){
  int datos[100],n=5;
  leeint(datos,n);
  printf("\n\n");
  impint(datos,n);
  
  return 0;
 }
 
void leeint(int*datos, int n){
	int i=0;
		while(i<n){
		scanf("%d",&datos[i++]);
		}
}

void impint(int*datos, int n){
	int i=0;
		while(i<n){
		printf("%d\n",datos[i++]);
		}
}



