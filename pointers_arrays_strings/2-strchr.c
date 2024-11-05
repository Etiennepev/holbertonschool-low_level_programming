#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string.
 *
 * @s: the string we search
 * @c: the caractere to find in the string s
 *
 * Return: return NULL if no caractere found and return in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
