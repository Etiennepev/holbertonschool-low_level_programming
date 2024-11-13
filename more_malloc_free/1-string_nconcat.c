#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings.
 *
 * @s1: the original
 * @s2: the one whos gonna be concatenates
 * @n: number of bytes
 * Return: a pointer to the string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, size1 = 0;
	unsigned int j = 0, size2 = 0;
	char *newstr;

	if (s1 != 0)
	{
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	if (s2 != 0)
	{
	}
	while (s2[size2] != '\0' && size2 < n)
	{
		size2++;
	}
	newstr = (char *)malloc((size1 + size2 + 1) * sizeof(char));

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
