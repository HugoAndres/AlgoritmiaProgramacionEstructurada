//RFC
#include<stdio.h>

   int main () {
      
	char pal[80];

	printf("Introduce tu primer nombre:");
	scanf("%s",pal);

	printf("Introduce tu apellido paterno:");
	scanf("%s",pal+15);

	printf("Introduce tu apellido materno:");
	scanf("%s",pal+30);

	printf("Introduce tu fecha de nacimiento DD-MM-AAAA:");
	scanf("%s",pal+45);

	pal[60] = pal[15];
	pal[61] = pal[16];
	pal[62] = pal[30];
	pal[63] = pal[0];
	pal[64] = pal[53];
	pal[65] = pal[54];
	pal[66] = pal[48];
	pal[67] = pal[49];
	pal[68] = pal[45];
	pal[69] = pal[46];
	pal[70] = '\0',
	
	printf("Tu RFC es: %s\t\n",pal+60);

	return 0;
}
