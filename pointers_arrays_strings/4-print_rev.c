#include "main.h"
/**
 * print_rev - print reverse
 *
 *
 *@s: reverse emplacement
 *
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
