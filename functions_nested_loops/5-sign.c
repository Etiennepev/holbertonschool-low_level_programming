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
	_putchar('+')
	_putchar(',')
	_putchar(' ')
	_putchar('\n')
	return (1);
}
	else if (n == 0)
{
	_putchar('0')
	_putchar(',')
	_putchar(' ')
	_putchar('\n')
	return (0);
}
	else
{
	_putchar('-')
	_putchar(',')
	_putchar(' ')
	_putchar('\n')
	return (-1);
}
}
