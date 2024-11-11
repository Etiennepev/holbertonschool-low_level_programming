#include <stdlib.h>

/**
 * create_array - make a string with a specific char
 * 
 * @size: size of the string
 * @c: initialize every elements with a char
 *
 * Return: a pointer to the string or NULL if it fails or if it 0
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
