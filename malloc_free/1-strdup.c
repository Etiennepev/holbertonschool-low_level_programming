#include <stdlib.h>

/**
 * _strdup - make a string with a specific char
 *
 * @str: string
 *
 *
 * Return: a pointer to the string or NULL if str=NULL or insufficient memory
 */

char *_strdup(char *str)
{
	int i;
	int size;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
	}
	newstr = (char *)malloc((size + 1) * sizeof(char));

	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		newstr[i] = str[i];
	}
	newstr[size] = '\0';

	return (newstr);
}
