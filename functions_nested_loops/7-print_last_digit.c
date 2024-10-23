#include "main.h"
#include <stdio.h>

/**
*print_last_digit - prend le dernier chiffre d'un nombre
*sa valeur absolue
*
*@n: Le caractere a verifier
*Return:
*
*
*/

int print_last_digit(int n)
{
	int lastdgt = n % 10;

	if (lastdgt < 0)
{
	lastdgt = -lastdgt;
}
	_putchar(lastdgt + '0');

return (lastdgt);
}
