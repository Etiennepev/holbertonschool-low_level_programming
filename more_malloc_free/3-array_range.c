#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: min of number (included)
 * @max: max of number (included)
 *
 * Return: a pointer to the string or NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	array = (int *)malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (; i <= (max - min); i++)
	{
		array[i] = min + i;
	}
	return (array);
}
