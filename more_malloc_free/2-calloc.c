#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 *
 * @size: size of bytes
 * @nmemb: number of elements
 *
 * Return: a pointer to the string or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	unsigned int total_size = nmemb * size;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (; i < total_size; i++)
	{
		ptr[i] = 0;
	}
	return ((void *)ptr);
}
