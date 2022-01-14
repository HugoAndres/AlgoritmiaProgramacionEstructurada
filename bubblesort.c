//METODO BURBUJA
#include<stdio.h>

void leeint(int*,int);
void impint(int*,int);
void bubblesort(int*,int);

int main(){
    int a[100];
    int n;
   
    printf("Cuantos elementos quieres leer:");
    scanf("%d",&n);
    leeint(a,n);
    bubblesort(a,n);
    impint(a,n);
    
    return 0;
}

void leeint(int*a,int n){
    int i=0;
    	while(i<n)
    		scanf("%d",& a[i++]);
}

void impint(int*a,int n){
    int i=0;
    	while(i<n)
    		printf("%d\n",a[i++]);
}

void bubblesort(int*a,int n){
	int j=n-1,i=n-1,t;
		while(j>0){
			while(i>0){
				if(a[i]<a[i-1]){
				t=a[i];a[i]=a[i-1];a[i-1]=t;
				}
			i--;
			}
		j--;i=n-1;
    	}
}

