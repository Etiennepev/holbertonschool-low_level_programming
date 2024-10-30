#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Print diagonal
 *
 *@n: number of diagonal
 */
void print_diagonal(int n)
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
