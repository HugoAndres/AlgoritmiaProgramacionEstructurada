//Ordenapalabras exa.c/aorg.txt/ades.txt

#include<stdio.h>
#include<string.h>

void bubblesort(char array[100][50], int i);

int main(int argc, char*argv[]){
	FILE* aorg=fopen(*(argv+1),"r");
	FILE* ades=fopen(*(argv+2),"w");
	
	char aux[100][50];
	char temp[30];
	int i,k,j;
	
	while((fscanf(aorg,"%s",aux[i++]))==1){
	}
	
	bubblesort(aux,i);
	
	while(k<i){
		fprintf(ades,"%s\n",aux[k]);
		k++;
	}
	
	fclose(aorg);
	fclose(ades);
	
	return 0;
}

void bubblesort(char aux[100][50], int a){
	
	int i,j;
	char temp[50];
	
	for (i=0;i<a;i++){
		for(j=0;j<a;j++){
			if (strcasecmp(aux[j],aux[j+1])>0){
				strcpy(temp,aux[j]);
				strcpy(aux[j],aux[j+1]);
				strcpy(aux[j+1],temp);
			}
		}
	}
}
