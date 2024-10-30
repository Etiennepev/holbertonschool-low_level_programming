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
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (0);
}
}
