//FUNCION ACKERMAN
#include<stdio.h>

int a(int,int);


int main(){

	int m,n;	
	printf("Introduce dos digitos:\n");
	scanf("%d%d",&m,&n);
	printf("a(%d,%d)=%d.\n",m,n,a(m,n));
		
    return 0;
}

int a(int m, int n){

    if(m==0)
	return n+1;
    else  if  ((m>0)&&(n==0))
	      return a(m-1,1);
	  else	
               return a(m-1,a(m,n-1));
}

