#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 *
 * @haystack: the string to analyse
 * @needle: the string with correct words
 *
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (; i < size; i++)
	{	
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + (size - 1 - i)];

		printf("%d\n", sum1);
		printf("%d\n", sum2);
	}
}
