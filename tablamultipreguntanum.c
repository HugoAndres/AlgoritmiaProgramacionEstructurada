//Tablas de multiplicar (Pregunta hasta que numero desea)
#include<stdio.h>

void impintmat(int a[][50], int, int);

int main(){
    
    int a[50][50],i,j,n;
    
    printf("Hasta que numero la tabla de multiplicar?:");
    scanf("%d",&n);
    
    for(j=0;j<n;j++)
       for(i=0;i<n;i++)
         a[j][i]=(j+1)*(i+1);    
 
    impintmat(a,n,n);
  
    return 0;
    
    }
    
void impintmat(int a[][50], int r, int c){
    int j, i;

    for(j=0;j<r;j++){
       for(i=0;i<c;i++)
         printf("%d\t",a[j][i]);
       printf("\n");
    }
}    



