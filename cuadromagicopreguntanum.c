//Cuadrado magico (Pide el numero)
#include<stdio.h>

void inicializa(int m[][40],int);
void cuadmag(int m[][40], int);
void impintmat(int m[][40], int, int);


int main(){
	
	int m[40][40],n;
	
	printf("Ingrese el numero del cuadrado magico(NOTA: debe ser mayor o igual a 3 e impar): ");
	scanf("%d",&n);
	
	cuadmag(m,n);
	impintmat(m,n,n);
	
	return 0;
}

void inicializa(int m[][40],int n){
	int i,j;
	
	for(i=0;i<n;i++)
	   for(j=0;j<n;j++)
	      m[i][j]=0;
}

void cuadmag(int m[][40], int n){
     int r=0,c=n/2,i;
	
	 inicializa(m,n);	
	 
	 for(i=1;i<=(n*n);i++){
	 	m[r][c]=i;
		r--;c++;
		if (r<0)
		  if (c<n) r=n-1;
		  else{r=1;c=n-1;}
		else if(c>=n) c=0;
		     else if(m[r][c]){r=r+2;c=c-1;}
	 }
}

void impintmat(int m[][40], int r,int c){
    int j,i;

    for(i=0;i<r;i++){
       for(j=0;j<c;j++)
         printf("%d\t",m[i][j]);
       printf("\n\n");
    }
}
