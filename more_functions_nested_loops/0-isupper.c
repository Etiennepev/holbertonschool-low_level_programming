#include "main.h"
#include <stdio.h>
/**
 * _isupper - 
 * @c: The character to print
 *
 * Return: 1 if uppercase else 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	if (c > 64 && c < 90)
	{
		_putchar('A');
		_putchar(':');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar('a');
		_putchar(':');
		_putchar(' ');
		return (0);
}
}
