//SERIE FIBONACCI
#include<stdio.h>

int fib(int);

int main(){
	int n;
	printf("introduce un digito:\n");
	scanf ("%d",&n);
	printf("fib(%d)=%d.\n",n,fib(n));

	return 0;
}

int fib(int n){					
  if(n==0)						
	return 0;					
  else if (n==1)				
		return 1;				
       else
		return fib(n-2)+fib(n-1);	
}
