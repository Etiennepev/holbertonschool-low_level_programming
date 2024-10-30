#include "main.h"
/**
 * _isupper - check for the uppercase
 * @c: The character to print
 *
 * Return: 1 if uppercase else 0
 *
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
