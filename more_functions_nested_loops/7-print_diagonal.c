#include "main.h"
#include <stdio.h>
/**
 * print_line - Prints lines
 *
 *@n: number of underscore
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		for (; a < n; a++)
		{
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
