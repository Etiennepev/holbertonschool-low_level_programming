#include "main.h"
/**
 * print_diagonal - Print diagonal
 *
 *@n: number of diagonal
 */
void print_diagonal(int n)
{
	int a, b;

if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
