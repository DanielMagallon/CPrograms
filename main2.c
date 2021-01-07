#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define $var1 1
#define $var2 8

char temp;

int main()
{
	int x = $var1;
	Do: {
		int y = $var1, z = $var1;
		Do1: {
			printf( " * " );
			y = y + $var1 ;
			int $iVar;
			$iVar = y<=$var2;;
			if ($iVar)
				goto Do1;
		}
		Do2: {
			printf( " # " );
			z = z + $var1 ;
			int $iVar;
			$iVar = z<=$var2;;
			if ($iVar)
				goto Do2;
		}
		printf("%s\n","");
		x = x + $var1 ;
		int $iVar;
		$iVar = x<=$var2;;
		if ($iVar)
			goto Do;
	}
	
	printf("Type enter to exit: ");
	scanf("%c",&temp);
// 	scanf("%c",&temp);
}