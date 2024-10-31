#include "main.h"
/**
 * print_diagonal - Print diagonal
 *
 *@n: number of diagonal
 */
void print_square(int size)
{
	int height, width;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (height = 0; height < size; height++)
	{
		for (width = 0; width < size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
