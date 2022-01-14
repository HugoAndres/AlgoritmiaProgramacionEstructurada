//Funcion que lea una cadena a travez del teclado hasta que el usuario teclee el signo de numero.

#include<stdio.h>

void leestr(char*);

int main(){

  char cn[1024];
  leestr(cn);
  printf("%s\n",cn);
  return 0;
}

	void leestr(char*pal){

	  char c;

	  if((c=getchar())!='#'){
	      pal[0]=c;
	      leestr(pal+1);
	  }
	  else pal[0]='\0';
}  


  
