#include "main.h"
/**
 * print_square - Print square
 *
 *@size: taille du carre
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
