#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - to print a 8x8 chessboard
 *
 * @a: the string where the chessboard is
 *
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i] != a[8]; i++)
	{
		for (j = 0; a[j] != a[8]; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
