#include "main.h"

/**
 * _puts_recursion- make a loop with recursion
 *
 *@s: the string we what to print
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
