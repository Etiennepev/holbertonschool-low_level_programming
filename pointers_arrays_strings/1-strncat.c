 #include "main.h"
/**
 * _strncat - concanates two strings
 *
 * @dest: the place where src gonna go
 * @src: to add to dest
 * @n: the numbers max to add from src
 *
 * Return: the dest result
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, count;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[i] = src[count];
		i++;
	}
	if (count < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
