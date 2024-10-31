#include "main.h"
/**
 * print_triangle - Print triangle
 *
 *@size: taille du triangle
 */
void print_triangle(int size)
{
	int c, i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (c = 0; c < size; c++)
	{
		for (i = 0; i < size - 1 - c; i++)
		{
			_putchar(' ');
		}
	for (j = 0; j <= c; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
