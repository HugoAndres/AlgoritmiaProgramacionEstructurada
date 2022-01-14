//Numeros binarios a numeros decimales.
#include <stdio.h>
#define Tamano 35

void Recibe( int a[]);
void Imprime( int b[]);

int main()
 {
 int arreglo[Tamano];
 int evaluar;
 Recibe(arreglo);
 Imprime(arreglo);
 return 0;

 }

void Recibe( int a[])
 { 
 int i = 0;
 for( i = 0; i < Tamano; i++ )
 a[i] = ' ';
 printf("\nIntroduzca un numero binario: \n");
 i = 0;
 while ( (a[i++] = getchar()) != '\n' && Tamano > i );
 printf("\n");
 }

 void Imprime( int b[] ){
 int i;
 int potencia = 1;
 int decimal = 0;
 int inicio;
 for ( i = Tamano - 1; i >= 0; i-- )
 {  
 if ( ' ' != b[i] )
 {  
 inicio = i;
 break; 
 }   }  
 int valido = 1;
 for ( i = inicio; i >= 0; i-- )
 {
 switch( b[i] )
 {
 case '0':
 decimal += 0*potencia;
 potencia *= 2;
 break;
 case '1':
 decimal += 1*potencia;
 potencia *= 2;
 break;
 default:
 if ( '\n' != b[i])
 { 
 printf("\nERROR. LA CADENA NO ES VALIDA!\n");
 valido = 0;  
 printf("\nEste caracter no es valido: ");
 putchar(b[i]);
 printf("\n");
 } 
 break;
 } 
 } 
 if ( 1 == valido )
 printf("\nEl valor decimal es: %d\n", decimal);
 else
 printf("\nEl numero introducido no es valido.\n");
 } 
