//Tabla de multiplicar hasta el 5
#include<stdio.h>

void impintmat(int a[][10], int, int);

int main(){
    
    int a[10][10],i,j;

    for(j=0;j<10;j++)
       for(i=0;i<10;i++)
         a[j][i]=(j+1)*(i+1);    
 
    impintmat(a,10,10);
  
    return 0;
    
    }
    
void impintmat(int a[][10], int r, int c){
    int j, i;

    for(j=0;j<r;j++){
       for(i=0;i<c;i++)
         printf("%d\t",a[j][i]);
       printf("\n");
    }
}    



