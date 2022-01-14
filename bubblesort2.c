//Metodo Burbuja 

#include<stdio.h>
#include<conio.h>
void lee(int [5]);
void bubb(int [5]);

int main(){
	int array[5];
	lee(array);
    bubb(array);
	
	getch();
	return 0;
}
void lee(int array[5]){
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&array[i]);
	}
}
void bubb(int array[5]){
	int i,j,aux;
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(array[j] > array[j+1]){
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	
	for(i=0;i<5;i++){
		printf("%i ",array[i]);
	}		
}
