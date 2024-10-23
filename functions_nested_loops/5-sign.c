#include "main.h"
#include <stdio.h>
/**
* print_sign - Vérifie si un caractère est en minusculou majuscule
*
*@n: Le caractere a verifier
* Return: 1 si le caractère et positif, 0 si il est egal a 0
*et -1 si il est negatif
*/

int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
	_putchar('\n');
}
	else if (n == 0)
{
	_putchar('0');
	return (0);
	_putchar('\n');
}
	else
{
	_putchar('-');
	return (-1);
	_putchar('\n');
}
}
