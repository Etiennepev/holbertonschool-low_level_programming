#include "main.h"
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
	for (n = n; n <= 98; n++)
	{
		if (n != 98)
		{
		printf("%d, \n", n);
	}
	}
	}
	else if (n > 98)
	{
		for (n = n; n => 98; n--)
	{
		if (n != 98)
	{
		printf("%d, \n", n);
	}
	}
	}

	else
	{
		printf("%d/n", n);
	}
return (0)
}
