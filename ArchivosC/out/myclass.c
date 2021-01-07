#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char temp;
#define $var1 10
#define $var2 100
int main()
{
	int x = $var1;
		int suma;
	suma = x + $var2 ;
	printf( "La suma de %d+100 es: %d" , x,suma);

printf("Presione enter para salir: ");
scanf("%c",&temp);
scanf("%c",&temp);
}