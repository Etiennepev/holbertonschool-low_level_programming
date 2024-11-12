#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 *
 * @s1: the original
 * @s2: the one whos gonna be concatenates
 *
 * Return: a pointer to the string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size1 = 0, size2 = 0;
	char *newstr;

	if (s1 != NULL)

	for (; s1[size1] != '\0'; size1++)

	if (s2 != NULL)

	for (; s2[size2] != '\0'; size2++)

	newstr = (char *)malloc(size1 + size2 + 1 * sizeof(char));

	if (newstr ==  NULL)
	{
	return (NULL);
	}

	for (; i < size1; i++)
	{
		newstr[i] = s1[i];
	}
	for (; j < size2; j++)
	{
		newstr[i + j] = s2[j];
	}
	newstr[i + j] = '\0';

	return (newstr);
}
