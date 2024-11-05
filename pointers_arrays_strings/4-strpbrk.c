#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - count specific caractere
 *
 * @s: the string to analyse
 * @accept: the string with correct words
 *
 * Return: the caractere of s who are in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
