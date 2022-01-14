#include<stdio.h>

void inicializa(int a[][10],int , int );
void leemat(int a[][10], int , int );
void impmat(int a[][10], int ,int );

int main(){
	
	int a[10][10],m,n;
	
	printf("\n Cuantos renglones tiene la matriz?: ");
    scanf("%d",&m);
    printf("\n Cuantas columnas tiene la matriz?: ");
    scanf("%d",&n);
	
	inicializa (a,m,n);
	leemat(a,m,n);
	impmat(a,m,n);
	
	return 0;
	
}

void inicializa(int a[][10],int m, int n){
	int i,j;
	
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	      a[i][j]=0;
}
	
void leemat(int a[][10], int m, int n){
	int i,j;
	 
	printf("\n\t*Introduce la matriz:\n");
    for(i=0;i<m;i++){  
        for(j=0;j<n;j++){
        printf("[%d][%d]= ",i+1,j+1);
        scanf("%d", &a[i][j]);
		}
	}
}     

void impmat(int a[][10], int m,int n){
    int j,i;

	printf("\n--------------------------------------------\n");
	printf("La matriz es: \n\n");
    for(i=0;i<m;i++){
       for(j=0;j<n;j++)
       printf("%d\t",a[i][j]);
       printf("\n\n");
    }
}   
