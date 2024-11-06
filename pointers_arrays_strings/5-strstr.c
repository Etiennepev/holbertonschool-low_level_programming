#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 *
 * @haystack: the string to analyse
 * @needle: the string with correct words
 *
 * Return: NULL if needle isnt found and return at the beginning
 * of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
