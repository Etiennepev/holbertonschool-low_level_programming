#include <stdlib.h>

/**
 *  alloc_grid-  concatenates two strings.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 *
 * Return: a pointer to the string or NULL
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}
	for (; i < height; i++)
	{
	array[i] = (int *)malloc(width * sizeof(int));

	if (array[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(array[j]);
	}
	free(array);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
	array[i][j] = 0;
	}
	}
	return (array);
}
