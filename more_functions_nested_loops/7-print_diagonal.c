#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Print diagonal
 *
 *@n: number of diagonal
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0²; a < n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (b != a)
					_putchar(' ');
				else if (b == a)
				{
				_putchar('\\');
				_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
