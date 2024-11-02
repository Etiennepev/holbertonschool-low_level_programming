#include <stdio.h>
#include "main.h"
/**
 * print_array - print an array
 *
 * @a: to the array
 * @n: numbers of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if (i < n - 1)
	{
		printf(", ");
	}
	}
	printf("\n");
}
