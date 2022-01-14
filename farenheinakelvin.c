//funcion que reciba un valor y 
#include<stdio.h>

float convercion(int x);

  int main(){
  	int i;
  	float x,y;
  	
  	printf("Intoduzca los grados en Farenhein para transformarlo a Kelvin: ");
  	scanf("%f",&x);
  	
  	printf("introduzca el segundo intervalo: ");
  	scanf("%f",&y);
  	
  	convercion(x);
  	
  	for(i=0;i<y;i++){
  	  printf("%.2f , %.2f\n",x,convercion(x));
  	x++;
  	  
  }
  	
  	return 0;
  }
  
  
  float convercion(int x){
	float aux;
	
  	aux = (x+454.67)*(5.0/9.0);
  	
  	return aux; 
  }
  
