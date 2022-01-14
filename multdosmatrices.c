//HUPQ Multiplicacion de 2 matrices

#include<stdio.h>

void inicializa(int c[][10],int , int );
void leemat(int a[][10], int , int );
void leemat2(int b[][10], int , int );
void multimat(int a[][10],int b[][10], int c[][10],int , int , int );
void impmat(int c[][10], int ,int );

int main(){
	
	int a[10][10],b[10][10],c[10][10];
	int m,n,q;
	
	printf("\n Cuantos renglones tiene la matriz A?: ");
    scanf("%d",&m);
    printf("\n Cuantas columnas tiene la matriz A y cuantos renglones tiene la matriz B?: ");
	scanf("%d",&n);
    printf("\n Cuantas columnas tiene la matriz B?: ");
    scanf("%d",&q);
	
	inicializa (c,m,q);
	leemat(a,m,n);
	leemat2(b,n,q);
	multimat(a,b,c,m,n,q);
	impmat(c,m,q);
	
	
	return 0;
	
}

void inicializa(int c[][10],int m, int q){
	int i,j;
	
	for(i=0;i<m;i++)
	   for(j=0;j<q;j++)
	      c[i][j]=0;
}
	
void leemat(int a[][10], int m, int n){
	int i,j;
	 
	printf("\n\t*Introduce la matriz A:\n");
    for(i=0;i<m;i++){  
        for(j=0;j<n;j++){
        printf("[%d][%d]= ",i+1,j+1);
        scanf("%d", &a[i][j]);
		}
	}
}  

void leemat2(int b[][10], int n, int q){
	int i,j;
	 
	printf("\n\t*Introduce la matriz B:\n");
    for(i=0;i<n;i++){  
        for(j=0;j<q;j++){
        printf("[%d][%d]= ",i+1,j+1);
        scanf("%d", &b[i][j]);
		}
	}
}          

void multimat(int a[][10],int b[][10], int c[][10],int m, int n, int q){
	int i,j,k;
	
	for (i=0;i<m;i++)
	    for (j=0;j<q;j++)
	        for (k=0;k<n;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];	           
}

void impmat(int c[][10], int m,int q){
    int j,i;

	printf("\n--------------------------------------------\n");
	printf("La multiplicacion de estas dos matrices es: \n\n");
    for(i=0;i<m;i++){
       for(j=0;j<q;j++)
       printf("%d\t",c[i][j]);
       printf("\n\n");
    }
}    

  
