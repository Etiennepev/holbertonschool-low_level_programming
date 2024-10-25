#include <stdlib.h>
#include <stdio.h>
/**
* print_to_98 - Affiche l'alphabet en lettres minuscules dix fois
*
*@n: The starting integer
*/

void print_to_98(int n)
{
	if (n < 98)	
	{
	for (n = n; n < 99; n++)
	{
		if (n != 98)
	{
		printf("%d, ", n);
	}
		 else
        {
                printf("%d\n", n);
	}
	}
	}
	else if (n > 98)
	{
		for (n = n; n > 97; n--)
	{
		if (n != 98)
	{
		printf("%d, ", n);
	}
		 else
        {
                printf("%d\n", n);
	}
	}
		else
	{
                printf("%d\n", n);
	}
	}
}
