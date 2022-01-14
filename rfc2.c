//Sacar el RFC
#include<stdio.h>

int main(){
	
	char ap1[20],ap2[20],nom[20],aaa[20],mes[20],dia[20];
	
    printf("\tRegistro Federal de Contribuyentes\n");

	printf("\nIngrese su apellido paterno:\t");
	scanf("%s",ap1);
	
	printf("\nIngrese su apellido materno:\t");
    scanf("%s",ap2);
	
	printf("\nIngrese su primer nombre:\t");
	scanf("%s",nom);
	
    printf("\nIngrese su a\xA4o de nacimiento[AAAA]:\t");
	scanf("%s",aaa);
	
	printf("\nIngrese su mes de nacimiento[MM]:\t");
	scanf("%s",mes);
	
	printf("\nIngrese su dia de nacimiento[DD]:\t");
	scanf("%s",dia);
	
	printf("\nHola, %s ya que naciste %s/%s/%s, tu RFC es:\t",nom,dia,mes,aaa);
	printf("%c%c%c%c%c%c%c%c%c%c",ap1[0],ap1[1],ap2[0],nom[0],aaa[2],aaa[3],mes[0],mes[1],dia[0],dia[1]);

	return 0;

}	//Codigo para que salga la ñ= \xA4



		


