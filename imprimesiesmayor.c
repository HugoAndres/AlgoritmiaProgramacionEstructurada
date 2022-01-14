//Si es mayor se imprime en la pantalla, si no, no hace nada.
#include<stdio.h>
	int main(){
	
	int a,b;
	printf("Introduce dos valores de tipo entero: \n");
	scanf("%d%d",&a,&b);
		if (a>b)
			printf("\n %d es mayor que %d\n", a,b);
	
	return 0;
}
