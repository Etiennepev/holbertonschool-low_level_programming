#include <stdio.h>
#include "main.h"
/**
 * puts_half - take the half of a string
 *
 * @str: The string who will be pair or impair
 *
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
